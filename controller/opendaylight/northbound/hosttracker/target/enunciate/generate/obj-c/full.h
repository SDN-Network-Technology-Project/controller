#import "enunciate-common.h"

@class FULLNS0Hosts;
@class FULLNS0HostConfig;

#ifndef DEF_FULLNS0Hosts_H
#define DEF_FULLNS0Hosts_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Hosts : NSObject <EnunciateXML>
{
  @private
    NSArray *_hostConfig;
}

/**
 * (no documentation provided)
 */
- (NSArray *) hostConfig;

/**
 * (no documentation provided)
 */
- (void) setHostConfig: (NSArray *) newHostConfig;
@end /* interface FULLNS0Hosts */

#endif /* DEF_FULLNS0Hosts_H */
#ifndef DEF_FULLNS0HostConfig_H
#define DEF_FULLNS0HostConfig_H

/**
 *  Configuration Java Object which represents a Host configuration information
 for HostTracker.

 */
@interface FULLNS0HostConfig : NSObject <EnunciateXML>
{
  @private
    NSString *_dataLayerAddress;
    NSString *_nodeType;
    NSString *_nodeId;
    NSString *_nodeConnectorType;
    NSString *_nodeConnectorId;
    NSString *_vlan;
    BOOL _staticHost;
    NSString *_networkAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) dataLayerAddress;

/**
 * (no documentation provided)
 */
- (void) setDataLayerAddress: (NSString *) newDataLayerAddress;

/**
 * (no documentation provided)
 */
- (NSString *) nodeType;

/**
 * (no documentation provided)
 */
- (void) setNodeType: (NSString *) newNodeType;

/**
 * (no documentation provided)
 */
- (NSString *) nodeId;

/**
 * (no documentation provided)
 */
- (void) setNodeId: (NSString *) newNodeId;

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorType;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorType: (NSString *) newNodeConnectorType;

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorId;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorId: (NSString *) newNodeConnectorId;

/**
 * (no documentation provided)
 */
- (NSString *) vlan;

/**
 * (no documentation provided)
 */
- (void) setVlan: (NSString *) newVlan;

/**
 * (no documentation provided)
 */
- (BOOL) staticHost;

/**
 * (no documentation provided)
 */
- (void) setStaticHost: (BOOL) newStaticHost;

/**
 * (no documentation provided)
 */
- (NSString *) networkAddress;

/**
 * (no documentation provided)
 */
- (void) setNetworkAddress: (NSString *) newNetworkAddress;
@end /* interface FULLNS0HostConfig */

#endif /* DEF_FULLNS0HostConfig_H */
