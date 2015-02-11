#include <enunciate-common.c>
#ifndef DEF_full_ns0_node_H
#define DEF_full_ns0_node_H

/**
 * (no documentation provided)
 */
struct full_ns0_node {


  /**
   * (no documentation provided)
   */
  xmlChar *nodeIDString;

  /**
   * (no documentation provided)
   */
  xmlChar *type;
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
  xmlChar *nodeConnectorIDString;

  /**
   * (no documentation provided)
   */
  xmlChar *type;

  /**
   * (no documentation provided)
   */
  struct full_ns0_node *nodeConnectorNode;
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
#ifndef DEF_full_ns0_nodeConnectorProperties_H
#define DEF_full_ns0_nodeConnectorProperties_H

/**
 *  The class describes set of properties attached to a node connector

 */
struct full_ns0_nodeConnectorProperties {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnector *nodeconnector;

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
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xml_read_full_ns0_nodeConnectorProperties(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnectorProperties(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Frees a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
void free_full_ns0_nodeConnectorProperties(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties, int writeNamespaces);

/**
 * Frees the children of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties whose children are to be free.
 */
static void freeNs0NodeConnectorPropertiesElement(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Reads a NodeConnectorProperties from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectorProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

/**
 * Frees the elements of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
static void freeNs0NodeConnectorPropertiesType(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties);

#endif /* DEF_full_ns0_nodeConnectorProperties_H */
#ifndef DEF_full_ns0_nodeConnectors_H
#define DEF_full_ns0_nodeConnectors_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodeConnectors {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeConnectorProperties *nodeConnectorProperties;

  /**
   * Size of the nodeConnectorProperties array.
   */
  int _sizeof_nodeConnectorProperties;
};

/**
 * Reads a NodeConnectors element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xml_read_full_ns0_nodeConnectors(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectors to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeConnectors(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Frees a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
void free_full_ns0_nodeConnectors(struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Reads a NodeConnectors element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectors to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Writes a NodeConnectors to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors, int writeNamespaces);

/**
 * Frees the children of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Reads a NodeConnectors from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
static struct full_ns0_nodeConnectors *xmlTextReaderReadNs0NodeConnectorsType(xmlTextReaderPtr reader);

/**
 * Writes a NodeConnectors to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors);

/**
 * Frees the elements of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
static void freeNs0NodeConnectorsType(struct full_ns0_nodeConnectors *_nodeConnectors);

#endif /* DEF_full_ns0_nodeConnectors_H */
#ifndef DEF_full_ns0_nodeProperties_H
#define DEF_full_ns0_nodeProperties_H

/**
 *  The class describes set of properties attached to a node

 */
struct full_ns0_nodeProperties {


  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

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
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xml_read_full_ns0_nodeProperties(xmlTextReaderPtr reader);

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodeProperties(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Frees a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
void free_full_ns0_nodeProperties(struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesElement(xmlTextReaderPtr reader);

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties, int writeNamespaces);

/**
 * Frees the children of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties whose children are to be free.
 */
static void freeNs0NodePropertiesElement(struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Reads a NodeProperties from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
static struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesType(xmlTextReaderPtr reader);

/**
 * Writes a NodeProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodePropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties);

/**
 * Frees the elements of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
static void freeNs0NodePropertiesType(struct full_ns0_nodeProperties *_nodeProperties);

#endif /* DEF_full_ns0_nodeProperties_H */
#ifndef DEF_full_ns0_nodes_H
#define DEF_full_ns0_nodes_H

/**
 * (no documentation provided)
 */
struct full_ns0_nodes {


  /**
   * (no documentation provided)
   */
  struct full_ns0_nodeProperties *nodeProperties;

  /**
   * Size of the nodeProperties array.
   */
  int _sizeof_nodeProperties;
};

/**
 * Reads a Nodes element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xml_read_full_ns0_nodes(xmlTextReaderPtr reader);

/**
 * Writes a Nodes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_nodes(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes);

/**
 * Frees a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
void free_full_ns0_nodes(struct full_ns0_nodes *_nodes);

/**
 * Reads a Nodes element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a Nodes to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes);

/**
 * Writes a Nodes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes, int writeNamespaces);

/**
 * Frees the children of a Nodes.
 *
 * @param _nodes The Nodes whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_nodes *_nodes);

/**
 * Reads a Nodes from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
static struct full_ns0_nodes *xmlTextReaderReadNs0NodesType(xmlTextReaderPtr reader);

/**
 * Writes a Nodes to XML.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodesType(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes);

/**
 * Frees the elements of a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
static void freeNs0NodesType(struct full_ns0_nodes *_nodes);

#endif /* DEF_full_ns0_nodes_H */
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

  return totalBytes;
}

/**
 * Frees the elements of a Node.
 *
 * @param _node The Node to free.
 */
static void freeNs0NodeType(struct full_ns0_node *_node) {
  int i;
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

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnector.
 *
 * @param _nodeConnector The NodeConnector to free.
 */
static void freeNs0NodeConnectorType(struct full_ns0_nodeConnector *_nodeConnector) {
  int i;
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
}
#endif /* DEF_full_ns0_nodeConnector_M */
#ifndef DEF_full_ns0_nodeConnectorProperties_M
#define DEF_full_ns0_nodeConnectorProperties_M

/**
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xml_read_full_ns0_nodeConnectorProperties(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorPropertiesElement(reader);
}

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnectorProperties(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  return xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(writer, _nodeConnectorProperties, 1);
}

/**
 * Frees a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
void free_full_ns0_nodeConnectorProperties(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
  free(_nodeConnectorProperties);
}

/**
 * Reads a NodeConnectorProperties element from XML. The element to be read is "nodeConnectorProperties", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectorProperties, or NULL in case of error.
 */
struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectorProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnectorProperties.\n");
#endif
    _nodeConnectorProperties = xmlTextReaderReadNs0NodeConnectorPropertiesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnectorProperties == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnectorProperties failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnectorProperties failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnectorProperties;
}

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  return xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(writer, _nodeConnectorProperties, 0);
}

/**
 * Writes a NodeConnectorProperties to XML under element name "nodeConnectorProperties".
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorProperties", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnectorProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeConnectorProperties for root element {}nodeConnectorProperties...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorPropertiesType(writer, _nodeConnectorProperties);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnectorProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnectorProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties whose children are to be free.
 */
static void freeNs0NodeConnectorPropertiesElement(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
}

/**
 * Reads a NodeConnectorProperties from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnectorProperties, or NULL in case of error.
 */
static struct full_ns0_nodeConnectorProperties *xmlTextReaderReadNs0NodeConnectorPropertiesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties = calloc(1, sizeof(struct full_ns0_nodeConnectorProperties));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
        free(_nodeConnectorProperties);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeconnector", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeconnector of type {}nodeConnector.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeconnector of type {}nodeConnector.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->nodeconnector = ((struct full_ns0_nodeConnector*)_child_accessor);
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
              freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
              free(_nodeConnectorProperties);
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
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
          return NULL;
        }

        _nodeConnectorProperties->properties = realloc(_nodeConnectorProperties->properties, (_nodeConnectorProperties->_sizeof_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeConnectorProperties->properties[_nodeConnectorProperties->_sizeof_properties++]), _child_accessor, sizeof(struct full_ns0_property));
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
          freeNs0NodeConnectorPropertiesType(_nodeConnectorProperties);
          free(_nodeConnectorProperties);
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
          printf("unknown child element {}%s for type {}nodeConnectorProperties.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnectorProperties. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnectorProperties;
}

/**
 * Writes a NodeConnectorProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorProperties The NodeConnectorProperties to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorPropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_nodeConnectorProperties->nodeconnector != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeconnector", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeconnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnector for element {}nodeconnector...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorType(writer, (_nodeConnectorProperties->nodeconnector));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnector for element {}nodeconnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeconnector. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_nodeConnectorProperties->properties != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeConnectorProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}property...\n");
#endif
    status = xmlTextWriterWriteNs0PropertyElementNS(writer, &(_nodeConnectorProperties->properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}property. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_nodeConnectorProperties->properties != NULL) {
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
 * Frees the elements of a NodeConnectorProperties.
 *
 * @param _nodeConnectorProperties The NodeConnectorProperties to free.
 */
static void freeNs0NodeConnectorPropertiesType(struct full_ns0_nodeConnectorProperties *_nodeConnectorProperties) {
  int i;
  if (_nodeConnectorProperties->nodeconnector != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeconnector of type full_ns0_nodeConnectorProperties...\n");
#endif
    freeNs0NodeConnectorType(_nodeConnectorProperties->nodeconnector);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeconnector of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->nodeconnector);
  }
  if (_nodeConnectorProperties->properties != NULL) {
    for (i = 0; i < _nodeConnectorProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor properties[%i] of type full_ns0_nodeConnectorProperties...\n", i);
#endif
      freeNs0PropertyElement(&(_nodeConnectorProperties->properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor properties of type full_ns0_nodeConnectorProperties...\n");
#endif
    free(_nodeConnectorProperties->properties);
  }
}
#endif /* DEF_full_ns0_nodeConnectorProperties_M */
#ifndef DEF_full_ns0_nodeConnectors_M
#define DEF_full_ns0_nodeConnectors_M

/**
 * Reads a NodeConnectors element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xml_read_full_ns0_nodeConnectors(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a NodeConnectors to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeConnectors(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _nodeConnectors, 1);
}

/**
 * Frees a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
void free_full_ns0_nodeConnectors(struct full_ns0_nodeConnectors *_nodeConnectors) {
  freeNs0NodeConnectorsType(_nodeConnectors);
  free(_nodeConnectors);
}

/**
 * Reads a NodeConnectors element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeConnectors, or NULL in case of error.
 */
struct full_ns0_nodeConnectors *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeConnectors *_nodeConnectors = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _nodeConnectors = xmlTextReaderReadNs0NodeConnectorsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeConnectors == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeConnectors;
}

/**
 * Writes a NodeConnectors to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _nodeConnectors, 0);
}

/**
 * Writes a NodeConnectors to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors, int writeNamespaces) {
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
  printf("writing type {}nodeConnectors for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0NodeConnectorsType(writer, _nodeConnectors);
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
 * Frees the children of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_nodeConnectors *_nodeConnectors) {
  freeNs0NodeConnectorsType(_nodeConnectors);
}

/**
 * Reads a NodeConnectors from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeConnectors, or NULL in case of error.
 */
static struct full_ns0_nodeConnectors *xmlTextReaderReadNs0NodeConnectorsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeConnectors *_nodeConnectors = calloc(1, sizeof(struct full_ns0_nodeConnectors));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodeConnectorsType(_nodeConnectors);
        free(_nodeConnectors);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnectorProperties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnectorProperties of type {}nodeConnectorProperties.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodeConnectorPropertiesType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnectorProperties of type {}nodeConnectorProperties.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodeConnectorsType(_nodeConnectors);
          free(_nodeConnectors);
          return NULL;
        }

        _nodeConnectors->nodeConnectorProperties = realloc(_nodeConnectors->nodeConnectorProperties, (_nodeConnectors->_sizeof_nodeConnectorProperties + 1) * sizeof(struct full_ns0_nodeConnectorProperties));
        memcpy(&(_nodeConnectors->nodeConnectorProperties[_nodeConnectors->_sizeof_nodeConnectorProperties++]), _child_accessor, sizeof(struct full_ns0_nodeConnectorProperties));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodeConnectors.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeConnectors. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeConnectors;
}

/**
 * Writes a NodeConnectors to XML.
 *
 * @param writer The XML writer.
 * @param _nodeConnectors The NodeConnectors to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodeConnectorsType(xmlTextWriterPtr writer, struct full_ns0_nodeConnectors *_nodeConnectors) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _nodeConnectors->_sizeof_nodeConnectorProperties; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorProperties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnectorProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeConnectorProperties for element {}nodeConnectorProperties...\n");
#endif
    status = xmlTextWriterWriteNs0NodeConnectorPropertiesType(writer, &(_nodeConnectors->nodeConnectorProperties[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeConnectorProperties for element {}nodeConnectorProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnectorProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NodeConnectors.
 *
 * @param _nodeConnectors The NodeConnectors to free.
 */
static void freeNs0NodeConnectorsType(struct full_ns0_nodeConnectors *_nodeConnectors) {
  int i;
  if (_nodeConnectors->nodeConnectorProperties != NULL) {
    for (i = 0; i < _nodeConnectors->_sizeof_nodeConnectorProperties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor nodeConnectorProperties[%i] of type full_ns0_nodeConnectors...\n", i);
#endif
      freeNs0NodeConnectorPropertiesType(&(_nodeConnectors->nodeConnectorProperties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorProperties of type full_ns0_nodeConnectors...\n");
#endif
    free(_nodeConnectors->nodeConnectorProperties);
  }
}
#endif /* DEF_full_ns0_nodeConnectors_M */
#ifndef DEF_full_ns0_nodeProperties_M
#define DEF_full_ns0_nodeProperties_M

/**
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xml_read_full_ns0_nodeProperties(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodePropertiesElement(reader);
}

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodeProperties(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties) {
  return xmlTextWriterWriteNs0NodePropertiesElementNS(writer, _nodeProperties, 1);
}

/**
 * Frees a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
void free_full_ns0_nodeProperties(struct full_ns0_nodeProperties *_nodeProperties) {
  freeNs0NodePropertiesType(_nodeProperties);
  free(_nodeProperties);
}

/**
 * Reads a NodeProperties element from XML. The element to be read is "nodeProperties", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NodeProperties, or NULL in case of error.
 */
struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodeProperties *_nodeProperties = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeProperties.\n");
#endif
    _nodeProperties = xmlTextReaderReadNs0NodePropertiesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodeProperties == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeProperties failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeProperties failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodeProperties;
}

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodePropertiesElement(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties) {
  return xmlTextWriterWriteNs0NodePropertiesElementNS(writer, _nodeProperties, 0);
}

/**
 * Writes a NodeProperties to XML under element name "nodeProperties".
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodePropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeProperties", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}nodeProperties for root element {}nodeProperties...\n");
#endif
  status = xmlTextWriterWriteNs0NodePropertiesType(writer, _nodeProperties);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties whose children are to be free.
 */
static void freeNs0NodePropertiesElement(struct full_ns0_nodeProperties *_nodeProperties) {
  freeNs0NodePropertiesType(_nodeProperties);
}

/**
 * Reads a NodeProperties from XML. The reader is assumed to be at the start element.
 *
 * @return the NodeProperties, or NULL in case of error.
 */
static struct full_ns0_nodeProperties *xmlTextReaderReadNs0NodePropertiesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodeProperties *_nodeProperties = calloc(1, sizeof(struct full_ns0_nodeProperties));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodePropertiesType(_nodeProperties);
        free(_nodeProperties);
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
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->node = ((struct full_ns0_node*)_child_accessor);
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
              freeNs0NodePropertiesType(_nodeProperties);
              free(_nodeProperties);
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
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
          return NULL;
        }

        _nodeProperties->properties = realloc(_nodeProperties->properties, (_nodeProperties->_sizeof_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_nodeProperties->properties[_nodeProperties->_sizeof_properties++]), _child_accessor, sizeof(struct full_ns0_property));
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
          freeNs0NodePropertiesType(_nodeProperties);
          free(_nodeProperties);
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
          printf("unknown child element {}%s for type {}nodeProperties.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodeProperties. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodeProperties;
}

/**
 * Writes a NodeProperties to XML.
 *
 * @param writer The XML writer.
 * @param _nodeProperties The NodeProperties to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodePropertiesType(xmlTextWriterPtr writer, struct full_ns0_nodeProperties *_nodeProperties) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_nodeProperties->node != NULL) {
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
    status = xmlTextWriterWriteNs0NodeType(writer, (_nodeProperties->node));
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

  if (_nodeProperties->properties != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _nodeProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}property...\n");
#endif
    status = xmlTextWriterWriteNs0PropertyElementNS(writer, &(_nodeProperties->properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}property. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_nodeProperties->properties != NULL) {
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
 * Frees the elements of a NodeProperties.
 *
 * @param _nodeProperties The NodeProperties to free.
 */
static void freeNs0NodePropertiesType(struct full_ns0_nodeProperties *_nodeProperties) {
  int i;
  if (_nodeProperties->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_nodeProperties...\n");
#endif
    freeNs0NodeType(_nodeProperties->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->node);
  }
  if (_nodeProperties->properties != NULL) {
    for (i = 0; i < _nodeProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor properties[%i] of type full_ns0_nodeProperties...\n", i);
#endif
      freeNs0PropertyElement(&(_nodeProperties->properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor properties of type full_ns0_nodeProperties...\n");
#endif
    free(_nodeProperties->properties);
  }
}
#endif /* DEF_full_ns0_nodeProperties_M */
#ifndef DEF_full_ns0_nodes_M
#define DEF_full_ns0_nodes_M

/**
 * Reads a Nodes element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xml_read_full_ns0_nodes(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a Nodes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_nodes(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _nodes, 1);
}

/**
 * Frees a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
void free_full_ns0_nodes(struct full_ns0_nodes *_nodes) {
  freeNs0NodesType(_nodes);
  free(_nodes);
}

/**
 * Reads a Nodes element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Nodes, or NULL in case of error.
 */
struct full_ns0_nodes *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_nodes *_nodes = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _nodes = xmlTextReaderReadNs0NodesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_nodes == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _nodes;
}

/**
 * Writes a Nodes to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _nodes, 0);
}

/**
 * Writes a Nodes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes, int writeNamespaces) {
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
  printf("writing type {}nodes for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0NodesType(writer, _nodes);
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
 * Frees the children of a Nodes.
 *
 * @param _nodes The Nodes whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_nodes *_nodes) {
  freeNs0NodesType(_nodes);
}

/**
 * Reads a Nodes from XML. The reader is assumed to be at the start element.
 *
 * @return the Nodes, or NULL in case of error.
 */
static struct full_ns0_nodes *xmlTextReaderReadNs0NodesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_nodes *_nodes = calloc(1, sizeof(struct full_ns0_nodes));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NodesType(_nodes);
        free(_nodes);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeProperties", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeProperties of type {}nodeProperties.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NodePropertiesType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeProperties of type {}nodeProperties.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NodesType(_nodes);
          free(_nodes);
          return NULL;
        }

        _nodes->nodeProperties = realloc(_nodes->nodeProperties, (_nodes->_sizeof_nodeProperties + 1) * sizeof(struct full_ns0_nodeProperties));
        memcpy(&(_nodes->nodeProperties[_nodes->_sizeof_nodeProperties++]), _child_accessor, sizeof(struct full_ns0_nodeProperties));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}nodes.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}nodes. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _nodes;
}

/**
 * Writes a Nodes to XML.
 *
 * @param writer The XML writer.
 * @param _nodes The Nodes to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NodesType(xmlTextWriterPtr writer, struct full_ns0_nodes *_nodes) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _nodes->_sizeof_nodeProperties; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeProperties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}nodeProperties for element {}nodeProperties...\n");
#endif
    status = xmlTextWriterWriteNs0NodePropertiesType(writer, &(_nodes->nodeProperties[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}nodeProperties for element {}nodeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeProperties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Nodes.
 *
 * @param _nodes The Nodes to free.
 */
static void freeNs0NodesType(struct full_ns0_nodes *_nodes) {
  int i;
  if (_nodes->nodeProperties != NULL) {
    for (i = 0; i < _nodes->_sizeof_nodeProperties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor nodeProperties[%i] of type full_ns0_nodes...\n", i);
#endif
      freeNs0NodePropertiesType(&(_nodes->nodeProperties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeProperties of type full_ns0_nodes...\n");
#endif
    free(_nodes->nodeProperties);
  }
}
#endif /* DEF_full_ns0_nodes_M */
