/* -*- c++ -*- */
/* 
 * Copyright 2022 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_HERMES_OFDM_GI_REMOVER_IMPL_H
#define INCLUDED_HERMES_OFDM_GI_REMOVER_IMPL_H

#include <hermes_ofdm/gi_remover.h>

namespace gr {
  namespace hermes_ofdm {

    class gi_remover_impl : public gi_remover
    {
     private:
    	int Nfft;
    	int Ngi;

     public:
      gi_remover_impl(int Nfft, int Ngi);
      ~gi_remover_impl();

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int general_work(int noutput_items,
           gr_vector_int &ninput_items,
           gr_vector_const_void_star &input_items,
           gr_vector_void_star &output_items);
    };

  } // namespace hermes_ofdm
} // namespace gr

#endif /* INCLUDED_HERMES_OFDM_GI_REMOVER_IMPL_H */

