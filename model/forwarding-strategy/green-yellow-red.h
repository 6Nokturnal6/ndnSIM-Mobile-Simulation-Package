/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil -*- */
/*
 * Copyright (c) 2011 University of California, Los Angeles
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author:  Alexander Afanasyev <alexander.afanasyev@ucla.edu>
 *          Ilya Moiseenko <iliamo@cs.ucla.edu>
 */
#ifndef NDNSIM_GREEN_YELLOW_RED_H
#define NDNSIM_GREEN_YELLOW_RED_H

#include "ccnx-forwarding-strategy.h"

namespace ns3 {
namespace ndnSIM {

/**
 * \ingroup ccnx
 */
class GreenYellowRed :
    public CcnxForwardingStrategy
{
public:
  static TypeId GetTypeId (void);

protected:
  virtual void
  WillSatisfyPendingInterest (const Ptr<CcnxFace> &incomingFace,
                              Ptr<CcnxPitEntry> pitEntry);

  virtual bool
  DoPropagateInterest (const Ptr<CcnxFace> &incomingFace,
                       Ptr<CcnxInterestHeader> &header,
                       const Ptr<const Packet> &packet,
                       Ptr<CcnxPitEntry> pitEntry);

private:
  typedef CcnxForwardingStrategy super;
};

} // namespace ndnSIM
} // namespace ns3

#endif // NDNSIM_GREEN_YELLOW_RED
