/** Plot an arbitrary cycle metric by cycle
 *
 *  @file
 *  @date  4/28/16
 *  @version 1.0
 *  @copyright GNU Public License.
 */
#pragma once
#include "interop/model/run_metrics.h"
#include "interop/model/plot/filter_options.h"
#include "interop/model/plot/plot_data.h"
#include "interop/model/plot/candle_stick_point.h"
#include "interop/constants/enums.h"

namespace illumina { namespace interop { namespace logic { namespace plot
{
    /** Plot a specified metric value by cycle
     *
     * @ingroup plot_logic
     * @param metrics run metrics
     * @param type specific metric value to plot by cycle
     * @param options options to filter the data
     * @param data output plot data
     */
    void plot_by_cycle(model::metrics::run_metrics& metrics,
                       const constants::metric_type type,
                       const model::plot::filter_options& options,
                       model::plot::plot_data<model::plot::candle_stick_point>& data)
                    throw(model::index_out_of_bounds_exception,
                    model::invalid_metric_type,
                    model::invalid_channel_exception,
                    model::invalid_filter_option,
                    model::invalid_read_exception);

    /** List the required on demand metrics
     *
     * @param type specific metric value to plot by cycle
     * @param valid_to_load list of metrics to load on demand
     */
    void list_plot_by_cycle_metrics(const constants::metric_type type, std::vector<unsigned char>& valid_to_load);
    /** List the required on demand metrics
     *
     * @param metric_name name of metric value to plot by cycle
     * @param valid_to_load list of metrics to load on demand
     */
    void list_plot_by_cycle_metrics(const std::string& metric_name, std::vector<unsigned char>& valid_to_load)
    throw(model::invalid_metric_type);

    /** Plot a specified metric value by cycle using the candle stick model
     *
     * @ingroup plot_logic
     * @todo Is this temporary?
     * @param metrics run metrics
     * @param metric_name name of metric value to plot by cycle
     * @param options options to filter the data
     * @param data output plot data
     */
    void plot_by_cycle(model::metrics::run_metrics& metrics,
                       const std::string& metric_name,
                       const model::plot::filter_options& options,
                       model::plot::plot_data<model::plot::candle_stick_point>& data)
            throw(model::index_out_of_bounds_exception,
            model::invalid_filter_option,
            model::invalid_channel_exception,
            model::invalid_metric_type);

    /** List metric types available for by cycle plots
     *
     * @param types destination vector to fill with metric types
     * @param ignore_accumulated if true, ignore accumulated Q20 and Q30
     */
    void list_by_cycle_metrics(std::vector<constants::metric_type>& types, const bool ignore_accumulated=false);
    /** List metric type names available for by cycle plots
     *
     * @param names destination vector to fill with metric type names
     * @param ignore_accumulated if true, ignore accumulated Q20 and Q30
     */
    void list_by_cycle_metrics(std::vector<std::string>& names, const bool ignore_accumulated=false);
}}}}
