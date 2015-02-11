#import "enunciate-common.h"

@class FULLNS0VIP;
@class FULLNS0VIPs;
@class FULLNS0Pools;
@class FULLNS0PoolMember;
@class FULLNS0Pool;

#ifndef DEF_FULLNS0VIP_H
#define DEF_FULLNS0VIP_H

/**
 * (no documentation provided)
 */
@interface FULLNS0VIP : NSObject <EnunciateXML>
{
  @private
    NSString *_poolName;
    NSString *_protocol;
    NSString *_ip;
    short _port;
    NSString *_status;
    NSString *_name;
}

/**
 * (no documentation provided)
 */
- (NSString *) poolName;

/**
 * (no documentation provided)
 */
- (void) setPoolName: (NSString *) newPoolName;

/**
 * (no documentation provided)
 */
- (NSString *) protocol;

/**
 * (no documentation provided)
 */
- (void) setProtocol: (NSString *) newProtocol;

/**
 * (no documentation provided)
 */
- (NSString *) ip;

/**
 * (no documentation provided)
 */
- (void) setIp: (NSString *) newIp;

/**
 * (no documentation provided)
 */
- (short) port;

/**
 * (no documentation provided)
 */
- (void) setPort: (short) newPort;

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
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;
@end /* interface FULLNS0VIP */

#endif /* DEF_FULLNS0VIP_H */
#ifndef DEF_FULLNS0VIPs_H
#define DEF_FULLNS0VIPs_H

/**
 *  JAX-RS resource for handling details of all the available VIPs
 in response to respective REST API requests.

 */
@interface FULLNS0VIPs : NSObject <EnunciateXML>
{
  @private
    NSArray *_loadBalancerVIPs;
}

/**
 * (no documentation provided)
 */
- (NSArray *) loadBalancerVIPs;

/**
 * (no documentation provided)
 */
- (void) setLoadBalancerVIPs: (NSArray *) newLoadBalancerVIPs;
@end /* interface FULLNS0VIPs */

#endif /* DEF_FULLNS0VIPs_H */
#ifndef DEF_FULLNS0Pools_H
#define DEF_FULLNS0Pools_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Pools : NSObject <EnunciateXML>
{
  @private
    NSArray *_loadBalancerPools;
}

/**
 * (no documentation provided)
 */
- (NSArray *) loadBalancerPools;

/**
 * (no documentation provided)
 */
- (void) setLoadBalancerPools: (NSArray *) newLoadBalancerPools;
@end /* interface FULLNS0Pools */

#endif /* DEF_FULLNS0Pools_H */
#ifndef DEF_FULLNS0PoolMember_H
#define DEF_FULLNS0PoolMember_H

/**
 * (no documentation provided)
 */
@interface FULLNS0PoolMember : NSObject <EnunciateXML>
{
  @private
    NSString *_poolName;
    NSString *_status;
    NSString *_ip;
    NSString *_name;
}

/**
 * (no documentation provided)
 */
- (NSString *) poolName;

/**
 * (no documentation provided)
 */
- (void) setPoolName: (NSString *) newPoolName;

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
- (NSString *) ip;

/**
 * (no documentation provided)
 */
- (void) setIp: (NSString *) newIp;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;
@end /* interface FULLNS0PoolMember */

#endif /* DEF_FULLNS0PoolMember_H */
#ifndef DEF_FULLNS0Pool_H
#define DEF_FULLNS0Pool_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Pool : NSObject <EnunciateXML>
{
  @private
    NSString *_lbMethod;
    NSArray *_vips;
    NSString *_status;
    NSString *_name;
    NSArray *_members;
}

/**
 * (no documentation provided)
 */
- (NSString *) lbMethod;

/**
 * (no documentation provided)
 */
- (void) setLbMethod: (NSString *) newLbMethod;

/**
 * (no documentation provided)
 */
- (NSArray *) vips;

/**
 * (no documentation provided)
 */
- (void) setVips: (NSArray *) newVips;

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
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSArray *) members;

/**
 * (no documentation provided)
 */
- (void) setMembers: (NSArray *) newMembers;
@end /* interface FULLNS0Pool */

#endif /* DEF_FULLNS0Pool_H */
