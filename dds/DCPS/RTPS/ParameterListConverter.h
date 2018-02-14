/*
 *
 * Distributed under the OpenDDS License.
 * See: http://www.opendds.org/license.html
 */

#ifndef PARAMETER_LIST_CONVERTER_H
#define PARAMETER_LIST_CONVERTER_H

#include "dds/DCPS/RTPS/rtps_export.h"
#include "dds/DCPS/RTPS/RtpsCoreC.h"

#include "dds/DdsSecurityWrappers.h"

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL

namespace OpenDDS { namespace RTPS {

namespace ParameterListConverter {
  OpenDDS_Rtps_Export
  int to_param_list(const SPDPdiscoveredParticipantData& participant_data,
                    ParameterList& param_list);

  OpenDDS_Rtps_Export
  int to_param_list(const DDS::Security::ParticipantBuiltinTopicData& pbtd,
                    ParameterList& param_list);

  OpenDDS_Rtps_Export
  int to_param_list(const OpenDDS::DCPS::DiscoveredWriterData& writer_data,
                    ParameterList& param_list,
                    bool map = false /*map IPV4 to IPV6 addr*/);

  OpenDDS_Rtps_Export
  int to_param_list(const OpenDDS::DCPS::DiscoveredReaderData& reader_data,
                    ParameterList& param_list,
                    bool map = false /*map IPV4 to IPV6 addr*/);

  OpenDDS_Rtps_Export
  int to_param_list(const OpenDDS::Security::SPDPdiscoveredParticipantData_SecurityWrapper& wrapper,
                    ParameterList& param_list);

  OpenDDS_Rtps_Export
  int to_param_list(const OpenDDS::Security::DiscoveredWriterData_SecurityWrapper& wrapper,
                    ParameterList& param_list,
                    bool map = false /*map IPV4 to IPV6 addr*/);

  OpenDDS_Rtps_Export
  int to_param_list(const OpenDDS::Security::DiscoveredReaderData_SecurityWrapper& wrapper,
                    ParameterList& param_list,
                    bool map = false /*map IPV4 to IPV6 addr*/);

  OpenDDS_Rtps_Export
  int from_param_list(const ParameterList& param_list,
                      SPDPdiscoveredParticipantData& participant_data);

  OpenDDS_Rtps_Export
  int from_param_list(const ParameterList& param_list,
                      OpenDDS::Security::SPDPdiscoveredParticipantData_SecurityWrapper& wrapper);

  OpenDDS_Rtps_Export
  int from_param_list(const ParameterList& param_list,
                      OpenDDS::DCPS::DiscoveredWriterData& writer_data);

  OpenDDS_Rtps_Export
  int from_param_list(const ParameterList& param_list,
                      OpenDDS::Security::DiscoveredWriterData_SecurityWrapper& wrapper);

  OpenDDS_Rtps_Export
  int from_param_list(const ParameterList& param_list,
                      OpenDDS::DCPS::DiscoveredReaderData& reader_data);

  OpenDDS_Rtps_Export
  int from_param_list(const ParameterList& param_list,
                      OpenDDS::Security::DiscoveredReaderData_SecurityWrapper& wrapper);

}}}

OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
