#import "enunciate-common.h"

@class FULLNS0NeutronRouter_NetworkReference;
@class FULLNS0NeutronSubnet_IPAllocationPool;
@class FULLNS0NeutronFloatingIPRequest;
@class FULLNS0NeutronSubnet_HostRoute;
@class FULLNS0NeutronRouter_Interface;
@class FULLNS0NeutronNetworkRequest;
@class FULLNS0NeutronRouterRequest;
@class FULLNS0NeutronSubnetRequest;
@class FULLNS0NeutronPortRequest;
@class FULLNS0ConfigurationObject;
@class FULLNS0NeutronSubnet;
@class FULLNS0NeutronRouter;
@class FULLNS0Neutron_IPs;
@class FULLNS0NeutronPort;
@class FULLNS0NeutronNetwork;
@class FULLNS0NeutronFloatingIP;

#ifndef DEF_FULLNS0NeutronRouter_NetworkReference_H
#define DEF_FULLNS0NeutronRouter_NetworkReference_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronRouter_NetworkReference : NSObject <EnunciateXML>
{
  @private
    NSString *_networkID;
}

/**
 * (no documentation provided)
 */
- (NSString *) networkID;

/**
 * (no documentation provided)
 */
- (void) setNetworkID: (NSString *) newNetworkID;
@end /* interface FULLNS0NeutronRouter_NetworkReference */

#endif /* DEF_FULLNS0NeutronRouter_NetworkReference_H */
#ifndef DEF_FULLNS0NeutronSubnet_IPAllocationPool_H
#define DEF_FULLNS0NeutronSubnet_IPAllocationPool_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronSubnet_IPAllocationPool : NSObject <EnunciateXML>
{
  @private
    NSString *_poolStart;
    NSString *_poolEnd;
}

/**
 * (no documentation provided)
 */
- (NSString *) poolStart;

/**
 * (no documentation provided)
 */
- (void) setPoolStart: (NSString *) newPoolStart;

/**
 * (no documentation provided)
 */
- (NSString *) poolEnd;

/**
 * (no documentation provided)
 */
- (void) setPoolEnd: (NSString *) newPoolEnd;
@end /* interface FULLNS0NeutronSubnet_IPAllocationPool */

#endif /* DEF_FULLNS0NeutronSubnet_IPAllocationPool_H */
#ifndef DEF_FULLNS0NeutronFloatingIPRequest_H
#define DEF_FULLNS0NeutronFloatingIPRequest_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronFloatingIPRequest : NSObject <EnunciateXML>
{
  @private
    FULLNS0NeutronFloatingIP *_singletonFloatingIP;
    NSArray *_bulkRequest;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronFloatingIP *) singletonFloatingIP;

/**
 * (no documentation provided)
 */
- (void) setSingletonFloatingIP: (FULLNS0NeutronFloatingIP *) newSingletonFloatingIP;

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest;

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest;
@end /* interface FULLNS0NeutronFloatingIPRequest */

#endif /* DEF_FULLNS0NeutronFloatingIPRequest_H */
#ifndef DEF_FULLNS0NeutronSubnet_HostRoute_H
#define DEF_FULLNS0NeutronSubnet_HostRoute_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronSubnet_HostRoute : NSObject <EnunciateXML>
{
  @private
    NSString *_nextHop;
    NSString *_destination;
}

/**
 * (no documentation provided)
 */
- (NSString *) nextHop;

/**
 * (no documentation provided)
 */
- (void) setNextHop: (NSString *) newNextHop;

/**
 * (no documentation provided)
 */
- (NSString *) destination;

/**
 * (no documentation provided)
 */
- (void) setDestination: (NSString *) newDestination;
@end /* interface FULLNS0NeutronSubnet_HostRoute */

#endif /* DEF_FULLNS0NeutronSubnet_HostRoute_H */
#ifndef DEF_FULLNS0NeutronRouter_Interface_H
#define DEF_FULLNS0NeutronRouter_Interface_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronRouter_Interface : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    NSString *_tenantID;
    NSString *_portUUID;
    NSString *_subnetUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) tenantID;

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID;

/**
 * (no documentation provided)
 */
- (NSString *) portUUID;

/**
 * (no documentation provided)
 */
- (void) setPortUUID: (NSString *) newPortUUID;

/**
 * (no documentation provided)
 */
- (NSString *) subnetUUID;

/**
 * (no documentation provided)
 */
- (void) setSubnetUUID: (NSString *) newSubnetUUID;
@end /* interface FULLNS0NeutronRouter_Interface */

#endif /* DEF_FULLNS0NeutronRouter_Interface_H */
#ifndef DEF_FULLNS0NeutronNetworkRequest_H
#define DEF_FULLNS0NeutronNetworkRequest_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronNetworkRequest : NSObject <EnunciateXML>
{
  @private
    FULLNS0NeutronNetwork *_singletonNetwork;
    NSArray *_bulkRequest;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronNetwork *) singletonNetwork;

/**
 * (no documentation provided)
 */
- (void) setSingletonNetwork: (FULLNS0NeutronNetwork *) newSingletonNetwork;

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest;

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest;
@end /* interface FULLNS0NeutronNetworkRequest */

#endif /* DEF_FULLNS0NeutronNetworkRequest_H */
#ifndef DEF_FULLNS0NeutronRouterRequest_H
#define DEF_FULLNS0NeutronRouterRequest_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronRouterRequest : NSObject <EnunciateXML>
{
  @private
    FULLNS0NeutronRouter *_singletonRouter;
    NSArray *_bulkRequest;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronRouter *) singletonRouter;

/**
 * (no documentation provided)
 */
- (void) setSingletonRouter: (FULLNS0NeutronRouter *) newSingletonRouter;

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest;

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest;
@end /* interface FULLNS0NeutronRouterRequest */

#endif /* DEF_FULLNS0NeutronRouterRequest_H */
#ifndef DEF_FULLNS0NeutronSubnetRequest_H
#define DEF_FULLNS0NeutronSubnetRequest_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronSubnetRequest : NSObject <EnunciateXML>
{
  @private
    FULLNS0NeutronSubnet *_singletonSubnet;
    NSArray *_bulkRequest;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronSubnet *) singletonSubnet;

/**
 * (no documentation provided)
 */
- (void) setSingletonSubnet: (FULLNS0NeutronSubnet *) newSingletonSubnet;

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest;

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest;
@end /* interface FULLNS0NeutronSubnetRequest */

#endif /* DEF_FULLNS0NeutronSubnetRequest_H */
#ifndef DEF_FULLNS0NeutronPortRequest_H
#define DEF_FULLNS0NeutronPortRequest_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronPortRequest : NSObject <EnunciateXML>
{
  @private
    FULLNS0NeutronPort *_singletonPort;
    NSArray *_bulkRequest;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronPort *) singletonPort;

/**
 * (no documentation provided)
 */
- (void) setSingletonPort: (FULLNS0NeutronPort *) newSingletonPort;

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest;

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest;
@end /* interface FULLNS0NeutronPortRequest */

#endif /* DEF_FULLNS0NeutronPortRequest_H */
#ifndef DEF_FULLNS0ConfigurationObject_H
#define DEF_FULLNS0ConfigurationObject_H

/**
 * (no documentation provided)
 */
@interface FULLNS0ConfigurationObject : NSObject
{
  @private
}
@end /* interface FULLNS0ConfigurationObject */

#endif /* DEF_FULLNS0ConfigurationObject_H */
#ifndef DEF_FULLNS0NeutronSubnet_H
#define DEF_FULLNS0NeutronSubnet_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronSubnet : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    int *_ipVersion;
    NSString *_gatewayIP;
    NSString *_cidr;
    NSString *_ipV6AddressMode;
    NSString *_networkUUID;
    NSString *_subnetUUID;
    NSString *_tenantID;
    NSArray *_dnsNameservers;
    NSString *_name;
    NSString *_ipV6RaMode;
    NSArray *_hostRoutes;
    NSArray *_allocationPools;
    BOOL *_enableDHCP;
}

/**
 * (no documentation provided)
 */
- (int *) ipVersion;

/**
 * (no documentation provided)
 */
- (void) setIpVersion: (int *) newIpVersion;

/**
 * (no documentation provided)
 */
- (NSString *) gatewayIP;

/**
 * (no documentation provided)
 */
- (void) setGatewayIP: (NSString *) newGatewayIP;

/**
 * (no documentation provided)
 */
- (NSString *) cidr;

/**
 * (no documentation provided)
 */
- (void) setCidr: (NSString *) newCidr;

/**
 * (no documentation provided)
 */
- (NSString *) ipV6AddressMode;

/**
 * (no documentation provided)
 */
- (void) setIpV6AddressMode: (NSString *) newIpV6AddressMode;

/**
 * (no documentation provided)
 */
- (NSString *) networkUUID;

/**
 * (no documentation provided)
 */
- (void) setNetworkUUID: (NSString *) newNetworkUUID;

/**
 * (no documentation provided)
 */
- (NSString *) subnetUUID;

/**
 * (no documentation provided)
 */
- (void) setSubnetUUID: (NSString *) newSubnetUUID;

/**
 * (no documentation provided)
 */
- (NSString *) tenantID;

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID;

/**
 * (no documentation provided)
 */
- (NSArray *) dnsNameservers;

/**
 * (no documentation provided)
 */
- (void) setDnsNameservers: (NSArray *) newDnsNameservers;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) ipV6RaMode;

/**
 * (no documentation provided)
 */
- (void) setIpV6RaMode: (NSString *) newIpV6RaMode;

/**
 * (no documentation provided)
 */
- (NSArray *) hostRoutes;

/**
 * (no documentation provided)
 */
- (void) setHostRoutes: (NSArray *) newHostRoutes;

/**
 * (no documentation provided)
 */
- (NSArray *) allocationPools;

/**
 * (no documentation provided)
 */
- (void) setAllocationPools: (NSArray *) newAllocationPools;

/**
 * (no documentation provided)
 */
- (BOOL *) enableDHCP;

/**
 * (no documentation provided)
 */
- (void) setEnableDHCP: (BOOL *) newEnableDHCP;
@end /* interface FULLNS0NeutronSubnet */

#endif /* DEF_FULLNS0NeutronSubnet_H */
#ifndef DEF_FULLNS0NeutronRouter_H
#define DEF_FULLNS0NeutronRouter_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronRouter : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_tenantID;
    FULLNS0NeutronRouter_NetworkReference *_externalGatewayInfo;
    BOOL *_adminStateUp;
    NSString *_status;
    NSString *_routerUUID;
    NSString *_name;
}

/**
 * (no documentation provided)
 */
- (NSString *) tenantID;

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID;

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronRouter_NetworkReference *) externalGatewayInfo;

/**
 * (no documentation provided)
 */
- (void) setExternalGatewayInfo: (FULLNS0NeutronRouter_NetworkReference *) newExternalGatewayInfo;

/**
 * (no documentation provided)
 */
- (BOOL *) adminStateUp;

/**
 * (no documentation provided)
 */
- (void) setAdminStateUp: (BOOL *) newAdminStateUp;

/**
 * (no documentation provided)
 */
- (NSString *) status;

/**
 * (no documentation provided)
 */
- (void) setStatus: (NSString *) newStatus;

/**
 * (no documentation provided)
 */
- (NSString *) routerUUID;

/**
 * (no documentation provided)
 */
- (void) setRouterUUID: (NSString *) newRouterUUID;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;
@end /* interface FULLNS0NeutronRouter */

#endif /* DEF_FULLNS0NeutronRouter_H */
#ifndef DEF_FULLNS0Neutron_IPs_H
#define DEF_FULLNS0Neutron_IPs_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Neutron_IPs : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_subnetUUID;
    NSString *_ipAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) subnetUUID;

/**
 * (no documentation provided)
 */
- (void) setSubnetUUID: (NSString *) newSubnetUUID;

/**
 * (no documentation provided)
 */
- (NSString *) ipAddress;

/**
 * (no documentation provided)
 */
- (void) setIpAddress: (NSString *) newIpAddress;
@end /* interface FULLNS0Neutron_IPs */

#endif /* DEF_FULLNS0Neutron_IPs_H */
#ifndef DEF_FULLNS0NeutronPort_H
#define DEF_FULLNS0NeutronPort_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronPort : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_tenantID;
    NSString *_macAddress;
    BOOL *_adminStateUp;
    NSString *_deviceOwner;
    NSString *_status;
    NSString *_portUUID;
    NSString *_deviceID;
    NSString *_networkUUID;
    NSString *_name;
    NSArray *_fixedIPs;
}

/**
 * (no documentation provided)
 */
- (NSString *) tenantID;

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID;

/**
 * (no documentation provided)
 */
- (NSString *) macAddress;

/**
 * (no documentation provided)
 */
- (void) setMacAddress: (NSString *) newMacAddress;

/**
 * (no documentation provided)
 */
- (BOOL *) adminStateUp;

/**
 * (no documentation provided)
 */
- (void) setAdminStateUp: (BOOL *) newAdminStateUp;

/**
 * (no documentation provided)
 */
- (NSString *) deviceOwner;

/**
 * (no documentation provided)
 */
- (void) setDeviceOwner: (NSString *) newDeviceOwner;

/**
 * (no documentation provided)
 */
- (NSString *) status;

/**
 * (no documentation provided)
 */
- (void) setStatus: (NSString *) newStatus;

/**
 * (no documentation provided)
 */
- (NSString *) portUUID;

/**
 * (no documentation provided)
 */
- (void) setPortUUID: (NSString *) newPortUUID;

/**
 * (no documentation provided)
 */
- (NSString *) deviceID;

/**
 * (no documentation provided)
 */
- (void) setDeviceID: (NSString *) newDeviceID;

/**
 * (no documentation provided)
 */
- (NSString *) networkUUID;

/**
 * (no documentation provided)
 */
- (void) setNetworkUUID: (NSString *) newNetworkUUID;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSArray *) fixedIPs;

/**
 * (no documentation provided)
 */
- (void) setFixedIPs: (NSArray *) newFixedIPs;
@end /* interface FULLNS0NeutronPort */

#endif /* DEF_FULLNS0NeutronPort_H */
#ifndef DEF_FULLNS0NeutronNetwork_H
#define DEF_FULLNS0NeutronNetwork_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronNetwork : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_providerSegmentationID;
    NSString *_tenantID;
    NSString *_networkName;
    BOOL *_routerExternal;
    NSString *_providerNetworkType;
    BOOL *_shared;
    NSString *_providerPhysicalNetwork;
    NSString *_status;
    NSString *_networkUUID;
    BOOL *_adminStateUp;
    NSArray *_subnets;
}

/**
 * (no documentation provided)
 */
- (NSString *) providerSegmentationID;

/**
 * (no documentation provided)
 */
- (void) setProviderSegmentationID: (NSString *) newProviderSegmentationID;

/**
 * (no documentation provided)
 */
- (NSString *) tenantID;

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID;

/**
 * (no documentation provided)
 */
- (NSString *) networkName;

/**
 * (no documentation provided)
 */
- (void) setNetworkName: (NSString *) newNetworkName;

/**
 * (no documentation provided)
 */
- (BOOL *) routerExternal;

/**
 * (no documentation provided)
 */
- (void) setRouterExternal: (BOOL *) newRouterExternal;

/**
 * (no documentation provided)
 */
- (NSString *) providerNetworkType;

/**
 * (no documentation provided)
 */
- (void) setProviderNetworkType: (NSString *) newProviderNetworkType;

/**
 * (no documentation provided)
 */
- (BOOL *) shared;

/**
 * (no documentation provided)
 */
- (void) setShared: (BOOL *) newShared;

/**
 * (no documentation provided)
 */
- (NSString *) providerPhysicalNetwork;

/**
 * (no documentation provided)
 */
- (void) setProviderPhysicalNetwork: (NSString *) newProviderPhysicalNetwork;

/**
 * (no documentation provided)
 */
- (NSString *) status;

/**
 * (no documentation provided)
 */
- (void) setStatus: (NSString *) newStatus;

/**
 * (no documentation provided)
 */
- (NSString *) networkUUID;

/**
 * (no documentation provided)
 */
- (void) setNetworkUUID: (NSString *) newNetworkUUID;

/**
 * (no documentation provided)
 */
- (BOOL *) adminStateUp;

/**
 * (no documentation provided)
 */
- (void) setAdminStateUp: (BOOL *) newAdminStateUp;

/**
 * (no documentation provided)
 */
- (NSArray *) subnets;

/**
 * (no documentation provided)
 */
- (void) setSubnets: (NSArray *) newSubnets;
@end /* interface FULLNS0NeutronNetwork */

#endif /* DEF_FULLNS0NeutronNetwork_H */
#ifndef DEF_FULLNS0NeutronFloatingIP_H
#define DEF_FULLNS0NeutronFloatingIP_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NeutronFloatingIP : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_floatingIPAddress;
    NSString *_portUUID;
    NSString *_tenantUUID;
    NSString *_floatingNetworkUUID;
    NSString *_floatingIPUUID;
    NSString *_fixedIPAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) floatingIPAddress;

/**
 * (no documentation provided)
 */
- (void) setFloatingIPAddress: (NSString *) newFloatingIPAddress;

/**
 * (no documentation provided)
 */
- (NSString *) portUUID;

/**
 * (no documentation provided)
 */
- (void) setPortUUID: (NSString *) newPortUUID;

/**
 * (no documentation provided)
 */
- (NSString *) tenantUUID;

/**
 * (no documentation provided)
 */
- (void) setTenantUUID: (NSString *) newTenantUUID;

/**
 * (no documentation provided)
 */
- (NSString *) floatingNetworkUUID;

/**
 * (no documentation provided)
 */
- (void) setFloatingNetworkUUID: (NSString *) newFloatingNetworkUUID;

/**
 * (no documentation provided)
 */
- (NSString *) floatingIPUUID;

/**
 * (no documentation provided)
 */
- (void) setFloatingIPUUID: (NSString *) newFloatingIPUUID;

/**
 * (no documentation provided)
 */
- (NSString *) fixedIPAddress;

/**
 * (no documentation provided)
 */
- (void) setFixedIPAddress: (NSString *) newFixedIPAddress;
@end /* interface FULLNS0NeutronFloatingIP */

#endif /* DEF_FULLNS0NeutronFloatingIP_H */
