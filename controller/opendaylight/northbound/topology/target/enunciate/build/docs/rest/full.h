#import "enunciate-common.h"

@class FULLNS0Node;
@class FULLNS0Property;
@class FULLNS0Topology;
@class FULLNS0TopologyUserLinks;
@class FULLNS0EdgeProperties;
@class FULLNS0NodeConnector;
@class FULLNS0Edge;
@class FULLNS0ConfigurationObject;
@class FULLNS0TopologyUserLinkConfig;

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
#ifndef DEF_FULLNS0Topology_H
#define DEF_FULLNS0Topology_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Topology : NSObject <EnunciateXML>
{
  @private
    NSArray *_edgeProperties;
}

/**
 * (no documentation provided)
 */
- (NSArray *) edgeProperties;

/**
 * (no documentation provided)
 */
- (void) setEdgeProperties: (NSArray *) newEdgeProperties;
@end /* interface FULLNS0Topology */

#endif /* DEF_FULLNS0Topology_H */
#ifndef DEF_FULLNS0TopologyUserLinks_H
#define DEF_FULLNS0TopologyUserLinks_H

/**
 * (no documentation provided)
 */
@interface FULLNS0TopologyUserLinks : NSObject <EnunciateXML>
{
  @private
    NSArray *_userLinks;
}

/**
 * (no documentation provided)
 */
- (NSArray *) userLinks;

/**
 * (no documentation provided)
 */
- (void) setUserLinks: (NSArray *) newUserLinks;
@end /* interface FULLNS0TopologyUserLinks */

#endif /* DEF_FULLNS0TopologyUserLinks_H */
#ifndef DEF_FULLNS0EdgeProperties_H
#define DEF_FULLNS0EdgeProperties_H

/**
 * (no documentation provided)
 */
@interface FULLNS0EdgeProperties : NSObject <EnunciateXML>
{
  @private
    FULLNS0Edge *_edge;
    NSArray *_properties;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Edge *) edge;

/**
 * (no documentation provided)
 */
- (void) setEdge: (FULLNS0Edge *) newEdge;

/**
 * (no documentation provided)
 */
- (NSArray *) properties;

/**
 * (no documentation provided)
 */
- (void) setProperties: (NSArray *) newProperties;
@end /* interface FULLNS0EdgeProperties */

#endif /* DEF_FULLNS0EdgeProperties_H */
#ifndef DEF_FULLNS0NodeConnector_H
#define DEF_FULLNS0NodeConnector_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeConnector : NSObject <EnunciateXML>
{
  @private
    NSString *_type;
    FULLNS0Node *_nodeConnectorNode;
    NSString *_nodeConnectorIDString;
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
- (FULLNS0Node *) nodeConnectorNode;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorNode: (FULLNS0Node *) newNodeConnectorNode;

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorIDString: (NSString *) newNodeConnectorIDString;
@end /* interface FULLNS0NodeConnector */

#endif /* DEF_FULLNS0NodeConnector_H */
#ifndef DEF_FULLNS0Edge_H
#define DEF_FULLNS0Edge_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Edge : NSObject <EnunciateXML>
{
  @private
    FULLNS0NodeConnector *_headNodeConnector;
    FULLNS0NodeConnector *_tailNodeConnector;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) headNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setHeadNodeConnector: (FULLNS0NodeConnector *) newHeadNodeConnector;

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) tailNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setTailNodeConnector: (FULLNS0NodeConnector *) newTailNodeConnector;
@end /* interface FULLNS0Edge */

#endif /* DEF_FULLNS0Edge_H */
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
#ifndef DEF_FULLNS0TopologyUserLinkConfig_H
#define DEF_FULLNS0TopologyUserLinkConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0TopologyUserLinkConfig : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_srcNodeConnector;
    NSString *_dstNodeConnector;
    NSString *_status;
    NSString *_name;
}

/**
 * (no documentation provided)
 */
- (NSString *) srcNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setSrcNodeConnector: (NSString *) newSrcNodeConnector;

/**
 * (no documentation provided)
 */
- (NSString *) dstNodeConnector;

/**
 * (no documentation provided)
 */
- (void) setDstNodeConnector: (NSString *) newDstNodeConnector;

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
@end /* interface FULLNS0TopologyUserLinkConfig */

#endif /* DEF_FULLNS0TopologyUserLinkConfig_H */
