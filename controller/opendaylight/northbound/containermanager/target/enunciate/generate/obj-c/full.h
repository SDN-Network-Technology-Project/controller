#import "enunciate-common.h"

@class FULLNS0ContainerConfigs;
@class FULLNS0FlowSpecConfigs;
@class FULLNS0StringList;
@class FULLNS0ConfigurationObject;
@class FULLNS0ContainerFlowConfig;
@class FULLNS0ContainerConfig;

#ifndef DEF_FULLNS0ContainerConfigs_H
#define DEF_FULLNS0ContainerConfigs_H

/**
 * (no documentation provided)
 */
@interface FULLNS0ContainerConfigs : NSObject <EnunciateXML>
{
  @private
    NSArray *_containerConfig;
}

/**
 * (no documentation provided)
 */
- (NSArray *) containerConfig;

/**
 * (no documentation provided)
 */
- (void) setContainerConfig: (NSArray *) newContainerConfig;
@end /* interface FULLNS0ContainerConfigs */

#endif /* DEF_FULLNS0ContainerConfigs_H */
#ifndef DEF_FULLNS0FlowSpecConfigs_H
#define DEF_FULLNS0FlowSpecConfigs_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowSpecConfigs : NSObject <EnunciateXML>
{
  @private
    NSArray *_containerFlowConfig;
}

/**
 * (no documentation provided)
 */
- (NSArray *) containerFlowConfig;

/**
 * (no documentation provided)
 */
- (void) setContainerFlowConfig: (NSArray *) newContainerFlowConfig;
@end /* interface FULLNS0FlowSpecConfigs */

#endif /* DEF_FULLNS0FlowSpecConfigs_H */
#ifndef DEF_FULLNS0StringList_H
#define DEF_FULLNS0StringList_H

/**
 * (no documentation provided)
 */
@interface FULLNS0StringList : NSObject <EnunciateXML>
{
  @private
    NSArray *_list;
}

/**
 * (no documentation provided)
 */
- (NSArray *) list;

/**
 * (no documentation provided)
 */
- (void) setList: (NSArray *) newList;
@end /* interface FULLNS0StringList */

#endif /* DEF_FULLNS0StringList_H */
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
#ifndef DEF_FULLNS0ContainerFlowConfig_H
#define DEF_FULLNS0ContainerFlowConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0ContainerFlowConfig : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_tpDst;
    NSString *_nwDst;
    NSString *_dlVlan;
    NSString *_nwSrc;
    NSString *_tpSrc;
    NSString *_name;
    NSString *_protocol;
}

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
- (NSString *) nwDst;

/**
 * (no documentation provided)
 */
- (void) setNwDst: (NSString *) newNwDst;

/**
 * (no documentation provided)
 */
- (NSString *) dlVlan;

/**
 * (no documentation provided)
 */
- (void) setDlVlan: (NSString *) newDlVlan;

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
- (NSString *) tpSrc;

/**
 * (no documentation provided)
 */
- (void) setTpSrc: (NSString *) newTpSrc;

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
- (NSString *) protocol;

/**
 * (no documentation provided)
 */
- (void) setProtocol: (NSString *) newProtocol;
@end /* interface FULLNS0ContainerFlowConfig */

#endif /* DEF_FULLNS0ContainerFlowConfig_H */
#ifndef DEF_FULLNS0ContainerConfig_H
#define DEF_FULLNS0ContainerConfig_H

/**
 * (no documentation provided)
 */
@interface FULLNS0ContainerConfig : FULLNS0ConfigurationObject <EnunciateXML>
{
  @private
    NSString *_staticVlan;
    NSString *_container;
    NSArray *_ports;
    NSArray *_containerFlows;
}

/**
 * (no documentation provided)
 */
- (NSString *) staticVlan;

/**
 * (no documentation provided)
 */
- (void) setStaticVlan: (NSString *) newStaticVlan;

/**
 * (no documentation provided)
 */
- (NSString *) container;

/**
 * (no documentation provided)
 */
- (void) setContainer: (NSString *) newContainer;

/**
 * (no documentation provided)
 */
- (NSArray *) ports;

/**
 * (no documentation provided)
 */
- (void) setPorts: (NSArray *) newPorts;

/**
 * (no documentation provided)
 */
- (NSArray *) containerFlows;

/**
 * (no documentation provided)
 */
- (void) setContainerFlows: (NSArray *) newContainerFlows;
@end /* interface FULLNS0ContainerConfig */

#endif /* DEF_FULLNS0ContainerConfig_H */
