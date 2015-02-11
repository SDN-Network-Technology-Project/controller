#include <enunciate-common.c>
#ifndef DEF_full_ns0_controllerProperties_H
#define DEF_full_ns0_controllerProperties_H

/**
 *  The class describes set of properties attached to a controller

 */
struct full_ns0_controllerProperties {


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
 * Reads a ControllerProperties element from XML. The element to be read is "controllerProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ControllerProperties, or NULL in case of error.
 */
struct full_ns0_controllerProperties *xml_read_full_ns0_controllerProperties(xmlTextReaderPtr reader);

/**
 * Writes a ControllerProperties to XML under element name "controllerProperties".
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_controllerProperties(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties);

/**
 * Frees a ControllerProperties.
 *
 * @param _controllerProperties The ControllerProperties to free.
 */
void free_full_ns0_controllerProperties(struct full_ns0_controllerProperties *_controllerProperties);

/**
 * Reads a ControllerProperties element from XML. The element to be read is "controllerProperties", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ControllerProperties, or NULL in case of error.
 */
struct full_ns0_controllerProperties *xmlTextReaderReadNs0ControllerPropertiesElement(xmlTextReaderPtr reader);

/**
 * Writes a ControllerProperties to XML under element name "controllerProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ControllerPropertiesElement(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties);

/**
 * Writes a ControllerProperties to XML under element name "controllerProperties".
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ControllerPropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties, int writeNamespaces);

/**
 * Frees the children of a ControllerProperties.
 *
 * @param _controllerProperties The ControllerProperties whose children are to be free.
 */
static void freeNs0ControllerPropertiesElement(struct full_ns0_controllerProperties *_controllerProperties);

/**
 * Reads a ControllerProperties from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ControllerProperties, or NULL in case of error.
 */
static struct full_ns0_controllerProperties *xmlTextReaderReadNs0ControllerPropertiesType(xmlTextReaderPtr reader);

/**
 * Writes a ControllerProperties to XML.
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ControllerPropertiesType(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties);

/**
 * Frees the elements of a ControllerProperties.
 *
 * @param _controllerProperties The ControllerProperties to free.
 */
static void freeNs0ControllerPropertiesType(struct full_ns0_controllerProperties *_controllerProperties);

#endif /* DEF_full_ns0_controllerProperties_H */
#ifndef DEF_full_ns0_controllerProperties_M
#define DEF_full_ns0_controllerProperties_M

/**
 * Reads a ControllerProperties element from XML. The element to be read is "controllerProperties", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ControllerProperties, or NULL in case of error.
 */
struct full_ns0_controllerProperties *xml_read_full_ns0_controllerProperties(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ControllerPropertiesElement(reader);
}

/**
 * Writes a ControllerProperties to XML under element name "controllerProperties".
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_controllerProperties(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties) {
  return xmlTextWriterWriteNs0ControllerPropertiesElementNS(writer, _controllerProperties, 1);
}

/**
 * Frees a ControllerProperties.
 *
 * @param _controllerProperties The ControllerProperties to free.
 */
void free_full_ns0_controllerProperties(struct full_ns0_controllerProperties *_controllerProperties) {
  freeNs0ControllerPropertiesType(_controllerProperties);
  free(_controllerProperties);
}

/**
 * Reads a ControllerProperties element from XML. The element to be read is "controllerProperties", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ControllerProperties, or NULL in case of error.
 */
struct full_ns0_controllerProperties *xmlTextReaderReadNs0ControllerPropertiesElement(xmlTextReaderPtr reader) {
  struct full_ns0_controllerProperties *_controllerProperties = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "controllerProperties", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}controllerProperties.\n");
#endif
    _controllerProperties = xmlTextReaderReadNs0ControllerPropertiesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_controllerProperties == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}controllerProperties failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}controllerProperties failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _controllerProperties;
}

/**
 * Writes a ControllerProperties to XML under element name "controllerProperties".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ControllerPropertiesElement(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties) {
  return xmlTextWriterWriteNs0ControllerPropertiesElementNS(writer, _controllerProperties, 0);
}

/**
 * Writes a ControllerProperties to XML under element name "controllerProperties".
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ControllerPropertiesElementNS(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "controllerProperties", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}controllerProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}controllerProperties for root element {}controllerProperties...\n");
#endif
  status = xmlTextWriterWriteNs0ControllerPropertiesType(writer, _controllerProperties);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}controllerProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}controllerProperties. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ControllerProperties.
 *
 * @param _controllerProperties The ControllerProperties whose children are to be free.
 */
static void freeNs0ControllerPropertiesElement(struct full_ns0_controllerProperties *_controllerProperties) {
  freeNs0ControllerPropertiesType(_controllerProperties);
}

/**
 * Reads a ControllerProperties from XML. The reader is assumed to be at the start element.
 *
 * @return the ControllerProperties, or NULL in case of error.
 */
static struct full_ns0_controllerProperties *xmlTextReaderReadNs0ControllerPropertiesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_controllerProperties *_controllerProperties = calloc(1, sizeof(struct full_ns0_controllerProperties));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ControllerPropertiesType(_controllerProperties);
        free(_controllerProperties);
        return NULL;
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
              freeNs0ControllerPropertiesType(_controllerProperties);
              free(_controllerProperties);
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
          freeNs0ControllerPropertiesType(_controllerProperties);
          free(_controllerProperties);
          return NULL;
        }

        _controllerProperties->properties = realloc(_controllerProperties->properties, (_controllerProperties->_sizeof_properties + 1) * sizeof(struct full_ns0_property));
        memcpy(&(_controllerProperties->properties[_controllerProperties->_sizeof_properties++]), _child_accessor, sizeof(struct full_ns0_property));
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
          freeNs0ControllerPropertiesType(_controllerProperties);
          free(_controllerProperties);
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
          printf("unknown child element {}%s for type {}controllerProperties.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}controllerProperties. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _controllerProperties;
}

/**
 * Writes a ControllerProperties to XML.
 *
 * @param writer The XML writer.
 * @param _controllerProperties The ControllerProperties to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ControllerPropertiesType(xmlTextWriterPtr writer, struct full_ns0_controllerProperties *_controllerProperties) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  if (_controllerProperties->properties != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "properties", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}properties. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _controllerProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {}property...\n");
#endif
    status = xmlTextWriterWriteNs0PropertyElementNS(writer, &(_controllerProperties->properties[i]), 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {}property. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  if (_controllerProperties->properties != NULL) {
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
 * Frees the elements of a ControllerProperties.
 *
 * @param _controllerProperties The ControllerProperties to free.
 */
static void freeNs0ControllerPropertiesType(struct full_ns0_controllerProperties *_controllerProperties) {
  int i;
  if (_controllerProperties->properties != NULL) {
    for (i = 0; i < _controllerProperties->_sizeof_properties; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor properties[%i] of type full_ns0_controllerProperties...\n", i);
#endif
      freeNs0PropertyElement(&(_controllerProperties->properties[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor properties of type full_ns0_controllerProperties...\n");
#endif
    free(_controllerProperties->properties);
  }
}
#endif /* DEF_full_ns0_controllerProperties_M */
