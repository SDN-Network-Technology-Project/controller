#import "enunciate-common.h"

@class FULLNS0FlowConfigs;
@class FULLNS0Node;
@class FULLNS0ConfigurationObject;
@class FULLNS0FlowConfig;

#ifndef DEF_FULLNS0FlowConfigs_H
#define DEF_FULLNS0FlowConfigs_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowConfigs : NSObject <EnunciateXML>
{
  @private
    NSArray *_flowConfig;
}

/**
 * (no documentation provided)
 */
- (NSArray *) flowConfig;

/**
 * (no documentation provided)
 */
- (void) setFlowConfig: (NSArray *) newFlowConfig;
@end /* interface FULLNS0FlowConfigs */

#endif /* DEF_FULLNS0FlowConfigs_H */
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
#ifndef DEF_FULLNS0FlowConfig_H
#define DEF_FULLNS0FlowConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowConfig : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_nwSrc;
    NSString *_installInHw;
    NSString *_idleTimeout;
    NSString *_vlanId;
    NSString *_etherType;
    NSString *_priority;
    NSString *_tosBits;
    NSArray *_actions;
    NSString *_dlDst;
    NSString *_dlSrc;
    NSString *_tpSrc;
    NSString *_hardTimeout;
    NSString *_protocol;
    FULLNS0Node *_node;
    NSString *_cookie;
    NSString *_vlanPriority;
    NSString *_nwDst;
    NSString *_ingressPort;
    NSString *_tpDst;
    NSString *_name;
}

/**
 * (no documentation provided)
 */
- (NSString *) nwSrc;

/**
 * (no documentation provided)
 */
- (void) setNwSrc: (NSString *) newNwSrc;

/**
 * (no documentation provided)
 */
- (NSString *) installInHw;

/**
 * (no documentation provided)
 */
- (void) setInstallInHw: (NSString *) newInstallInHw;

/**
 * (no documentation provided)
 */
- (NSString *) idleTimeout;

/**
 * (no documentation provided)
 */
- (void) setIdleTimeout: (NSString *) newIdleTimeout;

/**
 * (no documentation provided)
 */
- (NSString *) vlanId;

/**
 * (no documentation provided)
 */
- (void) setVlanId: (NSString *) newVlanId;

/**
 * (no documentation provided)
 */
- (NSString *) etherType;

/**
 * (no documentation provided)
 */
- (void) setEtherType: (NSString *) newEtherType;

/**
 * (no documentation provided)
 */
- (NSString *) priority;

/**
 * (no documentation provided)
 */
- (void) setPriority: (NSString *) newPriority;

/**
 * (no documentation provided)
 */
- (NSString *) tosBits;

/**
 * (no documentation provided)
 */
- (void) setTosBits: (NSString *) newTosBits;

/**
 * (no documentation provided)
 */
- (NSArray *) actions;

/**
 * (no documentation provided)
 */
- (void) setActions: (NSArray *) newActions;

/**
 * (no documentation provided)
 */
- (NSString *) dlDst;

/**
 * (no documentation provided)
 */
- (void) setDlDst: (NSString *) newDlDst;

/**
 * (no documentation provided)
 */
- (NSString *) dlSrc;

/**
 * (no documentation provided)
 */
- (void) setDlSrc: (NSString *) newDlSrc;

/**
 * (no documentation provided)
 */
- (NSString *) tpSrc;

/**
 * (no documentation provided)
 */
- (void) setTpSrc: (NSString *) newTpSrc;

/**
 * (no documentation provided)
 */
- (NSString *) hardTimeout;

/**
 * (no documentation provided)
 */
- (void) setHardTimeout: (NSString *) newHardTimeout;

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
- (FULLNS0Node *) node;

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode;

/**
 * (no documentation provided)
 */
- (NSString *) cookie;

/**
 * (no documentation provided)
 */
- (void) setCookie: (NSString *) newCookie;

/**
 * (no documentation provided)
 */
- (NSString *) vlanPriority;

/**
 * (no documentation provided)
 */
- (void) setVlanPriority: (NSString *) newVlanPriority;

/**
 * (no documentation provided)
 */
- (NSString *) nwDst;

/**
 * (no documentation provided)
 */
- (void) setNwDst: (NSString *) newNwDst;

/**
 * (no documentation provided)
 */
- (NSString *) ingressPort;

/**
 * (no documentation provided)
 */
- (void) setIngressPort: (NSString *) newIngressPort;

/**
 * (no documentation provided)
 */
- (NSString *) tpDst;

/**
 * (no documentation provided)
 */
- (void) setTpDst: (NSString *) newTpDst;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;
@end /* interface FULLNS0FlowConfig */

#endif /* DEF_FULLNS0FlowConfig_H */
