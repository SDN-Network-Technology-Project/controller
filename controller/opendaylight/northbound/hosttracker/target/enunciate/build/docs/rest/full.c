#include <enunciate-common.c>
#ifndef DEF_full_ns0_hostConfig_H
#define DEF_full_ns0_hostConfig_H

/**
 *  Configuration Java Object which represents a Host configuration information
 for HostTracker.

 */
struct full_ns0_hostConfig {


  /**
   * (no documentation provided)
   */
  xmlChar *dataLayerAddress;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeType;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeId;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeConnectorType;

  /**
   * (no documentation provided)
   */
  xmlChar *nodeConnectorId;

  /**
   * (no documentation provided)
   */
  xmlChar *vlan;

  /**
   * (no documentation provided)
   */
  int staticHost;

  /**
   * (no documentation provided)
   */
  xmlChar *networkAddress;
};

/**
 * Reads a HostConfig element from XML. The element to be read is "hostConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The HostConfig, or NULL in case of error.
 */
struct full_ns0_hostConfig *xml_read_full_ns0_hostConfig(xmlTextReaderPtr reader);

/**
 * Writes a HostConfig to XML under element name "hostConfig".
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_hostConfig(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig);

/**
 * Frees a HostConfig.
 *
 * @param _hostConfig The HostConfig to free.
 */
void free_full_ns0_hostConfig(struct full_ns0_hostConfig *_hostConfig);

/**
 * Reads a HostConfig element from XML. The element to be read is "hostConfig", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The HostConfig, or NULL in case of error.
 */
struct full_ns0_hostConfig *xmlTextReaderReadNs0HostConfigElement(xmlTextReaderPtr reader);

/**
 * Writes a HostConfig to XML under element name "hostConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostConfigElement(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig);

/**
 * Writes a HostConfig to XML under element name "hostConfig".
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig, int writeNamespaces);

/**
 * Frees the children of a HostConfig.
 *
 * @param _hostConfig The HostConfig whose children are to be free.
 */
static void freeNs0HostConfigElement(struct full_ns0_hostConfig *_hostConfig);

/**
 * Reads a HostConfig from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The HostConfig, or NULL in case of error.
 */
static struct full_ns0_hostConfig *xmlTextReaderReadNs0HostConfigType(xmlTextReaderPtr reader);

/**
 * Writes a HostConfig to XML.
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostConfigType(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig);

/**
 * Frees the elements of a HostConfig.
 *
 * @param _hostConfig The HostConfig to free.
 */
static void freeNs0HostConfigType(struct full_ns0_hostConfig *_hostConfig);

#endif /* DEF_full_ns0_hostConfig_H */
#ifndef DEF_full_ns0_hosts_H
#define DEF_full_ns0_hosts_H

/**
 * (no documentation provided)
 */
struct full_ns0_hosts {


  /**
   * (no documentation provided)
   */
  struct full_ns0_hostConfig *hostConfig;

  /**
   * Size of the hostConfig array.
   */
  int _sizeof_hostConfig;
};

/**
 * Reads a Hosts element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xml_read_full_ns0_hosts(xmlTextReaderPtr reader);

/**
 * Writes a Hosts to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_hosts(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts);

/**
 * Frees a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
void free_full_ns0_hosts(struct full_ns0_hosts *_hosts);

/**
 * Reads a Hosts element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a Hosts to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts);

/**
 * Writes a Hosts to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts, int writeNamespaces);

/**
 * Frees the children of a Hosts.
 *
 * @param _hosts The Hosts whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_hosts *_hosts);

/**
 * Reads a Hosts from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
static struct full_ns0_hosts *xmlTextReaderReadNs0HostsType(xmlTextReaderPtr reader);

/**
 * Writes a Hosts to XML.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0HostsType(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts);

/**
 * Frees the elements of a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
static void freeNs0HostsType(struct full_ns0_hosts *_hosts);

#endif /* DEF_full_ns0_hosts_H */
#ifndef DEF_full_ns0_hostConfig_M
#define DEF_full_ns0_hostConfig_M

/**
 * Reads a HostConfig element from XML. The element to be read is "hostConfig", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The HostConfig, or NULL in case of error.
 */
struct full_ns0_hostConfig *xml_read_full_ns0_hostConfig(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0HostConfigElement(reader);
}

/**
 * Writes a HostConfig to XML under element name "hostConfig".
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_hostConfig(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig) {
  return xmlTextWriterWriteNs0HostConfigElementNS(writer, _hostConfig, 1);
}

/**
 * Frees a HostConfig.
 *
 * @param _hostConfig The HostConfig to free.
 */
void free_full_ns0_hostConfig(struct full_ns0_hostConfig *_hostConfig) {
  freeNs0HostConfigType(_hostConfig);
  free(_hostConfig);
}

/**
 * Reads a HostConfig element from XML. The element to be read is "hostConfig", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The HostConfig, or NULL in case of error.
 */
struct full_ns0_hostConfig *xmlTextReaderReadNs0HostConfigElement(xmlTextReaderPtr reader) {
  struct full_ns0_hostConfig *_hostConfig = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "hostConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}hostConfig.\n");
#endif
    _hostConfig = xmlTextReaderReadNs0HostConfigType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_hostConfig == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}hostConfig failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}hostConfig failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _hostConfig;
}

/**
 * Writes a HostConfig to XML under element name "hostConfig".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostConfigElement(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig) {
  return xmlTextWriterWriteNs0HostConfigElementNS(writer, _hostConfig, 0);
}

/**
 * Writes a HostConfig to XML under element name "hostConfig".
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0HostConfigElementNS(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hostConfig", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}hostConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}hostConfig for root element {}hostConfig...\n");
#endif
  status = xmlTextWriterWriteNs0HostConfigType(writer, _hostConfig);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}hostConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}hostConfig. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a HostConfig.
 *
 * @param _hostConfig The HostConfig whose children are to be free.
 */
static void freeNs0HostConfigElement(struct full_ns0_hostConfig *_hostConfig) {
  freeNs0HostConfigType(_hostConfig);
}

/**
 * Reads a HostConfig from XML. The reader is assumed to be at the start element.
 *
 * @return the HostConfig, or NULL in case of error.
 */
static struct full_ns0_hostConfig *xmlTextReaderReadNs0HostConfigType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_hostConfig *_hostConfig = calloc(1, sizeof(struct full_ns0_hostConfig));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0HostConfigType(_hostConfig);
        free(_hostConfig);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dataLayerAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dataLayerAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dataLayerAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->dataLayerAddress = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->nodeType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->nodeId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnectorType", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnectorType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnectorType of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->nodeConnectorType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nodeConnectorId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nodeConnectorId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nodeConnectorId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->nodeConnectorId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vlan", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vlan of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vlan of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->vlan = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "staticHost", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}staticHost of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}staticHost of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->staticHost = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "networkAddress", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostConfigType(_hostConfig);
          free(_hostConfig);
          return NULL;
        }

        _hostConfig->networkAddress = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}hostConfig.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}hostConfig. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _hostConfig;
}

/**
 * Writes a HostConfig to XML.
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0HostConfigType(xmlTextWriterPtr writer, struct full_ns0_hostConfig *_hostConfig) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_hostConfig->dataLayerAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dataLayerAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dataLayerAddress...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostConfig->dataLayerAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dataLayerAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostConfig->nodeType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nodeType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostConfig->nodeType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nodeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostConfig->nodeId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nodeId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostConfig->nodeId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nodeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostConfig->nodeConnectorType != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorType", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnectorType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectorType...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostConfig->nodeConnectorType));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectorType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnectorType. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostConfig->nodeConnectorId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nodeConnectorId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectorId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostConfig->nodeConnectorId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nodeConnectorId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nodeConnectorId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostConfig->vlan != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vlan", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}vlan...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostConfig->vlan));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}vlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vlan. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "staticHost", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}staticHost. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}staticHost...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_hostConfig->staticHost));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}staticHost. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}staticHost. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_hostConfig->networkAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "networkAddress", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}networkAddress...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_hostConfig->networkAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}networkAddress. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a HostConfig.
 *
 * @param _hostConfig The HostConfig to free.
 */
static void freeNs0HostConfigType(struct full_ns0_hostConfig *_hostConfig) {
  int i;
  if (_hostConfig->dataLayerAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dataLayerAddress of type full_ns0_hostConfig...\n");
#endif
    freeXsStringType(_hostConfig->dataLayerAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dataLayerAddress of type full_ns0_hostConfig...\n");
#endif
    free(_hostConfig->dataLayerAddress);
  }
  if (_hostConfig->nodeType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeType of type full_ns0_hostConfig...\n");
#endif
    freeXsStringType(_hostConfig->nodeType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeType of type full_ns0_hostConfig...\n");
#endif
    free(_hostConfig->nodeType);
  }
  if (_hostConfig->nodeId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeId of type full_ns0_hostConfig...\n");
#endif
    freeXsStringType(_hostConfig->nodeId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeId of type full_ns0_hostConfig...\n");
#endif
    free(_hostConfig->nodeId);
  }
  if (_hostConfig->nodeConnectorType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnectorType of type full_ns0_hostConfig...\n");
#endif
    freeXsStringType(_hostConfig->nodeConnectorType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorType of type full_ns0_hostConfig...\n");
#endif
    free(_hostConfig->nodeConnectorType);
  }
  if (_hostConfig->nodeConnectorId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nodeConnectorId of type full_ns0_hostConfig...\n");
#endif
    freeXsStringType(_hostConfig->nodeConnectorId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nodeConnectorId of type full_ns0_hostConfig...\n");
#endif
    free(_hostConfig->nodeConnectorId);
  }
  if (_hostConfig->vlan != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor vlan of type full_ns0_hostConfig...\n");
#endif
    freeXsStringType(_hostConfig->vlan);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vlan of type full_ns0_hostConfig...\n");
#endif
    free(_hostConfig->vlan);
  }
  if (_hostConfig->networkAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkAddress of type full_ns0_hostConfig...\n");
#endif
    freeXsStringType(_hostConfig->networkAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkAddress of type full_ns0_hostConfig...\n");
#endif
    free(_hostConfig->networkAddress);
  }
}
#endif /* DEF_full_ns0_hostConfig_M */
#ifndef DEF_full_ns0_hosts_M
#define DEF_full_ns0_hosts_M

/**
 * Reads a Hosts element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xml_read_full_ns0_hosts(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a Hosts to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_hosts(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _hosts, 1);
}

/**
 * Frees a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
void free_full_ns0_hosts(struct full_ns0_hosts *_hosts) {
  freeNs0HostsType(_hosts);
  free(_hosts);
}

/**
 * Reads a Hosts element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Hosts, or NULL in case of error.
 */
struct full_ns0_hosts *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_hosts *_hosts = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _hosts = xmlTextReaderReadNs0HostsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_hosts == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _hosts;
}

/**
 * Writes a Hosts to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _hosts, 0);
}

/**
 * Writes a Hosts to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts, int writeNamespaces) {
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
  printf("writing type {}hosts for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0HostsType(writer, _hosts);
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
 * Frees the children of a Hosts.
 *
 * @param _hosts The Hosts whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_hosts *_hosts) {
  freeNs0HostsType(_hosts);
}

/**
 * Reads a Hosts from XML. The reader is assumed to be at the start element.
 *
 * @return the Hosts, or NULL in case of error.
 */
static struct full_ns0_hosts *xmlTextReaderReadNs0HostsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_hosts *_hosts = calloc(1, sizeof(struct full_ns0_hosts));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0HostsType(_hosts);
        free(_hosts);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "hostConfig", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}hostConfig of type {}hostConfig.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0HostConfigType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}hostConfig of type {}hostConfig.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0HostsType(_hosts);
          free(_hosts);
          return NULL;
        }

        _hosts->hostConfig = realloc(_hosts->hostConfig, (_hosts->_sizeof_hostConfig + 1) * sizeof(struct full_ns0_hostConfig));
        memcpy(&(_hosts->hostConfig[_hosts->_sizeof_hostConfig++]), _child_accessor, sizeof(struct full_ns0_hostConfig));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}hosts.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}hosts. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _hosts;
}

/**
 * Writes a Hosts to XML.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0HostsType(xmlTextWriterPtr writer, struct full_ns0_hosts *_hosts) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _hosts->_sizeof_hostConfig; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hostConfig", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}hostConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}hostConfig for element {}hostConfig...\n");
#endif
    status = xmlTextWriterWriteNs0HostConfigType(writer, &(_hosts->hostConfig[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}hostConfig for element {}hostConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}hostConfig. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Hosts.
 *
 * @param _hosts The Hosts to free.
 */
static void freeNs0HostsType(struct full_ns0_hosts *_hosts) {
  int i;
  if (_hosts->hostConfig != NULL) {
    for (i = 0; i < _hosts->_sizeof_hostConfig; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor hostConfig[%i] of type full_ns0_hosts...\n", i);
#endif
      freeNs0HostConfigType(&(_hosts->hostConfig[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor hostConfig of type full_ns0_hosts...\n");
#endif
    free(_hosts->hostConfig);
  }
}
#endif /* DEF_full_ns0_hosts_M */
