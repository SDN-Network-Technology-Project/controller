#include <enunciate-common.c>
#ifndef DEF_full_ns0_edge_H
#define DEF_full_ns0_edge_H

/**
 * (no documentation provided)
 */
struct full_ns0_edge {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *headNodeConnector;

  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *tailNodeConnector;
};

/**
 * Reads a Edge element from XML. The element to be read is "edge", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Edge, or NULL in case of error.
 */
struct full_ns0_edge *xml_read_full_ns0_edge(xmlTextReaderPtr reader);

/**
 * Writes a Edge to XML under element name "edge".
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_edge(xmlTextWriterPtr writer, struct full_ns0_edge *_edge);

/**
 * Frees a Edge.
 *
 * @param _edge The Edge to free.
 */
void free_full_ns0_edge(struct full_ns0_edge *_edge);

/**
 * Reads a Edge element from XML. The element to be read is "edge", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Edge, or NULL in case of error.
 */
struct full_ns0_edge *xmlTextReaderReadNs0EdgeElement(xmlTextReaderPtr reader);

/**
 * Writes a Edge to XML under element name "edge".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EdgeElement(xmlTextWriterPtr writer, struct full_ns0_edge *_edge);

/**
 * Writes a Edge to XML under element name "edge".
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EdgeElementNS(xmlTextWriterPtr writer, struct full_ns0_edge *_edge, int writeNamespaces);

/**
 * Frees the children of a Edge.
 *
 * @param _edge The Edge whose children are to be free.
 */
static void freeNs0EdgeElement(struct full_ns0_edge *_edge);

/**
 * Reads a Edge from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Edge, or NULL in case of error.
 */
static struct full_ns0_edge *xmlTextReaderReadNs0EdgeType(xmlTextReaderPtr reader);

/**
 * Writes a Edge to XML.
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EdgeType(xmlTextWriterPtr writer, struct full_ns0_edge *_edge);

/**
 * Frees the elements of a Edge.
 *
 * @param _edge The Edge to free.
 */
static void freeNs0EdgeType(struct full_ns0_edge *_edge);

#endif /* DEF_full_ns0_edge_H */
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
  xmlChar *type;

  /**
   * (no documentation provided)
   */
  struct full_ns0_node *nodeConnectorNode;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeConnectorIDString;
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
#ifndef DEF_full_ns0_edgeProperties_H
#define DEF_full_ns0_edgeProperties_H

/**
 * (no documentation provided)
 */
struct full_ns0_edgeProperties {


  /**
   * (no documentation provided)
   */
  struct full_ns0_edge *edge;

  /**
   * (no documentation provided)
   */
  struct full_ns0_property *properties;

  /**
   * Size of the properties array.
   */
  int _sizeof_properties;
};

/**
 * Reads a EdgeProperties element from XML. The element to be read is "edgeProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EdgeProperties, or NULL in case of error.
 */
struct full_ns0_edgeProperties *xml_read_full_ns0_edgeProperties(xmlTextReaderPtr reader);

/**
 * Writes a EdgeProperties to XML under element name "edgeProperties".
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_edgeProperties(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties);

/**
 * Frees a EdgeProperties.
 *
 * @param _edgeProperties The EdgeProperties to free.
 */
void free_full_ns0_edgeProperties(struct full_ns0_edgeProperties *_edgeProperties);

/**
 * Reads a EdgeProperties element from XML. The element to be read is "edgeProperties", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The EdgeProperties, or NULL in case of error.
 */
struct full_ns0_edgeProperties *xmlTextReaderReadNs0EdgePropertiesElement(xmlTextReaderPtr reader);

/**
 * Writes a EdgeProperties to XML under element name "edgeProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EdgePropertiesElement(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties);

/**
 * Writes a EdgeProperties to XML under element name "edgeProperties".
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EdgePropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties, int writeNamespaces);

/**
 * Frees the children of a EdgeProperties.
 *
 * @param _edgeProperties The EdgeProperties whose children are to be free.
 */
static void freeNs0EdgePropertiesElement(struct full_ns0_edgeProperties *_edgeProperties);

/**
 * Reads a EdgeProperties from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The EdgeProperties, or NULL in case of error.
 */
static struct full_ns0_edgeProperties *xmlTextReaderReadNs0EdgePropertiesType(xmlTextReaderPtr reader);

/**
 * Writes a EdgeProperties to XML.
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0EdgePropertiesType(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties);

/**
 * Frees the elements of a EdgeProperties.
 *
 * @param _edgeProperties The EdgeProperties to free.
 */
static void freeNs0EdgePropertiesType(struct full_ns0_edgeProperties *_edgeProperties);

#endif /* DEF_full_ns0_edgeProperties_H */
#ifndef DEF_full_ns0_topology_H
#define DEF_full_ns0_topology_H

/**
 * (no documentation provided)
 */
struct full_ns0_topology {


  /**
   * (no documentation provided)
   */
  struct full_ns0_edgeProperties *edgeProperties;

  /**
   * Size of the edgeProperties array.
   */
  int _sizeof_edgeProperties;
};

/**
 * Reads a Topology element from XML. The element to be read is "topology", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Topology, or NULL in case of error.
 */
struct full_ns0_topology *xml_read_full_ns0_topology(xmlTextReaderPtr reader);

/**
 * Writes a Topology to XML under element name "topology".
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_topology(xmlTextWriterPtr writer, struct full_ns0_topology *_topology);

/**
 * Frees a Topology.
 *
 * @param _topology The Topology to free.
 */
void free_full_ns0_topology(struct full_ns0_topology *_topology);

/**
 * Reads a Topology element from XML. The element to be read is "topology", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Topology, or NULL in case of error.
 */
struct full_ns0_topology *xmlTextReaderReadNs0TopologyElement(xmlTextReaderPtr reader);

/**
 * Writes a Topology to XML under element name "topology".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TopologyElement(xmlTextWriterPtr writer, struct full_ns0_topology *_topology);

/**
 * Writes a Topology to XML under element name "topology".
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TopologyElementNS(xmlTextWriterPtr writer, struct full_ns0_topology *_topology, int writeNamespaces);

/**
 * Frees the children of a Topology.
 *
 * @param _topology The Topology whose children are to be free.
 */
static void freeNs0TopologyElement(struct full_ns0_topology *_topology);

/**
 * Reads a Topology from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Topology, or NULL in case of error.
 */
static struct full_ns0_topology *xmlTextReaderReadNs0TopologyType(xmlTextReaderPtr reader);

/**
 * Writes a Topology to XML.
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TopologyType(xmlTextWriterPtr writer, struct full_ns0_topology *_topology);

/**
 * Frees the elements of a Topology.
 *
 * @param _topology The Topology to free.
 */
static void freeNs0TopologyType(struct full_ns0_topology *_topology);

#endif /* DEF_full_ns0_topology_H */
#ifndef DEF_full_ns0_topologyUserLinks_H
#define DEF_full_ns0_topologyUserLinks_H

/**
 * (no documentation provided)
 */
struct full_ns0_topologyUserLinks {


  /**
   * (no documentation provided)
   */
  struct full_ns0_topologyUserLinkConfig *userLinks;

  /**
   * Size of the userLinks array.
   */
  int _sizeof_userLinks;
};

/**
 * Reads a TopologyUserLinks element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinks, or NULL in case of error.
 */
struct full_ns0_topologyUserLinks *xml_read_full_ns0_topologyUserLinks(xmlTextReaderPtr reader);

/**
 * Writes a TopologyUserLinks to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_topologyUserLinks(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks);

/**
 * Frees a TopologyUserLinks.
 *
 * @param _topologyUserLinks The TopologyUserLinks to free.
 */
void free_full_ns0_topologyUserLinks(struct full_ns0_topologyUserLinks *_topologyUserLinks);

/**
 * Reads a TopologyUserLinks element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinks, or NULL in case of error.
 */
struct full_ns0_topologyUserLinks *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a TopologyUserLinks to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks);

/**
 * Writes a TopologyUserLinks to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks, int writeNamespaces);

/**
 * Frees the children of a TopologyUserLinks.
 *
 * @param _topologyUserLinks The TopologyUserLinks whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_topologyUserLinks *_topologyUserLinks);

/**
 * Reads a TopologyUserLinks from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinks, or NULL in case of error.
 */
static struct full_ns0_topologyUserLinks *xmlTextReaderReadNs0TopologyUserLinksType(xmlTextReaderPtr reader);

/**
 * Writes a TopologyUserLinks to XML.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TopologyUserLinksType(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks);

/**
 * Frees the elements of a TopologyUserLinks.
 *
 * @param _topologyUserLinks The TopologyUserLinks to free.
 */
static void freeNs0TopologyUserLinksType(struct full_ns0_topologyUserLinks *_topologyUserLinks);

#endif /* DEF_full_ns0_topologyUserLinks_H */
#ifndef DEF_full_ns0_topologyUserLinkConfig_H
#define DEF_full_ns0_topologyUserLinkConfig_H

/**
 * (no documentation provided)
 */
struct full_ns0_topologyUserLinkConfig {


  /**
   * (no documentation provided)
   */
  xmlChar *srcNodeConnector;

  /**
   * (no documentation provided)
   */
  xmlChar *dstNodeConnector;

  /**
   * (no documentation provided)
   */
  xmlChar *status;

  /**
   * (no documentation provided)
   */
  xmlChar *name;
};

/**
 * Reads a TopologyUserLinkConfig element from XML. The element to be read is "topologyUserLinkConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinkConfig, or NULL in case of error.
 */
struct full_ns0_topologyUserLinkConfig *xml_read_full_ns0_topologyUserLinkConfig(xmlTextReaderPtr reader);

/**
 * Writes a TopologyUserLinkConfig to XML under element name "topologyUserLinkConfig".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_topologyUserLinkConfig(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig);

/**
 * Frees a TopologyUserLinkConfig.
 *
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to free.
 */
void free_full_ns0_topologyUserLinkConfig(struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig);

/**
 * Reads a TopologyUserLinkConfig element from XML. The element to be read is "topologyUserLinkConfig", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinkConfig, or NULL in case of error.
 */
struct full_ns0_topologyUserLinkConfig *xmlTextReaderReadNs0TopologyUserLinkConfigElement(xmlTextReaderPtr reader);

/**
 * Writes a TopologyUserLinkConfig to XML under element name "topologyUserLinkConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TopologyUserLinkConfigElement(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig);

/**
 * Writes a TopologyUserLinkConfig to XML under element name "topologyUserLinkConfig".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TopologyUserLinkConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig, int writeNamespaces);

/**
 * Frees the children of a TopologyUserLinkConfig.
 *
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig whose children are to be free.
 */
static void freeNs0TopologyUserLinkConfigElement(struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig);

/**
 * Reads a TopologyUserLinkConfig from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinkConfig, or NULL in case of error.
 */
static struct full_ns0_topologyUserLinkConfig *xmlTextReaderReadNs0TopologyUserLinkConfigType(xmlTextReaderPtr reader);

/**
 * Writes a TopologyUserLinkConfig to XML.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TopologyUserLinkConfigType(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig);

/**
 * Frees the elements of a TopologyUserLinkConfig.
 *
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to free.
 */
static void freeNs0TopologyUserLinkConfigType(struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig);

#endif /* DEF_full_ns0_topologyUserLinkConfig_H */
#ifndef DEF_full_ns0_edge_M
#define DEF_full_ns0_edge_M

/**
 * Reads a Edge element from XML. The element to be read is "edge", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Edge, or NULL in case of error.
 */
struct full_ns0_edge *xml_read_full_ns0_edge(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0EdgeElement(reader);
}

/**
 * Writes a Edge to XML under element name "edge".
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_edge(xmlTextWriterPtr writer, struct full_ns0_edge *_edge) {
  return xmlTextWriterWriteNs0EdgeElementNS(writer, _edge, 1);
}

/**
 * Frees a Edge.
 *
 * @param _edge The Edge to free.
 */
void free_full_ns0_edge(struct full_ns0_edge *_edge) {
  freeNs0EdgeType(_edge);
  free(_edge);
}

/**
 * Reads a Edge element from XML. The element to be read is "edge", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Edge, or NULL in case of error.
 */
struct full_ns0_edge *xmlTextReaderReadNs0EdgeElement(xmlTextReaderPtr reader) {
  struct full_ns0_edge *_edge = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "edge", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}edge.\n");
#endif
    _edge = xmlTextReaderReadNs0EdgeType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_edge == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}edge failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}edge failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _edge;
}

/**
 * Writes a Edge to XML under element name "edge".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EdgeElement(xmlTextWriterPtr writer, struct full_ns0_edge *_edge) {
  return xmlTextWriterWriteNs0EdgeElementNS(writer, _edge, 0);
}

/**
 * Writes a Edge to XML under element name "edge".
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EdgeElementNS(xmlTextWriterPtr writer, struct full_ns0_edge *_edge, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "edge", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}edge. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}edge for root element {}edge...\n");
#endif
  status = xmlTextWriterWriteNs0EdgeType(writer, _edge);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}edge. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}edge. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Edge.
 *
 * @param _edge The Edge whose children are to be free.
 */
static void freeNs0EdgeElement(struct full_ns0_edge *_edge) {
  freeNs0EdgeType(_edge);
}

/**
 * Reads a Edge from XML. The reader is assumed to be at the start element.
 *
 * @return the Edge, or NULL in case of error.
 */
static struct full_ns0_edge *xmlTextReaderReadNs0EdgeType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_edge *_edge = calloc(1, sizeof(struct full_ns0_edge));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0EdgeType(_edge);
        free(_edge);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "headNodeConnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}headNodeConnector of type {}nodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}headNodeConnector of type {}nodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EdgeType(_edge);
          free(_edge);
          return NULL;
        }

        _edge->headNodeConnector = ((struct full_ns0_nodeConnector*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tailNodeConnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tailNodeConnector of type {}nodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tailNodeConnector of type {}nodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EdgeType(_edge);
          free(_edge);
          return NULL;
        }

        _edge->tailNodeConnector = ((struct full_ns0_nodeConnector*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}edge.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}edge. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _edge;
}

/**
 * Writes a Edge to XML.
 *
 * @param writer The XML writer.
 * @param _edge The Edge to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0EdgeType(xmlTextWriterPtr writer, struct full_ns0_edge *_edge) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_edge->headNodeConnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "headNodeConnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}headNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnector for element {}headNodeConnector...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_edge->headNodeConnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnector for element {}headNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}headNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_edge->tailNodeConnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tailNodeConnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tailNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnector for element {}tailNodeConnector...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_edge->tailNodeConnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnector for element {}tailNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tailNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Edge.
 *
 * @param _edge The Edge to free.
 */
static void freeNs0EdgeType(struct full_ns0_edge *_edge) {
  int i;
  if (_edge->headNodeConnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor headNodeConnector of type full_ns0_edge...\n");
#endif
    freeNs0NodeConnectorType(_edge->headNodeConnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor headNodeConnector of type full_ns0_edge...\n");
#endif
    free(_edge->headNodeConnector);
  }
  if (_edge->tailNodeConnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tailNodeConnector of type full_ns0_edge...\n");
#endif
    freeNs0NodeConnectorType(_edge->tailNodeConnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tailNodeConnector of type full_ns0_edge...\n");
#endif
    free(_edge->tailNodeConnector);
  }
}
#endif /* DEF_full_ns0_edge_M */
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

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
static void freeNs0NodeConnectorType(struct full_ns0_nodeConnector *_nodeConnector) {
  int i;
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
}
#endif /* DEF_full_ns0_nodeConnector_M */
#ifndef DEF_full_ns0_edgeProperties_M
#define DEF_full_ns0_edgeProperties_M

/**
 * Reads a EdgeProperties element from XML. The element to be read is "edgeProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The EdgeProperties, or NULL in case of error.
 */
struct full_ns0_edgeProperties *xml_read_full_ns0_edgeProperties(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0EdgePropertiesElement(reader);
}

/**
 * Writes a EdgeProperties to XML under element name "edgeProperties".
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_edgeProperties(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties) {
  return xmlTextWriterWriteNs0EdgePropertiesElementNS(writer, _edgeProperties, 1);
}

/**
 * Frees a EdgeProperties.
 *
 * @param _edgeProperties The EdgeProperties to free.
 */
void free_full_ns0_edgeProperties(struct full_ns0_edgeProperties *_edgeProperties) {
  freeNs0EdgePropertiesType(_edgeProperties);
  free(_edgeProperties);
}

/**
 * Reads a EdgeProperties element from XML. The element to be read is "edgeProperties", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The EdgeProperties, or NULL in case of error.
 */
struct full_ns0_edgeProperties *xmlTextReaderReadNs0EdgePropertiesElement(xmlTextReaderPtr reader) {
  struct full_ns0_edgeProperties *_edgeProperties = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "edgeProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}edgeProperties.\n");
#endif
    _edgeProperties = xmlTextReaderReadNs0EdgePropertiesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_edgeProperties == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}edgeProperties failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}edgeProperties failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _edgeProperties;
}

/**
 * Writes a EdgeProperties to XML under element name "edgeProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EdgePropertiesElement(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties) {
  return xmlTextWriterWriteNs0EdgePropertiesElementNS(writer, _edgeProperties, 0);
}

/**
 * Writes a EdgeProperties to XML under element name "edgeProperties".
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0EdgePropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "edgeProperties", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}edgeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}edgeProperties for root element {}edgeProperties...\n");
#endif
  status = xmlTextWriterWriteNs0EdgePropertiesType(writer, _edgeProperties);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}edgeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}edgeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a EdgeProperties.
 *
 * @param _edgeProperties The EdgeProperties whose children are to be free.
 */
static void freeNs0EdgePropertiesElement(struct full_ns0_edgeProperties *_edgeProperties) {
  freeNs0EdgePropertiesType(_edgeProperties);
}

/**
 * Reads a EdgeProperties from XML. The reader is assumed to be at the start element.
 *
 * @return the EdgeProperties, or NULL in case of error.
 */
static struct full_ns0_edgeProperties *xmlTextReaderReadNs0EdgePropertiesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_edgeProperties *_edgeProperties = calloc(1, sizeof(struct full_ns0_edgeProperties));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0EdgePropertiesType(_edgeProperties);
        free(_edgeProperties);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "edge", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}edge of type {}edge.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0EdgeType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}edge of type {}edge.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EdgePropertiesType(_edgeProperties);
          free(_edgeProperties);
          return NULL;
        }

        _edgeProperties->edge = ((struct full_ns0_edge*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "properties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

        if (xmlTextReaderIsEmptyElement(reader) == 0) {
#if DEBUG_ENUNCIATE > 1
          printf("Unwrapping wrapper element {}properties...\n");
#endif
          //start wrapper element "{}properties"
          status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
          while (xmlTextReaderDepth(reader) > (depth + 1)) {
            if (status < 1) {
              //panic: XML read error.
#if DEBUG_ENUNCIATE
              printf("Failure to advance to next child element.\n");
#endif
              freeNs0EdgePropertiesType(_edgeProperties);
              free(_edgeProperties);
              return NULL;
            }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "property", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}property of element {}property.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PropertyElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}property of element {}property.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0EdgePropertiesType(_edgeProperties);
          free(_edgeProperties);
          return NULL;
        }

        _edgeProperties->properties = realloc(_edgeProperties->properties, (_edgeProperties->_sizeof_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_edgeProperties->properties[_edgeProperties->_sizeof_properties++]), _child_accessor, sizeof(struct full_ns0_property));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
          } // end "while in wrapper element" loop
        } //end "if empty element" clause

        if (status < 1) {
          //panic: XML read error.
#if DEBUG_ENUNCIATE
          printf("Failed to advance to end wrapper element {}properties.\n");
#endif
          freeNs0EdgePropertiesType(_edgeProperties);
          free(_edgeProperties);
          return NULL;
        }
        else {
          //end wrapper element "{}properties"
          status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
        }
      } // end "if wrapper element" clause
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}edgeProperties.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}edgeProperties. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _edgeProperties;
}

/**
 * Writes a EdgeProperties to XML.
 *
 * @param writer The XML writer.
 * @param _edgeProperties The EdgeProperties to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0EdgePropertiesType(xmlTextWriterPtr writer, struct full_ns0_edgeProperties *_edgeProperties) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_edgeProperties->edge != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "edge", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}edge. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}edge for element {}edge...\n");
#endif
    status = xmlTextWriterWriteNs0EdgeType(writer, (_edgeProperties->edge));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}edge for element {}edge. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}edge. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_edgeProperties->properties != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _edgeProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}property...\n");
#endif
    status = xmlTextWriterWriteNs0PropertyElementNS(writer, &(_edgeProperties->properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}property. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_edgeProperties->properties != NULL) {
    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a EdgeProperties.
 *
 * @param _edgeProperties The EdgeProperties to free.
 */
static void freeNs0EdgePropertiesType(struct full_ns0_edgeProperties *_edgeProperties) {
  int i;
  if (_edgeProperties->edge != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor edge of type full_ns0_edgeProperties...\n");
#endif
    freeNs0EdgeType(_edgeProperties->edge);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor edge of type full_ns0_edgeProperties...\n");
#endif
    free(_edgeProperties->edge);
  }
  if (_edgeProperties->properties != NULL) {
    for (i = 0; i < _edgeProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor properties[%i] of type full_ns0_edgeProperties...\n", i);
#endif
      freeNs0PropertyElement(&(_edgeProperties->properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor properties of type full_ns0_edgeProperties...\n");
#endif
    free(_edgeProperties->properties);
  }
}
#endif /* DEF_full_ns0_edgeProperties_M */
#ifndef DEF_full_ns0_topology_M
#define DEF_full_ns0_topology_M

/**
 * Reads a Topology element from XML. The element to be read is "topology", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Topology, or NULL in case of error.
 */
struct full_ns0_topology *xml_read_full_ns0_topology(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0TopologyElement(reader);
}

/**
 * Writes a Topology to XML under element name "topology".
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_topology(xmlTextWriterPtr writer, struct full_ns0_topology *_topology) {
  return xmlTextWriterWriteNs0TopologyElementNS(writer, _topology, 1);
}

/**
 * Frees a Topology.
 *
 * @param _topology The Topology to free.
 */
void free_full_ns0_topology(struct full_ns0_topology *_topology) {
  freeNs0TopologyType(_topology);
  free(_topology);
}

/**
 * Reads a Topology element from XML. The element to be read is "topology", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Topology, or NULL in case of error.
 */
struct full_ns0_topology *xmlTextReaderReadNs0TopologyElement(xmlTextReaderPtr reader) {
  struct full_ns0_topology *_topology = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "topology", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}topology.\n");
#endif
    _topology = xmlTextReaderReadNs0TopologyType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_topology == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}topology failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}topology failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _topology;
}

/**
 * Writes a Topology to XML under element name "topology".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TopologyElement(xmlTextWriterPtr writer, struct full_ns0_topology *_topology) {
  return xmlTextWriterWriteNs0TopologyElementNS(writer, _topology, 0);
}

/**
 * Writes a Topology to XML under element name "topology".
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TopologyElementNS(xmlTextWriterPtr writer, struct full_ns0_topology *_topology, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "topology", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}topology. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}topology for root element {}topology...\n");
#endif
  status = xmlTextWriterWriteNs0TopologyType(writer, _topology);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}topology. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}topology. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Topology.
 *
 * @param _topology The Topology whose children are to be free.
 */
static void freeNs0TopologyElement(struct full_ns0_topology *_topology) {
  freeNs0TopologyType(_topology);
}

/**
 * Reads a Topology from XML. The reader is assumed to be at the start element.
 *
 * @return the Topology, or NULL in case of error.
 */
static struct full_ns0_topology *xmlTextReaderReadNs0TopologyType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_topology *_topology = calloc(1, sizeof(struct full_ns0_topology));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TopologyType(_topology);
        free(_topology);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "edgeProperties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}edgeProperties of type {}edgeProperties.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0EdgePropertiesType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}edgeProperties of type {}edgeProperties.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TopologyType(_topology);
          free(_topology);
          return NULL;
        }

        _topology->edgeProperties = realloc(_topology->edgeProperties, (_topology->_sizeof_edgeProperties + 1) * sizeof(struct full_ns0_edgeProperties));
        memcpy(&(_topology->edgeProperties[_topology->_sizeof_edgeProperties++]), _child_accessor, sizeof(struct full_ns0_edgeProperties));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}topology.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}topology. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _topology;
}

/**
 * Writes a Topology to XML.
 *
 * @param writer The XML writer.
 * @param _topology The Topology to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TopologyType(xmlTextWriterPtr writer, struct full_ns0_topology *_topology) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _topology->_sizeof_edgeProperties; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "edgeProperties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}edgeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}edgeProperties for element {}edgeProperties...\n");
#endif
    status = xmlTextWriterWriteNs0EdgePropertiesType(writer, &(_topology->edgeProperties[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}edgeProperties for element {}edgeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}edgeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Topology.
 *
 * @param _topology The Topology to free.
 */
static void freeNs0TopologyType(struct full_ns0_topology *_topology) {
  int i;
  if (_topology->edgeProperties != NULL) {
    for (i = 0; i < _topology->_sizeof_edgeProperties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor edgeProperties[%i] of type full_ns0_topology...\n", i);
#endif
      freeNs0EdgePropertiesType(&(_topology->edgeProperties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor edgeProperties of type full_ns0_topology...\n");
#endif
    free(_topology->edgeProperties);
  }
}
#endif /* DEF_full_ns0_topology_M */
#ifndef DEF_full_ns0_topologyUserLinks_M
#define DEF_full_ns0_topologyUserLinks_M

/**
 * Reads a TopologyUserLinks element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinks, or NULL in case of error.
 */
struct full_ns0_topologyUserLinks *xml_read_full_ns0_topologyUserLinks(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a TopologyUserLinks to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_topologyUserLinks(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _topologyUserLinks, 1);
}

/**
 * Frees a TopologyUserLinks.
 *
 * @param _topologyUserLinks The TopologyUserLinks to free.
 */
void free_full_ns0_topologyUserLinks(struct full_ns0_topologyUserLinks *_topologyUserLinks) {
  freeNs0TopologyUserLinksType(_topologyUserLinks);
  free(_topologyUserLinks);
}

/**
 * Reads a TopologyUserLinks element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinks, or NULL in case of error.
 */
struct full_ns0_topologyUserLinks *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_topologyUserLinks *_topologyUserLinks = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _topologyUserLinks = xmlTextReaderReadNs0TopologyUserLinksType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_topologyUserLinks == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _topologyUserLinks;
}

/**
 * Writes a TopologyUserLinks to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _topologyUserLinks, 0);
}

/**
 * Writes a TopologyUserLinks to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks, int writeNamespaces) {
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
  printf("writing type {}topologyUserLinks for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0TopologyUserLinksType(writer, _topologyUserLinks);
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
 * Frees the children of a TopologyUserLinks.
 *
 * @param _topologyUserLinks The TopologyUserLinks whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_topologyUserLinks *_topologyUserLinks) {
  freeNs0TopologyUserLinksType(_topologyUserLinks);
}

/**
 * Reads a TopologyUserLinks from XML. The reader is assumed to be at the start element.
 *
 * @return the TopologyUserLinks, or NULL in case of error.
 */
static struct full_ns0_topologyUserLinks *xmlTextReaderReadNs0TopologyUserLinksType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_topologyUserLinks *_topologyUserLinks = calloc(1, sizeof(struct full_ns0_topologyUserLinks));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TopologyUserLinksType(_topologyUserLinks);
        free(_topologyUserLinks);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userLinks", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userLinks of type {}topologyUserLinkConfig.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TopologyUserLinkConfigType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userLinks of type {}topologyUserLinkConfig.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TopologyUserLinksType(_topologyUserLinks);
          free(_topologyUserLinks);
          return NULL;
        }

        _topologyUserLinks->userLinks = realloc(_topologyUserLinks->userLinks, (_topologyUserLinks->_sizeof_userLinks + 1) * sizeof(struct full_ns0_topologyUserLinkConfig));
        memcpy(&(_topologyUserLinks->userLinks[_topologyUserLinks->_sizeof_userLinks++]), _child_accessor, sizeof(struct full_ns0_topologyUserLinkConfig));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}topologyUserLinks.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}topologyUserLinks. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _topologyUserLinks;
}

/**
 * Writes a TopologyUserLinks to XML.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinks The TopologyUserLinks to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TopologyUserLinksType(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinks *_topologyUserLinks) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _topologyUserLinks->_sizeof_userLinks; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userLinks", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userLinks. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}topologyUserLinkConfig for element {}userLinks...\n");
#endif
    status = xmlTextWriterWriteNs0TopologyUserLinkConfigType(writer, &(_topologyUserLinks->userLinks[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}topologyUserLinkConfig for element {}userLinks. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userLinks. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TopologyUserLinks.
 *
 * @param _topologyUserLinks The TopologyUserLinks to free.
 */
static void freeNs0TopologyUserLinksType(struct full_ns0_topologyUserLinks *_topologyUserLinks) {
  int i;
  if (_topologyUserLinks->userLinks != NULL) {
    for (i = 0; i < _topologyUserLinks->_sizeof_userLinks; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor userLinks[%i] of type full_ns0_topologyUserLinks...\n", i);
#endif
      freeNs0TopologyUserLinkConfigType(&(_topologyUserLinks->userLinks[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userLinks of type full_ns0_topologyUserLinks...\n");
#endif
    free(_topologyUserLinks->userLinks);
  }
}
#endif /* DEF_full_ns0_topologyUserLinks_M */
#ifndef DEF_full_ns0_topologyUserLinkConfig_M
#define DEF_full_ns0_topologyUserLinkConfig_M

/**
 * Reads a TopologyUserLinkConfig element from XML. The element to be read is "topologyUserLinkConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinkConfig, or NULL in case of error.
 */
struct full_ns0_topologyUserLinkConfig *xml_read_full_ns0_topologyUserLinkConfig(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0TopologyUserLinkConfigElement(reader);
}

/**
 * Writes a TopologyUserLinkConfig to XML under element name "topologyUserLinkConfig".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_topologyUserLinkConfig(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig) {
  return xmlTextWriterWriteNs0TopologyUserLinkConfigElementNS(writer, _topologyUserLinkConfig, 1);
}

/**
 * Frees a TopologyUserLinkConfig.
 *
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to free.
 */
void free_full_ns0_topologyUserLinkConfig(struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig) {
  freeNs0TopologyUserLinkConfigType(_topologyUserLinkConfig);
  free(_topologyUserLinkConfig);
}

/**
 * Reads a TopologyUserLinkConfig element from XML. The element to be read is "topologyUserLinkConfig", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TopologyUserLinkConfig, or NULL in case of error.
 */
struct full_ns0_topologyUserLinkConfig *xmlTextReaderReadNs0TopologyUserLinkConfigElement(xmlTextReaderPtr reader) {
  struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "topologyUserLinkConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}topologyUserLinkConfig.\n");
#endif
    _topologyUserLinkConfig = xmlTextReaderReadNs0TopologyUserLinkConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_topologyUserLinkConfig == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}topologyUserLinkConfig failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}topologyUserLinkConfig failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _topologyUserLinkConfig;
}

/**
 * Writes a TopologyUserLinkConfig to XML under element name "topologyUserLinkConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TopologyUserLinkConfigElement(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig) {
  return xmlTextWriterWriteNs0TopologyUserLinkConfigElementNS(writer, _topologyUserLinkConfig, 0);
}

/**
 * Writes a TopologyUserLinkConfig to XML under element name "topologyUserLinkConfig".
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0TopologyUserLinkConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "topologyUserLinkConfig", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}topologyUserLinkConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}topologyUserLinkConfig for root element {}topologyUserLinkConfig...\n");
#endif
  status = xmlTextWriterWriteNs0TopologyUserLinkConfigType(writer, _topologyUserLinkConfig);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}topologyUserLinkConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}topologyUserLinkConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TopologyUserLinkConfig.
 *
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig whose children are to be free.
 */
static void freeNs0TopologyUserLinkConfigElement(struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig) {
  freeNs0TopologyUserLinkConfigType(_topologyUserLinkConfig);
}

/**
 * Reads a TopologyUserLinkConfig from XML. The reader is assumed to be at the start element.
 *
 * @return the TopologyUserLinkConfig, or NULL in case of error.
 */
static struct full_ns0_topologyUserLinkConfig *xmlTextReaderReadNs0TopologyUserLinkConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig = calloc(1, sizeof(struct full_ns0_topologyUserLinkConfig));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TopologyUserLinkConfigType(_topologyUserLinkConfig);
        free(_topologyUserLinkConfig);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "srcNodeConnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}srcNodeConnector of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}srcNodeConnector of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TopologyUserLinkConfigType(_topologyUserLinkConfig);
          free(_topologyUserLinkConfig);
          return NULL;
        }

        _topologyUserLinkConfig->srcNodeConnector = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dstNodeConnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dstNodeConnector of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dstNodeConnector of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TopologyUserLinkConfigType(_topologyUserLinkConfig);
          free(_topologyUserLinkConfig);
          return NULL;
        }

        _topologyUserLinkConfig->dstNodeConnector = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "status", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TopologyUserLinkConfigType(_topologyUserLinkConfig);
          free(_topologyUserLinkConfig);
          return NULL;
        }

        _topologyUserLinkConfig->status = ((xmlChar*)_child_accessor);
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
          freeNs0TopologyUserLinkConfigType(_topologyUserLinkConfig);
          free(_topologyUserLinkConfig);
          return NULL;
        }

        _topologyUserLinkConfig->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}topologyUserLinkConfig.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}topologyUserLinkConfig. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _topologyUserLinkConfig;
}

/**
 * Writes a TopologyUserLinkConfig to XML.
 *
 * @param writer The XML writer.
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TopologyUserLinkConfigType(xmlTextWriterPtr writer, struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_topologyUserLinkConfig->srcNodeConnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "srcNodeConnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}srcNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}srcNodeConnector...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_topologyUserLinkConfig->srcNodeConnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}srcNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}srcNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_topologyUserLinkConfig->dstNodeConnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dstNodeConnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dstNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dstNodeConnector...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_topologyUserLinkConfig->dstNodeConnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dstNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dstNodeConnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_topologyUserLinkConfig->status != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "status", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}status. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}status...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_topologyUserLinkConfig->status));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}status. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}status. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_topologyUserLinkConfig->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_topologyUserLinkConfig->name));
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
 * Frees the elements of a TopologyUserLinkConfig.
 *
 * @param _topologyUserLinkConfig The TopologyUserLinkConfig to free.
 */
static void freeNs0TopologyUserLinkConfigType(struct full_ns0_topologyUserLinkConfig *_topologyUserLinkConfig) {
  int i;
  if (_topologyUserLinkConfig->srcNodeConnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor srcNodeConnector of type full_ns0_topologyUserLinkConfig...\n");
#endif
    freeXsStringType(_topologyUserLinkConfig->srcNodeConnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor srcNodeConnector of type full_ns0_topologyUserLinkConfig...\n");
#endif
    free(_topologyUserLinkConfig->srcNodeConnector);
  }
  if (_topologyUserLinkConfig->dstNodeConnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dstNodeConnector of type full_ns0_topologyUserLinkConfig...\n");
#endif
    freeXsStringType(_topologyUserLinkConfig->dstNodeConnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dstNodeConnector of type full_ns0_topologyUserLinkConfig...\n");
#endif
    free(_topologyUserLinkConfig->dstNodeConnector);
  }
  if (_topologyUserLinkConfig->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type full_ns0_topologyUserLinkConfig...\n");
#endif
    freeXsStringType(_topologyUserLinkConfig->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type full_ns0_topologyUserLinkConfig...\n");
#endif
    free(_topologyUserLinkConfig->status);
  }
  if (_topologyUserLinkConfig->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_topologyUserLinkConfig...\n");
#endif
    freeXsStringType(_topologyUserLinkConfig->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_topologyUserLinkConfig...\n");
#endif
    free(_topologyUserLinkConfig->name);
  }
}
#endif /* DEF_full_ns0_topologyUserLinkConfig_M */
