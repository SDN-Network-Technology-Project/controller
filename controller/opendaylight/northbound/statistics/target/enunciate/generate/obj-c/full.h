#import "enunciate-common.h"
#ifndef DEF_FULLNS0ActionType_H
#define DEF_FULLNS0ActionType_H

/**
 * (no documentation provided)
 */
enum FULLNS0ActionType
{

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_DROP,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_LOOPBACK,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_FLOOD,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_FLOOD_ALL,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_CONTROLLER,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_INTERFACE,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SW_PATH,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_HW_PATH,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_OUTPUT,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_ENQUEUE,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_DL_SRC,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_DL_DST,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_VLAN_ID,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_VLAN_PCP,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_VLAN_CFI,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_POP_VLAN,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_PUSH_VLAN,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_DL_TYPE,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_NW_SRC,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_NW_DST,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_NW_TOS,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_TP_SRC,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_TP_DST,

  /**
   * (no documentation provided)
   */
  FULL_NS0_ACTIONTYPE_SET_NEXT_HOP
};
/**
 * Reads a ActionType from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ActionType, or NULL if unable to be read.
 */
static enum FULLNS0ActionType *xmlTextReaderReadFULLNS0ActionTypeType(xmlTextReaderPtr reader);

/**
 * Writes a ActionType to XML.
 *
 * @param writer The XML writer.
 * @param _actionType The ActionType to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteFULLNS0ActionTypeType(xmlTextWriterPtr writer, enum FULLNS0ActionType *_actionType);

/**
 * Utility method for getting the enum value for a string.
 *
 * @param _actionType The string to format.
 * @return The enum value or NULL on error.
 */
static enum FULLNS0ActionType *formatStringToFULLNS0ActionTypeType(NSString *_actionType);

/**
 * Utility method for getting the string value of ActionType.
 *
 * @param _actionType The ActionType to format.
 * @return The string value or NULL on error.
 */
static NSString *formatFULLNS0ActionTypeTypeToString(enum FULLNS0ActionType *_actionType);
#endif /* DEF_FULLNS0ActionType_H */

@class FULLNS0Node;
@class FULLNS0NodeTable;
@class FULLNS0Match;
@class FULLNS0FlowOnNode;
@class FULLNS0NodeTableStatistics;
@class FULLNS0AllPortStatistics;
@class FULLNS0FlowStatistics;
@class FULLNS0TableStatistics;
@class FULLNS0PortStatistics;
@class FULLNS0AllTableStatistics;
@class FULLNS0AllFlowStatistics;
@class FULLNS0NodeConnectorStatistics;
@class FULLNS0MatchField;
@class FULLNS0Flow;
@class FULLNS0NodeConnector;
@class FULLNS0Action;

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
#ifndef DEF_FULLNS0NodeTable_H
#define DEF_FULLNS0NodeTable_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeTable : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_nodeTableNode;
    NSString *_nodeTableIDString;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) nodeTableNode;

/**
 * (no documentation provided)
 */
- (void) setNodeTableNode: (FULLNS0Node *) newNodeTableNode;

/**
 * (no documentation provided)
 */
- (NSString *) nodeTableIDString;

/**
 * (no documentation provided)
 */
- (void) setNodeTableIDString: (NSString *) newNodeTableIDString;
@end /* interface FULLNS0NodeTable */

#endif /* DEF_FULLNS0NodeTable_H */
#ifndef DEF_FULLNS0Match_H
#define DEF_FULLNS0Match_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Match : NSObject <EnunciateXML>
{
  @private
    NSArray *_matchFields;
}

/**
 * (no documentation provided)
 */
- (NSArray *) matchFields;

/**
 * (no documentation provided)
 */
- (void) setMatchFields: (NSArray *) newMatchFields;
@end /* interface FULLNS0Match */

#endif /* DEF_FULLNS0Match_H */
#ifndef DEF_FULLNS0FlowOnNode_H
#define DEF_FULLNS0FlowOnNode_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowOnNode : NSObject <EnunciateXML>
{
  @private
    long _packetCount;
    FULLNS0Flow *_flow;
    unsigned char _tableId;
    long _byteCount;
    int _durationNanoseconds;
    int _durationSeconds;
}

/**
 * (no documentation provided)
 */
- (long) packetCount;

/**
 * (no documentation provided)
 */
- (void) setPacketCount: (long) newPacketCount;

/**
 * (no documentation provided)
 */
- (FULLNS0Flow *) flow;

/**
 * (no documentation provided)
 */
- (void) setFlow: (FULLNS0Flow *) newFlow;

/**
 * (no documentation provided)
 */
- (unsigned char) tableId;

/**
 * (no documentation provided)
 */
- (void) setTableId: (unsigned char) newTableId;

/**
 * (no documentation provided)
 */
- (long) byteCount;

/**
 * (no documentation provided)
 */
- (void) setByteCount: (long) newByteCount;

/**
 * (no documentation provided)
 */
- (int) durationNanoseconds;

/**
 * (no documentation provided)
 */
- (void) setDurationNanoseconds: (int) newDurationNanoseconds;

/**
 * (no documentation provided)
 */
- (int) durationSeconds;

/**
 * (no documentation provided)
 */
- (void) setDurationSeconds: (int) newDurationSeconds;
@end /* interface FULLNS0FlowOnNode */

#endif /* DEF_FULLNS0FlowOnNode_H */
#ifndef DEF_FULLNS0NodeTableStatistics_H
#define DEF_FULLNS0NodeTableStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeTableStatistics : NSObject <EnunciateXML>
{
  @private
    int _maximumEntries;
    int _activeCount;
    long _lookupCount;
    long _matchedCount;
    FULLNS0NodeTable *_nodeTable;
    NSString *_name;
}

/**
 * (no documentation provided)
 */
- (int) maximumEntries;

/**
 * (no documentation provided)
 */
- (void) setMaximumEntries: (int) newMaximumEntries;

/**
 * (no documentation provided)
 */
- (int) activeCount;

/**
 * (no documentation provided)
 */
- (void) setActiveCount: (int) newActiveCount;

/**
 * (no documentation provided)
 */
- (long) lookupCount;

/**
 * (no documentation provided)
 */
- (void) setLookupCount: (long) newLookupCount;

/**
 * (no documentation provided)
 */
- (long) matchedCount;

/**
 * (no documentation provided)
 */
- (void) setMatchedCount: (long) newMatchedCount;

/**
 * (no documentation provided)
 */
- (FULLNS0NodeTable *) nodeTable;

/**
 * (no documentation provided)
 */
- (void) setNodeTable: (FULLNS0NodeTable *) newNodeTable;

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;
@end /* interface FULLNS0NodeTableStatistics */

#endif /* DEF_FULLNS0NodeTableStatistics_H */
#ifndef DEF_FULLNS0AllPortStatistics_H
#define DEF_FULLNS0AllPortStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0AllPortStatistics : NSObject <EnunciateXML>
{
  @private
    NSArray *_portStatistics;
}

/**
 * (no documentation provided)
 */
- (NSArray *) portStatistics;

/**
 * (no documentation provided)
 */
- (void) setPortStatistics: (NSArray *) newPortStatistics;
@end /* interface FULLNS0AllPortStatistics */

#endif /* DEF_FULLNS0AllPortStatistics_H */
#ifndef DEF_FULLNS0FlowStatistics_H
#define DEF_FULLNS0FlowStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0FlowStatistics : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_node;
    NSArray *_flowStatistic;
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
- (NSArray *) flowStatistic;

/**
 * (no documentation provided)
 */
- (void) setFlowStatistic: (NSArray *) newFlowStatistic;
@end /* interface FULLNS0FlowStatistics */

#endif /* DEF_FULLNS0FlowStatistics_H */
#ifndef DEF_FULLNS0TableStatistics_H
#define DEF_FULLNS0TableStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0TableStatistics : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_node;
    NSArray *_tableStatistic;
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
- (NSArray *) tableStatistic;

/**
 * (no documentation provided)
 */
- (void) setTableStatistic: (NSArray *) newTableStatistic;
@end /* interface FULLNS0TableStatistics */

#endif /* DEF_FULLNS0TableStatistics_H */
#ifndef DEF_FULLNS0PortStatistics_H
#define DEF_FULLNS0PortStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0PortStatistics : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_node;
    NSArray *_portStatistic;
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
- (NSArray *) portStatistic;

/**
 * (no documentation provided)
 */
- (void) setPortStatistic: (NSArray *) newPortStatistic;
@end /* interface FULLNS0PortStatistics */

#endif /* DEF_FULLNS0PortStatistics_H */
#ifndef DEF_FULLNS0AllTableStatistics_H
#define DEF_FULLNS0AllTableStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0AllTableStatistics : NSObject <EnunciateXML>
{
  @private
    NSArray *_tableStatistics;
}

/**
 * (no documentation provided)
 */
- (NSArray *) tableStatistics;

/**
 * (no documentation provided)
 */
- (void) setTableStatistics: (NSArray *) newTableStatistics;
@end /* interface FULLNS0AllTableStatistics */

#endif /* DEF_FULLNS0AllTableStatistics_H */
#ifndef DEF_FULLNS0AllFlowStatistics_H
#define DEF_FULLNS0AllFlowStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0AllFlowStatistics : NSObject <EnunciateXML>
{
  @private
    NSArray *_flowStatistics;
}

/**
 * (no documentation provided)
 */
- (NSArray *) flowStatistics;

/**
 * (no documentation provided)
 */
- (void) setFlowStatistics: (NSArray *) newFlowStatistics;
@end /* interface FULLNS0AllFlowStatistics */

#endif /* DEF_FULLNS0AllFlowStatistics_H */
#ifndef DEF_FULLNS0NodeConnectorStatistics_H
#define DEF_FULLNS0NodeConnectorStatistics_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeConnectorStatistics : NSObject <EnunciateXML>
{
  @private
    long _receiveDrops;
    long _receiveFrameError;
    long _receiveErrors;
    long _receivePackets;
    long _receiveBytes;
    long _receiveCrcError;
    long _transmitPackets;
    long _receiveOverRunError;
    long _transmitErrors;
    long _transmitDrops;
    long _transmitBytes;
    long _collisionCount;
    FULLNS0NodeConnector *_nodeConnector;
}

/**
 * (no documentation provided)
 */
- (long) receiveDrops;

/**
 * (no documentation provided)
 */
- (void) setReceiveDrops: (long) newReceiveDrops;

/**
 * (no documentation provided)
 */
- (long) receiveFrameError;

/**
 * (no documentation provided)
 */
- (void) setReceiveFrameError: (long) newReceiveFrameError;

/**
 * (no documentation provided)
 */
- (long) receiveErrors;

/**
 * (no documentation provided)
 */
- (void) setReceiveErrors: (long) newReceiveErrors;

/**
 * (no documentation provided)
 */
- (long) receivePackets;

/**
 * (no documentation provided)
 */
- (void) setReceivePackets: (long) newReceivePackets;

/**
 * (no documentation provided)
 */
- (long) receiveBytes;

/**
 * (no documentation provided)
 */
- (void) setReceiveBytes: (long) newReceiveBytes;

/**
 * (no documentation provided)
 */
- (long) receiveCrcError;

/**
 * (no documentation provided)
 */
- (void) setReceiveCrcError: (long) newReceiveCrcError;

/**
 * (no documentation provided)
 */
- (long) transmitPackets;

/**
 * (no documentation provided)
 */
- (void) setTransmitPackets: (long) newTransmitPackets;

/**
 * (no documentation provided)
 */
- (long) receiveOverRunError;

/**
 * (no documentation provided)
 */
- (void) setReceiveOverRunError: (long) newReceiveOverRunError;

/**
 * (no documentation provided)
 */
- (long) transmitErrors;

/**
 * (no documentation provided)
 */
- (void) setTransmitErrors: (long) newTransmitErrors;

/**
 * (no documentation provided)
 */
- (long) transmitDrops;

/**
 * (no documentation provided)
 */
- (void) setTransmitDrops: (long) newTransmitDrops;

/**
 * (no documentation provided)
 */
- (long) transmitBytes;

/**
 * (no documentation provided)
 */
- (void) setTransmitBytes: (long) newTransmitBytes;

/**
 * (no documentation provided)
 */
- (long) collisionCount;

/**
 * (no documentation provided)
 */
- (void) setCollisionCount: (long) newCollisionCount;

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) nodeConnector;

/**
 * (no documentation provided)
 */
- (void) setNodeConnector: (FULLNS0NodeConnector *) newNodeConnector;
@end /* interface FULLNS0NodeConnectorStatistics */

#endif /* DEF_FULLNS0NodeConnectorStatistics_H */
#ifndef DEF_FULLNS0MatchField_H
#define DEF_FULLNS0MatchField_H

/**
 * (no documentation provided)
 */
@interface FULLNS0MatchField : NSObject <EnunciateXML>
{
  @private
}
@end /* interface FULLNS0MatchField */

#endif /* DEF_FULLNS0MatchField_H */
#ifndef DEF_FULLNS0Flow_H
#define DEF_FULLNS0Flow_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Flow : NSObject <EnunciateXML>
{
  @private
    long _identifier;
    NSArray *_actions;
    short _priority;
    FULLNS0Match *_match;
    short _idleTimeout;
    short _hardTimeout;
}

/**
 * (no documentation provided)
 */
- (long) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long) newIdentifier;

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
- (short) priority;

/**
 * (no documentation provided)
 */
- (void) setPriority: (short) newPriority;

/**
 * (no documentation provided)
 */
- (FULLNS0Match *) match;

/**
 * (no documentation provided)
 */
- (void) setMatch: (FULLNS0Match *) newMatch;

/**
 * (no documentation provided)
 */
- (short) idleTimeout;

/**
 * (no documentation provided)
 */
- (void) setIdleTimeout: (short) newIdleTimeout;

/**
 * (no documentation provided)
 */
- (short) hardTimeout;

/**
 * (no documentation provided)
 */
- (void) setHardTimeout: (short) newHardTimeout;
@end /* interface FULLNS0Flow */

#endif /* DEF_FULLNS0Flow_H */
#ifndef DEF_FULLNS0NodeConnector_H
#define DEF_FULLNS0NodeConnector_H

/**
 * (no documentation provided)
 */
@interface FULLNS0NodeConnector : NSObject <EnunciateXML>
{
  @private
    FULLNS0Node *_nodeConnectorNode;
    NSString *_nodeConnectorIDString;
    NSString *_type;
}

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

/**
 * (no documentation provided)
 */
- (NSString *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType;
@end /* interface FULLNS0NodeConnector */

#endif /* DEF_FULLNS0NodeConnector_H */
#ifndef DEF_FULLNS0Action_H
#define DEF_FULLNS0Action_H

/**
 * (no documentation provided)
 */
@interface FULLNS0Action : NSObject <EnunciateXML>
{
  @private
    enum FULLNS0ActionType *_type;
}

/**
 * (no documentation provided)
 */
- (enum FULLNS0ActionType *) type;

/**
 * (no documentation provided)
 */
- (void) setType: (enum FULLNS0ActionType *) newType;
@end /* interface FULLNS0Action */

#endif /* DEF_FULLNS0Action_H */
