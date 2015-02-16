//
// Copyright 2014 Ettus Research LLC
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef INCLUDED_LIBUHD_RFNOC_SPLIT_STREAM_BLOCK_CTRL_HPP
#define INCLUDED_LIBUHD_RFNOC_SPLIT_STREAM_BLOCK_CTRL_HPP

#include <uhd/usrp/rfnoc/source_block_ctrl_base.hpp>
#include <uhd/usrp/rfnoc/sink_block_ctrl_base.hpp>

namespace uhd {
    namespace rfnoc {

/*! \brief Block controller for the Split Stream RFNoC block.
 *
 * The Split Stream block outputs the input from Block Port 0 on both
 * Block Port 0 & 1. Both output streams are identical.
 *
 */
class UHD_API split_stream_block_ctrl : public source_block_ctrl_base, public sink_block_ctrl_base
{
public:
    UHD_RFNOC_BLOCK_OBJECT(split_stream_block_ctrl)
}; /* class split_stream_block_ctrl*/

}} /* namespace uhd::rfnoc */

#endif /* INCLUDED_LIBUHD_RFNOC_SPLIT_STREAM_BLOCK_CTRL_HPP */