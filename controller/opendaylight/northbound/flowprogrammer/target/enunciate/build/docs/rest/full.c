#include <enunciate-common.c>
#ifndef DEF_full_ns0_flowConfigs_H
#define DEF_full_ns0_flowConfigs_H

/**
 * (no documentation provided)
 */
struct full_ns0_flowConfigs {


  /**
   * (no documentation provided)
   */
  struct full_ns0_flowConfig *flowConfig;

  /**
   * Size of the flowConfig array.
   */
  int _sizeof_flowConfig;
};

/**
 * Reads a FlowConfigs element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowConfigs, or NULL in case of error.
 */
struct full_ns0_flowConfigs *xml_read_full_ns0_flowConfigs(xmlTextReaderPtr reader);

/**
 * Writes a FlowConfigs to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flowConfigs(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs);

/**
 * Frees a FlowConfigs.
 *
 * @param _flowConfigs The FlowConfigs to free.
 */
void free_full_ns0_flowConfigs(struct full_ns0_flowConfigs *_flowConfigs);

/**
 * Reads a FlowConfigs element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FlowConfigs, or NULL in case of error.
 */
struct full_ns0_flowConfigs *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a FlowConfigs to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs);

/**
 * Writes a FlowConfigs to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs, int writeNamespaces);

/**
 * Frees the children of a FlowConfigs.
 *
 * @param _flowConfigs The FlowConfigs whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_flowConfigs *_flowConfigs);

/**
 * Reads a FlowConfigs from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FlowConfigs, or NULL in case of error.
 */
static struct full_ns0_flowConfigs *xmlTextReaderReadNs0FlowConfigsType(xmlTextReaderPtr reader);

/**
 * Writes a FlowConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowConfigsType(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs);

/**
 * Frees the elements of a FlowConfigs.
 *
 * @param _flowConfigs The FlowConfigs to free.
 */
static void freeNs0FlowConfigsType(struct full_ns0_flowConfigs *_flowConfigs);

#endif /* DEF_full_ns0_flowConfigs_H */
#ifndef DEF_full_ns0_flowConfig_H
#define DEF_full_ns0_flowConfig_H

/**
 * (no documentation provided)
 */
struct full_ns0_flowConfig {


  /**
   * (no documentation provided)
   */
  xmlChar *nwSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *installInHw;

  /**
   * (no documentation provided)
   */
  xmlChar *idleTimeout;

  /**
   * (no documentation provided)
   */
  xmlChar *vlanId;

  /**
   * (no documentation provided)
   */
  xmlChar *etherType;

  /**
   * (no documentation provided)
   */
  xmlChar *priority;

  /**
   * (no documentation provided)
   */
  xmlChar *tosBits;

  /**
   * (no documentation provided)
   */
  xmlChar *actions;

  /**
   * Size of the actions array.
   */
  int _sizeof_actions;

  /**
   * (no documentation provided)
   */
  xmlChar *dlDst;

  /**
   * (no documentation provided)
   */
  xmlChar *dlSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *tpSrc;

  /**
   * (no documentation provided)
   */
  xmlChar *hardTimeout;

  /**
   * (no documentation provided)
   */
  xmlChar *protocol;

  /**
   * (no documentation provided)
   */
  struct full_ns0_node *node;

  /**
   * (no documentation provided)
   */
  xmlChar *cookie;

  /**
   * (no documentation provided)
   */
  xmlChar *vlanPriority;

  /**
   * (no documentation provided)
   */
  xmlChar *nwDst;

  /**
   * (no documentation provided)
   */
  xmlChar *ingressPort;

  /**
   * (no documentation provided)
   */
  xmlChar *tpDst;

  /**
   * (no documentation provided)
   */
  xmlChar *name;
};

/**
 * Reads a FlowConfig element from XML. The element to be read is "flowConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowConfig, or NULL in case of error.
 */
struct full_ns0_flowConfig *xml_read_full_ns0_flowConfig(xmlTextReaderPtr reader);

/**
 * Writes a FlowConfig to XML under element name "flowConfig".
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_flowConfig(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig);

/**
 * Frees a FlowConfig.
 *
 * @param _flowConfig The FlowConfig to free.
 */
void free_full_ns0_flowConfig(struct full_ns0_flowConfig *_flowConfig);

/**
 * Reads a FlowConfig element from XML. The element to be read is "flowConfig", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The FlowConfig, or NULL in case of error.
 */
struct full_ns0_flowConfig *xmlTextReaderReadNs0FlowConfigElement(xmlTextReaderPtr reader);

/**
 * Writes a FlowConfig to XML under element name "flowConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowConfigElement(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig);

/**
 * Writes a FlowConfig to XML under element name "flowConfig".
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig, int writeNamespaces);

/**
 * Frees the children of a FlowConfig.
 *
 * @param _flowConfig The FlowConfig whose children are to be free.
 */
static void freeNs0FlowConfigElement(struct full_ns0_flowConfig *_flowConfig);

/**
 * Reads a FlowConfig from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The FlowConfig, or NULL in case of error.
 */
static struct full_ns0_flowConfig *xmlTextReaderReadNs0FlowConfigType(xmlTextReaderPtr reader);

/**
 * Writes a FlowConfig to XML.
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0FlowConfigType(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig);

/**
 * Frees the elements of a FlowConfig.
 *
 * @param _flowConfig The FlowConfig to free.
 */
static void freeNs0FlowConfigType(struct full_ns0_flowConfig *_flowConfig);

#endif /* DEF_full_ns0_flowConfig_H */
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
#ifndef DEF_full_ns0_flowConfigs_M
#define DEF_full_ns0_flowConfigs_M

/**
 * Reads a FlowConfigs element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowConfigs, or NULL in case of error.
 */
struct full_ns0_flowConfigs *xml_read_full_ns0_flowConfigs(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a FlowConfigs to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flowConfigs(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _flowConfigs, 1);
}

/**
 * Frees a FlowConfigs.
 *
 * @param _flowConfigs The FlowConfigs to free.
 */
void free_full_ns0_flowConfigs(struct full_ns0_flowConfigs *_flowConfigs) {
  freeNs0FlowConfigsType(_flowConfigs);
  free(_flowConfigs);
}

/**
 * Reads a FlowConfigs element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FlowConfigs, or NULL in case of error.
 */
struct full_ns0_flowConfigs *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_flowConfigs *_flowConfigs = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _flowConfigs = xmlTextReaderReadNs0FlowConfigsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flowConfigs == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flowConfigs;
}

/**
 * Writes a FlowConfigs to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _flowConfigs, 0);
}

/**
 * Writes a FlowConfigs to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs, int writeNamespaces) {
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
  printf("writing type {}flowConfigs for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0FlowConfigsType(writer, _flowConfigs);
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
 * Frees the children of a FlowConfigs.
 *
 * @param _flowConfigs The FlowConfigs whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_flowConfigs *_flowConfigs) {
  freeNs0FlowConfigsType(_flowConfigs);
}

/**
 * Reads a FlowConfigs from XML. The reader is assumed to be at the start element.
 *
 * @return the FlowConfigs, or NULL in case of error.
 */
static struct full_ns0_flowConfigs *xmlTextReaderReadNs0FlowConfigsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flowConfigs *_flowConfigs = calloc(1, sizeof(struct full_ns0_flowConfigs));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowConfigsType(_flowConfigs);
        free(_flowConfigs);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "flowConfig", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}flowConfig of type {}flowConfig.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0FlowConfigType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}flowConfig of type {}flowConfig.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigsType(_flowConfigs);
          free(_flowConfigs);
          return NULL;
        }

        _flowConfigs->flowConfig = realloc(_flowConfigs->flowConfig, (_flowConfigs->_sizeof_flowConfig + 1) * sizeof(struct full_ns0_flowConfig));
        memcpy(&(_flowConfigs->flowConfig[_flowConfigs->_sizeof_flowConfig++]), _child_accessor, sizeof(struct full_ns0_flowConfig));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flowConfigs.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flowConfigs. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flowConfigs;
}

/**
 * Writes a FlowConfigs to XML.
 *
 * @param writer The XML writer.
 * @param _flowConfigs The FlowConfigs to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowConfigsType(xmlTextWriterPtr writer, struct full_ns0_flowConfigs *_flowConfigs) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _flowConfigs->_sizeof_flowConfig; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowConfig", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}flowConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}flowConfig for element {}flowConfig...\n");
#endif
    status = xmlTextWriterWriteNs0FlowConfigType(writer, &(_flowConfigs->flowConfig[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}flowConfig for element {}flowConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}flowConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a FlowConfigs.
 *
 * @param _flowConfigs The FlowConfigs to free.
 */
static void freeNs0FlowConfigsType(struct full_ns0_flowConfigs *_flowConfigs) {
  int i;
  if (_flowConfigs->flowConfig != NULL) {
    for (i = 0; i < _flowConfigs->_sizeof_flowConfig; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor flowConfig[%i] of type full_ns0_flowConfigs...\n", i);
#endif
      freeNs0FlowConfigType(&(_flowConfigs->flowConfig[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor flowConfig of type full_ns0_flowConfigs...\n");
#endif
    free(_flowConfigs->flowConfig);
  }
}
#endif /* DEF_full_ns0_flowConfigs_M */
#ifndef DEF_full_ns0_flowConfig_M
#define DEF_full_ns0_flowConfig_M

/**
 * Reads a FlowConfig element from XML. The element to be read is "flowConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The FlowConfig, or NULL in case of error.
 */
struct full_ns0_flowConfig *xml_read_full_ns0_flowConfig(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0FlowConfigElement(reader);
}

/**
 * Writes a FlowConfig to XML under element name "flowConfig".
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_flowConfig(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig) {
  return xmlTextWriterWriteNs0FlowConfigElementNS(writer, _flowConfig, 1);
}

/**
 * Frees a FlowConfig.
 *
 * @param _flowConfig The FlowConfig to free.
 */
void free_full_ns0_flowConfig(struct full_ns0_flowConfig *_flowConfig) {
  freeNs0FlowConfigType(_flowConfig);
  free(_flowConfig);
}

/**
 * Reads a FlowConfig element from XML. The element to be read is "flowConfig", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The FlowConfig, or NULL in case of error.
 */
struct full_ns0_flowConfig *xmlTextReaderReadNs0FlowConfigElement(xmlTextReaderPtr reader) {
  struct full_ns0_flowConfig *_flowConfig = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flowConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}flowConfig.\n");
#endif
    _flowConfig = xmlTextReaderReadNs0FlowConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_flowConfig == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}flowConfig failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}flowConfig failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _flowConfig;
}

/**
 * Writes a FlowConfig to XML under element name "flowConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowConfigElement(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig) {
  return xmlTextWriterWriteNs0FlowConfigElementNS(writer, _flowConfig, 0);
}

/**
 * Writes a FlowConfig to XML under element name "flowConfig".
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0FlowConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowConfig", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}flowConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}flowConfig for root element {}flowConfig...\n");
#endif
  status = xmlTextWriterWriteNs0FlowConfigType(writer, _flowConfig);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}flowConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}flowConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a FlowConfig.
 *
 * @param _flowConfig The FlowConfig whose children are to be free.
 */
static void freeNs0FlowConfigElement(struct full_ns0_flowConfig *_flowConfig) {
  freeNs0FlowConfigType(_flowConfig);
}

/**
 * Reads a FlowConfig from XML. The reader is assumed to be at the start element.
 *
 * @return the FlowConfig, or NULL in case of error.
 */
static struct full_ns0_flowConfig *xmlTextReaderReadNs0FlowConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_flowConfig *_flowConfig = calloc(1, sizeof(struct full_ns0_flowConfig));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0FlowConfigType(_flowConfig);
        free(_flowConfig);
        return NULL;
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
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->nwSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "installInHw", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}installInHw of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}installInHw of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->installInHw = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "idleTimeout", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}idleTimeout of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}idleTimeout of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->idleTimeout = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vlanId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vlanId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vlanId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->vlanId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "etherType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}etherType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}etherType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->etherType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "priority", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}priority of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}priority of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->priority = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tosBits", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tosBits of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tosBits of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->tosBits = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}actions of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}actions of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->actions = realloc(_flowConfig->actions, (_flowConfig->_sizeof_actions + 1) * sizeof(xmlChar));
        memcpy(&(_flowConfig->actions[_flowConfig->_sizeof_actions++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dlDst", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dlDst of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dlDst of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->dlDst = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dlSrc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dlSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dlSrc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->dlSrc = ((xmlChar*)_child_accessor);
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
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->tpSrc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "hardTimeout", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}hardTimeout of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}hardTimeout of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->hardTimeout = ((xmlChar*)_child_accessor);
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
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->protocol = ((xmlChar*)_child_accessor);
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
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->node = ((struct full_ns0_node*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cookie", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cookie of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cookie of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->cookie = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vlanPriority", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vlanPriority of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vlanPriority of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->vlanPriority = ((xmlChar*)_child_accessor);
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
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->nwDst = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ingressPort", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ingressPort of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ingressPort of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->ingressPort = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
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
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->tpDst = ((xmlChar*)_child_accessor);
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
          freeNs0FlowConfigType(_flowConfig);
          free(_flowConfig);
          return NULL;
        }

        _flowConfig->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}flowConfig.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}flowConfig. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _flowConfig;
}

/**
 * Writes a FlowConfig to XML.
 *
 * @param writer The XML writer.
 * @param _flowConfig The FlowConfig to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0FlowConfigType(xmlTextWriterPtr writer, struct full_ns0_flowConfig *_flowConfig) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_flowConfig->nwSrc != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->nwSrc));
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
  if (_flowConfig->installInHw != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "installInHw", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}installInHw. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}installInHw...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->installInHw));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}installInHw. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}installInHw. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->idleTimeout != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "idleTimeout", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}idleTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}idleTimeout...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->idleTimeout));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}idleTimeout. status: %i\n", status);
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
  if (_flowConfig->vlanId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vlanId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vlanId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}vlanId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->vlanId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}vlanId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vlanId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->etherType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "etherType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}etherType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}etherType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->etherType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}etherType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}etherType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->priority != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "priority", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}priority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}priority...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->priority));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}priority. status: %i\n", status);
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
  if (_flowConfig->tosBits != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tosBits", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tosBits. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tosBits...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->tosBits));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tosBits. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tosBits. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _flowConfig->_sizeof_actions; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actions", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}actions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}actions...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_flowConfig->actions[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}actions. status: %i\n", status);
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
  if (_flowConfig->dlDst != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dlDst", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dlDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dlDst...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->dlDst));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dlDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dlDst. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->dlSrc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dlSrc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dlSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dlSrc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->dlSrc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dlSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dlSrc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->tpSrc != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->tpSrc));
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
  if (_flowConfig->hardTimeout != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hardTimeout", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}hardTimeout. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}hardTimeout...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->hardTimeout));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}hardTimeout. status: %i\n", status);
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
  if (_flowConfig->protocol != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->protocol));
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
  if (_flowConfig->node != NULL) {
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
    status = xmlTextWriterWriteNs0NodeType(writer, (_flowConfig->node));
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
  if (_flowConfig->cookie != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cookie", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cookie. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}cookie...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->cookie));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}cookie. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cookie. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->vlanPriority != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vlanPriority", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vlanPriority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}vlanPriority...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->vlanPriority));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}vlanPriority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vlanPriority. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->nwDst != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->nwDst));
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
  if (_flowConfig->ingressPort != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ingressPort", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ingressPort. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ingressPort...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->ingressPort));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ingressPort. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ingressPort. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_flowConfig->tpDst != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->tpDst));
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
  if (_flowConfig->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_flowConfig->name));
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
 * Frees the elements of a FlowConfig.
 *
 * @param _flowConfig The FlowConfig to free.
 */
static void freeNs0FlowConfigType(struct full_ns0_flowConfig *_flowConfig) {
  int i;
  if (_flowConfig->nwSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nwSrc of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->nwSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nwSrc of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->nwSrc);
  }
  if (_flowConfig->installInHw != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor installInHw of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->installInHw);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor installInHw of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->installInHw);
  }
  if (_flowConfig->idleTimeout != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor idleTimeout of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->idleTimeout);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor idleTimeout of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->idleTimeout);
  }
  if (_flowConfig->vlanId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor vlanId of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->vlanId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vlanId of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->vlanId);
  }
  if (_flowConfig->etherType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor etherType of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->etherType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor etherType of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->etherType);
  }
  if (_flowConfig->priority != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor priority of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->priority);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor priority of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->priority);
  }
  if (_flowConfig->tosBits != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tosBits of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->tosBits);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tosBits of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->tosBits);
  }
  if (_flowConfig->actions != NULL) {
    for (i = 0; i < _flowConfig->_sizeof_actions; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor actions[%i] of type full_ns0_flowConfig...\n", i);
#endif
      freeXsStringType(&(_flowConfig->actions[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor actions of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->actions);
  }
  if (_flowConfig->dlDst != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dlDst of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->dlDst);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dlDst of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->dlDst);
  }
  if (_flowConfig->dlSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dlSrc of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->dlSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dlSrc of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->dlSrc);
  }
  if (_flowConfig->tpSrc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tpSrc of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->tpSrc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tpSrc of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->tpSrc);
  }
  if (_flowConfig->hardTimeout != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor hardTimeout of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->hardTimeout);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor hardTimeout of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->hardTimeout);
  }
  if (_flowConfig->protocol != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor protocol of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->protocol);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor protocol of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->protocol);
  }
  if (_flowConfig->node != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor node of type full_ns0_flowConfig...\n");
#endif
    freeNs0NodeType(_flowConfig->node);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor node of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->node);
  }
  if (_flowConfig->cookie != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cookie of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->cookie);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cookie of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->cookie);
  }
  if (_flowConfig->vlanPriority != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor vlanPriority of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->vlanPriority);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vlanPriority of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->vlanPriority);
  }
  if (_flowConfig->nwDst != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nwDst of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->nwDst);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nwDst of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->nwDst);
  }
  if (_flowConfig->ingressPort != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ingressPort of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->ingressPort);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ingressPort of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->ingressPort);
  }
  if (_flowConfig->tpDst != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tpDst of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->tpDst);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tpDst of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->tpDst);
  }
  if (_flowConfig->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_flowConfig...\n");
#endif
    freeXsStringType(_flowConfig->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_flowConfig...\n");
#endif
    free(_flowConfig->name);
  }
}
#endif /* DEF_full_ns0_flowConfig_M */
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
