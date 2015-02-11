#import "enunciate-common.h"

@class FULLNS0Node;
@class FULLNS0Nodes;

#ifndef DEF_FULLNS0Node_H
#define DEF_FULLNS0Node_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Node : NSObject <EnunciateXML>
{
  @private
    NSString *_type;
    NSString *_nodeIDString;
}

/**
 * (no documentation provided)
 */
- (NSString *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType;

/**
 * (no documentation provided)
 */
- (NSString *) nodeIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeIDString: (NSString *) newNodeIDString;
@end /* interface FULLNS0Node */

#endif /* DEF_FULLNS0Node_H */
#ifndef DEF_FULLNS0Nodes_H
#define DEF_FULLNS0Nodes_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Nodes : NSObject <EnunciateXML>
{
  @private
    NSArray *_node;
}

/**
 * (no documentation provided)
 */
- (NSArray *) node;

/**
 * (no documentation provided)
 */
- (void) setNode: (NSArray *) newNode;
@end /* interface FULLNS0Nodes */

#endif /* DEF_FULLNS0Nodes_H */
