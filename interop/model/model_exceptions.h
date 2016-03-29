/** Exceptions thrown by the model
 *
 *  @file
 *  @date 3/21/16
 *  @version 1.0
 *  @copyright GNU Public License.
 */
#pragma once
#include <stdexcept>

#define _INTEROP_MODEL_THROWS throw( interop::model::index_out_of_bounds_exception )

namespace illumina {
namespace interop {
namespace model {

/** Exception raised if an index goes out of bounds
 */
struct index_out_of_bounds_exception : public std::runtime_error {
    /** Constructor
     *
     *  @param mesg error message
     */
    index_out_of_bounds_exception(const std::string &mesg) : std::runtime_error(mesg) { }
};


}
}
}
