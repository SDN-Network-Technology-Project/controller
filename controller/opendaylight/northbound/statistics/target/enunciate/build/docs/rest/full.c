#include <enunciate-common.c>
#ifndef DEF_full_ns0_actionType_H
#define DEF_full_ns0_actionType_H

/**
 * (no documentation provided)
 */
enum full_ns0_actionType {

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
static enum full_ns0_actionType *xmlTextReaderReadNs0ActionTypeType(xmlTextReaderPtr reader);

/**
 * Writes a ActionType to XML.
 *
 * @param writer The XML writer.
 * @param _actionType The ActionType to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ActionTypeType(xmlTextWriterPtr writer, enum full_ns0_actionType *_actionType);

/**
 * Frees a ActionType.
 *
 * @param _actionType The ActionType to free.
 */
static void freeNs0ActionTypeType(enum full_ns0_actionType *_actionType);

#endif
#ifndef DEF_full_ns0_node_H
#define DEF_full_ns0_node_H

/**
 * (no documentation provided)
 */
struct full_ns0_node {


  /**
   * (no documentation provided)
   */
  xmlChar *type;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeIDString;
};

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xml_read_full_ns0_node(xmlTextReaderPtr reader);

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_node(xmlTextWriterPtr writer, struct full_ns0_node *_node);

/**
 * Frees a Node.
 *
 * @param _node The Node to free.
 */
void free_full_ns0_node(struct full_ns0_node *_node);

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xmlTextReaderReadNs0NodeElement(xmlTextReaderPtr reader);

/**
 * Writes a Node to XML under element name "node".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeElement(xmlTextWriterPtr writer, struct full_ns0_node *_node);

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeElementNS(xmlTextWriterPtr writer, struct full_ns0_node *_node, int writeNamespaces);

/**
 * Frees the children of a Node.
 *
 * @param _node The Node whose children are to be free.
 */
static void freeNs0NodeElement(struct full_ns0_node *_node);

/**
 * Reads a Node from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
static struct full_ns0_node *xmlTextReaderReadNs0NodeType(xmlTextReaderPtr reader);

/**
 * Writes a Node to XML.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeType(xmlTextWriterPtr writer, struct full_ns0_node *_node);

/**
 * Frees the elements of a Node.
 *
 * @param _node The Node to free.
 */
static void freeNs0NodeType(struct full_ns0_node *_node);

#endif /* DEF_full_ns0_node_H */
#ifndef DEF_full_ns0_nodeConnector_H
#define DEF_full_ns0_nodeConnector_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeConnector {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *nodeConnectorNode;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeConnectorIDString;

  /**
   * (no documentation provided)
   */
  xmlChar *type;
};

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xml_read_full_ns0_nodeConnector(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnector(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Frees a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
void free_full_ns0_nodeConnector(struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector, int writeNamespaces);

/**
 * Frees the children of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector whose children are to be free.
 */
static void freeNs0NodeConnectorElement(struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Reads a NodeConnector from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
static struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnector to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorType(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector);

/**
 * Frees the elements of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
static void freeNs0NodeConnectorType(struct full_ns0_nodeConnector *_nodeConnector);

#endif /* DEF_full_ns0_nodeConnector_H */
#ifndef DEF_full_ns0_nodeTable_H
#define DEF_full_ns0_nodeTable_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeTable {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *nodeTableNode;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeTableIDString;
};

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xml_read_full_ns0_nodeTable(xmlTextReaderPtr reader);

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeTable(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable);

/**
 * Frees a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
void free_full_ns0_nodeTable(struct full_ns0_nodeTable *_nodeTable);

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableElement(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable);

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable, int writeNamespaces);

/**
 * Frees the children of a NodeTable.
 *
 * @param _nodeTable The NodeTable whose children are to be free.
 */
static void freeNs0NodeTableElement(struct full_ns0_nodeTable *_nodeTable);

/**
 * Reads a NodeTable from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
static struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableType(xmlTextReaderPtr reader);

/**
 * Writes a NodeTable to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableType(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable);

/**
 * Frees the elements of a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
static void freeNs0NodeTableType(struct full_ns0_nodeTable *_nodeTable);

#endif /* DEF_full_ns0_nodeTable_H */
#ifndef DEF_full_ns0_flow_H
#define DEF_full_ns0_flow_H

/**
 * (no documentation provided)
 */
struct full_ns0_flow {


  /**
   * (no documentation provided)
   */
  long id;

  /**
   * (no documentation provided)
   */
  struct full_ns0_action *actions;

  /**
   * Size of the actions array.
   */
  int _sizeof_actions;

  /**
   * (no documentation provided)
   */
  short priority;

  /**
   * (no documentation provided)
   */
  struct full_ns0_match *match;

  /**
   * (no documentation provided)
   */
  short idleTimeout;

  /**
   * (no documentation provided)
   */
  short hardTimeout;
};

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xml_read_full_ns0_flow(xmlTextReaderPtr reader);

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flow(xmlTextWriterPtr writer, struct full_ns0_flow *_flow);

/**
 * Frees a Flow.
 *
 * @param _flow The Flow to free.
 */
void free_full_ns0_flow(struct full_ns0_flow *_flow);

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xmlTextReaderReadNs0FlowElement(xmlTextReaderPtr reader);

/**
 * Writes a Flow to XML under element name "flow".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowElement(xmlTextWriterPtr writer, struct full_ns0_flow *_flow);

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowElementNS(xmlTextWriterPtr writer, struct full_ns0_flow *_flow, int writeNamespaces);

/**
 * Frees the children of a Flow.
 *
 * @param _flow The Flow whose children are to be free.
 */
static void freeNs0FlowElement(struct full_ns0_flow *_flow);

/**
 * Reads a Flow from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
static struct full_ns0_flow *xmlTextReaderReadNs0FlowType(xmlTextReaderPtr reader);

/**
 * Writes a Flow to XML.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowType(xmlTextWriterPtr writer, struct full_ns0_flow *_flow);

/**
 * Frees the elements of a Flow.
 *
 * @param _flow The Flow to free.
 */
static void freeNs0FlowType(struct full_ns0_flow *_flow);

#endif /* DEF_full_ns0_flow_H */
#ifndef DEF_full_ns0_match_H
#define DEF_full_ns0_match_H

/**
 * (no documentation provided)
 */
struct full_ns0_match {


  /**
   * (no documentation provided)
   */
  struct full_ns0_matchField *matchFields;

  /**
   * Size of the matchFields array.
   */
  int _sizeof_matchFields;
};

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xml_read_full_ns0_match(xmlTextReaderPtr reader);

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_match(xmlTextWriterPtr writer, struct full_ns0_match *_match);

/**
 * Frees a Match.
 *
 * @param _match The Match to free.
 */
void free_full_ns0_match(struct full_ns0_match *_match);

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xmlTextReaderReadNs0MatchElement(xmlTextReaderPtr reader);

/**
 * Writes a Match to XML under element name "match".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchElement(xmlTextWriterPtr writer, struct full_ns0_match *_match);

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchElementNS(xmlTextWriterPtr writer, struct full_ns0_match *_match, int writeNamespaces);

/**
 * Frees the children of a Match.
 *
 * @param _match The Match whose children are to be free.
 */
static void freeNs0MatchElement(struct full_ns0_match *_match);

/**
 * Reads a Match from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
static struct full_ns0_match *xmlTextReaderReadNs0MatchType(xmlTextReaderPtr reader);

/**
 * Writes a Match to XML.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchType(xmlTextWriterPtr writer, struct full_ns0_match *_match);

/**
 * Frees the elements of a Match.
 *
 * @param _match The Match to free.
 */
static void freeNs0MatchType(struct full_ns0_match *_match);

#endif /* DEF_full_ns0_match_H */
#ifndef DEF_full_ns0_matchField_H
#define DEF_full_ns0_matchField_H

/**
 * (no documentation provided)
 */
struct full_ns0_matchField {

};

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xml_read_full_ns0_matchField(xmlTextReaderPtr reader);

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_matchField(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField);

/**
 * Frees a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
void free_full_ns0_matchField(struct full_ns0_matchField *_matchField);

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldElement(xmlTextReaderPtr reader);

/**
 * Writes a MatchField to XML under element name "matchField".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchFieldElement(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField);

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchFieldElementNS(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField, int writeNamespaces);

/**
 * Frees the children of a MatchField.
 *
 * @param _matchField The MatchField whose children are to be free.
 */
static void freeNs0MatchFieldElement(struct full_ns0_matchField *_matchField);

/**
 * Reads a MatchField from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
static struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldType(xmlTextReaderPtr reader);

/**
 * Writes a MatchField to XML.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MatchFieldType(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField);

/**
 * Frees the elements of a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
static void freeNs0MatchFieldType(struct full_ns0_matchField *_matchField);

#endif /* DEF_full_ns0_matchField_H */
#ifndef DEF_full_ns0_flowOnNode_H
#define DEF_full_ns0_flowOnNode_H

/**
 * (no documentation provided)
 */
struct full_ns0_flowOnNode {


  /**
   * (no documentation provided)
   */
  long packetCount;

  /**
   * (no documentation provided)
   */
  struct full_ns0_flow *flow;

  /**
   * (no documentation provided)
   */
  unsigned char tableId;

  /**
   * (no documentation provided)
   */
  long byteCount;

  /**
   * (no documentation provided)
   */
  int durationNanoseconds;

  /**
   * (no documentation provided)
   */
  int durationSeconds;
};

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xml_read_full_ns0_flowOnNode(xmlTextReaderPtr reader);

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flowOnNode(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Frees a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
void free_full_ns0_flowOnNode(struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowStatElement(xmlTextReaderPtr reader);

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatElement(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatElementNS(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode, int writeNamespaces);

/**
 * Frees the children of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode whose children are to be free.
 */
static void freeNs0FlowStatElement(struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Reads a FlowOnNode from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
static struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowOnNodeType(xmlTextReaderPtr reader);

/**
 * Writes a FlowOnNode to XML.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowOnNodeType(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode);

/**
 * Frees the elements of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
static void freeNs0FlowOnNodeType(struct full_ns0_flowOnNode *_flowOnNode);

#endif /* DEF_full_ns0_flowOnNode_H */
#ifndef DEF_full_ns0_nodeConnectorStatistics_H
#define DEF_full_ns0_nodeConnectorStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeConnectorStatistics {


  /**
   * (no documentation provided)
   */
  long receiveDrops;

  /**
   * (no documentation provided)
   */
  long receiveFrameError;

  /**
   * (no documentation provided)
   */
  long receiveErrors;

  /**
   * (no documentation provided)
   */
  long receivePackets;

  /**
   * (no documentation provided)
   */
  long receiveBytes;

  /**
   * (no documentation provided)
   */
  long receiveCrcError;

  /**
   * (no documentation provided)
   */
  long transmitPackets;

  /**
   * (no documentation provided)
   */
  long receiveOverRunError;

  /**
   * (no documentation provided)
   */
  long transmitErrors;

  /**
   * (no documentation provided)
   */
  long transmitDrops;

  /**
   * (no documentation provided)
   */
  long transmitBytes;

  /**
   * (no documentation provided)
   */
  long collisionCount;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *nodeConnector;
};

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xml_read_full_ns0_nodeConnectorStatistics(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnectorStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Frees a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
void free_full_ns0_nodeConnectorStatistics(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics, int writeNamespaces);

/**
 * Frees the children of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics whose children are to be free.
 */
static void freeNs0NodeConnectorStatisticsElement(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Reads a NodeConnectorStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

/**
 * Frees the elements of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
static void freeNs0NodeConnectorStatisticsType(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics);

#endif /* DEF_full_ns0_nodeConnectorStatistics_H */
#ifndef DEF_full_ns0_nodeTableStatistics_H
#define DEF_full_ns0_nodeTableStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeTableStatistics {


  /**
   * (no documentation provided)
   */
  int maximumEntries;

  /**
   * (no documentation provided)
   */
  int activeCount;

  /**
   * (no documentation provided)
   */
  long lookupCount;

  /**
   * (no documentation provided)
   */
  long matchedCount;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeTable *nodeTable;

  /**
   * (no documentation provided)
   */
  xmlChar *name;
};

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xml_read_full_ns0_nodeTableStatistics(xmlTextReaderPtr reader);

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeTableStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Frees a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
void free_full_ns0_nodeTableStatistics(struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics, int writeNamespaces);

/**
 * Frees the children of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics whose children are to be free.
 */
static void freeNs0NodeTableStatisticsElement(struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Reads a NodeTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a NodeTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

/**
 * Frees the elements of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
static void freeNs0NodeTableStatisticsType(struct full_ns0_nodeTableStatistics *_nodeTableStatistics);

#endif /* DEF_full_ns0_nodeTableStatistics_H */
#ifndef DEF_full_ns0_allFlowStatistics_H
#define DEF_full_ns0_allFlowStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_allFlowStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_flowStatistics *flowStatistics;

  /**
   * Size of the flowStatistics array.
   */
  int _sizeof_flowStatistics;
};

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xml_read_full_ns0_allFlowStatistics(xmlTextReaderPtr reader);

/**
 * Writes a AllFlowStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_allFlowStatistics(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Frees a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
void free_full_ns0_allFlowStatistics(struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a AllFlowStatistics to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Writes a AllFlowStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics, int writeNamespaces);

/**
 * Frees the children of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Reads a AllFlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
static struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0AllFlowStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a AllFlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics);

/**
 * Frees the elements of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
static void freeNs0AllFlowStatisticsType(struct full_ns0_allFlowStatistics *_allFlowStatistics);

#endif /* DEF_full_ns0_allFlowStatistics_H */
#ifndef DEF_full_ns0_allPortStatistics_H
#define DEF_full_ns0_allPortStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_allPortStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_portStatistics *portStatistics;

  /**
   * Size of the portStatistics array.
   */
  int _sizeof_portStatistics;
};

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xml_read_full_ns0_allPortStatistics(xmlTextReaderPtr reader);

/**
 * Writes a AllPortStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_allPortStatistics(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Frees a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
void free_full_ns0_allPortStatistics(struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a AllPortStatistics to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Writes a AllPortStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics, int writeNamespaces);

/**
 * Frees the children of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Reads a AllPortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
static struct full_ns0_allPortStatistics *xmlTextReaderReadNs0AllPortStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a AllPortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllPortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics);

/**
 * Frees the elements of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
static void freeNs0AllPortStatisticsType(struct full_ns0_allPortStatistics *_allPortStatistics);

#endif /* DEF_full_ns0_allPortStatistics_H */
#ifndef DEF_full_ns0_allTableStatistics_H
#define DEF_full_ns0_allTableStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_allTableStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_tableStatistics *tableStatistics;

  /**
   * Size of the tableStatistics array.
   */
  int _sizeof_tableStatistics;
};

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xml_read_full_ns0_allTableStatistics(xmlTextReaderPtr reader);

/**
 * Writes a AllTableStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_allTableStatistics(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Frees a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
void free_full_ns0_allTableStatistics(struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a AllTableStatistics to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Writes a AllTableStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics, int writeNamespaces);

/**
 * Frees the children of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Reads a AllTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
static struct full_ns0_allTableStatistics *xmlTextReaderReadNs0AllTableStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a AllTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AllTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics);

/**
 * Frees the elements of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
static void freeNs0AllTableStatisticsType(struct full_ns0_allTableStatistics *_allTableStatistics);

#endif /* DEF_full_ns0_allTableStatistics_H */
#ifndef DEF_full_ns0_flowStatistics_H
#define DEF_full_ns0_flowStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_flowStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   */
  struct full_ns0_flowOnNode *flowStatistic;

  /**
   * Size of the flowStatistic array.
   */
  int _sizeof_flowStatistic;
};

/**
 * Reads a FlowStatistics element from XML. The element to be read is "nodeFlowStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xml_read_full_ns0_flowStatistics(xmlTextReaderPtr reader);

/**
 * Writes a FlowStatistics to XML under element name "nodeFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flowStatistics(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Frees a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
void free_full_ns0_flowStatistics(struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Reads a FlowStatistics element from XML. The element to be read is "nodeFlowStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xmlTextReaderReadNs0NodeFlowStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a FlowStatistics to XML under element name "nodeFlowStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeFlowStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Writes a FlowStatistics to XML under element name "nodeFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeFlowStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics, int writeNamespaces);

/**
 * Frees the children of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics whose children are to be free.
 */
static void freeNs0NodeFlowStatisticsElement(struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Reads a FlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
static struct full_ns0_flowStatistics *xmlTextReaderReadNs0FlowStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a FlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics);

/**
 * Frees the elements of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
static void freeNs0FlowStatisticsType(struct full_ns0_flowStatistics *_flowStatistics);

#endif /* DEF_full_ns0_flowStatistics_H */
#ifndef DEF_full_ns0_portStatistics_H
#define DEF_full_ns0_portStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_portStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnectorStatistics *portStatistic;

  /**
   * Size of the portStatistic array.
   */
  int _sizeof_portStatistic;
};

/**
 * Reads a PortStatistics element from XML. The element to be read is "nodePortStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xml_read_full_ns0_portStatistics(xmlTextReaderPtr reader);

/**
 * Writes a PortStatistics to XML under element name "nodePortStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_portStatistics(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics);

/**
 * Frees a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
void free_full_ns0_portStatistics(struct full_ns0_portStatistics *_portStatistics);

/**
 * Reads a PortStatistics element from XML. The element to be read is "nodePortStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xmlTextReaderReadNs0NodePortStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a PortStatistics to XML under element name "nodePortStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePortStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics);

/**
 * Writes a PortStatistics to XML under element name "nodePortStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePortStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics, int writeNamespaces);

/**
 * Frees the children of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics whose children are to be free.
 */
static void freeNs0NodePortStatisticsElement(struct full_ns0_portStatistics *_portStatistics);

/**
 * Reads a PortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
static struct full_ns0_portStatistics *xmlTextReaderReadNs0PortStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a PortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics);

/**
 * Frees the elements of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
static void freeNs0PortStatisticsType(struct full_ns0_portStatistics *_portStatistics);

#endif /* DEF_full_ns0_portStatistics_H */
#ifndef DEF_full_ns0_tableStatistics_H
#define DEF_full_ns0_tableStatistics_H

/**
 * (no documentation provided)
 */
struct full_ns0_tableStatistics {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeTableStatistics *tableStatistic;

  /**
   * Size of the tableStatistic array.
   */
  int _sizeof_tableStatistic;
};

/**
 * Reads a TableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xml_read_full_ns0_tableStatistics(xmlTextReaderPtr reader);

/**
 * Writes a TableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_tableStatistics(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Frees a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
void free_full_ns0_tableStatistics(struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Reads a TableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xmlTextReaderReadNs0NodeTableStatisticsElement(xmlTextReaderPtr reader);

/**
 * Writes a TableStatistics to XML under element name "nodeTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Writes a TableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics, int writeNamespaces);

/**
 * Frees the children of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics whose children are to be free.
 */
static void freeNs0NodeTableStatisticsElement(struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Reads a TableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
static struct full_ns0_tableStatistics *xmlTextReaderReadNs0TableStatisticsType(xmlTextReaderPtr reader);

/**
 * Writes a TableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics);

/**
 * Frees the elements of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
static void freeNs0TableStatisticsType(struct full_ns0_tableStatistics *_tableStatistics);

#endif /* DEF_full_ns0_tableStatistics_H */
#ifndef DEF_full_ns0_actionType_M
#define DEF_full_ns0_actionType_M

/**
 * Reads a ActionType from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ActionType, or NULL if unable to be read.
 */
static enum full_ns0_actionType *xmlTextReaderReadNs0ActionTypeType(xmlTextReaderPtr reader) {
  xmlChar *enumValue = xmlTextReaderReadEntireNodeValue(reader);
  enum full_ns0_actionType *value = calloc(1, sizeof(enum full_ns0_actionType));
  if (enumValue != NULL) {
    if (xmlStrcmp(enumValue, BAD_CAST "DROP") == 0) {
      *value = FULL_NS0_ACTIONTYPE_DROP;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "LOOPBACK") == 0) {
      *value = FULL_NS0_ACTIONTYPE_LOOPBACK;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "FLOOD") == 0) {
      *value = FULL_NS0_ACTIONTYPE_FLOOD;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "FLOOD_ALL") == 0) {
      *value = FULL_NS0_ACTIONTYPE_FLOOD_ALL;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "CONTROLLER") == 0) {
      *value = FULL_NS0_ACTIONTYPE_CONTROLLER;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "INTERFACE") == 0) {
      *value = FULL_NS0_ACTIONTYPE_INTERFACE;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SW_PATH") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SW_PATH;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "HW_PATH") == 0) {
      *value = FULL_NS0_ACTIONTYPE_HW_PATH;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "OUTPUT") == 0) {
      *value = FULL_NS0_ACTIONTYPE_OUTPUT;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "ENQUEUE") == 0) {
      *value = FULL_NS0_ACTIONTYPE_ENQUEUE;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_DL_SRC") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_DL_SRC;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_DL_DST") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_DL_DST;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_VLAN_ID") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_VLAN_ID;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_VLAN_PCP") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_VLAN_PCP;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_VLAN_CFI") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_VLAN_CFI;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "POP_VLAN") == 0) {
      *value = FULL_NS0_ACTIONTYPE_POP_VLAN;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "PUSH_VLAN") == 0) {
      *value = FULL_NS0_ACTIONTYPE_PUSH_VLAN;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_DL_TYPE") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_DL_TYPE;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NW_SRC") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NW_SRC;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NW_DST") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NW_DST;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NW_TOS") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NW_TOS;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_TP_SRC") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_TP_SRC;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_TP_DST") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_TP_DST;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NEXT_HOP") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NEXT_HOP;
      free(enumValue);
      return value;
    }
#if DEBUG_ENUNCIATE
    printf("Attempt to read enum value failed: %s doesn't match an enum value.\n", enumValue);
#endif
  }
#if DEBUG_ENUNCIATE
  else {
    printf("Attempt to read enum value failed: NULL value.\n");
  }
#endif

  return NULL;
}

/**
 * Writes a ActionType to XML.
 *
 * @param writer The XML writer.
 * @param _actionType The ActionType to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ActionTypeType(xmlTextWriterPtr writer, enum full_ns0_actionType *_actionType) {
  switch (*_actionType) {
    case FULL_NS0_ACTIONTYPE_DROP:
      return xmlTextWriterWriteString(writer, BAD_CAST "DROP");
    case FULL_NS0_ACTIONTYPE_LOOPBACK:
      return xmlTextWriterWriteString(writer, BAD_CAST "LOOPBACK");
    case FULL_NS0_ACTIONTYPE_FLOOD:
      return xmlTextWriterWriteString(writer, BAD_CAST "FLOOD");
    case FULL_NS0_ACTIONTYPE_FLOOD_ALL:
      return xmlTextWriterWriteString(writer, BAD_CAST "FLOOD_ALL");
    case FULL_NS0_ACTIONTYPE_CONTROLLER:
      return xmlTextWriterWriteString(writer, BAD_CAST "CONTROLLER");
    case FULL_NS0_ACTIONTYPE_INTERFACE:
      return xmlTextWriterWriteString(writer, BAD_CAST "INTERFACE");
    case FULL_NS0_ACTIONTYPE_SW_PATH:
      return xmlTextWriterWriteString(writer, BAD_CAST "SW_PATH");
    case FULL_NS0_ACTIONTYPE_HW_PATH:
      return xmlTextWriterWriteString(writer, BAD_CAST "HW_PATH");
    case FULL_NS0_ACTIONTYPE_OUTPUT:
      return xmlTextWriterWriteString(writer, BAD_CAST "OUTPUT");
    case FULL_NS0_ACTIONTYPE_ENQUEUE:
      return xmlTextWriterWriteString(writer, BAD_CAST "ENQUEUE");
    case FULL_NS0_ACTIONTYPE_SET_DL_SRC:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_DL_SRC");
    case FULL_NS0_ACTIONTYPE_SET_DL_DST:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_DL_DST");
    case FULL_NS0_ACTIONTYPE_SET_VLAN_ID:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_VLAN_ID");
    case FULL_NS0_ACTIONTYPE_SET_VLAN_PCP:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_VLAN_PCP");
    case FULL_NS0_ACTIONTYPE_SET_VLAN_CFI:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_VLAN_CFI");
    case FULL_NS0_ACTIONTYPE_POP_VLAN:
      return xmlTextWriterWriteString(writer, BAD_CAST "POP_VLAN");
    case FULL_NS0_ACTIONTYPE_PUSH_VLAN:
      return xmlTextWriterWriteString(writer, BAD_CAST "PUSH_VLAN");
    case FULL_NS0_ACTIONTYPE_SET_DL_TYPE:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_DL_TYPE");
    case FULL_NS0_ACTIONTYPE_SET_NW_SRC:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NW_SRC");
    case FULL_NS0_ACTIONTYPE_SET_NW_DST:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NW_DST");
    case FULL_NS0_ACTIONTYPE_SET_NW_TOS:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NW_TOS");
    case FULL_NS0_ACTIONTYPE_SET_TP_SRC:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_TP_SRC");
    case FULL_NS0_ACTIONTYPE_SET_TP_DST:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_TP_DST");
    case FULL_NS0_ACTIONTYPE_SET_NEXT_HOP:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NEXT_HOP");
  }

#if DEBUG_ENUNCIATE
  printf("Unable to write enum value (no valid value found).\n");
#endif
  return -1;
}

/**
 * Frees a ActionType.
 *
 * @param _actionType The ActionType to free.
 */
static void freeNs0ActionTypeType(enum full_ns0_actionType *_actionType) {
  //no-op
}
#endif /* DEF_full_ns0_actionType_M */
#ifndef DEF_full_ns0_node_M
#define DEF_full_ns0_node_M

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xml_read_full_ns0_node(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeElement(reader);
}

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_node(xmlTextWriterPtr writer, struct full_ns0_node *_node) {
  return xmlTextWriterWriteNs0NodeElementNS(writer, _node, 1);
}

/**
 * Frees a Node.
 *
 * @param _node The Node to free.
 */
void free_full_ns0_node(struct full_ns0_node *_node) {
  freeNs0NodeType(_node);
  free(_node);
}

/**
 * Reads a Node element from XML. The element to be read is "node", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Node, or NULL in case of error.
 */
struct full_ns0_node *xmlTextReaderReadNs0NodeElement(xmlTextReaderPtr reader) {
  struct full_ns0_node *_node = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}node.\n");
#endif
    _node = xmlTextReaderReadNs0NodeType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_node == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}node failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}node failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _node;
}

/**
 * Writes a Node to XML under element name "node".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeElement(xmlTextWriterPtr writer, struct full_ns0_node *_node) {
  return xmlTextWriterWriteNs0NodeElementNS(writer, _node, 0);
}

/**
 * Writes a Node to XML under element name "node".
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeElementNS(xmlTextWriterPtr writer, struct full_ns0_node *_node, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}node. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}node for root element {}node...\n");
#endif
  status = xmlTextWriterWriteNs0NodeType(writer, _node);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}node. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}node. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Node.
 *
 * @param _node The Node whose children are to be free.
 */
static void freeNs0NodeElement(struct full_ns0_node *_node) {
  freeNs0NodeType(_node);
}

/**
 * Reads a Node from XML. The reader is assumed to be at the start element.
 *
 * @return the Node, or NULL in case of error.
 */
static struct full_ns0_node *xmlTextReaderReadNs0NodeType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_node *_node = calloc(1, sizeof(struct full_ns0_node));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeType(_node);
        free(_node);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeType(_node);
          free(_node);
          return NULL;
        }

        _node->type = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeType(_node);
          free(_node);
          return NULL;
        }

        _node->nodeIDString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}node.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}node. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _node;
}

/**
 * Writes a Node to XML.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeType(xmlTextWriterPtr writer, struct full_ns0_node *_node) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_node->type != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_node->type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_node->nodeIDString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_node->nodeIDString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Node.
 *
 * @param _node The Node to free.
 */
static void freeNs0NodeType(struct full_ns0_node *_node) {
  int i;
  if (_node->type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor type of type full_ns0_node...\n");
#endif
    freeXsStringType(_node->type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor type of type full_ns0_node...\n");
#endif
    free(_node->type);
  }
  if (_node->nodeIDString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeIDString of type full_ns0_node...\n");
#endif
    freeXsStringType(_node->nodeIDString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeIDString of type full_ns0_node...\n");
#endif
    free(_node->nodeIDString);
  }
}
#endif /* DEF_full_ns0_node_M */
#ifndef DEF_full_ns0_nodeConnector_M
#define DEF_full_ns0_nodeConnector_M

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xml_read_full_ns0_nodeConnector(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorElement(reader);
}

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnector(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector) {
  return xmlTextWriterWriteNs0NodeConnectorElementNS(writer, _nodeConnector, 1);
}

/**
 * Frees a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
void free_full_ns0_nodeConnector(struct full_ns0_nodeConnector *_nodeConnector) {
  freeNs0NodeConnectorType(_nodeConnector);
  free(_nodeConnector);
}

/**
 * Reads a NodeConnector element from XML. The element to be read is "nodeConnector", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnector, or NULL in case of error.
 */
struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnector *_nodeConnector = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnector.\n");
#endif
    _nodeConnector = xmlTextReaderReadNs0NodeConnectorType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnector == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnector failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnector failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnector;
}

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector) {
  return xmlTextWriterWriteNs0NodeConnectorElementNS(writer, _nodeConnector, 0);
}

/**
 * Writes a NodeConnector to XML under element name "nodeConnector".
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnector. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeConnector for root element {}nodeConnector...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorType(writer, _nodeConnector);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnector. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnector. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector whose children are to be free.
 */
static void freeNs0NodeConnectorElement(struct full_ns0_nodeConnector *_nodeConnector) {
  freeNs0NodeConnectorType(_nodeConnector);
}

/**
 * Reads a NodeConnector from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnector, or NULL in case of error.
 */
static struct full_ns0_nodeConnector *xmlTextReaderReadNs0NodeConnectorType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnector *_nodeConnector = calloc(1, sizeof(struct full_ns0_nodeConnector));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorType(_nodeConnector);
        free(_nodeConnector);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}node of type {}node.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}node of type {}node.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorType(_nodeConnector);
          free(_nodeConnector);
          return NULL;
        }

        _nodeConnector->nodeConnectorNode = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorType(_nodeConnector);
          free(_nodeConnector);
          return NULL;
        }

        _nodeConnector->nodeConnectorIDString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorType(_nodeConnector);
          free(_nodeConnector);
          return NULL;
        }

        _nodeConnector->type = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeConnector.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnector. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnector;
}

/**
 * Writes a NodeConnector to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorType(xmlTextWriterPtr writer, struct full_ns0_nodeConnector *_nodeConnector) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_nodeConnector->nodeConnectorNode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}node for element {}node...\n");
#endif
    status = xmlTextWriterWriteNs0NodeType(writer, (_nodeConnector->nodeConnectorNode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}node for element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeConnector->nodeConnectorIDString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_nodeConnector->nodeConnectorIDString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeConnector->type != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}type...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_nodeConnector->type));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
static void freeNs0NodeConnectorType(struct full_ns0_nodeConnector *_nodeConnector) {
  int i;
  if (_nodeConnector->nodeConnectorNode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnectorNode of type full_ns0_nodeConnector...\n");
#endif
    freeNs0NodeType(_nodeConnector->nodeConnectorNode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorNode of type full_ns0_nodeConnector...\n");
#endif
    free(_nodeConnector->nodeConnectorNode);
  }
  if (_nodeConnector->nodeConnectorIDString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnectorIDString of type full_ns0_nodeConnector...\n");
#endif
    freeXsStringType(_nodeConnector->nodeConnectorIDString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorIDString of type full_ns0_nodeConnector...\n");
#endif
    free(_nodeConnector->nodeConnectorIDString);
  }
  if (_nodeConnector->type != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor type of type full_ns0_nodeConnector...\n");
#endif
    freeXsStringType(_nodeConnector->type);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor type of type full_ns0_nodeConnector...\n");
#endif
    free(_nodeConnector->type);
  }
}
#endif /* DEF_full_ns0_nodeConnector_M */
#ifndef DEF_full_ns0_nodeTable_M
#define DEF_full_ns0_nodeTable_M

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xml_read_full_ns0_nodeTable(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeTableElement(reader);
}

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeTable(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable) {
  return xmlTextWriterWriteNs0NodeTableElementNS(writer, _nodeTable, 1);
}

/**
 * Frees a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
void free_full_ns0_nodeTable(struct full_ns0_nodeTable *_nodeTable) {
  freeNs0NodeTableType(_nodeTable);
  free(_nodeTable);
}

/**
 * Reads a NodeTable element from XML. The element to be read is "nodeTable", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeTable, or NULL in case of error.
 */
struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeTable *_nodeTable = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeTable.\n");
#endif
    _nodeTable = xmlTextReaderReadNs0NodeTableType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeTable == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeTable failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeTable failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeTable;
}

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableElement(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable) {
  return xmlTextWriterWriteNs0NodeTableElementNS(writer, _nodeTable, 0);
}

/**
 * Writes a NodeTable to XML under element name "nodeTable".
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeTable. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeTable for root element {}nodeTable...\n");
#endif
  status = xmlTextWriterWriteNs0NodeTableType(writer, _nodeTable);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeTable. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeTable. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeTable.
 *
 * @param _nodeTable The NodeTable whose children are to be free.
 */
static void freeNs0NodeTableElement(struct full_ns0_nodeTable *_nodeTable) {
  freeNs0NodeTableType(_nodeTable);
}

/**
 * Reads a NodeTable from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeTable, or NULL in case of error.
 */
static struct full_ns0_nodeTable *xmlTextReaderReadNs0NodeTableType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeTable *_nodeTable = calloc(1, sizeof(struct full_ns0_nodeTable));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeTableType(_nodeTable);
        free(_nodeTable);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}node of type {}node.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}node of type {}node.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableType(_nodeTable);
          free(_nodeTable);
          return NULL;
        }

        _nodeTable->nodeTableNode = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableType(_nodeTable);
          free(_nodeTable);
          return NULL;
        }

        _nodeTable->nodeTableIDString = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeTable.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeTable. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeTable;
}

/**
 * Writes a NodeTable to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeTableType(xmlTextWriterPtr writer, struct full_ns0_nodeTable *_nodeTable) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_nodeTable->nodeTableNode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}node for element {}node...\n");
#endif
    status = xmlTextWriterWriteNs0NodeType(writer, (_nodeTable->nodeTableNode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}node for element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeTable->nodeTableIDString != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_nodeTable->nodeTableIDString));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeTable.
 *
 * @param _nodeTable The NodeTable to free.
 */
static void freeNs0NodeTableType(struct full_ns0_nodeTable *_nodeTable) {
  int i;
  if (_nodeTable->nodeTableNode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeTableNode of type full_ns0_nodeTable...\n");
#endif
    freeNs0NodeType(_nodeTable->nodeTableNode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeTableNode of type full_ns0_nodeTable...\n");
#endif
    free(_nodeTable->nodeTableNode);
  }
  if (_nodeTable->nodeTableIDString != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeTableIDString of type full_ns0_nodeTable...\n");
#endif
    freeXsStringType(_nodeTable->nodeTableIDString);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeTableIDString of type full_ns0_nodeTable...\n");
#endif
    free(_nodeTable->nodeTableIDString);
  }
}
#endif /* DEF_full_ns0_nodeTable_M */
#ifndef DEF_full_ns0_flow_M
#define DEF_full_ns0_flow_M

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xml_read_full_ns0_flow(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FlowElement(reader);
}

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flow(xmlTextWriterPtr writer, struct full_ns0_flow *_flow) {
  return xmlTextWriterWriteNs0FlowElementNS(writer, _flow, 1);
}

/**
 * Frees a Flow.
 *
 * @param _flow The Flow to free.
 */
void free_full_ns0_flow(struct full_ns0_flow *_flow) {
  freeNs0FlowType(_flow);
  free(_flow);
}

/**
 * Reads a Flow element from XML. The element to be read is "flow", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Flow, or NULL in case of error.
 */
struct full_ns0_flow *xmlTextReaderReadNs0FlowElement(xmlTextReaderPtr reader) {
  struct full_ns0_flow *_flow = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}flow.\n");
#endif
    _flow = xmlTextReaderReadNs0FlowType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flow == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}flow failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}flow failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flow;
}

/**
 * Writes a Flow to XML under element name "flow".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowElement(xmlTextWriterPtr writer, struct full_ns0_flow *_flow) {
  return xmlTextWriterWriteNs0FlowElementNS(writer, _flow, 0);
}

/**
 * Writes a Flow to XML under element name "flow".
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowElementNS(xmlTextWriterPtr writer, struct full_ns0_flow *_flow, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}flow. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flow for root element {}flow...\n");
#endif
  status = xmlTextWriterWriteNs0FlowType(writer, _flow);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}flow. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}flow. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Flow.
 *
 * @param _flow The Flow whose children are to be free.
 */
static void freeNs0FlowElement(struct full_ns0_flow *_flow) {
  freeNs0FlowType(_flow);
}

/**
 * Reads a Flow from XML. The reader is assumed to be at the start element.
 *
 * @return the Flow, or NULL in case of error.
 */
static struct full_ns0_flow *xmlTextReaderReadNs0FlowType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flow *_flow = calloc(1, sizeof(struct full_ns0_flow));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowType(_flow);
        free(_flow);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->id = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}actions of type {}action.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ActionType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}actions of type {}action.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->actions = realloc(_flow->actions, (_flow->_sizeof_actions + 1) * sizeof(struct full_ns0_action));
        memcpy(&(_flow->actions[_flow->_sizeof_actions++]), _child_accessor, sizeof(struct full_ns0_action));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "priority", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}priority of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}priority of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->priority = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}match of type {}match.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0MatchType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}match of type {}match.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->match = ((struct full_ns0_match*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "idleTimeout", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}idleTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}idleTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->idleTimeout = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "hardTimeout", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}hardTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}hardTimeout of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowType(_flow);
          free(_flow);
          return NULL;
        }

        _flow->hardTimeout = *((short*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flow.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flow. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flow;
}

/**
 * Writes a Flow to XML.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowType(xmlTextWriterPtr writer, struct full_ns0_flow *_flow) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_flow->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _flow->_sizeof_actions; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actions", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}action for element {}actions...\n");
#endif
    status = xmlTextWriterWriteNs0ActionType(writer, &(_flow->actions[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}action for element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "priority", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}priority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}priority...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_flow->priority));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}priority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}priority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flow->match != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}match. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}match for element {}match...\n");
#endif
    status = xmlTextWriterWriteNs0MatchType(writer, (_flow->match));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}match for element {}match. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}match. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "idleTimeout", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}idleTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}idleTimeout...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_flow->idleTimeout));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}idleTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}idleTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hardTimeout", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}hardTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}hardTimeout...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_flow->hardTimeout));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}hardTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}hardTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Flow.
 *
 * @param _flow The Flow to free.
 */
static void freeNs0FlowType(struct full_ns0_flow *_flow) {
  int i;
  if (_flow->actions != NULL) {
    for (i = 0; i < _flow->_sizeof_actions; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor actions[%i] of type full_ns0_flow...\n", i);
#endif
      freeNs0ActionType(&(_flow->actions[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor actions of type full_ns0_flow...\n");
#endif
    free(_flow->actions);
  }
  if (_flow->match != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor match of type full_ns0_flow...\n");
#endif
    freeNs0MatchType(_flow->match);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor match of type full_ns0_flow...\n");
#endif
    free(_flow->match);
  }
}
#endif /* DEF_full_ns0_flow_M */
#ifndef DEF_full_ns0_match_M
#define DEF_full_ns0_match_M

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xml_read_full_ns0_match(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0MatchElement(reader);
}

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_match(xmlTextWriterPtr writer, struct full_ns0_match *_match) {
  return xmlTextWriterWriteNs0MatchElementNS(writer, _match, 1);
}

/**
 * Frees a Match.
 *
 * @param _match The Match to free.
 */
void free_full_ns0_match(struct full_ns0_match *_match) {
  freeNs0MatchType(_match);
  free(_match);
}

/**
 * Reads a Match element from XML. The element to be read is "match", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Match, or NULL in case of error.
 */
struct full_ns0_match *xmlTextReaderReadNs0MatchElement(xmlTextReaderPtr reader) {
  struct full_ns0_match *_match = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}match.\n");
#endif
    _match = xmlTextReaderReadNs0MatchType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_match == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}match failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}match failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _match;
}

/**
 * Writes a Match to XML under element name "match".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchElement(xmlTextWriterPtr writer, struct full_ns0_match *_match) {
  return xmlTextWriterWriteNs0MatchElementNS(writer, _match, 0);
}

/**
 * Writes a Match to XML under element name "match".
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchElementNS(xmlTextWriterPtr writer, struct full_ns0_match *_match, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}match. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}match for root element {}match...\n");
#endif
  status = xmlTextWriterWriteNs0MatchType(writer, _match);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}match. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}match. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Match.
 *
 * @param _match The Match whose children are to be free.
 */
static void freeNs0MatchElement(struct full_ns0_match *_match) {
  freeNs0MatchType(_match);
}

/**
 * Reads a Match from XML. The reader is assumed to be at the start element.
 *
 * @return the Match, or NULL in case of error.
 */
static struct full_ns0_match *xmlTextReaderReadNs0MatchType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_match *_match = calloc(1, sizeof(struct full_ns0_match));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0MatchType(_match);
        free(_match);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}matchField of type {}matchField.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0MatchFieldType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}matchField of type {}matchField.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0MatchType(_match);
          free(_match);
          return NULL;
        }

        _match->matchFields = realloc(_match->matchFields, (_match->_sizeof_matchFields + 1) * sizeof(struct full_ns0_matchField));
        memcpy(&(_match->matchFields[_match->_sizeof_matchFields++]), _child_accessor, sizeof(struct full_ns0_matchField));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}match.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}match. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _match;
}

/**
 * Writes a Match to XML.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0MatchType(xmlTextWriterPtr writer, struct full_ns0_match *_match) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _match->_sizeof_matchFields; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}matchField. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}matchField for element {}matchField...\n");
#endif
    status = xmlTextWriterWriteNs0MatchFieldType(writer, &(_match->matchFields[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}matchField for element {}matchField. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}matchField. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Match.
 *
 * @param _match The Match to free.
 */
static void freeNs0MatchType(struct full_ns0_match *_match) {
  int i;
  if (_match->matchFields != NULL) {
    for (i = 0; i < _match->_sizeof_matchFields; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor matchFields[%i] of type full_ns0_match...\n", i);
#endif
      freeNs0MatchFieldType(&(_match->matchFields[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor matchFields of type full_ns0_match...\n");
#endif
    free(_match->matchFields);
  }
}
#endif /* DEF_full_ns0_match_M */
#ifndef DEF_full_ns0_matchField_M
#define DEF_full_ns0_matchField_M

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xml_read_full_ns0_matchField(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0MatchFieldElement(reader);
}

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_matchField(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField) {
  return xmlTextWriterWriteNs0MatchFieldElementNS(writer, _matchField, 1);
}

/**
 * Frees a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
void free_full_ns0_matchField(struct full_ns0_matchField *_matchField) {
  freeNs0MatchFieldType(_matchField);
  free(_matchField);
}

/**
 * Reads a MatchField element from XML. The element to be read is "matchField", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The MatchField, or NULL in case of error.
 */
struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldElement(xmlTextReaderPtr reader) {
  struct full_ns0_matchField *_matchField = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}matchField.\n");
#endif
    _matchField = xmlTextReaderReadNs0MatchFieldType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_matchField == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}matchField failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}matchField failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _matchField;
}

/**
 * Writes a MatchField to XML under element name "matchField".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchFieldElement(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField) {
  return xmlTextWriterWriteNs0MatchFieldElementNS(writer, _matchField, 0);
}

/**
 * Writes a MatchField to XML under element name "matchField".
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MatchFieldElementNS(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}matchField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}matchField for root element {}matchField...\n");
#endif
  status = xmlTextWriterWriteNs0MatchFieldType(writer, _matchField);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}matchField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}matchField. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a MatchField.
 *
 * @param _matchField The MatchField whose children are to be free.
 */
static void freeNs0MatchFieldElement(struct full_ns0_matchField *_matchField) {
  freeNs0MatchFieldType(_matchField);
}

/**
 * Reads a MatchField from XML. The reader is assumed to be at the start element.
 *
 * @return the MatchField, or NULL in case of error.
 */
static struct full_ns0_matchField *xmlTextReaderReadNs0MatchFieldType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_matchField *_matchField = calloc(1, sizeof(struct full_ns0_matchField));




  return _matchField;
}

/**
 * Writes a MatchField to XML.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0MatchFieldType(xmlTextWriterPtr writer, struct full_ns0_matchField *_matchField) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a MatchField.
 *
 * @param _matchField The MatchField to free.
 */
static void freeNs0MatchFieldType(struct full_ns0_matchField *_matchField) {
  int i;
}
#endif /* DEF_full_ns0_matchField_M */
#ifndef DEF_full_ns0_flowOnNode_M
#define DEF_full_ns0_flowOnNode_M

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xml_read_full_ns0_flowOnNode(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FlowStatElement(reader);
}

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flowOnNode(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode) {
  return xmlTextWriterWriteNs0FlowStatElementNS(writer, _flowOnNode, 1);
}

/**
 * Frees a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
void free_full_ns0_flowOnNode(struct full_ns0_flowOnNode *_flowOnNode) {
  freeNs0FlowOnNodeType(_flowOnNode);
  free(_flowOnNode);
}

/**
 * Reads a FlowOnNode element from XML. The element to be read is "FlowStat", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FlowOnNode, or NULL in case of error.
 */
struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowStatElement(xmlTextReaderPtr reader) {
  struct full_ns0_flowOnNode *_flowOnNode = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "FlowStat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}FlowStat.\n");
#endif
    _flowOnNode = xmlTextReaderReadNs0FlowOnNodeType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flowOnNode == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}FlowStat failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}FlowStat failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flowOnNode;
}

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowStatElement(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode) {
  return xmlTextWriterWriteNs0FlowStatElementNS(writer, _flowOnNode, 0);
}

/**
 * Writes a FlowOnNode to XML under element name "FlowStat".
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowStatElementNS(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "FlowStat", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}FlowStat. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flowOnNode for root element {}FlowStat...\n");
#endif
  status = xmlTextWriterWriteNs0FlowOnNodeType(writer, _flowOnNode);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}FlowStat. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}FlowStat. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode whose children are to be free.
 */
static void freeNs0FlowStatElement(struct full_ns0_flowOnNode *_flowOnNode) {
  freeNs0FlowOnNodeType(_flowOnNode);
}

/**
 * Reads a FlowOnNode from XML. The reader is assumed to be at the start element.
 *
 * @return the FlowOnNode, or NULL in case of error.
 */
static struct full_ns0_flowOnNode *xmlTextReaderReadNs0FlowOnNodeType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flowOnNode *_flowOnNode = calloc(1, sizeof(struct full_ns0_flowOnNode));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowOnNodeType(_flowOnNode);
        free(_flowOnNode);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "packetCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}packetCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}packetCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->packetCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flow of type {}flow.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0FlowType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flow of type {}flow.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->flow = ((struct full_ns0_flow*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tableId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tableId of type {http://www.w3.org/2001/XMLSchema}byte.\n");
#endif
        _child_accessor = xmlTextReaderReadXsByteType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tableId of type {http://www.w3.org/2001/XMLSchema}byte.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->tableId = *((unsigned char*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "byteCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}byteCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}byteCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->byteCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "durationNanoseconds", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}durationNanoseconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}durationNanoseconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->durationNanoseconds = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "durationSeconds", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}durationSeconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}durationSeconds of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowOnNodeType(_flowOnNode);
          free(_flowOnNode);
          return NULL;
        }

        _flowOnNode->durationSeconds = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flowOnNode.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flowOnNode. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flowOnNode;
}

/**
 * Writes a FlowOnNode to XML.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowOnNodeType(xmlTextWriterPtr writer, struct full_ns0_flowOnNode *_flowOnNode) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "packetCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}packetCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}packetCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_flowOnNode->packetCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}packetCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}packetCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowOnNode->flow != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flow. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}flow for element {}flow...\n");
#endif
    status = xmlTextWriterWriteNs0FlowType(writer, (_flowOnNode->flow));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}flow for element {}flow. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flow. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}byte for element {}tableId...\n");
#endif
    status = xmlTextWriterWriteXsByteType(writer, &(_flowOnNode->tableId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}byte for element {}tableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "byteCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}byteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}byteCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_flowOnNode->byteCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}byteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}byteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationNanoseconds", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}durationNanoseconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}durationNanoseconds...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_flowOnNode->durationNanoseconds));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}durationNanoseconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}durationNanoseconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationSeconds", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}durationSeconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}durationSeconds...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_flowOnNode->durationSeconds));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}durationSeconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}durationSeconds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a FlowOnNode.
 *
 * @param _flowOnNode The FlowOnNode to free.
 */
static void freeNs0FlowOnNodeType(struct full_ns0_flowOnNode *_flowOnNode) {
  int i;
  if (_flowOnNode->flow != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor flow of type full_ns0_flowOnNode...\n");
#endif
    freeNs0FlowType(_flowOnNode->flow);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor flow of type full_ns0_flowOnNode...\n");
#endif
    free(_flowOnNode->flow);
  }
}
#endif /* DEF_full_ns0_flowOnNode_M */
#ifndef DEF_full_ns0_nodeConnectorStatistics_M
#define DEF_full_ns0_nodeConnectorStatistics_M

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xml_read_full_ns0_nodeConnectorStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorStatisticsElement(reader);
}

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnectorStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  return xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(writer, _nodeConnectorStatistics, 1);
}

/**
 * Frees a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
void free_full_ns0_nodeConnectorStatistics(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
  free(_nodeConnectorStatistics);
}

/**
 * Reads a NodeConnectorStatistics element from XML. The element to be read is "nodeConnectorStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorStatistics, or NULL in case of error.
 */
struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectorStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnectorStatistics.\n");
#endif
    _nodeConnectorStatistics = xmlTextReaderReadNs0NodeConnectorStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnectorStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnectorStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnectorStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnectorStatistics;
}

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  return xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(writer, _nodeConnectorStatistics, 0);
}

/**
 * Writes a NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnectorStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeConnectorStatistics for root element {}nodeConnectorStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorStatisticsType(writer, _nodeConnectorStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnectorStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnectorStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics whose children are to be free.
 */
static void freeNs0NodeConnectorStatisticsElement(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
}

/**
 * Reads a NodeConnectorStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnectorStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorStatistics *xmlTextReaderReadNs0NodeConnectorStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics = calloc(1, sizeof(struct full_ns0_nodeConnectorStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
        free(_nodeConnectorStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveDrops", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveDrops = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveFrameError", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveFrameError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveFrameError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveFrameError = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveErrors", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveErrors = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receivePackets", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receivePackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receivePackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receivePackets = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveBytes", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveBytes = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveCrcError", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveCrcError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveCrcError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveCrcError = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitPackets", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitPackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitPackets of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitPackets = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "receiveOverRunError", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}receiveOverRunError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}receiveOverRunError of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->receiveOverRunError = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitErrors", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitErrors of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitErrors = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitDrops", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitDrops of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitDrops = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "transmitBytes", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}transmitBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}transmitBytes of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->transmitBytes = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "collisionCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}collisionCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}collisionCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->collisionCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnector of type {}nodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnector of type {}nodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorStatisticsType(_nodeConnectorStatistics);
          free(_nodeConnectorStatistics);
          return NULL;
        }

        _nodeConnectorStatistics->nodeConnector = ((struct full_ns0_nodeConnector*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeConnectorStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnectorStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnectorStatistics;
}

/**
 * Writes a NodeConnectorStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveDrops", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveDrops...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveDrops));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveFrameError", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveFrameError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveFrameError...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveFrameError));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveFrameError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveFrameError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveErrors", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveErrors...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveErrors));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receivePackets", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receivePackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receivePackets...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receivePackets));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receivePackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receivePackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveBytes", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveBytes...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveBytes));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveCrcError", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveCrcError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveCrcError...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveCrcError));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveCrcError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveCrcError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitPackets", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitPackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitPackets...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitPackets));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitPackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitPackets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveOverRunError", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}receiveOverRunError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}receiveOverRunError...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->receiveOverRunError));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}receiveOverRunError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}receiveOverRunError. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitErrors", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitErrors...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitErrors));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitErrors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitDrops", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitDrops...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitDrops));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitDrops. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitBytes", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}transmitBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}transmitBytes...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->transmitBytes));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}transmitBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}transmitBytes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "collisionCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}collisionCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}collisionCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeConnectorStatistics->collisionCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}collisionCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}collisionCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeConnectorStatistics->nodeConnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnector for element {}nodeConnector...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_nodeConnectorStatistics->nodeConnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnector for element {}nodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnectorStatistics.
 *
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to free.
 */
static void freeNs0NodeConnectorStatisticsType(struct full_ns0_nodeConnectorStatistics *_nodeConnectorStatistics) {
  int i;
  if (_nodeConnectorStatistics->nodeConnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnector of type full_ns0_nodeConnectorStatistics...\n");
#endif
    freeNs0NodeConnectorType(_nodeConnectorStatistics->nodeConnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnector of type full_ns0_nodeConnectorStatistics...\n");
#endif
    free(_nodeConnectorStatistics->nodeConnector);
  }
}
#endif /* DEF_full_ns0_nodeConnectorStatistics_M */
#ifndef DEF_full_ns0_nodeTableStatistics_M
#define DEF_full_ns0_nodeTableStatistics_M

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xml_read_full_ns0_nodeTableStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeTableStatisticsElement(reader);
}

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeTableStatistics(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  return xmlTextWriterWriteNs0NodeTableStatisticsElementNS(writer, _nodeTableStatistics, 1);
}

/**
 * Frees a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
void free_full_ns0_nodeTableStatistics(struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  freeNs0NodeTableStatisticsType(_nodeTableStatistics);
  free(_nodeTableStatistics);
}

/**
 * Reads a NodeTableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeTableStatistics, or NULL in case of error.
 */
struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeTableStatistics *_nodeTableStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeTableStatistics.\n");
#endif
    _nodeTableStatistics = xmlTextReaderReadNs0NodeTableStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeTableStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeTableStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeTableStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeTableStatistics;
}

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  return xmlTextWriterWriteNs0NodeTableStatisticsElementNS(writer, _nodeTableStatistics, 0);
}

/**
 * Writes a NodeTableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTableStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeTableStatistics for root element {}nodeTableStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0NodeTableStatisticsType(writer, _nodeTableStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics whose children are to be free.
 */
static void freeNs0NodeTableStatisticsElement(struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  freeNs0NodeTableStatisticsType(_nodeTableStatistics);
}

/**
 * Reads a NodeTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeTableStatistics, or NULL in case of error.
 */
static struct full_ns0_nodeTableStatistics *xmlTextReaderReadNs0NodeTableStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeTableStatistics *_nodeTableStatistics = calloc(1, sizeof(struct full_ns0_nodeTableStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeTableStatisticsType(_nodeTableStatistics);
        free(_nodeTableStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "maximumEntries", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}maximumEntries of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}maximumEntries of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->maximumEntries = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "activeCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}activeCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}activeCount of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->activeCount = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lookupCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lookupCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lookupCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->lookupCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "matchedCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}matchedCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
        _child_accessor = xmlTextReaderReadXsLongType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}matchedCount of type {http://www.w3.org/2001/XMLSchema}long.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->matchedCount = *((long*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeTable of type {}nodeTable.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeTableType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeTable of type {}nodeTable.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->nodeTable = ((struct full_ns0_nodeTable*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeTableStatisticsType(_nodeTableStatistics);
          free(_nodeTableStatistics);
          return NULL;
        }

        _nodeTableStatistics->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeTableStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeTableStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeTableStatistics;
}

/**
 * Writes a NodeTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "maximumEntries", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}maximumEntries. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}maximumEntries...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_nodeTableStatistics->maximumEntries));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}maximumEntries. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}maximumEntries. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "activeCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}activeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}activeCount...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, &(_nodeTableStatistics->activeCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}activeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}activeCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lookupCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lookupCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}lookupCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeTableStatistics->lookupCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}lookupCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lookupCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchedCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}matchedCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}long for element {}matchedCount...\n");
#endif
    status = xmlTextWriterWriteXsLongType(writer, &(_nodeTableStatistics->matchedCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}long for element {}matchedCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}matchedCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeTableStatistics->nodeTable != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeTable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeTable for element {}nodeTable...\n");
#endif
    status = xmlTextWriterWriteNs0NodeTableType(writer, (_nodeTableStatistics->nodeTable));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeTable for element {}nodeTable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeTable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_nodeTableStatistics->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_nodeTableStatistics->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeTableStatistics.
 *
 * @param _nodeTableStatistics The NodeTableStatistics to free.
 */
static void freeNs0NodeTableStatisticsType(struct full_ns0_nodeTableStatistics *_nodeTableStatistics) {
  int i;
  if (_nodeTableStatistics->nodeTable != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeTable of type full_ns0_nodeTableStatistics...\n");
#endif
    freeNs0NodeTableType(_nodeTableStatistics->nodeTable);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeTable of type full_ns0_nodeTableStatistics...\n");
#endif
    free(_nodeTableStatistics->nodeTable);
  }
  if (_nodeTableStatistics->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_nodeTableStatistics...\n");
#endif
    freeXsStringType(_nodeTableStatistics->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_nodeTableStatistics...\n");
#endif
    free(_nodeTableStatistics->name);
  }
}
#endif /* DEF_full_ns0_nodeTableStatistics_M */
#ifndef DEF_full_ns0_allFlowStatistics_M
#define DEF_full_ns0_allFlowStatistics_M

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xml_read_full_ns0_allFlowStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a AllFlowStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_allFlowStatistics(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _allFlowStatistics, 1);
}

/**
 * Frees a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
void free_full_ns0_allFlowStatistics(struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  freeNs0AllFlowStatisticsType(_allFlowStatistics);
  free(_allFlowStatistics);
}

/**
 * Reads a AllFlowStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AllFlowStatistics, or NULL in case of error.
 */
struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_allFlowStatistics *_allFlowStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _allFlowStatistics = xmlTextReaderReadNs0AllFlowStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_allFlowStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _allFlowStatistics;
}

/**
 * Writes a AllFlowStatistics to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _allFlowStatistics, 0);
}

/**
 * Writes a AllFlowStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}allFlowStatistics for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0AllFlowStatisticsType(writer, _allFlowStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  freeNs0AllFlowStatisticsType(_allFlowStatistics);
}

/**
 * Reads a AllFlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the AllFlowStatistics, or NULL in case of error.
 */
static struct full_ns0_allFlowStatistics *xmlTextReaderReadNs0AllFlowStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_allFlowStatistics *_allFlowStatistics = calloc(1, sizeof(struct full_ns0_allFlowStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AllFlowStatisticsType(_allFlowStatistics);
        free(_allFlowStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flowStatistics", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flowStatistics of type {}flowStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0FlowStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flowStatistics of type {}flowStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AllFlowStatisticsType(_allFlowStatistics);
          free(_allFlowStatistics);
          return NULL;
        }

        _allFlowStatistics->flowStatistics = realloc(_allFlowStatistics->flowStatistics, (_allFlowStatistics->_sizeof_flowStatistics + 1) * sizeof(struct full_ns0_flowStatistics));
        memcpy(&(_allFlowStatistics->flowStatistics[_allFlowStatistics->_sizeof_flowStatistics++]), _child_accessor, sizeof(struct full_ns0_flowStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}allFlowStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}allFlowStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _allFlowStatistics;
}

/**
 * Writes a AllFlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AllFlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _allFlowStatistics->_sizeof_flowStatistics; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistics", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flowStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}flowStatistics for element {}flowStatistics...\n");
#endif
    status = xmlTextWriterWriteNs0FlowStatisticsType(writer, &(_allFlowStatistics->flowStatistics[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}flowStatistics for element {}flowStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flowStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AllFlowStatistics.
 *
 * @param _allFlowStatistics The AllFlowStatistics to free.
 */
static void freeNs0AllFlowStatisticsType(struct full_ns0_allFlowStatistics *_allFlowStatistics) {
  int i;
  if (_allFlowStatistics->flowStatistics != NULL) {
    for (i = 0; i < _allFlowStatistics->_sizeof_flowStatistics; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor flowStatistics[%i] of type full_ns0_allFlowStatistics...\n", i);
#endif
      freeNs0FlowStatisticsType(&(_allFlowStatistics->flowStatistics[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor flowStatistics of type full_ns0_allFlowStatistics...\n");
#endif
    free(_allFlowStatistics->flowStatistics);
  }
}
#endif /* DEF_full_ns0_allFlowStatistics_M */
#ifndef DEF_full_ns0_allPortStatistics_M
#define DEF_full_ns0_allPortStatistics_M

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xml_read_full_ns0_allPortStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a AllPortStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_allPortStatistics(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _allPortStatistics, 1);
}

/**
 * Frees a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
void free_full_ns0_allPortStatistics(struct full_ns0_allPortStatistics *_allPortStatistics) {
  freeNs0AllPortStatisticsType(_allPortStatistics);
  free(_allPortStatistics);
}

/**
 * Reads a AllPortStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AllPortStatistics, or NULL in case of error.
 */
struct full_ns0_allPortStatistics *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_allPortStatistics *_allPortStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _allPortStatistics = xmlTextReaderReadNs0AllPortStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_allPortStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _allPortStatistics;
}

/**
 * Writes a AllPortStatistics to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _allPortStatistics, 0);
}

/**
 * Writes a AllPortStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}allPortStatistics for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0AllPortStatisticsType(writer, _allPortStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_allPortStatistics *_allPortStatistics) {
  freeNs0AllPortStatisticsType(_allPortStatistics);
}

/**
 * Reads a AllPortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the AllPortStatistics, or NULL in case of error.
 */
static struct full_ns0_allPortStatistics *xmlTextReaderReadNs0AllPortStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_allPortStatistics *_allPortStatistics = calloc(1, sizeof(struct full_ns0_allPortStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AllPortStatisticsType(_allPortStatistics);
        free(_allPortStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "portStatistics", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}portStatistics of type {}portStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PortStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}portStatistics of type {}portStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AllPortStatisticsType(_allPortStatistics);
          free(_allPortStatistics);
          return NULL;
        }

        _allPortStatistics->portStatistics = realloc(_allPortStatistics->portStatistics, (_allPortStatistics->_sizeof_portStatistics + 1) * sizeof(struct full_ns0_portStatistics));
        memcpy(&(_allPortStatistics->portStatistics[_allPortStatistics->_sizeof_portStatistics++]), _child_accessor, sizeof(struct full_ns0_portStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}allPortStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}allPortStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _allPortStatistics;
}

/**
 * Writes a AllPortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AllPortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allPortStatistics *_allPortStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _allPortStatistics->_sizeof_portStatistics; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistics", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}portStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}portStatistics for element {}portStatistics...\n");
#endif
    status = xmlTextWriterWriteNs0PortStatisticsType(writer, &(_allPortStatistics->portStatistics[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}portStatistics for element {}portStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}portStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AllPortStatistics.
 *
 * @param _allPortStatistics The AllPortStatistics to free.
 */
static void freeNs0AllPortStatisticsType(struct full_ns0_allPortStatistics *_allPortStatistics) {
  int i;
  if (_allPortStatistics->portStatistics != NULL) {
    for (i = 0; i < _allPortStatistics->_sizeof_portStatistics; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor portStatistics[%i] of type full_ns0_allPortStatistics...\n", i);
#endif
      freeNs0PortStatisticsType(&(_allPortStatistics->portStatistics[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor portStatistics of type full_ns0_allPortStatistics...\n");
#endif
    free(_allPortStatistics->portStatistics);
  }
}
#endif /* DEF_full_ns0_allPortStatistics_M */
#ifndef DEF_full_ns0_allTableStatistics_M
#define DEF_full_ns0_allTableStatistics_M

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xml_read_full_ns0_allTableStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a AllTableStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_allTableStatistics(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _allTableStatistics, 1);
}

/**
 * Frees a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
void free_full_ns0_allTableStatistics(struct full_ns0_allTableStatistics *_allTableStatistics) {
  freeNs0AllTableStatisticsType(_allTableStatistics);
  free(_allTableStatistics);
}

/**
 * Reads a AllTableStatistics element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The AllTableStatistics, or NULL in case of error.
 */
struct full_ns0_allTableStatistics *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_allTableStatistics *_allTableStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _allTableStatistics = xmlTextReaderReadNs0AllTableStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_allTableStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _allTableStatistics;
}

/**
 * Writes a AllTableStatistics to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _allTableStatistics, 0);
}

/**
 * Writes a AllTableStatistics to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}allTableStatistics for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0AllTableStatisticsType(writer, _allTableStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_allTableStatistics *_allTableStatistics) {
  freeNs0AllTableStatisticsType(_allTableStatistics);
}

/**
 * Reads a AllTableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the AllTableStatistics, or NULL in case of error.
 */
static struct full_ns0_allTableStatistics *xmlTextReaderReadNs0AllTableStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_allTableStatistics *_allTableStatistics = calloc(1, sizeof(struct full_ns0_allTableStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0AllTableStatisticsType(_allTableStatistics);
        free(_allTableStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tableStatistics", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tableStatistics of type {}tableStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TableStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tableStatistics of type {}tableStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0AllTableStatisticsType(_allTableStatistics);
          free(_allTableStatistics);
          return NULL;
        }

        _allTableStatistics->tableStatistics = realloc(_allTableStatistics->tableStatistics, (_allTableStatistics->_sizeof_tableStatistics + 1) * sizeof(struct full_ns0_tableStatistics));
        memcpy(&(_allTableStatistics->tableStatistics[_allTableStatistics->_sizeof_tableStatistics++]), _child_accessor, sizeof(struct full_ns0_tableStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}allTableStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}allTableStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _allTableStatistics;
}

/**
 * Writes a AllTableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0AllTableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_allTableStatistics *_allTableStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _allTableStatistics->_sizeof_tableStatistics; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistics", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tableStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}tableStatistics for element {}tableStatistics...\n");
#endif
    status = xmlTextWriterWriteNs0TableStatisticsType(writer, &(_allTableStatistics->tableStatistics[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}tableStatistics for element {}tableStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tableStatistics. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a AllTableStatistics.
 *
 * @param _allTableStatistics The AllTableStatistics to free.
 */
static void freeNs0AllTableStatisticsType(struct full_ns0_allTableStatistics *_allTableStatistics) {
  int i;
  if (_allTableStatistics->tableStatistics != NULL) {
    for (i = 0; i < _allTableStatistics->_sizeof_tableStatistics; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tableStatistics[%i] of type full_ns0_allTableStatistics...\n", i);
#endif
      freeNs0TableStatisticsType(&(_allTableStatistics->tableStatistics[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tableStatistics of type full_ns0_allTableStatistics...\n");
#endif
    free(_allTableStatistics->tableStatistics);
  }
}
#endif /* DEF_full_ns0_allTableStatistics_M */
#ifndef DEF_full_ns0_flowStatistics_M
#define DEF_full_ns0_flowStatistics_M

/**
 * Reads a FlowStatistics element from XML. The element to be read is "nodeFlowStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xml_read_full_ns0_flowStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeFlowStatisticsElement(reader);
}

/**
 * Writes a FlowStatistics to XML under element name "nodeFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flowStatistics(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics) {
  return xmlTextWriterWriteNs0NodeFlowStatisticsElementNS(writer, _flowStatistics, 1);
}

/**
 * Frees a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
void free_full_ns0_flowStatistics(struct full_ns0_flowStatistics *_flowStatistics) {
  freeNs0FlowStatisticsType(_flowStatistics);
  free(_flowStatistics);
}

/**
 * Reads a FlowStatistics element from XML. The element to be read is "nodeFlowStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FlowStatistics, or NULL in case of error.
 */
struct full_ns0_flowStatistics *xmlTextReaderReadNs0NodeFlowStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_flowStatistics *_flowStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeFlowStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeFlowStatistics.\n");
#endif
    _flowStatistics = xmlTextReaderReadNs0FlowStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flowStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeFlowStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeFlowStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flowStatistics;
}

/**
 * Writes a FlowStatistics to XML under element name "nodeFlowStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeFlowStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics) {
  return xmlTextWriterWriteNs0NodeFlowStatisticsElementNS(writer, _flowStatistics, 0);
}

/**
 * Writes a FlowStatistics to XML under element name "nodeFlowStatistics".
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeFlowStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeFlowStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeFlowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flowStatistics for root element {}nodeFlowStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0FlowStatisticsType(writer, _flowStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeFlowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeFlowStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics whose children are to be free.
 */
static void freeNs0NodeFlowStatisticsElement(struct full_ns0_flowStatistics *_flowStatistics) {
  freeNs0FlowStatisticsType(_flowStatistics);
}

/**
 * Reads a FlowStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the FlowStatistics, or NULL in case of error.
 */
static struct full_ns0_flowStatistics *xmlTextReaderReadNs0FlowStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flowStatistics *_flowStatistics = calloc(1, sizeof(struct full_ns0_flowStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowStatisticsType(_flowStatistics);
        free(_flowStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}node of type {}node.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}node of type {}node.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowStatisticsType(_flowStatistics);
          free(_flowStatistics);
          return NULL;
        }

        _flowStatistics->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flowStatistic", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flowStatistic of type {}flowOnNode.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0FlowOnNodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flowStatistic of type {}flowOnNode.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowStatisticsType(_flowStatistics);
          free(_flowStatistics);
          return NULL;
        }

        _flowStatistics->flowStatistic = realloc(_flowStatistics->flowStatistic, (_flowStatistics->_sizeof_flowStatistic + 1) * sizeof(struct full_ns0_flowOnNode));
        memcpy(&(_flowStatistics->flowStatistic[_flowStatistics->_sizeof_flowStatistic++]), _child_accessor, sizeof(struct full_ns0_flowOnNode));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flowStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flowStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flowStatistics;
}

/**
 * Writes a FlowStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowStatisticsType(xmlTextWriterPtr writer, struct full_ns0_flowStatistics *_flowStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_flowStatistics->node != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}node for element {}node...\n");
#endif
    status = xmlTextWriterWriteNs0NodeType(writer, (_flowStatistics->node));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}node for element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _flowStatistics->_sizeof_flowStatistic; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistic", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flowStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}flowOnNode for element {}flowStatistic...\n");
#endif
    status = xmlTextWriterWriteNs0FlowOnNodeType(writer, &(_flowStatistics->flowStatistic[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}flowOnNode for element {}flowStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flowStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a FlowStatistics.
 *
 * @param _flowStatistics The FlowStatistics to free.
 */
static void freeNs0FlowStatisticsType(struct full_ns0_flowStatistics *_flowStatistics) {
  int i;
  if (_flowStatistics->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_flowStatistics...\n");
#endif
    freeNs0NodeType(_flowStatistics->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_flowStatistics...\n");
#endif
    free(_flowStatistics->node);
  }
  if (_flowStatistics->flowStatistic != NULL) {
    for (i = 0; i < _flowStatistics->_sizeof_flowStatistic; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor flowStatistic[%i] of type full_ns0_flowStatistics...\n", i);
#endif
      freeNs0FlowOnNodeType(&(_flowStatistics->flowStatistic[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor flowStatistic of type full_ns0_flowStatistics...\n");
#endif
    free(_flowStatistics->flowStatistic);
  }
}
#endif /* DEF_full_ns0_flowStatistics_M */
#ifndef DEF_full_ns0_portStatistics_M
#define DEF_full_ns0_portStatistics_M

/**
 * Reads a PortStatistics element from XML. The element to be read is "nodePortStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xml_read_full_ns0_portStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodePortStatisticsElement(reader);
}

/**
 * Writes a PortStatistics to XML under element name "nodePortStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_portStatistics(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics) {
  return xmlTextWriterWriteNs0NodePortStatisticsElementNS(writer, _portStatistics, 1);
}

/**
 * Frees a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
void free_full_ns0_portStatistics(struct full_ns0_portStatistics *_portStatistics) {
  freeNs0PortStatisticsType(_portStatistics);
  free(_portStatistics);
}

/**
 * Reads a PortStatistics element from XML. The element to be read is "nodePortStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PortStatistics, or NULL in case of error.
 */
struct full_ns0_portStatistics *xmlTextReaderReadNs0NodePortStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_portStatistics *_portStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodePortStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodePortStatistics.\n");
#endif
    _portStatistics = xmlTextReaderReadNs0PortStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_portStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodePortStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodePortStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _portStatistics;
}

/**
 * Writes a PortStatistics to XML under element name "nodePortStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodePortStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics) {
  return xmlTextWriterWriteNs0NodePortStatisticsElementNS(writer, _portStatistics, 0);
}

/**
 * Writes a PortStatistics to XML under element name "nodePortStatistics".
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodePortStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodePortStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodePortStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}portStatistics for root element {}nodePortStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0PortStatisticsType(writer, _portStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodePortStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodePortStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics whose children are to be free.
 */
static void freeNs0NodePortStatisticsElement(struct full_ns0_portStatistics *_portStatistics) {
  freeNs0PortStatisticsType(_portStatistics);
}

/**
 * Reads a PortStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the PortStatistics, or NULL in case of error.
 */
static struct full_ns0_portStatistics *xmlTextReaderReadNs0PortStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_portStatistics *_portStatistics = calloc(1, sizeof(struct full_ns0_portStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PortStatisticsType(_portStatistics);
        free(_portStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}node of type {}node.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}node of type {}node.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PortStatisticsType(_portStatistics);
          free(_portStatistics);
          return NULL;
        }

        _portStatistics->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "portStatistic", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}portStatistic of type {}nodeConnectorStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}portStatistic of type {}nodeConnectorStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PortStatisticsType(_portStatistics);
          free(_portStatistics);
          return NULL;
        }

        _portStatistics->portStatistic = realloc(_portStatistics->portStatistic, (_portStatistics->_sizeof_portStatistic + 1) * sizeof(struct full_ns0_nodeConnectorStatistics));
        memcpy(&(_portStatistics->portStatistic[_portStatistics->_sizeof_portStatistic++]), _child_accessor, sizeof(struct full_ns0_nodeConnectorStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}portStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}portStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _portStatistics;
}

/**
 * Writes a PortStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PortStatisticsType(xmlTextWriterPtr writer, struct full_ns0_portStatistics *_portStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_portStatistics->node != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}node for element {}node...\n");
#endif
    status = xmlTextWriterWriteNs0NodeType(writer, (_portStatistics->node));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}node for element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _portStatistics->_sizeof_portStatistic; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistic", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}portStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnectorStatistics for element {}portStatistic...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorStatisticsType(writer, &(_portStatistics->portStatistic[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnectorStatistics for element {}portStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}portStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a PortStatistics.
 *
 * @param _portStatistics The PortStatistics to free.
 */
static void freeNs0PortStatisticsType(struct full_ns0_portStatistics *_portStatistics) {
  int i;
  if (_portStatistics->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_portStatistics...\n");
#endif
    freeNs0NodeType(_portStatistics->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_portStatistics...\n");
#endif
    free(_portStatistics->node);
  }
  if (_portStatistics->portStatistic != NULL) {
    for (i = 0; i < _portStatistics->_sizeof_portStatistic; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor portStatistic[%i] of type full_ns0_portStatistics...\n", i);
#endif
      freeNs0NodeConnectorStatisticsType(&(_portStatistics->portStatistic[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor portStatistic of type full_ns0_portStatistics...\n");
#endif
    free(_portStatistics->portStatistic);
  }
}
#endif /* DEF_full_ns0_portStatistics_M */
#ifndef DEF_full_ns0_tableStatistics_M
#define DEF_full_ns0_tableStatistics_M

/**
 * Reads a TableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xml_read_full_ns0_tableStatistics(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeTableStatisticsElement(reader);
}

/**
 * Writes a TableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_tableStatistics(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics) {
  return xmlTextWriterWriteNs0NodeTableStatisticsElementNS(writer, _tableStatistics, 1);
}

/**
 * Frees a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
void free_full_ns0_tableStatistics(struct full_ns0_tableStatistics *_tableStatistics) {
  freeNs0TableStatisticsType(_tableStatistics);
  free(_tableStatistics);
}

/**
 * Reads a TableStatistics element from XML. The element to be read is "nodeTableStatistics", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TableStatistics, or NULL in case of error.
 */
struct full_ns0_tableStatistics *xmlTextReaderReadNs0NodeTableStatisticsElement(xmlTextReaderPtr reader) {
  struct full_ns0_tableStatistics *_tableStatistics = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeTableStatistics.\n");
#endif
    _tableStatistics = xmlTextReaderReadNs0TableStatisticsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tableStatistics == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeTableStatistics failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeTableStatistics failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tableStatistics;
}

/**
 * Writes a TableStatistics to XML under element name "nodeTableStatistics".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElement(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics) {
  return xmlTextWriterWriteNs0NodeTableStatisticsElementNS(writer, _tableStatistics, 0);
}

/**
 * Writes a TableStatistics to XML under element name "nodeTableStatistics".
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeTableStatisticsElementNS(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTableStatistics", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}tableStatistics for root element {}nodeTableStatistics...\n");
#endif
  status = xmlTextWriterWriteNs0TableStatisticsType(writer, _tableStatistics);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeTableStatistics. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics whose children are to be free.
 */
static void freeNs0NodeTableStatisticsElement(struct full_ns0_tableStatistics *_tableStatistics) {
  freeNs0TableStatisticsType(_tableStatistics);
}

/**
 * Reads a TableStatistics from XML. The reader is assumed to be at the start element.
 *
 * @return the TableStatistics, or NULL in case of error.
 */
static struct full_ns0_tableStatistics *xmlTextReaderReadNs0TableStatisticsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_tableStatistics *_tableStatistics = calloc(1, sizeof(struct full_ns0_tableStatistics));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TableStatisticsType(_tableStatistics);
        free(_tableStatistics);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}node of type {}node.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}node of type {}node.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TableStatisticsType(_tableStatistics);
          free(_tableStatistics);
          return NULL;
        }

        _tableStatistics->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tableStatistic", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tableStatistic of type {}nodeTableStatistics.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeTableStatisticsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tableStatistic of type {}nodeTableStatistics.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TableStatisticsType(_tableStatistics);
          free(_tableStatistics);
          return NULL;
        }

        _tableStatistics->tableStatistic = realloc(_tableStatistics->tableStatistic, (_tableStatistics->_sizeof_tableStatistic + 1) * sizeof(struct full_ns0_nodeTableStatistics));
        memcpy(&(_tableStatistics->tableStatistic[_tableStatistics->_sizeof_tableStatistic++]), _child_accessor, sizeof(struct full_ns0_nodeTableStatistics));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}tableStatistics.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}tableStatistics. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tableStatistics;
}

/**
 * Writes a TableStatistics to XML.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TableStatisticsType(xmlTextWriterPtr writer, struct full_ns0_tableStatistics *_tableStatistics) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tableStatistics->node != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}node for element {}node...\n");
#endif
    status = xmlTextWriterWriteNs0NodeType(writer, (_tableStatistics->node));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}node for element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}node. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tableStatistics->_sizeof_tableStatistic; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistic", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tableStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeTableStatistics for element {}tableStatistic...\n");
#endif
    status = xmlTextWriterWriteNs0NodeTableStatisticsType(writer, &(_tableStatistics->tableStatistic[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeTableStatistics for element {}tableStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tableStatistic. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TableStatistics.
 *
 * @param _tableStatistics The TableStatistics to free.
 */
static void freeNs0TableStatisticsType(struct full_ns0_tableStatistics *_tableStatistics) {
  int i;
  if (_tableStatistics->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_tableStatistics...\n");
#endif
    freeNs0NodeType(_tableStatistics->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_tableStatistics...\n");
#endif
    free(_tableStatistics->node);
  }
  if (_tableStatistics->tableStatistic != NULL) {
    for (i = 0; i < _tableStatistics->_sizeof_tableStatistic; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tableStatistic[%i] of type full_ns0_tableStatistics...\n", i);
#endif
      freeNs0NodeTableStatisticsType(&(_tableStatistics->tableStatistic[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tableStatistic of type full_ns0_tableStatistics...\n");
#endif
    free(_tableStatistics->tableStatistic);
  }
}
#endif /* DEF_full_ns0_tableStatistics_M */
