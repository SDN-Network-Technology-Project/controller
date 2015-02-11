#import "enunciate-common.h"

@class FULLNS0SubnetConfigs;
@class FULLNS0ConfigurationObject;
@class FULLNS0SubnetConfig;

#ifndef DEF_FULLNS0SubnetConfigs_H
#define DEF_FULLNS0SubnetConfigs_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SubnetConfigs : NSObject <EnunciateXML>
{
  @private
    NSArray *_subnetConfig;
}

/**
 * (no documentation provided)
 */
- (NSArray *) subnetConfig;

/**
 * (no documentation provided)
 */
- (void) setSubnetConfig: (NSArray *) newSubnetConfig;
@end /* interface FULLNS0SubnetConfigs */

#endif /* DEF_FULLNS0SubnetConfigs_H */
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
#ifndef DEF_FULLNS0SubnetConfig_H
#define DEF_FULLNS0SubnetConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0SubnetConfig : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_subnet;
    NSString *_name;
    NSArray *_nodeConnectors;
}

/**
 * (no documentation provided)
 */
- (NSString *) subnet;

/**
 * (no documentation provided)
 */
- (void) setSubnet: (NSString *) newSubnet;

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
- (NSArray *) nodeConnectors;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectors: (NSArray *) newNodeConnectors;
@end /* interface FULLNS0SubnetConfig */

#endif /* DEF_FULLNS0SubnetConfig_H */
