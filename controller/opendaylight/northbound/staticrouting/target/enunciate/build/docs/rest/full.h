#import "enunciate-common.h"

@class FULLNS0StaticRoutes;
@class FULLNS0StaticRoute;

#ifndef DEF_FULLNS0StaticRoutes_H
#define DEF_FULLNS0StaticRoutes_H

/**
 *  This class represents a list of static routes.

 */
@interface FULLNS0StaticRoutes : NSObject <EnunciateXML>
{
  @private
    NSArray *_staticRoute;
}

/**
 * (no documentation provided)
 */
- (NSArray *) staticRoute;

/**
 * (no documentation provided)
 */
- (void) setStaticRoute: (NSArray *) newStaticRoute;
@end /* interface FULLNS0StaticRoutes */

#endif /* DEF_FULLNS0StaticRoutes_H */
#ifndef DEF_FULLNS0StaticRoute_H
#define DEF_FULLNS0StaticRoute_H

/**
 *  StaticRoute represents the static route data that is returned as a response to
 the NorthBound GET request.


 */
@interface FULLNS0StaticRoute : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_prefix;
    NSString *_nextHop;
}

/**
 * The name of the static route.
 */
- (NSString *) name;

/**
 * The name of the static route.
 */
- (void) setName: (NSString *) newName;

/**
 * The prefix for the route.
 * Format: A.B.C.D/MM  Where A.B.C.D is the Default Gateway IP (L3) or ARP Querier IP (L2)
 */
- (NSString *) prefix;

/**
 * The prefix for the route.
 * Format: A.B.C.D/MM  Where A.B.C.D is the Default Gateway IP (L3) or ARP Querier IP (L2)
 */
- (void) setPrefix: (NSString *) newPrefix;

/**
 * NextHop IP-Address (or) datapath ID/port list: xx:xx:xx:xx:xx:xx:xx:xx/a,b,c-m,r-t,y
 */
- (NSString *) nextHop;

/**
 * NextHop IP-Address (or) datapath ID/port list: xx:xx:xx:xx:xx:xx:xx:xx/a,b,c-m,r-t,y
 */
- (void) setNextHop: (NSString *) newNextHop;
@end /* interface FULLNS0StaticRoute */

#endif /* DEF_FULLNS0StaticRoute_H */
