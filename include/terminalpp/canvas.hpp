#pragma once

#include "element.hpp"
#include "extent.hpp"
#include <vector>

namespace terminalpp {

//* =========================================================================
/// \brief A class representing a grid onto which elements can be painted.
///
/// \par Usage
/// The grid is formed from a contiguous block of memory.  Position [0,0]
/// represents the top left of the grid, and it proceeds in a left-to-right
/// manner first, then top-to-bottom.
//* =========================================================================
class TERMINALPP_EXPORT canvas
{
public :
    typedef element *iterator;
    typedef element const *const_iterator;

    //* =====================================================================
    /// \brief A proxy into a column of elements on the canvas
    //* =====================================================================
    class column_proxy
    {
    public :
        // ==================================================================
        // CONSTRUCTOR
        // ==================================================================
        column_proxy(canvas &cvs, coordinate_type column);

        // ==================================================================
        // OPERATOR[]
        // ==================================================================
        element &operator[](coordinate_type row);

    private :
        canvas &canvas_;
        coordinate_type  column_;
    };

    //* =====================================================================
    /// \brief A constant proxy into a column of elements on the canvas
    //* =====================================================================
    class const_column_proxy
    {
    public :
        // ==================================================================
        // CONSTRUCTOR
        // ==================================================================
        const_column_proxy(canvas const &cvs, coordinate_type column);

        // ==================================================================
        // OPERATOR[]
        // ==================================================================
        element const &operator[](coordinate_type coordinate_type) const;

    private :
        canvas const &canvas_;
        coordinate_type column_;
    };

    //* =====================================================================
    /// \brief Constructor
    //* =====================================================================
    explicit canvas(extent size);

    //* =====================================================================
    /// \brief Returns the size of the canvas.
    //* =====================================================================
    extent size() const;

    //* =====================================================================
    /// \brief Resizes the canvas to the specified extent.  Content that would
    /// fit in the new size remains as it was, otherwise it is truncated.
    //* =====================================================================
    void resize(extent const &size);

    //* =====================================================================
    /// \brief Returns pointer to the top-left element.
    //* =====================================================================
    iterator begin();

    //* =====================================================================
    /// \brief Returns pointer to the top-left element.
    //* =====================================================================
    const_iterator begin() const;

    //* =====================================================================
    /// \brief Returns one-past-the-end of the canvas.
    //* =====================================================================
    iterator end();

    //* =====================================================================
    /// \brief Returns one-past-the-end of the canvas.
    //* =====================================================================
    const_iterator end() const;

    //* =====================================================================
    /// \brief A subscript operator into a column
    //* =====================================================================
    column_proxy operator[](coordinate_type column);

    //* =====================================================================
    /// \brief A subscript operator into a column
    //* =====================================================================
    const_column_proxy operator[](coordinate_type) const;

private :
    //* =====================================================================
    /// \brief Set the value of an element.
    //* =====================================================================
    void set_element(
        coordinate_type column, coordinate_type row, element const &value);

    //* =====================================================================
    /// \brief Get the value of an element.
    //* =====================================================================
    element &get_element(coordinate_type column, coordinate_type row);

    //* =====================================================================
    /// \brief Get the value of an element.
    //* =====================================================================
    element const &get_element(
        coordinate_type column, coordinate_type row) const;

    std::vector<element> grid_;
    extent               size_;
};

}
