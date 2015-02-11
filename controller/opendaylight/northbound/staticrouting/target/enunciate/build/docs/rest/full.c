#include <enunciate-common.c>
#ifndef DEF_full_ns0_staticRoute_H
#define DEF_full_ns0_staticRoute_H

/**
 *  StaticRoute represents the static route data that is returned as a response to
 the NorthBound GET request.


 */
struct full_ns0_staticRoute {


  /**
   * The name of the static route.
   */
  xmlChar *name;

  /**
   * The prefix for the route.
   * Format: A.B.C.D/MM  Where A.B.C.D is the Default Gateway IP (L3) or ARP Querier IP (L2)
   */
  xmlChar *prefix;

  /**
   * NextHop IP-Address (or) datapath ID/port list: xx:xx:xx:xx:xx:xx:xx:xx/a,b,c-m,r-t,y
   */
  xmlChar *nextHop;
};

/**
 * Reads a StaticRoute element from XML. The element to be read is "staticRoute", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StaticRoute, or NULL in case of error.
 */
struct full_ns0_staticRoute *xml_read_full_ns0_staticRoute(xmlTextReaderPtr reader);

/**
 * Writes a StaticRoute to XML under element name "staticRoute".
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_staticRoute(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute);

/**
 * Frees a StaticRoute.
 *
 * @param _staticRoute The StaticRoute to free.
 */
void free_full_ns0_staticRoute(struct full_ns0_staticRoute *_staticRoute);

/**
 * Reads a StaticRoute element from XML. The element to be read is "staticRoute", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The StaticRoute, or NULL in case of error.
 */
struct full_ns0_staticRoute *xmlTextReaderReadNs0StaticRouteElement(xmlTextReaderPtr reader);

/**
 * Writes a StaticRoute to XML under element name "staticRoute".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StaticRouteElement(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute);

/**
 * Writes a StaticRoute to XML under element name "staticRoute".
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StaticRouteElementNS(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute, int writeNamespaces);

/**
 * Frees the children of a StaticRoute.
 *
 * @param _staticRoute The StaticRoute whose children are to be free.
 */
static void freeNs0StaticRouteElement(struct full_ns0_staticRoute *_staticRoute);

/**
 * Reads a StaticRoute from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The StaticRoute, or NULL in case of error.
 */
static struct full_ns0_staticRoute *xmlTextReaderReadNs0StaticRouteType(xmlTextReaderPtr reader);

/**
 * Writes a StaticRoute to XML.
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StaticRouteType(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute);

/**
 * Frees the elements of a StaticRoute.
 *
 * @param _staticRoute The StaticRoute to free.
 */
static void freeNs0StaticRouteType(struct full_ns0_staticRoute *_staticRoute);

#endif /* DEF_full_ns0_staticRoute_H */
#ifndef DEF_full_ns0_staticRoutes_H
#define DEF_full_ns0_staticRoutes_H

/**
 *  This class represents a list of static routes.

 */
struct full_ns0_staticRoutes {


  /**
   * (no documentation provided)
   */
  struct full_ns0_staticRoute *staticRoute;

  /**
   * Size of the staticRoute array.
   */
  int _sizeof_staticRoute;
};

/**
 * Reads a StaticRoutes element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StaticRoutes, or NULL in case of error.
 */
struct full_ns0_staticRoutes *xml_read_full_ns0_staticRoutes(xmlTextReaderPtr reader);

/**
 * Writes a StaticRoutes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_staticRoutes(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes);

/**
 * Frees a StaticRoutes.
 *
 * @param _staticRoutes The StaticRoutes to free.
 */
void free_full_ns0_staticRoutes(struct full_ns0_staticRoutes *_staticRoutes);

/**
 * Reads a StaticRoutes element from XML. The element to be read is "list", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The StaticRoutes, or NULL in case of error.
 */
struct full_ns0_staticRoutes *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader);

/**
 * Writes a StaticRoutes to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes);

/**
 * Writes a StaticRoutes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes, int writeNamespaces);

/**
 * Frees the children of a StaticRoutes.
 *
 * @param _staticRoutes The StaticRoutes whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_staticRoutes *_staticRoutes);

/**
 * Reads a StaticRoutes from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The StaticRoutes, or NULL in case of error.
 */
static struct full_ns0_staticRoutes *xmlTextReaderReadNs0StaticRoutesType(xmlTextReaderPtr reader);

/**
 * Writes a StaticRoutes to XML.
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StaticRoutesType(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes);

/**
 * Frees the elements of a StaticRoutes.
 *
 * @param _staticRoutes The StaticRoutes to free.
 */
static void freeNs0StaticRoutesType(struct full_ns0_staticRoutes *_staticRoutes);

#endif /* DEF_full_ns0_staticRoutes_H */
#ifndef DEF_full_ns0_staticRoute_M
#define DEF_full_ns0_staticRoute_M

/**
 * Reads a StaticRoute element from XML. The element to be read is "staticRoute", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StaticRoute, or NULL in case of error.
 */
struct full_ns0_staticRoute *xml_read_full_ns0_staticRoute(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0StaticRouteElement(reader);
}

/**
 * Writes a StaticRoute to XML under element name "staticRoute".
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_staticRoute(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute) {
  return xmlTextWriterWriteNs0StaticRouteElementNS(writer, _staticRoute, 1);
}

/**
 * Frees a StaticRoute.
 *
 * @param _staticRoute The StaticRoute to free.
 */
void free_full_ns0_staticRoute(struct full_ns0_staticRoute *_staticRoute) {
  freeNs0StaticRouteType(_staticRoute);
  free(_staticRoute);
}

/**
 * Reads a StaticRoute element from XML. The element to be read is "staticRoute", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The StaticRoute, or NULL in case of error.
 */
struct full_ns0_staticRoute *xmlTextReaderReadNs0StaticRouteElement(xmlTextReaderPtr reader) {
  struct full_ns0_staticRoute *_staticRoute = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "staticRoute", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}staticRoute.\n");
#endif
    _staticRoute = xmlTextReaderReadNs0StaticRouteType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_staticRoute == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}staticRoute failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}staticRoute failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _staticRoute;
}

/**
 * Writes a StaticRoute to XML under element name "staticRoute".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StaticRouteElement(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute) {
  return xmlTextWriterWriteNs0StaticRouteElementNS(writer, _staticRoute, 0);
}

/**
 * Writes a StaticRoute to XML under element name "staticRoute".
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StaticRouteElementNS(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "staticRoute", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}staticRoute. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}staticRoute for root element {}staticRoute...\n");
#endif
  status = xmlTextWriterWriteNs0StaticRouteType(writer, _staticRoute);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}staticRoute. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}staticRoute. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a StaticRoute.
 *
 * @param _staticRoute The StaticRoute whose children are to be free.
 */
static void freeNs0StaticRouteElement(struct full_ns0_staticRoute *_staticRoute) {
  freeNs0StaticRouteType(_staticRoute);
}

/**
 * Reads a StaticRoute from XML. The reader is assumed to be at the start element.
 *
 * @return the StaticRoute, or NULL in case of error.
 */
static struct full_ns0_staticRoute *xmlTextReaderReadNs0StaticRouteType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_staticRoute *_staticRoute = calloc(1, sizeof(struct full_ns0_staticRoute));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StaticRouteType(_staticRoute);
        free(_staticRoute);
        return NULL;
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
          freeNs0StaticRouteType(_staticRoute);
          free(_staticRoute);
          return NULL;
        }

        _staticRoute->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "prefix", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}prefix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}prefix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StaticRouteType(_staticRoute);
          free(_staticRoute);
          return NULL;
        }

        _staticRoute->prefix = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nextHop", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nextHop of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nextHop of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StaticRouteType(_staticRoute);
          free(_staticRoute);
          return NULL;
        }

        _staticRoute->nextHop = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}staticRoute.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}staticRoute. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _staticRoute;
}

/**
 * Writes a StaticRoute to XML.
 *
 * @param writer The XML writer.
 * @param _staticRoute The StaticRoute to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StaticRouteType(xmlTextWriterPtr writer, struct full_ns0_staticRoute *_staticRoute) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_staticRoute->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_staticRoute->name));
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
  if (_staticRoute->prefix != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "prefix", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}prefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}prefix...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_staticRoute->prefix));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}prefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}prefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_staticRoute->nextHop != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nextHop", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nextHop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nextHop...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_staticRoute->nextHop));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nextHop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nextHop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a StaticRoute.
 *
 * @param _staticRoute The StaticRoute to free.
 */
static void freeNs0StaticRouteType(struct full_ns0_staticRoute *_staticRoute) {
  int i;
  if (_staticRoute->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_staticRoute...\n");
#endif
    freeXsStringType(_staticRoute->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_staticRoute...\n");
#endif
    free(_staticRoute->name);
  }
  if (_staticRoute->prefix != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor prefix of type full_ns0_staticRoute...\n");
#endif
    freeXsStringType(_staticRoute->prefix);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor prefix of type full_ns0_staticRoute...\n");
#endif
    free(_staticRoute->prefix);
  }
  if (_staticRoute->nextHop != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nextHop of type full_ns0_staticRoute...\n");
#endif
    freeXsStringType(_staticRoute->nextHop);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nextHop of type full_ns0_staticRoute...\n");
#endif
    free(_staticRoute->nextHop);
  }
}
#endif /* DEF_full_ns0_staticRoute_M */
#ifndef DEF_full_ns0_staticRoutes_M
#define DEF_full_ns0_staticRoutes_M

/**
 * Reads a StaticRoutes element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StaticRoutes, or NULL in case of error.
 */
struct full_ns0_staticRoutes *xml_read_full_ns0_staticRoutes(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListElement(reader);
}

/**
 * Writes a StaticRoutes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_staticRoutes(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _staticRoutes, 1);
}

/**
 * Frees a StaticRoutes.
 *
 * @param _staticRoutes The StaticRoutes to free.
 */
void free_full_ns0_staticRoutes(struct full_ns0_staticRoutes *_staticRoutes) {
  freeNs0StaticRoutesType(_staticRoutes);
  free(_staticRoutes);
}

/**
 * Reads a StaticRoutes element from XML. The element to be read is "list", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The StaticRoutes, or NULL in case of error.
 */
struct full_ns0_staticRoutes *xmlTextReaderReadNs0ListElement(xmlTextReaderPtr reader) {
  struct full_ns0_staticRoutes *_staticRoutes = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list.\n");
#endif
    _staticRoutes = xmlTextReaderReadNs0StaticRoutesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_staticRoutes == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _staticRoutes;
}

/**
 * Writes a StaticRoutes to XML under element name "list".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElement(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes) {
  return xmlTextWriterWriteNs0ListElementNS(writer, _staticRoutes, 0);
}

/**
 * Writes a StaticRoutes to XML under element name "list".
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListElementNS(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes, int writeNamespaces) {
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
  printf("writing type {}staticRoutes for root element {}list...\n");
#endif
  status = xmlTextWriterWriteNs0StaticRoutesType(writer, _staticRoutes);
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
 * Frees the children of a StaticRoutes.
 *
 * @param _staticRoutes The StaticRoutes whose children are to be free.
 */
static void freeNs0ListElement(struct full_ns0_staticRoutes *_staticRoutes) {
  freeNs0StaticRoutesType(_staticRoutes);
}

/**
 * Reads a StaticRoutes from XML. The reader is assumed to be at the start element.
 *
 * @return the StaticRoutes, or NULL in case of error.
 */
static struct full_ns0_staticRoutes *xmlTextReaderReadNs0StaticRoutesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_staticRoutes *_staticRoutes = calloc(1, sizeof(struct full_ns0_staticRoutes));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StaticRoutesType(_staticRoutes);
        free(_staticRoutes);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "staticRoute", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}staticRoute of type {}staticRoute.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0StaticRouteType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}staticRoute of type {}staticRoute.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StaticRoutesType(_staticRoutes);
          free(_staticRoutes);
          return NULL;
        }

        _staticRoutes->staticRoute = realloc(_staticRoutes->staticRoute, (_staticRoutes->_sizeof_staticRoute + 1) * sizeof(struct full_ns0_staticRoute));
        memcpy(&(_staticRoutes->staticRoute[_staticRoutes->_sizeof_staticRoute++]), _child_accessor, sizeof(struct full_ns0_staticRoute));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}staticRoutes.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}staticRoutes. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _staticRoutes;
}

/**
 * Writes a StaticRoutes to XML.
 *
 * @param writer The XML writer.
 * @param _staticRoutes The StaticRoutes to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StaticRoutesType(xmlTextWriterPtr writer, struct full_ns0_staticRoutes *_staticRoutes) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _staticRoutes->_sizeof_staticRoute; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "staticRoute", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}staticRoute. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}staticRoute for element {}staticRoute...\n");
#endif
    status = xmlTextWriterWriteNs0StaticRouteType(writer, &(_staticRoutes->staticRoute[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}staticRoute for element {}staticRoute. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}staticRoute. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a StaticRoutes.
 *
 * @param _staticRoutes The StaticRoutes to free.
 */
static void freeNs0StaticRoutesType(struct full_ns0_staticRoutes *_staticRoutes) {
  int i;
  if (_staticRoutes->staticRoute != NULL) {
    for (i = 0; i < _staticRoutes->_sizeof_staticRoute; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor staticRoute[%i] of type full_ns0_staticRoutes...\n", i);
#endif
      freeNs0StaticRouteType(&(_staticRoutes->staticRoute[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor staticRoute of type full_ns0_staticRoutes...\n");
#endif
    free(_staticRoutes->staticRoute);
  }
}
#endif /* DEF_full_ns0_staticRoutes_M */
