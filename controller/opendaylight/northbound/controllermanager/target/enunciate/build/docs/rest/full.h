#import "enunciate-common.h"

@class FULLNS0Property;
@class FULLNS0ControllerProperties;

#ifndef DEF_FULLNS0Property_H
#define DEF_FULLNS0Property_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Property : NSObject <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0Property */

#endif /* DEF_FULLNS0Property_H */
#ifndef DEF_FULLNS0ControllerProperties_H
#define DEF_FULLNS0ControllerProperties_H

/**
 *  The class describes set of properties attached to a controller

 */
@interface FULLNS0ControllerProperties : NSObject <EnunciateXML>
{
  @private
    NSArray *_properties;
}

/**
 * (no documentation provided)
 */
- (NSArray *) properties;

/**
 * (no documentation provided)
 */
- (void) setProperties: (NSArray *) newProperties;
@end /* interface FULLNS0ControllerProperties */

#endif /* DEF_FULLNS0ControllerProperties_H */
