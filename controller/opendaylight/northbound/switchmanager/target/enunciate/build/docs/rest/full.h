#import "enunciate-common.h"

@class FULLNS0Property;
@class FULLNS0NodeConnectors;
@class FULLNS0Nodes;
@class FULLNS0NodeProperties;
@class FULLNS0NodeConnectorProperties;
@class FULLNS0NodeConnector;
@class FULLNS0Node;

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
#ifndef DEF_FULLNS0NodeConnectors_H
#define DEF_FULLNS0NodeConnectors_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeConnectors : NSObject <EnunciateXML>
{
  @private
    NSArray *_nodeConnectorProperties;
}

/**
 * (no documentation provided)
 */
- (NSArray *) nodeConnectorProperties;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorProperties: (NSArray *) newNodeConnectorProperties;
@end /* interface FULLNS0NodeConnectors */

#endif /* DEF_FULLNS0NodeConnectors_H */
#ifndef DEF_FULLNS0Nodes_H
#define DEF_FULLNS0Nodes_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Nodes : NSObject <EnunciateXML>
{
  @private
    NSArray *_nodeProperties;
}

/**
 * (no documentation provided)
 */
- (NSArray *) nodeProperties;

/**
 * (no documentation provided)
 */
- (void) setNodeProperties: (NSArray *) newNodeProperties;
@end /* interface FULLNS0Nodes */

#endif /* DEF_FULLNS0Nodes_H */
#ifndef DEF_FULLNS0NodeProperties_H
#define DEF_FULLNS0NodeProperties_H

/**
 *  The class describes set of properties attached to a node

 */
@interface FULLNS0NodeProperties : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_node;
    NSArray *_properties;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node;

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode;

/**
 * (no documentation provided)
 */
- (NSArray *) properties;

/**
 * (no documentation provided)
 */
- (void) setProperties: (NSArray *) newProperties;
@end /* interface FULLNS0NodeProperties */

#endif /* DEF_FULLNS0NodeProperties_H */
#ifndef DEF_FULLNS0NodeConnectorProperties_H
#define DEF_FULLNS0NodeConnectorProperties_H

/**
 *  The class describes set of properties attached to a node connector

 */
@interface FULLNS0NodeConnectorProperties : NSObject <EnunciateXML>
{
  @private
    FULLNS0NodeConnector *_nodeconnector;
    NSArray *_properties;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) nodeconnector;

/**
 * (no documentation provided)
 */
- (void) setNodeconnector: (FULLNS0NodeConnector *) newNodeconnector;

/**
 * (no documentation provided)
 */
- (NSArray *) properties;

/**
 * (no documentation provided)
 */
- (void) setProperties: (NSArray *) newProperties;
@end /* interface FULLNS0NodeConnectorProperties */

#endif /* DEF_FULLNS0NodeConnectorProperties_H */
#ifndef DEF_FULLNS0NodeConnector_H
#define DEF_FULLNS0NodeConnector_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeConnector : NSObject <EnunciateXML>
{
  @private
    NSString *_nodeConnectorIDString;
    NSString *_type;
    FULLNS0Node *_nodeConnectorNode;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorIDString: (NSString *) newNodeConnectorIDString;

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
- (FULLNS0Node *) nodeConnectorNode;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorNode: (FULLNS0Node *) newNodeConnectorNode;
@end /* interface FULLNS0NodeConnector */

#endif /* DEF_FULLNS0NodeConnector_H */
#ifndef DEF_FULLNS0Node_H
#define DEF_FULLNS0Node_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Node : NSObject <EnunciateXML>
{
  @private
    NSString *_nodeIDString;
    NSString *_type;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeIDString: (NSString *) newNodeIDString;

/**
 * (no documentation provided)
 */
- (NSString *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType;
@end /* interface FULLNS0Node */

#endif /* DEF_FULLNS0Node_H */
