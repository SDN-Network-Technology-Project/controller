#include <enunciate-common.c>
#ifndef DEF_full_ns0_pool_H
#define DEF_full_ns0_pool_H

/**
 * (no documentation provided)
 */
struct full_ns0_pool {


  /**
   * (no documentation provided)
   */
  xmlChar *lbMethod;

  /**
   * (no documentation provided)
   */
  struct full_ns0_VIP *vips;

  /**
   * Size of the vips array.
   */
  int _sizeof_vips;

  /**
   * (no documentation provided)
   */
  xmlChar *status;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  struct full_ns0_poolMember *members;

  /**
   * Size of the members array.
   */
  int _sizeof_members;
};

/**
 * Reads a Pool element from XML. The element to be read is "pool", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Pool, or NULL in case of error.
 */
struct full_ns0_pool *xml_read_full_ns0_pool(xmlTextReaderPtr reader);

/**
 * Writes a Pool to XML under element name "pool".
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_pool(xmlTextWriterPtr writer, struct full_ns0_pool *_pool);

/**
 * Frees a Pool.
 *
 * @param _pool The Pool to free.
 */
void free_full_ns0_pool(struct full_ns0_pool *_pool);

/**
 * Reads a Pool element from XML. The element to be read is "pool", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Pool, or NULL in case of error.
 */
struct full_ns0_pool *xmlTextReaderReadNs0PoolElement(xmlTextReaderPtr reader);

/**
 * Writes a Pool to XML under element name "pool".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolElement(xmlTextWriterPtr writer, struct full_ns0_pool *_pool);

/**
 * Writes a Pool to XML under element name "pool".
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolElementNS(xmlTextWriterPtr writer, struct full_ns0_pool *_pool, int writeNamespaces);

/**
 * Frees the children of a Pool.
 *
 * @param _pool The Pool whose children are to be free.
 */
static void freeNs0PoolElement(struct full_ns0_pool *_pool);

/**
 * Reads a Pool from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Pool, or NULL in case of error.
 */
static struct full_ns0_pool *xmlTextReaderReadNs0PoolType(xmlTextReaderPtr reader);

/**
 * Writes a Pool to XML.
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolType(xmlTextWriterPtr writer, struct full_ns0_pool *_pool);

/**
 * Frees the elements of a Pool.
 *
 * @param _pool The Pool to free.
 */
static void freeNs0PoolType(struct full_ns0_pool *_pool);

#endif /* DEF_full_ns0_pool_H */
#ifndef DEF_full_ns0_poolMember_H
#define DEF_full_ns0_poolMember_H

/**
 * (no documentation provided)
 */
struct full_ns0_poolMember {


  /**
   * (no documentation provided)
   */
  xmlChar *poolName;

  /**
   * (no documentation provided)
   */
  xmlChar *status;

  /**
   * (no documentation provided)
   */
  xmlChar *ip;

  /**
   * (no documentation provided)
   */
  xmlChar *name;
};

/**
 * Reads a PoolMember element from XML. The element to be read is "poolmember", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PoolMember, or NULL in case of error.
 */
struct full_ns0_poolMember *xml_read_full_ns0_poolMember(xmlTextReaderPtr reader);

/**
 * Writes a PoolMember to XML under element name "poolmember".
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_poolMember(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember);

/**
 * Frees a PoolMember.
 *
 * @param _poolMember The PoolMember to free.
 */
void free_full_ns0_poolMember(struct full_ns0_poolMember *_poolMember);

/**
 * Reads a PoolMember element from XML. The element to be read is "poolmember", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The PoolMember, or NULL in case of error.
 */
struct full_ns0_poolMember *xmlTextReaderReadNs0PoolmemberElement(xmlTextReaderPtr reader);

/**
 * Writes a PoolMember to XML under element name "poolmember".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolmemberElement(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember);

/**
 * Writes a PoolMember to XML under element name "poolmember".
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolmemberElementNS(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember, int writeNamespaces);

/**
 * Frees the children of a PoolMember.
 *
 * @param _poolMember The PoolMember whose children are to be free.
 */
static void freeNs0PoolmemberElement(struct full_ns0_poolMember *_poolMember);

/**
 * Reads a PoolMember from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The PoolMember, or NULL in case of error.
 */
static struct full_ns0_poolMember *xmlTextReaderReadNs0PoolMemberType(xmlTextReaderPtr reader);

/**
 * Writes a PoolMember to XML.
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolMemberType(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember);

/**
 * Frees the elements of a PoolMember.
 *
 * @param _poolMember The PoolMember to free.
 */
static void freeNs0PoolMemberType(struct full_ns0_poolMember *_poolMember);

#endif /* DEF_full_ns0_poolMember_H */
#ifndef DEF_full_ns0_VIP_H
#define DEF_full_ns0_VIP_H

/**
 * (no documentation provided)
 */
struct full_ns0_VIP {


  /**
   * (no documentation provided)
   */
  xmlChar *poolName;

  /**
   * (no documentation provided)
   */
  xmlChar *protocol;

  /**
   * (no documentation provided)
   */
  xmlChar *ip;

  /**
   * (no documentation provided)
   */
  short port;

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
 * Reads a VIP element from XML. The element to be read is "vip", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The VIP, or NULL in case of error.
 */
struct full_ns0_VIP *xml_read_full_ns0_VIP(xmlTextReaderPtr reader);

/**
 * Writes a VIP to XML under element name "vip".
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_VIP(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP);

/**
 * Frees a VIP.
 *
 * @param _vIP The VIP to free.
 */
void free_full_ns0_VIP(struct full_ns0_VIP *_vIP);

/**
 * Reads a VIP element from XML. The element to be read is "vip", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The VIP, or NULL in case of error.
 */
struct full_ns0_VIP *xmlTextReaderReadNs0VipElement(xmlTextReaderPtr reader);

/**
 * Writes a VIP to XML under element name "vip".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VipElement(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP);

/**
 * Writes a VIP to XML under element name "vip".
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VipElementNS(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP, int writeNamespaces);

/**
 * Frees the children of a VIP.
 *
 * @param _vIP The VIP whose children are to be free.
 */
static void freeNs0VipElement(struct full_ns0_VIP *_vIP);

/**
 * Reads a VIP from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The VIP, or NULL in case of error.
 */
static struct full_ns0_VIP *xmlTextReaderReadNs0VIPType(xmlTextReaderPtr reader);

/**
 * Writes a VIP to XML.
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VIPType(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP);

/**
 * Frees the elements of a VIP.
 *
 * @param _vIP The VIP to free.
 */
static void freeNs0VIPType(struct full_ns0_VIP *_vIP);

#endif /* DEF_full_ns0_VIP_H */
#ifndef DEF_full_ns0_pools_H
#define DEF_full_ns0_pools_H

/**
 * (no documentation provided)
 */
struct full_ns0_pools {


  /**
   * (no documentation provided)
   */
  struct full_ns0_pool *loadBalancerPools;

  /**
   * Size of the loadBalancerPools array.
   */
  int _sizeof_loadBalancerPools;
};

/**
 * Reads a Pools element from XML. The element to be read is "pools", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Pools, or NULL in case of error.
 */
struct full_ns0_pools *xml_read_full_ns0_pools(xmlTextReaderPtr reader);

/**
 * Writes a Pools to XML under element name "pools".
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_pools(xmlTextWriterPtr writer, struct full_ns0_pools *_pools);

/**
 * Frees a Pools.
 *
 * @param _pools The Pools to free.
 */
void free_full_ns0_pools(struct full_ns0_pools *_pools);

/**
 * Reads a Pools element from XML. The element to be read is "pools", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Pools, or NULL in case of error.
 */
struct full_ns0_pools *xmlTextReaderReadNs0PoolsElement(xmlTextReaderPtr reader);

/**
 * Writes a Pools to XML under element name "pools".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolsElement(xmlTextWriterPtr writer, struct full_ns0_pools *_pools);

/**
 * Writes a Pools to XML under element name "pools".
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolsElementNS(xmlTextWriterPtr writer, struct full_ns0_pools *_pools, int writeNamespaces);

/**
 * Frees the children of a Pools.
 *
 * @param _pools The Pools whose children are to be free.
 */
static void freeNs0PoolsElement(struct full_ns0_pools *_pools);

/**
 * Reads a Pools from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Pools, or NULL in case of error.
 */
static struct full_ns0_pools *xmlTextReaderReadNs0PoolsType(xmlTextReaderPtr reader);

/**
 * Writes a Pools to XML.
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PoolsType(xmlTextWriterPtr writer, struct full_ns0_pools *_pools);

/**
 * Frees the elements of a Pools.
 *
 * @param _pools The Pools to free.
 */
static void freeNs0PoolsType(struct full_ns0_pools *_pools);

#endif /* DEF_full_ns0_pools_H */
#ifndef DEF_full_ns0_VIPs_H
#define DEF_full_ns0_VIPs_H

/**
 *  JAX-RS resource for handling details of all the available VIPs
 in response to respective REST API requests.

 */
struct full_ns0_VIPs {


  /**
   * (no documentation provided)
   */
  struct full_ns0_VIP *loadBalancerVIPs;

  /**
   * Size of the loadBalancerVIPs array.
   */
  int _sizeof_loadBalancerVIPs;
};

/**
 * Reads a VIPs element from XML. The element to be read is "VIPs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The VIPs, or NULL in case of error.
 */
struct full_ns0_VIPs *xml_read_full_ns0_VIPs(xmlTextReaderPtr reader);

/**
 * Writes a VIPs to XML under element name "VIPs".
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_VIPs(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs);

/**
 * Frees a VIPs.
 *
 * @param _vIPs The VIPs to free.
 */
void free_full_ns0_VIPs(struct full_ns0_VIPs *_vIPs);

/**
 * Reads a VIPs element from XML. The element to be read is "VIPs", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The VIPs, or NULL in case of error.
 */
struct full_ns0_VIPs *xmlTextReaderReadNs0VIPsElement(xmlTextReaderPtr reader);

/**
 * Writes a VIPs to XML under element name "VIPs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VIPsElement(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs);

/**
 * Writes a VIPs to XML under element name "VIPs".
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VIPsElementNS(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs, int writeNamespaces);

/**
 * Frees the children of a VIPs.
 *
 * @param _vIPs The VIPs whose children are to be free.
 */
static void freeNs0VIPsElement(struct full_ns0_VIPs *_vIPs);

/**
 * Reads a VIPs from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The VIPs, or NULL in case of error.
 */
static struct full_ns0_VIPs *xmlTextReaderReadNs0VIPsType(xmlTextReaderPtr reader);

/**
 * Writes a VIPs to XML.
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0VIPsType(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs);

/**
 * Frees the elements of a VIPs.
 *
 * @param _vIPs The VIPs to free.
 */
static void freeNs0VIPsType(struct full_ns0_VIPs *_vIPs);

#endif /* DEF_full_ns0_VIPs_H */
#ifndef DEF_full_ns0_pool_M
#define DEF_full_ns0_pool_M

/**
 * Reads a Pool element from XML. The element to be read is "pool", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Pool, or NULL in case of error.
 */
struct full_ns0_pool *xml_read_full_ns0_pool(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PoolElement(reader);
}

/**
 * Writes a Pool to XML under element name "pool".
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_pool(xmlTextWriterPtr writer, struct full_ns0_pool *_pool) {
  return xmlTextWriterWriteNs0PoolElementNS(writer, _pool, 1);
}

/**
 * Frees a Pool.
 *
 * @param _pool The Pool to free.
 */
void free_full_ns0_pool(struct full_ns0_pool *_pool) {
  freeNs0PoolType(_pool);
  free(_pool);
}

/**
 * Reads a Pool element from XML. The element to be read is "pool", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Pool, or NULL in case of error.
 */
struct full_ns0_pool *xmlTextReaderReadNs0PoolElement(xmlTextReaderPtr reader) {
  struct full_ns0_pool *_pool = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "pool", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}pool.\n");
#endif
    _pool = xmlTextReaderReadNs0PoolType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_pool == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}pool failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}pool failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _pool;
}

/**
 * Writes a Pool to XML under element name "pool".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PoolElement(xmlTextWriterPtr writer, struct full_ns0_pool *_pool) {
  return xmlTextWriterWriteNs0PoolElementNS(writer, _pool, 0);
}

/**
 * Writes a Pool to XML under element name "pool".
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PoolElementNS(xmlTextWriterPtr writer, struct full_ns0_pool *_pool, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pool", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}pool. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}pool for root element {}pool...\n");
#endif
  status = xmlTextWriterWriteNs0PoolType(writer, _pool);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}pool. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}pool. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Pool.
 *
 * @param _pool The Pool whose children are to be free.
 */
static void freeNs0PoolElement(struct full_ns0_pool *_pool) {
  freeNs0PoolType(_pool);
}

/**
 * Reads a Pool from XML. The reader is assumed to be at the start element.
 *
 * @return the Pool, or NULL in case of error.
 */
static struct full_ns0_pool *xmlTextReaderReadNs0PoolType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_pool *_pool = calloc(1, sizeof(struct full_ns0_pool));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PoolType(_pool);
        free(_pool);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lbmethod", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lbmethod of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lbmethod of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PoolType(_pool);
          free(_pool);
          return NULL;
        }

        _pool->lbMethod = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vips", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vips of type {}VIP.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0VIPType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vips of type {}VIP.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PoolType(_pool);
          free(_pool);
          return NULL;
        }

        _pool->vips = realloc(_pool->vips, (_pool->_sizeof_vips + 1) * sizeof(struct full_ns0_VIP));
        memcpy(&(_pool->vips[_pool->_sizeof_vips++]), _child_accessor, sizeof(struct full_ns0_VIP));
        free(_child_accessor);
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
          freeNs0PoolType(_pool);
          free(_pool);
          return NULL;
        }

        _pool->status = ((xmlChar*)_child_accessor);
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
          freeNs0PoolType(_pool);
          free(_pool);
          return NULL;
        }

        _pool->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "members", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}members of type {}poolMember.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PoolMemberType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}members of type {}poolMember.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PoolType(_pool);
          free(_pool);
          return NULL;
        }

        _pool->members = realloc(_pool->members, (_pool->_sizeof_members + 1) * sizeof(struct full_ns0_poolMember));
        memcpy(&(_pool->members[_pool->_sizeof_members++]), _child_accessor, sizeof(struct full_ns0_poolMember));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}pool.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}pool. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _pool;
}

/**
 * Writes a Pool to XML.
 *
 * @param writer The XML writer.
 * @param _pool The Pool to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PoolType(xmlTextWriterPtr writer, struct full_ns0_pool *_pool) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_pool->lbMethod != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lbmethod", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lbmethod. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}lbmethod...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_pool->lbMethod));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}lbmethod. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lbmethod. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _pool->_sizeof_vips; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vips", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}VIP for element {}vips...\n");
#endif
    status = xmlTextWriterWriteNs0VIPType(writer, &(_pool->vips[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}VIP for element {}vips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_pool->status != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_pool->status));
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
  if (_pool->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_pool->name));
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
  for (i = 0; i < _pool->_sizeof_members; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "members", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}members. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}poolMember for element {}members...\n");
#endif
    status = xmlTextWriterWriteNs0PoolMemberType(writer, &(_pool->members[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}poolMember for element {}members. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}members. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Pool.
 *
 * @param _pool The Pool to free.
 */
static void freeNs0PoolType(struct full_ns0_pool *_pool) {
  int i;
  if (_pool->lbMethod != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lbMethod of type full_ns0_pool...\n");
#endif
    freeXsStringType(_pool->lbMethod);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lbMethod of type full_ns0_pool...\n");
#endif
    free(_pool->lbMethod);
  }
  if (_pool->vips != NULL) {
    for (i = 0; i < _pool->_sizeof_vips; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor vips[%i] of type full_ns0_pool...\n", i);
#endif
      freeNs0VIPType(&(_pool->vips[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor vips of type full_ns0_pool...\n");
#endif
    free(_pool->vips);
  }
  if (_pool->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type full_ns0_pool...\n");
#endif
    freeXsStringType(_pool->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type full_ns0_pool...\n");
#endif
    free(_pool->status);
  }
  if (_pool->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_pool...\n");
#endif
    freeXsStringType(_pool->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_pool...\n");
#endif
    free(_pool->name);
  }
  if (_pool->members != NULL) {
    for (i = 0; i < _pool->_sizeof_members; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor members[%i] of type full_ns0_pool...\n", i);
#endif
      freeNs0PoolMemberType(&(_pool->members[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor members of type full_ns0_pool...\n");
#endif
    free(_pool->members);
  }
}
#endif /* DEF_full_ns0_pool_M */
#ifndef DEF_full_ns0_poolMember_M
#define DEF_full_ns0_poolMember_M

/**
 * Reads a PoolMember element from XML. The element to be read is "poolmember", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The PoolMember, or NULL in case of error.
 */
struct full_ns0_poolMember *xml_read_full_ns0_poolMember(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PoolmemberElement(reader);
}

/**
 * Writes a PoolMember to XML under element name "poolmember".
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_poolMember(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember) {
  return xmlTextWriterWriteNs0PoolmemberElementNS(writer, _poolMember, 1);
}

/**
 * Frees a PoolMember.
 *
 * @param _poolMember The PoolMember to free.
 */
void free_full_ns0_poolMember(struct full_ns0_poolMember *_poolMember) {
  freeNs0PoolMemberType(_poolMember);
  free(_poolMember);
}

/**
 * Reads a PoolMember element from XML. The element to be read is "poolmember", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The PoolMember, or NULL in case of error.
 */
struct full_ns0_poolMember *xmlTextReaderReadNs0PoolmemberElement(xmlTextReaderPtr reader) {
  struct full_ns0_poolMember *_poolMember = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "poolmember", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}poolmember.\n");
#endif
    _poolMember = xmlTextReaderReadNs0PoolMemberType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_poolMember == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}poolmember failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}poolmember failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _poolMember;
}

/**
 * Writes a PoolMember to XML under element name "poolmember".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PoolmemberElement(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember) {
  return xmlTextWriterWriteNs0PoolmemberElementNS(writer, _poolMember, 0);
}

/**
 * Writes a PoolMember to XML under element name "poolmember".
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PoolmemberElementNS(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "poolmember", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}poolmember. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}poolMember for root element {}poolmember...\n");
#endif
  status = xmlTextWriterWriteNs0PoolMemberType(writer, _poolMember);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}poolmember. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}poolmember. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a PoolMember.
 *
 * @param _poolMember The PoolMember whose children are to be free.
 */
static void freeNs0PoolmemberElement(struct full_ns0_poolMember *_poolMember) {
  freeNs0PoolMemberType(_poolMember);
}

/**
 * Reads a PoolMember from XML. The reader is assumed to be at the start element.
 *
 * @return the PoolMember, or NULL in case of error.
 */
static struct full_ns0_poolMember *xmlTextReaderReadNs0PoolMemberType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_poolMember *_poolMember = calloc(1, sizeof(struct full_ns0_poolMember));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PoolMemberType(_poolMember);
        free(_poolMember);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "poolname", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}poolname of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}poolname of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PoolMemberType(_poolMember);
          free(_poolMember);
          return NULL;
        }

        _poolMember->poolName = ((xmlChar*)_child_accessor);
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
          freeNs0PoolMemberType(_poolMember);
          free(_poolMember);
          return NULL;
        }

        _poolMember->status = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ip", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ip of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ip of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PoolMemberType(_poolMember);
          free(_poolMember);
          return NULL;
        }

        _poolMember->ip = ((xmlChar*)_child_accessor);
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
          freeNs0PoolMemberType(_poolMember);
          free(_poolMember);
          return NULL;
        }

        _poolMember->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}poolMember.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}poolMember. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _poolMember;
}

/**
 * Writes a PoolMember to XML.
 *
 * @param writer The XML writer.
 * @param _poolMember The PoolMember to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PoolMemberType(xmlTextWriterPtr writer, struct full_ns0_poolMember *_poolMember) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_poolMember->poolName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "poolname", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}poolname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}poolname...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_poolMember->poolName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}poolname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}poolname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_poolMember->status != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_poolMember->status));
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
  if (_poolMember->ip != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ip", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ip...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_poolMember->ip));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_poolMember->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_poolMember->name));
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
 * Frees the elements of a PoolMember.
 *
 * @param _poolMember The PoolMember to free.
 */
static void freeNs0PoolMemberType(struct full_ns0_poolMember *_poolMember) {
  int i;
  if (_poolMember->poolName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor poolName of type full_ns0_poolMember...\n");
#endif
    freeXsStringType(_poolMember->poolName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor poolName of type full_ns0_poolMember...\n");
#endif
    free(_poolMember->poolName);
  }
  if (_poolMember->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type full_ns0_poolMember...\n");
#endif
    freeXsStringType(_poolMember->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type full_ns0_poolMember...\n");
#endif
    free(_poolMember->status);
  }
  if (_poolMember->ip != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ip of type full_ns0_poolMember...\n");
#endif
    freeXsStringType(_poolMember->ip);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ip of type full_ns0_poolMember...\n");
#endif
    free(_poolMember->ip);
  }
  if (_poolMember->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_poolMember...\n");
#endif
    freeXsStringType(_poolMember->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_poolMember...\n");
#endif
    free(_poolMember->name);
  }
}
#endif /* DEF_full_ns0_poolMember_M */
#ifndef DEF_full_ns0_VIP_M
#define DEF_full_ns0_VIP_M

/**
 * Reads a VIP element from XML. The element to be read is "vip", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The VIP, or NULL in case of error.
 */
struct full_ns0_VIP *xml_read_full_ns0_VIP(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0VipElement(reader);
}

/**
 * Writes a VIP to XML under element name "vip".
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_VIP(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP) {
  return xmlTextWriterWriteNs0VipElementNS(writer, _vIP, 1);
}

/**
 * Frees a VIP.
 *
 * @param _vIP The VIP to free.
 */
void free_full_ns0_VIP(struct full_ns0_VIP *_vIP) {
  freeNs0VIPType(_vIP);
  free(_vIP);
}

/**
 * Reads a VIP element from XML. The element to be read is "vip", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The VIP, or NULL in case of error.
 */
struct full_ns0_VIP *xmlTextReaderReadNs0VipElement(xmlTextReaderPtr reader) {
  struct full_ns0_VIP *_vIP = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vip", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}vip.\n");
#endif
    _vIP = xmlTextReaderReadNs0VIPType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_vIP == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}vip failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}vip failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _vIP;
}

/**
 * Writes a VIP to XML under element name "vip".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0VipElement(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP) {
  return xmlTextWriterWriteNs0VipElementNS(writer, _vIP, 0);
}

/**
 * Writes a VIP to XML under element name "vip".
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0VipElementNS(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vip", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}vip. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}VIP for root element {}vip...\n");
#endif
  status = xmlTextWriterWriteNs0VIPType(writer, _vIP);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}vip. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}vip. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a VIP.
 *
 * @param _vIP The VIP whose children are to be free.
 */
static void freeNs0VipElement(struct full_ns0_VIP *_vIP) {
  freeNs0VIPType(_vIP);
}

/**
 * Reads a VIP from XML. The reader is assumed to be at the start element.
 *
 * @return the VIP, or NULL in case of error.
 */
static struct full_ns0_VIP *xmlTextReaderReadNs0VIPType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_VIP *_vIP = calloc(1, sizeof(struct full_ns0_VIP));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0VIPType(_vIP);
        free(_vIP);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "poolname", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}poolname of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}poolname of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VIPType(_vIP);
          free(_vIP);
          return NULL;
        }

        _vIP->poolName = ((xmlChar*)_child_accessor);
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
          freeNs0VIPType(_vIP);
          free(_vIP);
          return NULL;
        }

        _vIP->protocol = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ip", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ip of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ip of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VIPType(_vIP);
          free(_vIP);
          return NULL;
        }

        _vIP->ip = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}port of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
        _child_accessor = xmlTextReaderReadXsShortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}port of type {http://www.w3.org/2001/XMLSchema}short.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VIPType(_vIP);
          free(_vIP);
          return NULL;
        }

        _vIP->port = *((short*)_child_accessor);
        free(_child_accessor);
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
          freeNs0VIPType(_vIP);
          free(_vIP);
          return NULL;
        }

        _vIP->status = ((xmlChar*)_child_accessor);
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
          freeNs0VIPType(_vIP);
          free(_vIP);
          return NULL;
        }

        _vIP->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}VIP.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}VIP. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _vIP;
}

/**
 * Writes a VIP to XML.
 *
 * @param writer The XML writer.
 * @param _vIP The VIP to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0VIPType(xmlTextWriterPtr writer, struct full_ns0_VIP *_vIP) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_vIP->poolName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "poolname", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}poolname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}poolname...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vIP->poolName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}poolname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}poolname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_vIP->protocol != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_vIP->protocol));
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
  if (_vIP->ip != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ip", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ip...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_vIP->ip));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}short for element {}port...\n");
#endif
    status = xmlTextWriterWriteXsShortType(writer, &(_vIP->port));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}short for element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_vIP->status != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_vIP->status));
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
  if (_vIP->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_vIP->name));
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
 * Frees the elements of a VIP.
 *
 * @param _vIP The VIP to free.
 */
static void freeNs0VIPType(struct full_ns0_VIP *_vIP) {
  int i;
  if (_vIP->poolName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor poolName of type full_ns0_VIP...\n");
#endif
    freeXsStringType(_vIP->poolName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor poolName of type full_ns0_VIP...\n");
#endif
    free(_vIP->poolName);
  }
  if (_vIP->protocol != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor protocol of type full_ns0_VIP...\n");
#endif
    freeXsStringType(_vIP->protocol);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor protocol of type full_ns0_VIP...\n");
#endif
    free(_vIP->protocol);
  }
  if (_vIP->ip != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ip of type full_ns0_VIP...\n");
#endif
    freeXsStringType(_vIP->ip);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ip of type full_ns0_VIP...\n");
#endif
    free(_vIP->ip);
  }
  if (_vIP->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type full_ns0_VIP...\n");
#endif
    freeXsStringType(_vIP->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type full_ns0_VIP...\n");
#endif
    free(_vIP->status);
  }
  if (_vIP->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_VIP...\n");
#endif
    freeXsStringType(_vIP->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_VIP...\n");
#endif
    free(_vIP->name);
  }
}
#endif /* DEF_full_ns0_VIP_M */
#ifndef DEF_full_ns0_pools_M
#define DEF_full_ns0_pools_M

/**
 * Reads a Pools element from XML. The element to be read is "pools", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Pools, or NULL in case of error.
 */
struct full_ns0_pools *xml_read_full_ns0_pools(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PoolsElement(reader);
}

/**
 * Writes a Pools to XML under element name "pools".
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_pools(xmlTextWriterPtr writer, struct full_ns0_pools *_pools) {
  return xmlTextWriterWriteNs0PoolsElementNS(writer, _pools, 1);
}

/**
 * Frees a Pools.
 *
 * @param _pools The Pools to free.
 */
void free_full_ns0_pools(struct full_ns0_pools *_pools) {
  freeNs0PoolsType(_pools);
  free(_pools);
}

/**
 * Reads a Pools element from XML. The element to be read is "pools", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Pools, or NULL in case of error.
 */
struct full_ns0_pools *xmlTextReaderReadNs0PoolsElement(xmlTextReaderPtr reader) {
  struct full_ns0_pools *_pools = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "pools", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}pools.\n");
#endif
    _pools = xmlTextReaderReadNs0PoolsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_pools == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}pools failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}pools failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _pools;
}

/**
 * Writes a Pools to XML under element name "pools".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PoolsElement(xmlTextWriterPtr writer, struct full_ns0_pools *_pools) {
  return xmlTextWriterWriteNs0PoolsElementNS(writer, _pools, 0);
}

/**
 * Writes a Pools to XML under element name "pools".
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PoolsElementNS(xmlTextWriterPtr writer, struct full_ns0_pools *_pools, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pools", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}pools. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}pools for root element {}pools...\n");
#endif
  status = xmlTextWriterWriteNs0PoolsType(writer, _pools);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}pools. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}pools. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Pools.
 *
 * @param _pools The Pools whose children are to be free.
 */
static void freeNs0PoolsElement(struct full_ns0_pools *_pools) {
  freeNs0PoolsType(_pools);
}

/**
 * Reads a Pools from XML. The reader is assumed to be at the start element.
 *
 * @return the Pools, or NULL in case of error.
 */
static struct full_ns0_pools *xmlTextReaderReadNs0PoolsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_pools *_pools = calloc(1, sizeof(struct full_ns0_pools));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PoolsType(_pools);
        free(_pools);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "pool", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}pool of type {}pool.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PoolType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}pool of type {}pool.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PoolsType(_pools);
          free(_pools);
          return NULL;
        }

        _pools->loadBalancerPools = realloc(_pools->loadBalancerPools, (_pools->_sizeof_loadBalancerPools + 1) * sizeof(struct full_ns0_pool));
        memcpy(&(_pools->loadBalancerPools[_pools->_sizeof_loadBalancerPools++]), _child_accessor, sizeof(struct full_ns0_pool));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}pools.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}pools. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _pools;
}

/**
 * Writes a Pools to XML.
 *
 * @param writer The XML writer.
 * @param _pools The Pools to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PoolsType(xmlTextWriterPtr writer, struct full_ns0_pools *_pools) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _pools->_sizeof_loadBalancerPools; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pool", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}pool. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}pool for element {}pool...\n");
#endif
    status = xmlTextWriterWriteNs0PoolType(writer, &(_pools->loadBalancerPools[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}pool for element {}pool. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}pool. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Pools.
 *
 * @param _pools The Pools to free.
 */
static void freeNs0PoolsType(struct full_ns0_pools *_pools) {
  int i;
  if (_pools->loadBalancerPools != NULL) {
    for (i = 0; i < _pools->_sizeof_loadBalancerPools; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor loadBalancerPools[%i] of type full_ns0_pools...\n", i);
#endif
      freeNs0PoolType(&(_pools->loadBalancerPools[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor loadBalancerPools of type full_ns0_pools...\n");
#endif
    free(_pools->loadBalancerPools);
  }
}
#endif /* DEF_full_ns0_pools_M */
#ifndef DEF_full_ns0_VIPs_M
#define DEF_full_ns0_VIPs_M

/**
 * Reads a VIPs element from XML. The element to be read is "VIPs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The VIPs, or NULL in case of error.
 */
struct full_ns0_VIPs *xml_read_full_ns0_VIPs(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0VIPsElement(reader);
}

/**
 * Writes a VIPs to XML under element name "VIPs".
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_VIPs(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs) {
  return xmlTextWriterWriteNs0VIPsElementNS(writer, _vIPs, 1);
}

/**
 * Frees a VIPs.
 *
 * @param _vIPs The VIPs to free.
 */
void free_full_ns0_VIPs(struct full_ns0_VIPs *_vIPs) {
  freeNs0VIPsType(_vIPs);
  free(_vIPs);
}

/**
 * Reads a VIPs element from XML. The element to be read is "VIPs", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The VIPs, or NULL in case of error.
 */
struct full_ns0_VIPs *xmlTextReaderReadNs0VIPsElement(xmlTextReaderPtr reader) {
  struct full_ns0_VIPs *_vIPs = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "VIPs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}VIPs.\n");
#endif
    _vIPs = xmlTextReaderReadNs0VIPsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_vIPs == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}VIPs failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}VIPs failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _vIPs;
}

/**
 * Writes a VIPs to XML under element name "VIPs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0VIPsElement(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs) {
  return xmlTextWriterWriteNs0VIPsElementNS(writer, _vIPs, 0);
}

/**
 * Writes a VIPs to XML under element name "VIPs".
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0VIPsElementNS(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "VIPs", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}VIPs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}VIPs for root element {}VIPs...\n");
#endif
  status = xmlTextWriterWriteNs0VIPsType(writer, _vIPs);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}VIPs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}VIPs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a VIPs.
 *
 * @param _vIPs The VIPs whose children are to be free.
 */
static void freeNs0VIPsElement(struct full_ns0_VIPs *_vIPs) {
  freeNs0VIPsType(_vIPs);
}

/**
 * Reads a VIPs from XML. The reader is assumed to be at the start element.
 *
 * @return the VIPs, or NULL in case of error.
 */
static struct full_ns0_VIPs *xmlTextReaderReadNs0VIPsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_VIPs *_vIPs = calloc(1, sizeof(struct full_ns0_VIPs));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0VIPsType(_vIPs);
        free(_vIPs);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "vip", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}vip of type {}VIP.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0VIPType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}vip of type {}VIP.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0VIPsType(_vIPs);
          free(_vIPs);
          return NULL;
        }

        _vIPs->loadBalancerVIPs = realloc(_vIPs->loadBalancerVIPs, (_vIPs->_sizeof_loadBalancerVIPs + 1) * sizeof(struct full_ns0_VIP));
        memcpy(&(_vIPs->loadBalancerVIPs[_vIPs->_sizeof_loadBalancerVIPs++]), _child_accessor, sizeof(struct full_ns0_VIP));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}VIPs.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}VIPs. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _vIPs;
}

/**
 * Writes a VIPs to XML.
 *
 * @param writer The XML writer.
 * @param _vIPs The VIPs to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0VIPsType(xmlTextWriterPtr writer, struct full_ns0_VIPs *_vIPs) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _vIPs->_sizeof_loadBalancerVIPs; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vip", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}vip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}VIP for element {}vip...\n");
#endif
    status = xmlTextWriterWriteNs0VIPType(writer, &(_vIPs->loadBalancerVIPs[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}VIP for element {}vip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}vip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a VIPs.
 *
 * @param _vIPs The VIPs to free.
 */
static void freeNs0VIPsType(struct full_ns0_VIPs *_vIPs) {
  int i;
  if (_vIPs->loadBalancerVIPs != NULL) {
    for (i = 0; i < _vIPs->_sizeof_loadBalancerVIPs; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor loadBalancerVIPs[%i] of type full_ns0_VIPs...\n", i);
#endif
      freeNs0VIPType(&(_vIPs->loadBalancerVIPs[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor loadBalancerVIPs of type full_ns0_VIPs...\n");
#endif
    free(_vIPs->loadBalancerVIPs);
  }
}
#endif /* DEF_full_ns0_VIPs_M */
