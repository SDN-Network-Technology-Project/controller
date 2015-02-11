#include <enunciate-common.c>
#ifndef DEF_full_ns0_containerConfig_H
#define DEF_full_ns0_containerConfig_H

/**
 * (no documentation provided)
 */
struct full_ns0_containerConfig {


  /**
   * (no documentation provided)
   */
  xmlChar *staticVlan;

  /**
   * (no documentation provided)
   */
  xmlChar *container;

  /**
   * (no documentation provided)
   */
  xmlChar *ports;

  /**
   * Size of the ports array.
   */
  int _sizeof_ports;

  /**
   * (no documentation provided)
   */
  struct full_ns0_containerFlowConfig *containerFlows;

  /**
   * Size of the containerFlows array.
   */
  int _sizeof_containerFlows;
};

/**
 * Reads a ContainerConfig element from XML. The element to be read is "containerConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ContainerConfig, or NULL in case of error.
 */
struct full_ns0_containerConfig *xml_read_full_ns0_containerConfig(xmlTextReaderPtr reader);

/**
 * Writes a ContainerConfig to XML under element name "containerConfig".
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_containerConfig(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig);

/**
 * Frees a ContainerConfig.
 *
 * @param _containerConfig The ContainerConfig to free.
 */
void free_full_ns0_containerConfig(struct full_ns0_containerConfig *_containerConfig);

/**
 * Reads a ContainerConfig element from XML. The element to be read is "containerConfig", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ContainerConfig, or NULL in case of error.
 */
struct full_ns0_containerConfig *xmlTextReaderReadNs0ContainerConfigElement(xmlTextReaderPtr reader);

/**
 * Writes a ContainerConfig to XML under element name "containerConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContainerConfigElement(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig);

/**
 * Writes a ContainerConfig to XML under element name "containerConfig".
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContainerConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig, int writeNamespaces);

/**
 * Frees the children of a ContainerConfig.
 *
 * @param _containerConfig The ContainerConfig whose children are to be free.
 */
static void freeNs0ContainerConfigElement(struct full_ns0_containerConfig *_containerConfig);

/**
 * Reads a ContainerConfig from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ContainerConfig, or NULL in case of error.
 */
static struct full_ns0_containerConfig *xmlTextReaderReadNs0ContainerConfigType(xmlTextReaderPtr reader);

/**
 * Writes a ContainerConfig to XML.
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContainerConfigType(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig);

/**
 * Frees the elements of a ContainerConfig.
 *
 * @param _containerConfig The ContainerConfig to free.
 */
static void freeNs0ContainerConfigType(struct full_ns0_containerConfig *_containerConfig);

#endif /* DEF_full_ns0_containerConfig_H */
#ifndef DEF_full_ns0_containerFlowConfig_H
#define DEF_full_ns0_containerFlowConfig_H

/**
 * (no documentation provided)
 */
struct full_ns0_containerFlowConfig {


  /**
   * (no documentation provided)
   */
  xmlChar *tpDst;

  /**
   * (no documentation provided)
   */
  xmlChar *nwDst;

  /**
   * (no documentation provided)
   */
  xmlChar *dlVlan;

  /**
   * (no documentation provided)
   */
  xmlChar *nwSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *tpSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *protocol;
};

/**
 * Reads a ContainerFlowConfig element from XML. The element to be read is "flow-spec-config", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ContainerFlowConfig, or NULL in case of error.
 */
struct full_ns0_containerFlowConfig *xml_read_full_ns0_containerFlowConfig(xmlTextReaderPtr reader);

/**
 * Writes a ContainerFlowConfig to XML under element name "flow-spec-config".
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_containerFlowConfig(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig);

/**
 * Frees a ContainerFlowConfig.
 *
 * @param _containerFlowConfig The ContainerFlowConfig to free.
 */
void free_full_ns0_containerFlowConfig(struct full_ns0_containerFlowConfig *_containerFlowConfig);

/**
 * Reads a ContainerFlowConfig element from XML. The element to be read is "flow-spec-config", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ContainerFlowConfig, or NULL in case of error.
 */
struct full_ns0_containerFlowConfig *xmlTextReaderReadNs0Flow_spec_configElement(xmlTextReaderPtr reader);

/**
 * Writes a ContainerFlowConfig to XML under element name "flow-spec-config".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Flow_spec_configElement(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig);

/**
 * Writes a ContainerFlowConfig to XML under element name "flow-spec-config".
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Flow_spec_configElementNS(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig, int writeNamespaces);

/**
 * Frees the children of a ContainerFlowConfig.
 *
 * @param _containerFlowConfig The ContainerFlowConfig whose children are to be free.
 */
static void freeNs0Flow_spec_configElement(struct full_ns0_containerFlowConfig *_containerFlowConfig);

/**
 * Reads a ContainerFlowConfig from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ContainerFlowConfig, or NULL in case of error.
 */
static struct full_ns0_containerFlowConfig *xmlTextReaderReadNs0ContainerFlowConfigType(xmlTextReaderPtr reader);

/**
 * Writes a ContainerFlowConfig to XML.
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContainerFlowConfigType(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig);

/**
 * Frees the elements of a ContainerFlowConfig.
 *
 * @param _containerFlowConfig The ContainerFlowConfig to free.
 */
static void freeNs0ContainerFlowConfigType(struct full_ns0_containerFlowConfig *_containerFlowConfig);

#endif /* DEF_full_ns0_containerFlowConfig_H */
#ifndef DEF_full_ns0_containerConfigs_H
#define DEF_full_ns0_containerConfigs_H

/**
 * (no documentation provided)
 */
struct full_ns0_containerConfigs {


  /**
   * (no documentation provided)
   */
  struct full_ns0_containerConfig *containerConfig;

  /**
   * Size of the containerConfig array.
   */
  int _sizeof_containerConfig;
};

/**
 * Reads a ContainerConfigs element from XML. The element to be read is "containerConfig-list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ContainerConfigs, or NULL in case of error.
 */
struct full_ns0_containerConfigs *xml_read_full_ns0_containerConfigs(xmlTextReaderPtr reader);

/**
 * Writes a ContainerConfigs to XML under element name "containerConfig-list".
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_containerConfigs(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs);

/**
 * Frees a ContainerConfigs.
 *
 * @param _containerConfigs The ContainerConfigs to free.
 */
void free_full_ns0_containerConfigs(struct full_ns0_containerConfigs *_containerConfigs);

/**
 * Reads a ContainerConfigs element from XML. The element to be read is "containerConfig-list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ContainerConfigs, or NULL in case of error.
 */
struct full_ns0_containerConfigs *xmlTextReaderReadNs0ContainerConfig_listElement(xmlTextReaderPtr reader);

/**
 * Writes a ContainerConfigs to XML under element name "containerConfig-list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContainerConfig_listElement(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs);

/**
 * Writes a ContainerConfigs to XML under element name "containerConfig-list".
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContainerConfig_listElementNS(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs, int writeNamespaces);

/**
 * Frees the children of a ContainerConfigs.
 *
 * @param _containerConfigs The ContainerConfigs whose children are to be free.
 */
static void freeNs0ContainerConfig_listElement(struct full_ns0_containerConfigs *_containerConfigs);

/**
 * Reads a ContainerConfigs from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ContainerConfigs, or NULL in case of error.
 */
static struct full_ns0_containerConfigs *xmlTextReaderReadNs0ContainerConfigsType(xmlTextReaderPtr reader);

/**
 * Writes a ContainerConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ContainerConfigsType(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs);

/**
 * Frees the elements of a ContainerConfigs.
 *
 * @param _containerConfigs The ContainerConfigs to free.
 */
static void freeNs0ContainerConfigsType(struct full_ns0_containerConfigs *_containerConfigs);

#endif /* DEF_full_ns0_containerConfigs_H */
#ifndef DEF_full_ns0_flowSpecConfigs_H
#define DEF_full_ns0_flowSpecConfigs_H

/**
 * (no documentation provided)
 */
struct full_ns0_flowSpecConfigs {


  /**
   * (no documentation provided)
   */
  struct full_ns0_containerFlowConfig *containerFlowConfig;

  /**
   * Size of the containerFlowConfig array.
   */
  int _sizeof_containerFlowConfig;
};

/**
 * Reads a FlowSpecConfigs element from XML. The element to be read is "flow-spec-configs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowSpecConfigs, or NULL in case of error.
 */
struct full_ns0_flowSpecConfigs *xml_read_full_ns0_flowSpecConfigs(xmlTextReaderPtr reader);

/**
 * Writes a FlowSpecConfigs to XML under element name "flow-spec-configs".
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flowSpecConfigs(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs);

/**
 * Frees a FlowSpecConfigs.
 *
 * @param _flowSpecConfigs The FlowSpecConfigs to free.
 */
void free_full_ns0_flowSpecConfigs(struct full_ns0_flowSpecConfigs *_flowSpecConfigs);

/**
 * Reads a FlowSpecConfigs element from XML. The element to be read is "flow-spec-configs", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FlowSpecConfigs, or NULL in case of error.
 */
struct full_ns0_flowSpecConfigs *xmlTextReaderReadNs0Flow_spec_configsElement(xmlTextReaderPtr reader);

/**
 * Writes a FlowSpecConfigs to XML under element name "flow-spec-configs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Flow_spec_configsElement(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs);

/**
 * Writes a FlowSpecConfigs to XML under element name "flow-spec-configs".
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Flow_spec_configsElementNS(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs, int writeNamespaces);

/**
 * Frees the children of a FlowSpecConfigs.
 *
 * @param _flowSpecConfigs The FlowSpecConfigs whose children are to be free.
 */
static void freeNs0Flow_spec_configsElement(struct full_ns0_flowSpecConfigs *_flowSpecConfigs);

/**
 * Reads a FlowSpecConfigs from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FlowSpecConfigs, or NULL in case of error.
 */
static struct full_ns0_flowSpecConfigs *xmlTextReaderReadNs0FlowSpecConfigsType(xmlTextReaderPtr reader);

/**
 * Writes a FlowSpecConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowSpecConfigsType(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs);

/**
 * Frees the elements of a FlowSpecConfigs.
 *
 * @param _flowSpecConfigs The FlowSpecConfigs to free.
 */
static void freeNs0FlowSpecConfigsType(struct full_ns0_flowSpecConfigs *_flowSpecConfigs);

#endif /* DEF_full_ns0_flowSpecConfigs_H */
#ifndef DEF_full_ns0_stringList_H
#define DEF_full_ns0_stringList_H

/**
 * (no documentation provided)
 */
struct full_ns0_stringList {


  /**
   * (no documentation provided)
   */
  xmlChar *list;

  /**
   * Size of the list array.
   */
  int _sizeof_list;
};

/**
 * Reads a StringList element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct full_ns0_stringList *xml_read_full_ns0_stringList(xmlTextReaderPtr reader);

/**
 * Writes a StringList to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_stringList(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList);

/**
 * Frees a StringList.
 *
 * @param _stringList The StringList to free.
 */
void free_full_ns0_stringList(struct full_ns0_stringList *_stringList);

/**
 * Reads a StringList element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct full_ns0_stringList *xmlTextReaderReadNs0NodeConnectorsElement(xmlTextReaderPtr reader);

/**
 * Writes a StringList to XML under element name "nodeConnectors".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElement(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList);

/**
 * Writes a StringList to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElementNS(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList, int writeNamespaces);

/**
 * Frees the children of a StringList.
 *
 * @param _stringList The StringList whose children are to be free.
 */
static void freeNs0NodeConnectorsElement(struct full_ns0_stringList *_stringList);

/**
 * Reads a StringList from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
static struct full_ns0_stringList *xmlTextReaderReadNs0StringListType(xmlTextReaderPtr reader);

/**
 * Writes a StringList to XML.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StringListType(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList);

/**
 * Frees the elements of a StringList.
 *
 * @param _stringList The StringList to free.
 */
static void freeNs0StringListType(struct full_ns0_stringList *_stringList);

#endif /* DEF_full_ns0_stringList_H */
#ifndef DEF_full_ns0_containerConfig_M
#define DEF_full_ns0_containerConfig_M

/**
 * Reads a ContainerConfig element from XML. The element to be read is "containerConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ContainerConfig, or NULL in case of error.
 */
struct full_ns0_containerConfig *xml_read_full_ns0_containerConfig(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ContainerConfigElement(reader);
}

/**
 * Writes a ContainerConfig to XML under element name "containerConfig".
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_containerConfig(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig) {
  return xmlTextWriterWriteNs0ContainerConfigElementNS(writer, _containerConfig, 1);
}

/**
 * Frees a ContainerConfig.
 *
 * @param _containerConfig The ContainerConfig to free.
 */
void free_full_ns0_containerConfig(struct full_ns0_containerConfig *_containerConfig) {
  freeNs0ContainerConfigType(_containerConfig);
  free(_containerConfig);
}

/**
 * Reads a ContainerConfig element from XML. The element to be read is "containerConfig", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ContainerConfig, or NULL in case of error.
 */
struct full_ns0_containerConfig *xmlTextReaderReadNs0ContainerConfigElement(xmlTextReaderPtr reader) {
  struct full_ns0_containerConfig *_containerConfig = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "containerConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}containerConfig.\n");
#endif
    _containerConfig = xmlTextReaderReadNs0ContainerConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_containerConfig == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}containerConfig failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}containerConfig failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _containerConfig;
}

/**
 * Writes a ContainerConfig to XML under element name "containerConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ContainerConfigElement(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig) {
  return xmlTextWriterWriteNs0ContainerConfigElementNS(writer, _containerConfig, 0);
}

/**
 * Writes a ContainerConfig to XML under element name "containerConfig".
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ContainerConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "containerConfig", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}containerConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}containerConfig for root element {}containerConfig...\n");
#endif
  status = xmlTextWriterWriteNs0ContainerConfigType(writer, _containerConfig);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}containerConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}containerConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ContainerConfig.
 *
 * @param _containerConfig The ContainerConfig whose children are to be free.
 */
static void freeNs0ContainerConfigElement(struct full_ns0_containerConfig *_containerConfig) {
  freeNs0ContainerConfigType(_containerConfig);
}

/**
 * Reads a ContainerConfig from XML. The reader is assumed to be at the start element.
 *
 * @return the ContainerConfig, or NULL in case of error.
 */
static struct full_ns0_containerConfig *xmlTextReaderReadNs0ContainerConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_containerConfig *_containerConfig = calloc(1, sizeof(struct full_ns0_containerConfig));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ContainerConfigType(_containerConfig);
        free(_containerConfig);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "staticVlan", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}staticVlan of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}staticVlan of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerConfigType(_containerConfig);
          free(_containerConfig);
          return NULL;
        }

        _containerConfig->staticVlan = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "container", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}container of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}container of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerConfigType(_containerConfig);
          free(_containerConfig);
          return NULL;
        }

        _containerConfig->container = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerConfigType(_containerConfig);
          free(_containerConfig);
          return NULL;
        }

        _containerConfig->ports = realloc(_containerConfig->ports, (_containerConfig->_sizeof_ports + 1) * sizeof(xmlChar));
        memcpy(&(_containerConfig->ports[_containerConfig->_sizeof_ports++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flowSpecs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flowSpecs of type {}containerFlowConfig.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ContainerFlowConfigType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flowSpecs of type {}containerFlowConfig.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerConfigType(_containerConfig);
          free(_containerConfig);
          return NULL;
        }

        _containerConfig->containerFlows = realloc(_containerConfig->containerFlows, (_containerConfig->_sizeof_containerFlows + 1) * sizeof(struct full_ns0_containerFlowConfig));
        memcpy(&(_containerConfig->containerFlows[_containerConfig->_sizeof_containerFlows++]), _child_accessor, sizeof(struct full_ns0_containerFlowConfig));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}containerConfig.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}containerConfig. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _containerConfig;
}

/**
 * Writes a ContainerConfig to XML.
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ContainerConfigType(xmlTextWriterPtr writer, struct full_ns0_containerConfig *_containerConfig) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_containerConfig->staticVlan != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "staticVlan", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}staticVlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}staticVlan...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerConfig->staticVlan));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}staticVlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}staticVlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_containerConfig->container != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "container", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}container. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}container...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerConfig->container));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}container. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}container. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _containerConfig->_sizeof_ports; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnectors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectors...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_containerConfig->ports[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnectors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _containerConfig->_sizeof_containerFlows; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowSpecs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flowSpecs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}containerFlowConfig for element {}flowSpecs...\n");
#endif
    status = xmlTextWriterWriteNs0ContainerFlowConfigType(writer, &(_containerConfig->containerFlows[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}containerFlowConfig for element {}flowSpecs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flowSpecs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ContainerConfig.
 *
 * @param _containerConfig The ContainerConfig to free.
 */
static void freeNs0ContainerConfigType(struct full_ns0_containerConfig *_containerConfig) {
  int i;
  if (_containerConfig->staticVlan != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor staticVlan of type full_ns0_containerConfig...\n");
#endif
    freeXsStringType(_containerConfig->staticVlan);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor staticVlan of type full_ns0_containerConfig...\n");
#endif
    free(_containerConfig->staticVlan);
  }
  if (_containerConfig->container != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor container of type full_ns0_containerConfig...\n");
#endif
    freeXsStringType(_containerConfig->container);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor container of type full_ns0_containerConfig...\n");
#endif
    free(_containerConfig->container);
  }
  if (_containerConfig->ports != NULL) {
    for (i = 0; i < _containerConfig->_sizeof_ports; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor ports[%i] of type full_ns0_containerConfig...\n", i);
#endif
      freeXsStringType(&(_containerConfig->ports[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ports of type full_ns0_containerConfig...\n");
#endif
    free(_containerConfig->ports);
  }
  if (_containerConfig->containerFlows != NULL) {
    for (i = 0; i < _containerConfig->_sizeof_containerFlows; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor containerFlows[%i] of type full_ns0_containerConfig...\n", i);
#endif
      freeNs0ContainerFlowConfigType(&(_containerConfig->containerFlows[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor containerFlows of type full_ns0_containerConfig...\n");
#endif
    free(_containerConfig->containerFlows);
  }
}
#endif /* DEF_full_ns0_containerConfig_M */
#ifndef DEF_full_ns0_containerFlowConfig_M
#define DEF_full_ns0_containerFlowConfig_M

/**
 * Reads a ContainerFlowConfig element from XML. The element to be read is "flow-spec-config", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ContainerFlowConfig, or NULL in case of error.
 */
struct full_ns0_containerFlowConfig *xml_read_full_ns0_containerFlowConfig(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Flow_spec_configElement(reader);
}

/**
 * Writes a ContainerFlowConfig to XML under element name "flow-spec-config".
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_containerFlowConfig(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig) {
  return xmlTextWriterWriteNs0Flow_spec_configElementNS(writer, _containerFlowConfig, 1);
}

/**
 * Frees a ContainerFlowConfig.
 *
 * @param _containerFlowConfig The ContainerFlowConfig to free.
 */
void free_full_ns0_containerFlowConfig(struct full_ns0_containerFlowConfig *_containerFlowConfig) {
  freeNs0ContainerFlowConfigType(_containerFlowConfig);
  free(_containerFlowConfig);
}

/**
 * Reads a ContainerFlowConfig element from XML. The element to be read is "flow-spec-config", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ContainerFlowConfig, or NULL in case of error.
 */
struct full_ns0_containerFlowConfig *xmlTextReaderReadNs0Flow_spec_configElement(xmlTextReaderPtr reader) {
  struct full_ns0_containerFlowConfig *_containerFlowConfig = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flow-spec-config", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}flow-spec-config.\n");
#endif
    _containerFlowConfig = xmlTextReaderReadNs0ContainerFlowConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_containerFlowConfig == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}flow-spec-config failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}flow-spec-config failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _containerFlowConfig;
}

/**
 * Writes a ContainerFlowConfig to XML under element name "flow-spec-config".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Flow_spec_configElement(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig) {
  return xmlTextWriterWriteNs0Flow_spec_configElementNS(writer, _containerFlowConfig, 0);
}

/**
 * Writes a ContainerFlowConfig to XML under element name "flow-spec-config".
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Flow_spec_configElementNS(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow-spec-config", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}flow-spec-config. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}containerFlowConfig for root element {}flow-spec-config...\n");
#endif
  status = xmlTextWriterWriteNs0ContainerFlowConfigType(writer, _containerFlowConfig);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}flow-spec-config. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}flow-spec-config. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ContainerFlowConfig.
 *
 * @param _containerFlowConfig The ContainerFlowConfig whose children are to be free.
 */
static void freeNs0Flow_spec_configElement(struct full_ns0_containerFlowConfig *_containerFlowConfig) {
  freeNs0ContainerFlowConfigType(_containerFlowConfig);
}

/**
 * Reads a ContainerFlowConfig from XML. The reader is assumed to be at the start element.
 *
 * @return the ContainerFlowConfig, or NULL in case of error.
 */
static struct full_ns0_containerFlowConfig *xmlTextReaderReadNs0ContainerFlowConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_containerFlowConfig *_containerFlowConfig = calloc(1, sizeof(struct full_ns0_containerFlowConfig));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ContainerFlowConfigType(_containerFlowConfig);
        free(_containerFlowConfig);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tpDst", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tpDst of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tpDst of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerFlowConfigType(_containerFlowConfig);
          free(_containerFlowConfig);
          return NULL;
        }

        _containerFlowConfig->tpDst = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nwDst", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nwDst of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nwDst of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerFlowConfigType(_containerFlowConfig);
          free(_containerFlowConfig);
          return NULL;
        }

        _containerFlowConfig->nwDst = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dlVlan", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dlVlan of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dlVlan of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerFlowConfigType(_containerFlowConfig);
          free(_containerFlowConfig);
          return NULL;
        }

        _containerFlowConfig->dlVlan = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nwSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nwSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nwSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerFlowConfigType(_containerFlowConfig);
          free(_containerFlowConfig);
          return NULL;
        }

        _containerFlowConfig->nwSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tpSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tpSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tpSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerFlowConfigType(_containerFlowConfig);
          free(_containerFlowConfig);
          return NULL;
        }

        _containerFlowConfig->tpSrc = ((xmlChar*)_child_accessor);
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
          freeNs0ContainerFlowConfigType(_containerFlowConfig);
          free(_containerFlowConfig);
          return NULL;
        }

        _containerFlowConfig->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "protocol", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}protocol of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}protocol of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerFlowConfigType(_containerFlowConfig);
          free(_containerFlowConfig);
          return NULL;
        }

        _containerFlowConfig->protocol = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}containerFlowConfig.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}containerFlowConfig. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _containerFlowConfig;
}

/**
 * Writes a ContainerFlowConfig to XML.
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ContainerFlowConfigType(xmlTextWriterPtr writer, struct full_ns0_containerFlowConfig *_containerFlowConfig) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_containerFlowConfig->tpDst != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tpDst", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tpDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tpDst...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerFlowConfig->tpDst));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tpDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tpDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_containerFlowConfig->nwDst != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nwDst", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nwDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nwDst...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerFlowConfig->nwDst));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nwDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nwDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_containerFlowConfig->dlVlan != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dlVlan", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dlVlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dlVlan...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerFlowConfig->dlVlan));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dlVlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dlVlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_containerFlowConfig->nwSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nwSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nwSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nwSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerFlowConfig->nwSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nwSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nwSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_containerFlowConfig->tpSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tpSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tpSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tpSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerFlowConfig->tpSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tpSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tpSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_containerFlowConfig->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_containerFlowConfig->name));
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
  if (_containerFlowConfig->protocol != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "protocol", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}protocol. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}protocol...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_containerFlowConfig->protocol));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}protocol. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}protocol. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ContainerFlowConfig.
 *
 * @param _containerFlowConfig The ContainerFlowConfig to free.
 */
static void freeNs0ContainerFlowConfigType(struct full_ns0_containerFlowConfig *_containerFlowConfig) {
  int i;
  if (_containerFlowConfig->tpDst != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tpDst of type full_ns0_containerFlowConfig...\n");
#endif
    freeXsStringType(_containerFlowConfig->tpDst);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tpDst of type full_ns0_containerFlowConfig...\n");
#endif
    free(_containerFlowConfig->tpDst);
  }
  if (_containerFlowConfig->nwDst != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nwDst of type full_ns0_containerFlowConfig...\n");
#endif
    freeXsStringType(_containerFlowConfig->nwDst);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nwDst of type full_ns0_containerFlowConfig...\n");
#endif
    free(_containerFlowConfig->nwDst);
  }
  if (_containerFlowConfig->dlVlan != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dlVlan of type full_ns0_containerFlowConfig...\n");
#endif
    freeXsStringType(_containerFlowConfig->dlVlan);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dlVlan of type full_ns0_containerFlowConfig...\n");
#endif
    free(_containerFlowConfig->dlVlan);
  }
  if (_containerFlowConfig->nwSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nwSrc of type full_ns0_containerFlowConfig...\n");
#endif
    freeXsStringType(_containerFlowConfig->nwSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nwSrc of type full_ns0_containerFlowConfig...\n");
#endif
    free(_containerFlowConfig->nwSrc);
  }
  if (_containerFlowConfig->tpSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tpSrc of type full_ns0_containerFlowConfig...\n");
#endif
    freeXsStringType(_containerFlowConfig->tpSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tpSrc of type full_ns0_containerFlowConfig...\n");
#endif
    free(_containerFlowConfig->tpSrc);
  }
  if (_containerFlowConfig->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_containerFlowConfig...\n");
#endif
    freeXsStringType(_containerFlowConfig->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_containerFlowConfig...\n");
#endif
    free(_containerFlowConfig->name);
  }
  if (_containerFlowConfig->protocol != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor protocol of type full_ns0_containerFlowConfig...\n");
#endif
    freeXsStringType(_containerFlowConfig->protocol);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor protocol of type full_ns0_containerFlowConfig...\n");
#endif
    free(_containerFlowConfig->protocol);
  }
}
#endif /* DEF_full_ns0_containerFlowConfig_M */
#ifndef DEF_full_ns0_containerConfigs_M
#define DEF_full_ns0_containerConfigs_M

/**
 * Reads a ContainerConfigs element from XML. The element to be read is "containerConfig-list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ContainerConfigs, or NULL in case of error.
 */
struct full_ns0_containerConfigs *xml_read_full_ns0_containerConfigs(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ContainerConfig_listElement(reader);
}

/**
 * Writes a ContainerConfigs to XML under element name "containerConfig-list".
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_containerConfigs(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs) {
  return xmlTextWriterWriteNs0ContainerConfig_listElementNS(writer, _containerConfigs, 1);
}

/**
 * Frees a ContainerConfigs.
 *
 * @param _containerConfigs The ContainerConfigs to free.
 */
void free_full_ns0_containerConfigs(struct full_ns0_containerConfigs *_containerConfigs) {
  freeNs0ContainerConfigsType(_containerConfigs);
  free(_containerConfigs);
}

/**
 * Reads a ContainerConfigs element from XML. The element to be read is "containerConfig-list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ContainerConfigs, or NULL in case of error.
 */
struct full_ns0_containerConfigs *xmlTextReaderReadNs0ContainerConfig_listElement(xmlTextReaderPtr reader) {
  struct full_ns0_containerConfigs *_containerConfigs = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "containerConfig-list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}containerConfig-list.\n");
#endif
    _containerConfigs = xmlTextReaderReadNs0ContainerConfigsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_containerConfigs == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}containerConfig-list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}containerConfig-list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _containerConfigs;
}

/**
 * Writes a ContainerConfigs to XML under element name "containerConfig-list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ContainerConfig_listElement(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs) {
  return xmlTextWriterWriteNs0ContainerConfig_listElementNS(writer, _containerConfigs, 0);
}

/**
 * Writes a ContainerConfigs to XML under element name "containerConfig-list".
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ContainerConfig_listElementNS(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "containerConfig-list", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}containerConfig-list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}containerConfigs for root element {}containerConfig-list...\n");
#endif
  status = xmlTextWriterWriteNs0ContainerConfigsType(writer, _containerConfigs);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}containerConfig-list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}containerConfig-list. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ContainerConfigs.
 *
 * @param _containerConfigs The ContainerConfigs whose children are to be free.
 */
static void freeNs0ContainerConfig_listElement(struct full_ns0_containerConfigs *_containerConfigs) {
  freeNs0ContainerConfigsType(_containerConfigs);
}

/**
 * Reads a ContainerConfigs from XML. The reader is assumed to be at the start element.
 *
 * @return the ContainerConfigs, or NULL in case of error.
 */
static struct full_ns0_containerConfigs *xmlTextReaderReadNs0ContainerConfigsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_containerConfigs *_containerConfigs = calloc(1, sizeof(struct full_ns0_containerConfigs));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ContainerConfigsType(_containerConfigs);
        free(_containerConfigs);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "containerConfig", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}containerConfig of type {}containerConfig.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ContainerConfigType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}containerConfig of type {}containerConfig.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ContainerConfigsType(_containerConfigs);
          free(_containerConfigs);
          return NULL;
        }

        _containerConfigs->containerConfig = realloc(_containerConfigs->containerConfig, (_containerConfigs->_sizeof_containerConfig + 1) * sizeof(struct full_ns0_containerConfig));
        memcpy(&(_containerConfigs->containerConfig[_containerConfigs->_sizeof_containerConfig++]), _child_accessor, sizeof(struct full_ns0_containerConfig));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}containerConfigs.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}containerConfigs. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _containerConfigs;
}

/**
 * Writes a ContainerConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ContainerConfigsType(xmlTextWriterPtr writer, struct full_ns0_containerConfigs *_containerConfigs) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _containerConfigs->_sizeof_containerConfig; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "containerConfig", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}containerConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}containerConfig for element {}containerConfig...\n");
#endif
    status = xmlTextWriterWriteNs0ContainerConfigType(writer, &(_containerConfigs->containerConfig[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}containerConfig for element {}containerConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}containerConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ContainerConfigs.
 *
 * @param _containerConfigs The ContainerConfigs to free.
 */
static void freeNs0ContainerConfigsType(struct full_ns0_containerConfigs *_containerConfigs) {
  int i;
  if (_containerConfigs->containerConfig != NULL) {
    for (i = 0; i < _containerConfigs->_sizeof_containerConfig; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor containerConfig[%i] of type full_ns0_containerConfigs...\n", i);
#endif
      freeNs0ContainerConfigType(&(_containerConfigs->containerConfig[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor containerConfig of type full_ns0_containerConfigs...\n");
#endif
    free(_containerConfigs->containerConfig);
  }
}
#endif /* DEF_full_ns0_containerConfigs_M */
#ifndef DEF_full_ns0_flowSpecConfigs_M
#define DEF_full_ns0_flowSpecConfigs_M

/**
 * Reads a FlowSpecConfigs element from XML. The element to be read is "flow-spec-configs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowSpecConfigs, or NULL in case of error.
 */
struct full_ns0_flowSpecConfigs *xml_read_full_ns0_flowSpecConfigs(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Flow_spec_configsElement(reader);
}

/**
 * Writes a FlowSpecConfigs to XML under element name "flow-spec-configs".
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flowSpecConfigs(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs) {
  return xmlTextWriterWriteNs0Flow_spec_configsElementNS(writer, _flowSpecConfigs, 1);
}

/**
 * Frees a FlowSpecConfigs.
 *
 * @param _flowSpecConfigs The FlowSpecConfigs to free.
 */
void free_full_ns0_flowSpecConfigs(struct full_ns0_flowSpecConfigs *_flowSpecConfigs) {
  freeNs0FlowSpecConfigsType(_flowSpecConfigs);
  free(_flowSpecConfigs);
}

/**
 * Reads a FlowSpecConfigs element from XML. The element to be read is "flow-spec-configs", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FlowSpecConfigs, or NULL in case of error.
 */
struct full_ns0_flowSpecConfigs *xmlTextReaderReadNs0Flow_spec_configsElement(xmlTextReaderPtr reader) {
  struct full_ns0_flowSpecConfigs *_flowSpecConfigs = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flow-spec-configs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}flow-spec-configs.\n");
#endif
    _flowSpecConfigs = xmlTextReaderReadNs0FlowSpecConfigsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flowSpecConfigs == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}flow-spec-configs failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}flow-spec-configs failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flowSpecConfigs;
}

/**
 * Writes a FlowSpecConfigs to XML under element name "flow-spec-configs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Flow_spec_configsElement(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs) {
  return xmlTextWriterWriteNs0Flow_spec_configsElementNS(writer, _flowSpecConfigs, 0);
}

/**
 * Writes a FlowSpecConfigs to XML under element name "flow-spec-configs".
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Flow_spec_configsElementNS(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow-spec-configs", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}flow-spec-configs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flowSpecConfigs for root element {}flow-spec-configs...\n");
#endif
  status = xmlTextWriterWriteNs0FlowSpecConfigsType(writer, _flowSpecConfigs);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}flow-spec-configs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}flow-spec-configs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a FlowSpecConfigs.
 *
 * @param _flowSpecConfigs The FlowSpecConfigs whose children are to be free.
 */
static void freeNs0Flow_spec_configsElement(struct full_ns0_flowSpecConfigs *_flowSpecConfigs) {
  freeNs0FlowSpecConfigsType(_flowSpecConfigs);
}

/**
 * Reads a FlowSpecConfigs from XML. The reader is assumed to be at the start element.
 *
 * @return the FlowSpecConfigs, or NULL in case of error.
 */
static struct full_ns0_flowSpecConfigs *xmlTextReaderReadNs0FlowSpecConfigsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flowSpecConfigs *_flowSpecConfigs = calloc(1, sizeof(struct full_ns0_flowSpecConfigs));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowSpecConfigsType(_flowSpecConfigs);
        free(_flowSpecConfigs);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flow-spec-config", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flow-spec-config of type {}containerFlowConfig.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ContainerFlowConfigType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flow-spec-config of type {}containerFlowConfig.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowSpecConfigsType(_flowSpecConfigs);
          free(_flowSpecConfigs);
          return NULL;
        }

        _flowSpecConfigs->containerFlowConfig = realloc(_flowSpecConfigs->containerFlowConfig, (_flowSpecConfigs->_sizeof_containerFlowConfig + 1) * sizeof(struct full_ns0_containerFlowConfig));
        memcpy(&(_flowSpecConfigs->containerFlowConfig[_flowSpecConfigs->_sizeof_containerFlowConfig++]), _child_accessor, sizeof(struct full_ns0_containerFlowConfig));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flowSpecConfigs.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flowSpecConfigs. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flowSpecConfigs;
}

/**
 * Writes a FlowSpecConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowSpecConfigsType(xmlTextWriterPtr writer, struct full_ns0_flowSpecConfigs *_flowSpecConfigs) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _flowSpecConfigs->_sizeof_containerFlowConfig; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow-spec-config", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flow-spec-config. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}containerFlowConfig for element {}flow-spec-config...\n");
#endif
    status = xmlTextWriterWriteNs0ContainerFlowConfigType(writer, &(_flowSpecConfigs->containerFlowConfig[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}containerFlowConfig for element {}flow-spec-config. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flow-spec-config. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a FlowSpecConfigs.
 *
 * @param _flowSpecConfigs The FlowSpecConfigs to free.
 */
static void freeNs0FlowSpecConfigsType(struct full_ns0_flowSpecConfigs *_flowSpecConfigs) {
  int i;
  if (_flowSpecConfigs->containerFlowConfig != NULL) {
    for (i = 0; i < _flowSpecConfigs->_sizeof_containerFlowConfig; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor containerFlowConfig[%i] of type full_ns0_flowSpecConfigs...\n", i);
#endif
      freeNs0ContainerFlowConfigType(&(_flowSpecConfigs->containerFlowConfig[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor containerFlowConfig of type full_ns0_flowSpecConfigs...\n");
#endif
    free(_flowSpecConfigs->containerFlowConfig);
  }
}
#endif /* DEF_full_ns0_flowSpecConfigs_M */
#ifndef DEF_full_ns0_stringList_M
#define DEF_full_ns0_stringList_M

/**
 * Reads a StringList element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct full_ns0_stringList *xml_read_full_ns0_stringList(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NodeConnectorsElement(reader);
}

/**
 * Writes a StringList to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_stringList(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList) {
  return xmlTextWriterWriteNs0NodeConnectorsElementNS(writer, _stringList, 1);
}

/**
 * Frees a StringList.
 *
 * @param _stringList The StringList to free.
 */
void free_full_ns0_stringList(struct full_ns0_stringList *_stringList) {
  freeNs0StringListType(_stringList);
  free(_stringList);
}

/**
 * Reads a StringList element from XML. The element to be read is "nodeConnectors", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct full_ns0_stringList *xmlTextReaderReadNs0NodeConnectorsElement(xmlTextReaderPtr reader) {
  struct full_ns0_stringList *_stringList = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}nodeConnectors.\n");
#endif
    _stringList = xmlTextReaderReadNs0StringListType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_stringList == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}nodeConnectors failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}nodeConnectors failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _stringList;
}

/**
 * Writes a StringList to XML under element name "nodeConnectors".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElement(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList) {
  return xmlTextWriterWriteNs0NodeConnectorsElementNS(writer, _stringList, 0);
}

/**
 * Writes a StringList to XML under element name "nodeConnectors".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NodeConnectorsElementNS(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}nodeConnectors. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}stringList for root element {}nodeConnectors...\n");
#endif
  status = xmlTextWriterWriteNs0StringListType(writer, _stringList);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}nodeConnectors. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}nodeConnectors. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a StringList.
 *
 * @param _stringList The StringList whose children are to be free.
 */
static void freeNs0NodeConnectorsElement(struct full_ns0_stringList *_stringList) {
  freeNs0StringListType(_stringList);
}

/**
 * Reads a StringList from XML. The reader is assumed to be at the start element.
 *
 * @return the StringList, or NULL in case of error.
 */
static struct full_ns0_stringList *xmlTextReaderReadNs0StringListType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_stringList *_stringList = calloc(1, sizeof(struct full_ns0_stringList));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StringListType(_stringList);
        free(_stringList);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StringListType(_stringList);
          free(_stringList);
          return NULL;
        }

        _stringList->list = realloc(_stringList->list, (_stringList->_sizeof_list + 1) * sizeof(xmlChar));
        memcpy(&(_stringList->list[_stringList->_sizeof_list++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}stringList.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}stringList. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _stringList;
}

/**
 * Writes a StringList to XML.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StringListType(xmlTextWriterPtr writer, struct full_ns0_stringList *_stringList) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _stringList->_sizeof_list; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnectors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectors...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_stringList->list[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnectors. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a StringList.
 *
 * @param _stringList The StringList to free.
 */
static void freeNs0StringListType(struct full_ns0_stringList *_stringList) {
  int i;
  if (_stringList->list != NULL) {
    for (i = 0; i < _stringList->_sizeof_list; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor list[%i] of type full_ns0_stringList...\n", i);
#endif
      freeXsStringType(&(_stringList->list[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor list of type full_ns0_stringList...\n");
#endif
    free(_stringList->list);
  }
}
#endif /* DEF_full_ns0_stringList_M */
