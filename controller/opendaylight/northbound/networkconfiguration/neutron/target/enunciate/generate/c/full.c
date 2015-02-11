#include <enunciate-common.c>
#ifndef DEF_full_ns0_neutronFloatingIP_H
#define DEF_full_ns0_neutronFloatingIP_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronFloatingIP {


  /**
   * (no documentation provided)
   */
  xmlChar *floatingIPAddress;

  /**
   * (no documentation provided)
   */
  xmlChar *portUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *tenantUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *floatingNetworkUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *floatingIPUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *fixedIPAddress;
};

/**
 * Reads a NeutronFloatingIP element from XML. The element to be read is "neutronFloatingIP", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIP, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIP *xml_read_full_ns0_neutronFloatingIP(xmlTextReaderPtr reader);

/**
 * Writes a NeutronFloatingIP to XML under element name "neutronFloatingIP".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronFloatingIP(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP);

/**
 * Frees a NeutronFloatingIP.
 *
 * @param _neutronFloatingIP The NeutronFloatingIP to free.
 */
void free_full_ns0_neutronFloatingIP(struct full_ns0_neutronFloatingIP *_neutronFloatingIP);

/**
 * Reads a NeutronFloatingIP element from XML. The element to be read is "neutronFloatingIP", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIP, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIP *xmlTextReaderReadNs0NeutronFloatingIPElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronFloatingIP to XML under element name "neutronFloatingIP".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPElement(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP);

/**
 * Writes a NeutronFloatingIP to XML under element name "neutronFloatingIP".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP, int writeNamespaces);

/**
 * Frees the children of a NeutronFloatingIP.
 *
 * @param _neutronFloatingIP The NeutronFloatingIP whose children are to be free.
 */
static void freeNs0NeutronFloatingIPElement(struct full_ns0_neutronFloatingIP *_neutronFloatingIP);

/**
 * Reads a NeutronFloatingIP from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIP, or NULL in case of error.
 */
static struct full_ns0_neutronFloatingIP *xmlTextReaderReadNs0NeutronFloatingIPType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronFloatingIP to XML.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPType(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP);

/**
 * Frees the elements of a NeutronFloatingIP.
 *
 * @param _neutronFloatingIP The NeutronFloatingIP to free.
 */
static void freeNs0NeutronFloatingIPType(struct full_ns0_neutronFloatingIP *_neutronFloatingIP);

#endif /* DEF_full_ns0_neutronFloatingIP_H */
#ifndef DEF_full_ns0_neutronNetwork_H
#define DEF_full_ns0_neutronNetwork_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronNetwork {


  /**
   * (no documentation provided)
   */
  xmlChar *providerSegmentationID;

  /**
   * (no documentation provided)
   */
  xmlChar *tenantID;

  /**
   * (no documentation provided)
   */
  xmlChar *networkName;

  /**
   * (no documentation provided)
   */
  int *routerExternal;

  /**
   * (no documentation provided)
   */
  xmlChar *providerNetworkType;

  /**
   * (no documentation provided)
   */
  int *shared;

  /**
   * (no documentation provided)
   */
  xmlChar *providerPhysicalNetwork;

  /**
   * (no documentation provided)
   */
  xmlChar *status;

  /**
   * (no documentation provided)
   */
  xmlChar *networkUUID;

  /**
   * (no documentation provided)
   */
  int *adminStateUp;

  /**
   * (no documentation provided)
   */
  xmlChar *subnets;

  /**
   * Size of the subnets array.
   */
  int _sizeof_subnets;
};

/**
 * Reads a NeutronNetwork element from XML. The element to be read is "network", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronNetwork, or NULL in case of error.
 */
struct full_ns0_neutronNetwork *xml_read_full_ns0_neutronNetwork(xmlTextReaderPtr reader);

/**
 * Writes a NeutronNetwork to XML under element name "network".
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronNetwork(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork);

/**
 * Frees a NeutronNetwork.
 *
 * @param _neutronNetwork The NeutronNetwork to free.
 */
void free_full_ns0_neutronNetwork(struct full_ns0_neutronNetwork *_neutronNetwork);

/**
 * Reads a NeutronNetwork element from XML. The element to be read is "network", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronNetwork, or NULL in case of error.
 */
struct full_ns0_neutronNetwork *xmlTextReaderReadNs0NetworkElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronNetwork to XML under element name "network".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NetworkElement(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork);

/**
 * Writes a NeutronNetwork to XML under element name "network".
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NetworkElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork, int writeNamespaces);

/**
 * Frees the children of a NeutronNetwork.
 *
 * @param _neutronNetwork The NeutronNetwork whose children are to be free.
 */
static void freeNs0NetworkElement(struct full_ns0_neutronNetwork *_neutronNetwork);

/**
 * Reads a NeutronNetwork from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronNetwork, or NULL in case of error.
 */
static struct full_ns0_neutronNetwork *xmlTextReaderReadNs0NeutronNetworkType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronNetwork to XML.
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronNetworkType(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork);

/**
 * Frees the elements of a NeutronNetwork.
 *
 * @param _neutronNetwork The NeutronNetwork to free.
 */
static void freeNs0NeutronNetworkType(struct full_ns0_neutronNetwork *_neutronNetwork);

#endif /* DEF_full_ns0_neutronNetwork_H */
#ifndef DEF_full_ns0_neutronPort_H
#define DEF_full_ns0_neutronPort_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronPort {


  /**
   * (no documentation provided)
   */
  xmlChar *tenantID;

  /**
   * (no documentation provided)
   */
  xmlChar *macAddress;

  /**
   * (no documentation provided)
   */
  int *adminStateUp;

  /**
   * (no documentation provided)
   */
  xmlChar *deviceOwner;

  /**
   * (no documentation provided)
   */
  xmlChar *status;

  /**
   * (no documentation provided)
   */
  xmlChar *portUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *deviceID;

  /**
   * (no documentation provided)
   */
  xmlChar *networkUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutron_IPs *fixedIPs;

  /**
   * Size of the fixedIPs array.
   */
  int _sizeof_fixedIPs;
};

/**
 * Reads a NeutronPort element from XML. The element to be read is "neutronPort", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronPort, or NULL in case of error.
 */
struct full_ns0_neutronPort *xml_read_full_ns0_neutronPort(xmlTextReaderPtr reader);

/**
 * Writes a NeutronPort to XML under element name "neutronPort".
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronPort(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort);

/**
 * Frees a NeutronPort.
 *
 * @param _neutronPort The NeutronPort to free.
 */
void free_full_ns0_neutronPort(struct full_ns0_neutronPort *_neutronPort);

/**
 * Reads a NeutronPort element from XML. The element to be read is "neutronPort", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronPort, or NULL in case of error.
 */
struct full_ns0_neutronPort *xmlTextReaderReadNs0NeutronPortElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronPort to XML under element name "neutronPort".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronPortElement(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort);

/**
 * Writes a NeutronPort to XML under element name "neutronPort".
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronPortElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort, int writeNamespaces);

/**
 * Frees the children of a NeutronPort.
 *
 * @param _neutronPort The NeutronPort whose children are to be free.
 */
static void freeNs0NeutronPortElement(struct full_ns0_neutronPort *_neutronPort);

/**
 * Reads a NeutronPort from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronPort, or NULL in case of error.
 */
static struct full_ns0_neutronPort *xmlTextReaderReadNs0NeutronPortType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronPort to XML.
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronPortType(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort);

/**
 * Frees the elements of a NeutronPort.
 *
 * @param _neutronPort The NeutronPort to free.
 */
static void freeNs0NeutronPortType(struct full_ns0_neutronPort *_neutronPort);

#endif /* DEF_full_ns0_neutronPort_H */
#ifndef DEF_full_ns0_neutronRouter_H
#define DEF_full_ns0_neutronRouter_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronRouter {


  /**
   * (no documentation provided)
   */
  xmlChar *tenantID;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronRouter_NetworkReference *externalGatewayInfo;

  /**
   * (no documentation provided)
   */
  int *adminStateUp;

  /**
   * (no documentation provided)
   */
  xmlChar *status;

  /**
   * (no documentation provided)
   */
  xmlChar *routerUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *name;
};

/**
 * Reads a NeutronRouter element from XML. The element to be read is "neutronRouter", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouter, or NULL in case of error.
 */
struct full_ns0_neutronRouter *xml_read_full_ns0_neutronRouter(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter to XML under element name "neutronRouter".
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronRouter(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter);

/**
 * Frees a NeutronRouter.
 *
 * @param _neutronRouter The NeutronRouter to free.
 */
void free_full_ns0_neutronRouter(struct full_ns0_neutronRouter *_neutronRouter);

/**
 * Reads a NeutronRouter element from XML. The element to be read is "neutronRouter", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter, or NULL in case of error.
 */
struct full_ns0_neutronRouter *xmlTextReaderReadNs0NeutronRouterElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter to XML under element name "neutronRouter".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouterElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter);

/**
 * Writes a NeutronRouter to XML under element name "neutronRouter".
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouterElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter, int writeNamespaces);

/**
 * Frees the children of a NeutronRouter.
 *
 * @param _neutronRouter The NeutronRouter whose children are to be free.
 */
static void freeNs0NeutronRouterElement(struct full_ns0_neutronRouter *_neutronRouter);

/**
 * Reads a NeutronRouter from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter, or NULL in case of error.
 */
static struct full_ns0_neutronRouter *xmlTextReaderReadNs0NeutronRouterType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouterType(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter);

/**
 * Frees the elements of a NeutronRouter.
 *
 * @param _neutronRouter The NeutronRouter to free.
 */
static void freeNs0NeutronRouterType(struct full_ns0_neutronRouter *_neutronRouter);

#endif /* DEF_full_ns0_neutronRouter_H */
#ifndef DEF_full_ns0_neutronRouter_Interface_H
#define DEF_full_ns0_neutronRouter_Interface_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronRouter_Interface {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *tenantID;

  /**
   * (no documentation provided)
   */
  xmlChar *portUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *subnetUUID;
};

/**
 * Reads a NeutronRouter_Interface element from XML. The element to be read is "neutronRouter_Interface", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_Interface, or NULL in case of error.
 */
struct full_ns0_neutronRouter_Interface *xml_read_full_ns0_neutronRouter_Interface(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter_Interface to XML under element name "neutronRouter_Interface".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronRouter_Interface(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface);

/**
 * Frees a NeutronRouter_Interface.
 *
 * @param _neutronRouter_Interface The NeutronRouter_Interface to free.
 */
void free_full_ns0_neutronRouter_Interface(struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface);

/**
 * Reads a NeutronRouter_Interface element from XML. The element to be read is "neutronRouter_Interface", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_Interface, or NULL in case of error.
 */
struct full_ns0_neutronRouter_Interface *xmlTextReaderReadNs0NeutronRouter_InterfaceElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter_Interface to XML under element name "neutronRouter_Interface".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouter_InterfaceElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface);

/**
 * Writes a NeutronRouter_Interface to XML under element name "neutronRouter_Interface".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouter_InterfaceElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface, int writeNamespaces);

/**
 * Frees the children of a NeutronRouter_Interface.
 *
 * @param _neutronRouter_Interface The NeutronRouter_Interface whose children are to be free.
 */
static void freeNs0NeutronRouter_InterfaceElement(struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface);

/**
 * Reads a NeutronRouter_Interface from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_Interface, or NULL in case of error.
 */
static struct full_ns0_neutronRouter_Interface *xmlTextReaderReadNs0NeutronRouter_InterfaceType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter_Interface to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouter_InterfaceType(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface);

/**
 * Frees the elements of a NeutronRouter_Interface.
 *
 * @param _neutronRouter_Interface The NeutronRouter_Interface to free.
 */
static void freeNs0NeutronRouter_InterfaceType(struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface);

#endif /* DEF_full_ns0_neutronRouter_Interface_H */
#ifndef DEF_full_ns0_neutronRouter_NetworkReference_H
#define DEF_full_ns0_neutronRouter_NetworkReference_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronRouter_NetworkReference {


  /**
   * (no documentation provided)
   */
  xmlChar *networkID;
};

/**
 * Reads a NeutronRouter_NetworkReference element from XML. The element to be read is "neutronRouter_NetworkReference", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_NetworkReference, or NULL in case of error.
 */
struct full_ns0_neutronRouter_NetworkReference *xml_read_full_ns0_neutronRouter_NetworkReference(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter_NetworkReference to XML under element name "neutronRouter_NetworkReference".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronRouter_NetworkReference(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference);

/**
 * Frees a NeutronRouter_NetworkReference.
 *
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to free.
 */
void free_full_ns0_neutronRouter_NetworkReference(struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference);

/**
 * Reads a NeutronRouter_NetworkReference element from XML. The element to be read is "neutronRouter_NetworkReference", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_NetworkReference, or NULL in case of error.
 */
struct full_ns0_neutronRouter_NetworkReference *xmlTextReaderReadNs0NeutronRouter_NetworkReferenceElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter_NetworkReference to XML under element name "neutronRouter_NetworkReference".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference);

/**
 * Writes a NeutronRouter_NetworkReference to XML under element name "neutronRouter_NetworkReference".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference, int writeNamespaces);

/**
 * Frees the children of a NeutronRouter_NetworkReference.
 *
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference whose children are to be free.
 */
static void freeNs0NeutronRouter_NetworkReferenceElement(struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference);

/**
 * Reads a NeutronRouter_NetworkReference from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_NetworkReference, or NULL in case of error.
 */
static struct full_ns0_neutronRouter_NetworkReference *xmlTextReaderReadNs0NeutronRouter_NetworkReferenceType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouter_NetworkReference to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceType(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference);

/**
 * Frees the elements of a NeutronRouter_NetworkReference.
 *
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to free.
 */
static void freeNs0NeutronRouter_NetworkReferenceType(struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference);

#endif /* DEF_full_ns0_neutronRouter_NetworkReference_H */
#ifndef DEF_full_ns0_neutronSubnet_H
#define DEF_full_ns0_neutronSubnet_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronSubnet {


  /**
   * (no documentation provided)
   */
  int *ipVersion;

  /**
   * (no documentation provided)
   */
  xmlChar *gatewayIP;

  /**
   * (no documentation provided)
   */
  xmlChar *cidr;

  /**
   * (no documentation provided)
   */
  xmlChar *ipV6AddressMode;

  /**
   * (no documentation provided)
   */
  xmlChar *networkUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *subnetUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *tenantID;

  /**
   * (no documentation provided)
   */
  xmlChar *dnsNameservers;

  /**
   * Size of the dnsNameservers array.
   */
  int _sizeof_dnsNameservers;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *ipV6RaMode;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronSubnet_HostRoute *hostRoutes;

  /**
   * Size of the hostRoutes array.
   */
  int _sizeof_hostRoutes;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronSubnet_IPAllocationPool *allocationPools;

  /**
   * Size of the allocationPools array.
   */
  int _sizeof_allocationPools;

  /**
   * (no documentation provided)
   */
  int *enableDHCP;
};

/**
 * Reads a NeutronSubnet element from XML. The element to be read is "neutronSubnet", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet, or NULL in case of error.
 */
struct full_ns0_neutronSubnet *xml_read_full_ns0_neutronSubnet(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet to XML under element name "neutronSubnet".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronSubnet(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet);

/**
 * Frees a NeutronSubnet.
 *
 * @param _neutronSubnet The NeutronSubnet to free.
 */
void free_full_ns0_neutronSubnet(struct full_ns0_neutronSubnet *_neutronSubnet);

/**
 * Reads a NeutronSubnet element from XML. The element to be read is "neutronSubnet", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet, or NULL in case of error.
 */
struct full_ns0_neutronSubnet *xmlTextReaderReadNs0NeutronSubnetElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet to XML under element name "neutronSubnet".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnetElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet);

/**
 * Writes a NeutronSubnet to XML under element name "neutronSubnet".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnetElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet, int writeNamespaces);

/**
 * Frees the children of a NeutronSubnet.
 *
 * @param _neutronSubnet The NeutronSubnet whose children are to be free.
 */
static void freeNs0NeutronSubnetElement(struct full_ns0_neutronSubnet *_neutronSubnet);

/**
 * Reads a NeutronSubnet from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet, or NULL in case of error.
 */
static struct full_ns0_neutronSubnet *xmlTextReaderReadNs0NeutronSubnetType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnetType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet);

/**
 * Frees the elements of a NeutronSubnet.
 *
 * @param _neutronSubnet The NeutronSubnet to free.
 */
static void freeNs0NeutronSubnetType(struct full_ns0_neutronSubnet *_neutronSubnet);

#endif /* DEF_full_ns0_neutronSubnet_H */
#ifndef DEF_full_ns0_neutronSubnet_HostRoute_H
#define DEF_full_ns0_neutronSubnet_HostRoute_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronSubnet_HostRoute {


  /**
   * (no documentation provided)
   */
  xmlChar *nextHop;

  /**
   * (no documentation provided)
   */
  xmlChar *destination;
};

/**
 * Reads a NeutronSubnet_HostRoute element from XML. The element to be read is "neutronSubnet_HostRoute", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_HostRoute, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_HostRoute *xml_read_full_ns0_neutronSubnet_HostRoute(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet_HostRoute to XML under element name "neutronSubnet_HostRoute".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronSubnet_HostRoute(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute);

/**
 * Frees a NeutronSubnet_HostRoute.
 *
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to free.
 */
void free_full_ns0_neutronSubnet_HostRoute(struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute);

/**
 * Reads a NeutronSubnet_HostRoute element from XML. The element to be read is "neutronSubnet_HostRoute", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_HostRoute, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_HostRoute *xmlTextReaderReadNs0NeutronSubnet_HostRouteElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet_HostRoute to XML under element name "neutronSubnet_HostRoute".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_HostRouteElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute);

/**
 * Writes a NeutronSubnet_HostRoute to XML under element name "neutronSubnet_HostRoute".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_HostRouteElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute, int writeNamespaces);

/**
 * Frees the children of a NeutronSubnet_HostRoute.
 *
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute whose children are to be free.
 */
static void freeNs0NeutronSubnet_HostRouteElement(struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute);

/**
 * Reads a NeutronSubnet_HostRoute from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_HostRoute, or NULL in case of error.
 */
static struct full_ns0_neutronSubnet_HostRoute *xmlTextReaderReadNs0NeutronSubnet_HostRouteType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet_HostRoute to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_HostRouteType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute);

/**
 * Frees the elements of a NeutronSubnet_HostRoute.
 *
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to free.
 */
static void freeNs0NeutronSubnet_HostRouteType(struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute);

#endif /* DEF_full_ns0_neutronSubnet_HostRoute_H */
#ifndef DEF_full_ns0_neutronSubnet_IPAllocationPool_H
#define DEF_full_ns0_neutronSubnet_IPAllocationPool_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronSubnet_IPAllocationPool {


  /**
   * (no documentation provided)
   */
  xmlChar *poolStart;

  /**
   * (no documentation provided)
   */
  xmlChar *poolEnd;
};

/**
 * Reads a NeutronSubnet_IPAllocationPool element from XML. The element to be read is "neutronSubnet_IPAllocationPool", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_IPAllocationPool, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_IPAllocationPool *xml_read_full_ns0_neutronSubnet_IPAllocationPool(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML under element name "neutronSubnet_IPAllocationPool".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronSubnet_IPAllocationPool(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool);

/**
 * Frees a NeutronSubnet_IPAllocationPool.
 *
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to free.
 */
void free_full_ns0_neutronSubnet_IPAllocationPool(struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool);

/**
 * Reads a NeutronSubnet_IPAllocationPool element from XML. The element to be read is "neutronSubnet_IPAllocationPool", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_IPAllocationPool, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_IPAllocationPool *xmlTextReaderReadNs0NeutronSubnet_IPAllocationPoolElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML under element name "neutronSubnet_IPAllocationPool".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool);

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML under element name "neutronSubnet_IPAllocationPool".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool, int writeNamespaces);

/**
 * Frees the children of a NeutronSubnet_IPAllocationPool.
 *
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool whose children are to be free.
 */
static void freeNs0NeutronSubnet_IPAllocationPoolElement(struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool);

/**
 * Reads a NeutronSubnet_IPAllocationPool from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_IPAllocationPool, or NULL in case of error.
 */
static struct full_ns0_neutronSubnet_IPAllocationPool *xmlTextReaderReadNs0NeutronSubnet_IPAllocationPoolType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool);

/**
 * Frees the elements of a NeutronSubnet_IPAllocationPool.
 *
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to free.
 */
static void freeNs0NeutronSubnet_IPAllocationPoolType(struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool);

#endif /* DEF_full_ns0_neutronSubnet_IPAllocationPool_H */
#ifndef DEF_full_ns0_neutron_IPs_H
#define DEF_full_ns0_neutron_IPs_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutron_IPs {


  /**
   * (no documentation provided)
   */
  xmlChar *subnetUUID;

  /**
   * (no documentation provided)
   */
  xmlChar *ipAddress;
};

/**
 * Reads a Neutron_IPs element from XML. The element to be read is "neutron_IPs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Neutron_IPs, or NULL in case of error.
 */
struct full_ns0_neutron_IPs *xml_read_full_ns0_neutron_IPs(xmlTextReaderPtr reader);

/**
 * Writes a Neutron_IPs to XML under element name "neutron_IPs".
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutron_IPs(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs);

/**
 * Frees a Neutron_IPs.
 *
 * @param _neutron_IPs The Neutron_IPs to free.
 */
void free_full_ns0_neutron_IPs(struct full_ns0_neutron_IPs *_neutron_IPs);

/**
 * Reads a Neutron_IPs element from XML. The element to be read is "neutron_IPs", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Neutron_IPs, or NULL in case of error.
 */
struct full_ns0_neutron_IPs *xmlTextReaderReadNs0Neutron_IPsElement(xmlTextReaderPtr reader);

/**
 * Writes a Neutron_IPs to XML under element name "neutron_IPs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Neutron_IPsElement(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs);

/**
 * Writes a Neutron_IPs to XML under element name "neutron_IPs".
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Neutron_IPsElementNS(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs, int writeNamespaces);

/**
 * Frees the children of a Neutron_IPs.
 *
 * @param _neutron_IPs The Neutron_IPs whose children are to be free.
 */
static void freeNs0Neutron_IPsElement(struct full_ns0_neutron_IPs *_neutron_IPs);

/**
 * Reads a Neutron_IPs from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Neutron_IPs, or NULL in case of error.
 */
static struct full_ns0_neutron_IPs *xmlTextReaderReadNs0Neutron_IPsType(xmlTextReaderPtr reader);

/**
 * Writes a Neutron_IPs to XML.
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Neutron_IPsType(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs);

/**
 * Frees the elements of a Neutron_IPs.
 *
 * @param _neutron_IPs The Neutron_IPs to free.
 */
static void freeNs0Neutron_IPsType(struct full_ns0_neutron_IPs *_neutron_IPs);

#endif /* DEF_full_ns0_neutron_IPs_H */
#ifndef DEF_full_ns0_neutronFloatingIPRequest_H
#define DEF_full_ns0_neutronFloatingIPRequest_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronFloatingIPRequest {


  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronFloatingIP *singletonFloatingIP;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronFloatingIP *bulkRequest;

  /**
   * Size of the bulkRequest array.
   */
  int _sizeof_bulkRequest;
};

/**
 * Reads a NeutronFloatingIPRequest element from XML. The element to be read is "neutronFloatingIPRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIPRequest, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIPRequest *xml_read_full_ns0_neutronFloatingIPRequest(xmlTextReaderPtr reader);

/**
 * Writes a NeutronFloatingIPRequest to XML under element name "neutronFloatingIPRequest".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronFloatingIPRequest(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest);

/**
 * Frees a NeutronFloatingIPRequest.
 *
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to free.
 */
void free_full_ns0_neutronFloatingIPRequest(struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest);

/**
 * Reads a NeutronFloatingIPRequest element from XML. The element to be read is "neutronFloatingIPRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIPRequest, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIPRequest *xmlTextReaderReadNs0NeutronFloatingIPRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronFloatingIPRequest to XML under element name "neutronFloatingIPRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest);

/**
 * Writes a NeutronFloatingIPRequest to XML under element name "neutronFloatingIPRequest".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest, int writeNamespaces);

/**
 * Frees the children of a NeutronFloatingIPRequest.
 *
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest whose children are to be free.
 */
static void freeNs0NeutronFloatingIPRequestElement(struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest);

/**
 * Reads a NeutronFloatingIPRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIPRequest, or NULL in case of error.
 */
static struct full_ns0_neutronFloatingIPRequest *xmlTextReaderReadNs0NeutronFloatingIPRequestType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronFloatingIPRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest);

/**
 * Frees the elements of a NeutronFloatingIPRequest.
 *
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to free.
 */
static void freeNs0NeutronFloatingIPRequestType(struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest);

#endif /* DEF_full_ns0_neutronFloatingIPRequest_H */
#ifndef DEF_full_ns0_neutronNetworkRequest_H
#define DEF_full_ns0_neutronNetworkRequest_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronNetworkRequest {


  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronNetwork *singletonNetwork;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronNetwork *bulkRequest;

  /**
   * Size of the bulkRequest array.
   */
  int _sizeof_bulkRequest;
};

/**
 * Reads a NeutronNetworkRequest element from XML. The element to be read is "neutronNetworkRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronNetworkRequest, or NULL in case of error.
 */
struct full_ns0_neutronNetworkRequest *xml_read_full_ns0_neutronNetworkRequest(xmlTextReaderPtr reader);

/**
 * Writes a NeutronNetworkRequest to XML under element name "neutronNetworkRequest".
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronNetworkRequest(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest);

/**
 * Frees a NeutronNetworkRequest.
 *
 * @param _neutronNetworkRequest The NeutronNetworkRequest to free.
 */
void free_full_ns0_neutronNetworkRequest(struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest);

/**
 * Reads a NeutronNetworkRequest element from XML. The element to be read is "neutronNetworkRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronNetworkRequest, or NULL in case of error.
 */
struct full_ns0_neutronNetworkRequest *xmlTextReaderReadNs0NeutronNetworkRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronNetworkRequest to XML under element name "neutronNetworkRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronNetworkRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest);

/**
 * Writes a NeutronNetworkRequest to XML under element name "neutronNetworkRequest".
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronNetworkRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest, int writeNamespaces);

/**
 * Frees the children of a NeutronNetworkRequest.
 *
 * @param _neutronNetworkRequest The NeutronNetworkRequest whose children are to be free.
 */
static void freeNs0NeutronNetworkRequestElement(struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest);

/**
 * Reads a NeutronNetworkRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronNetworkRequest, or NULL in case of error.
 */
static struct full_ns0_neutronNetworkRequest *xmlTextReaderReadNs0NeutronNetworkRequestType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronNetworkRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronNetworkRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest);

/**
 * Frees the elements of a NeutronNetworkRequest.
 *
 * @param _neutronNetworkRequest The NeutronNetworkRequest to free.
 */
static void freeNs0NeutronNetworkRequestType(struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest);

#endif /* DEF_full_ns0_neutronNetworkRequest_H */
#ifndef DEF_full_ns0_neutronPortRequest_H
#define DEF_full_ns0_neutronPortRequest_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronPortRequest {


  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronPort *singletonPort;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronPort *bulkRequest;

  /**
   * Size of the bulkRequest array.
   */
  int _sizeof_bulkRequest;
};

/**
 * Reads a NeutronPortRequest element from XML. The element to be read is "neutronPortRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronPortRequest, or NULL in case of error.
 */
struct full_ns0_neutronPortRequest *xml_read_full_ns0_neutronPortRequest(xmlTextReaderPtr reader);

/**
 * Writes a NeutronPortRequest to XML under element name "neutronPortRequest".
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronPortRequest(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest);

/**
 * Frees a NeutronPortRequest.
 *
 * @param _neutronPortRequest The NeutronPortRequest to free.
 */
void free_full_ns0_neutronPortRequest(struct full_ns0_neutronPortRequest *_neutronPortRequest);

/**
 * Reads a NeutronPortRequest element from XML. The element to be read is "neutronPortRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronPortRequest, or NULL in case of error.
 */
struct full_ns0_neutronPortRequest *xmlTextReaderReadNs0NeutronPortRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronPortRequest to XML under element name "neutronPortRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronPortRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest);

/**
 * Writes a NeutronPortRequest to XML under element name "neutronPortRequest".
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronPortRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest, int writeNamespaces);

/**
 * Frees the children of a NeutronPortRequest.
 *
 * @param _neutronPortRequest The NeutronPortRequest whose children are to be free.
 */
static void freeNs0NeutronPortRequestElement(struct full_ns0_neutronPortRequest *_neutronPortRequest);

/**
 * Reads a NeutronPortRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronPortRequest, or NULL in case of error.
 */
static struct full_ns0_neutronPortRequest *xmlTextReaderReadNs0NeutronPortRequestType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronPortRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronPortRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest);

/**
 * Frees the elements of a NeutronPortRequest.
 *
 * @param _neutronPortRequest The NeutronPortRequest to free.
 */
static void freeNs0NeutronPortRequestType(struct full_ns0_neutronPortRequest *_neutronPortRequest);

#endif /* DEF_full_ns0_neutronPortRequest_H */
#ifndef DEF_full_ns0_neutronRouterRequest_H
#define DEF_full_ns0_neutronRouterRequest_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronRouterRequest {


  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronRouter *singletonRouter;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronRouter *bulkRequest;

  /**
   * Size of the bulkRequest array.
   */
  int _sizeof_bulkRequest;
};

/**
 * Reads a NeutronRouterRequest element from XML. The element to be read is "neutronRouterRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouterRequest, or NULL in case of error.
 */
struct full_ns0_neutronRouterRequest *xml_read_full_ns0_neutronRouterRequest(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouterRequest to XML under element name "neutronRouterRequest".
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronRouterRequest(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest);

/**
 * Frees a NeutronRouterRequest.
 *
 * @param _neutronRouterRequest The NeutronRouterRequest to free.
 */
void free_full_ns0_neutronRouterRequest(struct full_ns0_neutronRouterRequest *_neutronRouterRequest);

/**
 * Reads a NeutronRouterRequest element from XML. The element to be read is "neutronRouterRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouterRequest, or NULL in case of error.
 */
struct full_ns0_neutronRouterRequest *xmlTextReaderReadNs0NeutronRouterRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouterRequest to XML under element name "neutronRouterRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouterRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest);

/**
 * Writes a NeutronRouterRequest to XML under element name "neutronRouterRequest".
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouterRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest, int writeNamespaces);

/**
 * Frees the children of a NeutronRouterRequest.
 *
 * @param _neutronRouterRequest The NeutronRouterRequest whose children are to be free.
 */
static void freeNs0NeutronRouterRequestElement(struct full_ns0_neutronRouterRequest *_neutronRouterRequest);

/**
 * Reads a NeutronRouterRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouterRequest, or NULL in case of error.
 */
static struct full_ns0_neutronRouterRequest *xmlTextReaderReadNs0NeutronRouterRequestType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronRouterRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronRouterRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest);

/**
 * Frees the elements of a NeutronRouterRequest.
 *
 * @param _neutronRouterRequest The NeutronRouterRequest to free.
 */
static void freeNs0NeutronRouterRequestType(struct full_ns0_neutronRouterRequest *_neutronRouterRequest);

#endif /* DEF_full_ns0_neutronRouterRequest_H */
#ifndef DEF_full_ns0_neutronSubnetRequest_H
#define DEF_full_ns0_neutronSubnetRequest_H

/**
 * (no documentation provided)
 */
struct full_ns0_neutronSubnetRequest {


  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronSubnet *singletonSubnet;

  /**
   * (no documentation provided)
   */
  struct full_ns0_neutronSubnet *bulkRequest;

  /**
   * Size of the bulkRequest array.
   */
  int _sizeof_bulkRequest;
};

/**
 * Reads a NeutronSubnetRequest element from XML. The element to be read is "neutronSubnetRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnetRequest, or NULL in case of error.
 */
struct full_ns0_neutronSubnetRequest *xml_read_full_ns0_neutronSubnetRequest(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnetRequest to XML under element name "neutronSubnetRequest".
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_full_ns0_neutronSubnetRequest(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest);

/**
 * Frees a NeutronSubnetRequest.
 *
 * @param _neutronSubnetRequest The NeutronSubnetRequest to free.
 */
void free_full_ns0_neutronSubnetRequest(struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest);

/**
 * Reads a NeutronSubnetRequest element from XML. The element to be read is "neutronSubnetRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnetRequest, or NULL in case of error.
 */
struct full_ns0_neutronSubnetRequest *xmlTextReaderReadNs0NeutronSubnetRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnetRequest to XML under element name "neutronSubnetRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnetRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest);

/**
 * Writes a NeutronSubnetRequest to XML under element name "neutronSubnetRequest".
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnetRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest, int writeNamespaces);

/**
 * Frees the children of a NeutronSubnetRequest.
 *
 * @param _neutronSubnetRequest The NeutronSubnetRequest whose children are to be free.
 */
static void freeNs0NeutronSubnetRequestElement(struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest);

/**
 * Reads a NeutronSubnetRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnetRequest, or NULL in case of error.
 */
static struct full_ns0_neutronSubnetRequest *xmlTextReaderReadNs0NeutronSubnetRequestType(xmlTextReaderPtr reader);

/**
 * Writes a NeutronSubnetRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NeutronSubnetRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest);

/**
 * Frees the elements of a NeutronSubnetRequest.
 *
 * @param _neutronSubnetRequest The NeutronSubnetRequest to free.
 */
static void freeNs0NeutronSubnetRequestType(struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest);

#endif /* DEF_full_ns0_neutronSubnetRequest_H */
#ifndef DEF_full_ns0_neutronFloatingIP_M
#define DEF_full_ns0_neutronFloatingIP_M

/**
 * Reads a NeutronFloatingIP element from XML. The element to be read is "neutronFloatingIP", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIP, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIP *xml_read_full_ns0_neutronFloatingIP(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronFloatingIPElement(reader);
}

/**
 * Writes a NeutronFloatingIP to XML under element name "neutronFloatingIP".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronFloatingIP(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP) {
  return xmlTextWriterWriteNs0NeutronFloatingIPElementNS(writer, _neutronFloatingIP, 1);
}

/**
 * Frees a NeutronFloatingIP.
 *
 * @param _neutronFloatingIP The NeutronFloatingIP to free.
 */
void free_full_ns0_neutronFloatingIP(struct full_ns0_neutronFloatingIP *_neutronFloatingIP) {
  freeNs0NeutronFloatingIPType(_neutronFloatingIP);
  free(_neutronFloatingIP);
}

/**
 * Reads a NeutronFloatingIP element from XML. The element to be read is "neutronFloatingIP", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIP, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIP *xmlTextReaderReadNs0NeutronFloatingIPElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronFloatingIP *_neutronFloatingIP = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronFloatingIP", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronFloatingIP.\n");
#endif
    _neutronFloatingIP = xmlTextReaderReadNs0NeutronFloatingIPType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronFloatingIP == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronFloatingIP failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronFloatingIP failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronFloatingIP;
}

/**
 * Writes a NeutronFloatingIP to XML under element name "neutronFloatingIP".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPElement(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP) {
  return xmlTextWriterWriteNs0NeutronFloatingIPElementNS(writer, _neutronFloatingIP, 0);
}

/**
 * Writes a NeutronFloatingIP to XML under element name "neutronFloatingIP".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronFloatingIP", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronFloatingIP. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronFloatingIP for root element {}neutronFloatingIP...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronFloatingIPType(writer, _neutronFloatingIP);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronFloatingIP. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronFloatingIP. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronFloatingIP.
 *
 * @param _neutronFloatingIP The NeutronFloatingIP whose children are to be free.
 */
static void freeNs0NeutronFloatingIPElement(struct full_ns0_neutronFloatingIP *_neutronFloatingIP) {
  freeNs0NeutronFloatingIPType(_neutronFloatingIP);
}

/**
 * Reads a NeutronFloatingIP from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronFloatingIP, or NULL in case of error.
 */
static struct full_ns0_neutronFloatingIP *xmlTextReaderReadNs0NeutronFloatingIPType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronFloatingIP *_neutronFloatingIP = calloc(1, sizeof(struct full_ns0_neutronFloatingIP));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronFloatingIPType(_neutronFloatingIP);
        free(_neutronFloatingIP);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "floating_ip_address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}floating_ip_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}floating_ip_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronFloatingIPType(_neutronFloatingIP);
          free(_neutronFloatingIP);
          return NULL;
        }

        _neutronFloatingIP->floatingIPAddress = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "port_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronFloatingIPType(_neutronFloatingIP);
          free(_neutronFloatingIP);
          return NULL;
        }

        _neutronFloatingIP->portUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronFloatingIPType(_neutronFloatingIP);
          free(_neutronFloatingIP);
          return NULL;
        }

        _neutronFloatingIP->tenantUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "floating_network_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}floating_network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}floating_network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronFloatingIPType(_neutronFloatingIP);
          free(_neutronFloatingIP);
          return NULL;
        }

        _neutronFloatingIP->floatingNetworkUUID = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronFloatingIPType(_neutronFloatingIP);
          free(_neutronFloatingIP);
          return NULL;
        }

        _neutronFloatingIP->floatingIPUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "fixed_ip_address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}fixed_ip_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}fixed_ip_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronFloatingIPType(_neutronFloatingIP);
          free(_neutronFloatingIP);
          return NULL;
        }

        _neutronFloatingIP->fixedIPAddress = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronFloatingIP.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronFloatingIP. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronFloatingIP;
}

/**
 * Writes a NeutronFloatingIP to XML.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPType(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIP *_neutronFloatingIP) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronFloatingIP->floatingIPAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floating_ip_address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}floating_ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}floating_ip_address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronFloatingIP->floatingIPAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}floating_ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}floating_ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronFloatingIP->portUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}port_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}port_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronFloatingIP->portUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}port_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}port_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronFloatingIP->tenantUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronFloatingIP->tenantUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronFloatingIP->floatingNetworkUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floating_network_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}floating_network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}floating_network_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronFloatingIP->floatingNetworkUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}floating_network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}floating_network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronFloatingIP->floatingIPUUID != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronFloatingIP->floatingIPUUID));
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
  if (_neutronFloatingIP->fixedIPAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "fixed_ip_address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}fixed_ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}fixed_ip_address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronFloatingIP->fixedIPAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}fixed_ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}fixed_ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronFloatingIP.
 *
 * @param _neutronFloatingIP The NeutronFloatingIP to free.
 */
static void freeNs0NeutronFloatingIPType(struct full_ns0_neutronFloatingIP *_neutronFloatingIP) {
  int i;
  if (_neutronFloatingIP->floatingIPAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor floatingIPAddress of type full_ns0_neutronFloatingIP...\n");
#endif
    freeXsStringType(_neutronFloatingIP->floatingIPAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor floatingIPAddress of type full_ns0_neutronFloatingIP...\n");
#endif
    free(_neutronFloatingIP->floatingIPAddress);
  }
  if (_neutronFloatingIP->portUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor portUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    freeXsStringType(_neutronFloatingIP->portUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor portUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    free(_neutronFloatingIP->portUUID);
  }
  if (_neutronFloatingIP->tenantUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tenantUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    freeXsStringType(_neutronFloatingIP->tenantUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tenantUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    free(_neutronFloatingIP->tenantUUID);
  }
  if (_neutronFloatingIP->floatingNetworkUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor floatingNetworkUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    freeXsStringType(_neutronFloatingIP->floatingNetworkUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor floatingNetworkUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    free(_neutronFloatingIP->floatingNetworkUUID);
  }
  if (_neutronFloatingIP->floatingIPUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor floatingIPUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    freeXsStringType(_neutronFloatingIP->floatingIPUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor floatingIPUUID of type full_ns0_neutronFloatingIP...\n");
#endif
    free(_neutronFloatingIP->floatingIPUUID);
  }
  if (_neutronFloatingIP->fixedIPAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor fixedIPAddress of type full_ns0_neutronFloatingIP...\n");
#endif
    freeXsStringType(_neutronFloatingIP->fixedIPAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor fixedIPAddress of type full_ns0_neutronFloatingIP...\n");
#endif
    free(_neutronFloatingIP->fixedIPAddress);
  }
}
#endif /* DEF_full_ns0_neutronFloatingIP_M */
#ifndef DEF_full_ns0_neutronNetwork_M
#define DEF_full_ns0_neutronNetwork_M

/**
 * Reads a NeutronNetwork element from XML. The element to be read is "network", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronNetwork, or NULL in case of error.
 */
struct full_ns0_neutronNetwork *xml_read_full_ns0_neutronNetwork(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NetworkElement(reader);
}

/**
 * Writes a NeutronNetwork to XML under element name "network".
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronNetwork(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork) {
  return xmlTextWriterWriteNs0NetworkElementNS(writer, _neutronNetwork, 1);
}

/**
 * Frees a NeutronNetwork.
 *
 * @param _neutronNetwork The NeutronNetwork to free.
 */
void free_full_ns0_neutronNetwork(struct full_ns0_neutronNetwork *_neutronNetwork) {
  freeNs0NeutronNetworkType(_neutronNetwork);
  free(_neutronNetwork);
}

/**
 * Reads a NeutronNetwork element from XML. The element to be read is "network", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronNetwork, or NULL in case of error.
 */
struct full_ns0_neutronNetwork *xmlTextReaderReadNs0NetworkElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronNetwork *_neutronNetwork = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "network", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}network.\n");
#endif
    _neutronNetwork = xmlTextReaderReadNs0NeutronNetworkType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronNetwork == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}network failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}network failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronNetwork;
}

/**
 * Writes a NeutronNetwork to XML under element name "network".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NetworkElement(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork) {
  return xmlTextWriterWriteNs0NetworkElementNS(writer, _neutronNetwork, 0);
}

/**
 * Writes a NeutronNetwork to XML under element name "network".
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NetworkElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}network. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  if (writeNamespaces) {
#if DEBUG_ENUNCIATE > 1
    printf("writing namespaces for start element {}network...\n");
#endif

    status = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:ns2", BAD_CAST "router");
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("unable to write namespace attribute xmlns:ns2. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:ns1", BAD_CAST "provider");
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("unable to write namespace attribute xmlns:ns1. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronNetwork for root element {}network...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronNetworkType(writer, _neutronNetwork);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}network. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}network. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronNetwork.
 *
 * @param _neutronNetwork The NeutronNetwork whose children are to be free.
 */
static void freeNs0NetworkElement(struct full_ns0_neutronNetwork *_neutronNetwork) {
  freeNs0NeutronNetworkType(_neutronNetwork);
}

/**
 * Reads a NeutronNetwork from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronNetwork, or NULL in case of error.
 */
static struct full_ns0_neutronNetwork *xmlTextReaderReadNs0NeutronNetworkType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronNetwork *_neutronNetwork = calloc(1, sizeof(struct full_ns0_neutronNetwork));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronNetworkType(_neutronNetwork);
        free(_neutronNetwork);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "segmentation_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlStrcmp(BAD_CAST "provider", xmlTextReaderConstNamespaceUri(reader)) == 0) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {provider}segmentation_id of element {provider}segmentation_id.\n");
#endif
        _child_accessor = xmlTextReaderReadNs1Segmentation_idElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {provider}segmentation_id of element {provider}segmentation_id.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->providerSegmentationID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->tenantID = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->networkName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "external", xmlTextReaderConstLocalName(reader)) == 0
        && xmlStrcmp(BAD_CAST "router", xmlTextReaderConstNamespaceUri(reader)) == 0) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {router}external of element {router}external.\n");
#endif
        _child_accessor = xmlTextReaderReadNs2ExternalElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {router}external of element {router}external.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->routerExternal = ((int*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "network_type", xmlTextReaderConstLocalName(reader)) == 0
        && xmlStrcmp(BAD_CAST "provider", xmlTextReaderConstNamespaceUri(reader)) == 0) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {provider}network_type of element {provider}network_type.\n");
#endif
        _child_accessor = xmlTextReaderReadNs1Network_typeElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {provider}network_type of element {provider}network_type.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->providerNetworkType = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "shared", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}shared of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}shared of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->shared = ((int*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "physical_network", xmlTextReaderConstLocalName(reader)) == 0
        && xmlStrcmp(BAD_CAST "provider", xmlTextReaderConstNamespaceUri(reader)) == 0) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {provider}physical_network of element {provider}physical_network.\n");
#endif
        _child_accessor = xmlTextReaderReadNs1Physical_networkElement(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {provider}physical_network of element {provider}physical_network.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->providerPhysicalNetwork = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->status = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->networkUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "admin_state_up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}admin_state_up of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}admin_state_up of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->adminStateUp = ((int*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "subnets", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}subnets of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}subnets of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkType(_neutronNetwork);
          free(_neutronNetwork);
          return NULL;
        }

        _neutronNetwork->subnets = realloc(_neutronNetwork->subnets, (_neutronNetwork->_sizeof_subnets + 1) * sizeof(xmlChar));
        memcpy(&(_neutronNetwork->subnets[_neutronNetwork->_sizeof_subnets++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronNetwork.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronNetwork. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronNetwork;
}

/**
 * Writes a NeutronNetwork to XML.
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronNetworkType(xmlTextWriterPtr writer, struct full_ns0_neutronNetwork *_neutronNetwork) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronNetwork->providerSegmentationID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {provider}segmentation_id...\n");
#endif
    status = xmlTextWriterWriteNs1Segmentation_idElementNS(writer, _neutronNetwork->providerSegmentationID, 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {provider}segmentation_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronNetwork->tenantID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronNetwork->tenantID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronNetwork->networkName != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronNetwork->networkName));
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
  if (_neutronNetwork->routerExternal != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {router}external...\n");
#endif
    status = xmlTextWriterWriteNs2ExternalElementNS(writer, _neutronNetwork->routerExternal, 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {router}external. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronNetwork->providerNetworkType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {provider}network_type...\n");
#endif
    status = xmlTextWriterWriteNs1Network_typeElementNS(writer, _neutronNetwork->providerNetworkType, 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {provider}network_type. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronNetwork->shared != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "shared", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}shared. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}shared...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, (_neutronNetwork->shared));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}shared. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}shared. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronNetwork->providerPhysicalNetwork != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("writing element {provider}physical_network...\n");
#endif
    status = xmlTextWriterWriteNs1Physical_networkElementNS(writer, _neutronNetwork->providerPhysicalNetwork, 0);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write element {provider}physical_network. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronNetwork->status != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronNetwork->status));
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
  if (_neutronNetwork->networkUUID != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronNetwork->networkUUID));
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
  if (_neutronNetwork->adminStateUp != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "admin_state_up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}admin_state_up...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, (_neutronNetwork->adminStateUp));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronNetwork->_sizeof_subnets; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnets", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}subnets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}subnets...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_neutronNetwork->subnets[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}subnets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}subnets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronNetwork.
 *
 * @param _neutronNetwork The NeutronNetwork to free.
 */
static void freeNs0NeutronNetworkType(struct full_ns0_neutronNetwork *_neutronNetwork) {
  int i;
  if (_neutronNetwork->providerSegmentationID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing element of accessor providerSegmentationID of type full_ns0_neutronNetwork...\n");
#endif
    freeNs1Segmentation_idElement(_neutronNetwork->providerSegmentationID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor providerSegmentationID of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->providerSegmentationID);
  }
  if (_neutronNetwork->tenantID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tenantID of type full_ns0_neutronNetwork...\n");
#endif
    freeXsStringType(_neutronNetwork->tenantID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tenantID of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->tenantID);
  }
  if (_neutronNetwork->networkName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkName of type full_ns0_neutronNetwork...\n");
#endif
    freeXsStringType(_neutronNetwork->networkName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkName of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->networkName);
  }
  if (_neutronNetwork->routerExternal != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing element of accessor routerExternal of type full_ns0_neutronNetwork...\n");
#endif
    freeNs2ExternalElement(_neutronNetwork->routerExternal);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor routerExternal of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->routerExternal);
  }
  if (_neutronNetwork->providerNetworkType != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing element of accessor providerNetworkType of type full_ns0_neutronNetwork...\n");
#endif
    freeNs1Network_typeElement(_neutronNetwork->providerNetworkType);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor providerNetworkType of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->providerNetworkType);
  }
  if (_neutronNetwork->shared != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor shared of type full_ns0_neutronNetwork...\n");
#endif
    freeXsBooleanType(_neutronNetwork->shared);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor shared of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->shared);
  }
  if (_neutronNetwork->providerPhysicalNetwork != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing element of accessor providerPhysicalNetwork of type full_ns0_neutronNetwork...\n");
#endif
    freeNs1Physical_networkElement(_neutronNetwork->providerPhysicalNetwork);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor providerPhysicalNetwork of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->providerPhysicalNetwork);
  }
  if (_neutronNetwork->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type full_ns0_neutronNetwork...\n");
#endif
    freeXsStringType(_neutronNetwork->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->status);
  }
  if (_neutronNetwork->networkUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkUUID of type full_ns0_neutronNetwork...\n");
#endif
    freeXsStringType(_neutronNetwork->networkUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkUUID of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->networkUUID);
  }
  if (_neutronNetwork->adminStateUp != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor adminStateUp of type full_ns0_neutronNetwork...\n");
#endif
    freeXsBooleanType(_neutronNetwork->adminStateUp);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor adminStateUp of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->adminStateUp);
  }
  if (_neutronNetwork->subnets != NULL) {
    for (i = 0; i < _neutronNetwork->_sizeof_subnets; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor subnets[%i] of type full_ns0_neutronNetwork...\n", i);
#endif
      freeXsStringType(&(_neutronNetwork->subnets[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor subnets of type full_ns0_neutronNetwork...\n");
#endif
    free(_neutronNetwork->subnets);
  }
}
#endif /* DEF_full_ns0_neutronNetwork_M */
#ifndef DEF_full_ns0_neutronPort_M
#define DEF_full_ns0_neutronPort_M

/**
 * Reads a NeutronPort element from XML. The element to be read is "neutronPort", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronPort, or NULL in case of error.
 */
struct full_ns0_neutronPort *xml_read_full_ns0_neutronPort(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronPortElement(reader);
}

/**
 * Writes a NeutronPort to XML under element name "neutronPort".
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronPort(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort) {
  return xmlTextWriterWriteNs0NeutronPortElementNS(writer, _neutronPort, 1);
}

/**
 * Frees a NeutronPort.
 *
 * @param _neutronPort The NeutronPort to free.
 */
void free_full_ns0_neutronPort(struct full_ns0_neutronPort *_neutronPort) {
  freeNs0NeutronPortType(_neutronPort);
  free(_neutronPort);
}

/**
 * Reads a NeutronPort element from XML. The element to be read is "neutronPort", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronPort, or NULL in case of error.
 */
struct full_ns0_neutronPort *xmlTextReaderReadNs0NeutronPortElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronPort *_neutronPort = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronPort", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronPort.\n");
#endif
    _neutronPort = xmlTextReaderReadNs0NeutronPortType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronPort == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronPort failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronPort failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronPort;
}

/**
 * Writes a NeutronPort to XML under element name "neutronPort".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronPortElement(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort) {
  return xmlTextWriterWriteNs0NeutronPortElementNS(writer, _neutronPort, 0);
}

/**
 * Writes a NeutronPort to XML under element name "neutronPort".
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronPortElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronPort", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronPort. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronPort for root element {}neutronPort...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronPortType(writer, _neutronPort);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronPort. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronPort. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronPort.
 *
 * @param _neutronPort The NeutronPort whose children are to be free.
 */
static void freeNs0NeutronPortElement(struct full_ns0_neutronPort *_neutronPort) {
  freeNs0NeutronPortType(_neutronPort);
}

/**
 * Reads a NeutronPort from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronPort, or NULL in case of error.
 */
static struct full_ns0_neutronPort *xmlTextReaderReadNs0NeutronPortType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronPort *_neutronPort = calloc(1, sizeof(struct full_ns0_neutronPort));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronPortType(_neutronPort);
        free(_neutronPort);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->tenantID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mac_address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mac_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mac_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->macAddress = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "admin_state_up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}admin_state_up of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}admin_state_up of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->adminStateUp = ((int*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "device_owner", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}device_owner of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}device_owner of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->deviceOwner = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->status = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->portUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "device_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}device_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}device_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->deviceID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "network_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->networkUUID = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "fixed_ips", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}fixed_ips of type {}neutron_IPs.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0Neutron_IPsType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}fixed_ips of type {}neutron_IPs.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortType(_neutronPort);
          free(_neutronPort);
          return NULL;
        }

        _neutronPort->fixedIPs = realloc(_neutronPort->fixedIPs, (_neutronPort->_sizeof_fixedIPs + 1) * sizeof(struct full_ns0_neutron_IPs));
        memcpy(&(_neutronPort->fixedIPs[_neutronPort->_sizeof_fixedIPs++]), _child_accessor, sizeof(struct full_ns0_neutron_IPs));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronPort.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronPort. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronPort;
}

/**
 * Writes a NeutronPort to XML.
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronPortType(xmlTextWriterPtr writer, struct full_ns0_neutronPort *_neutronPort) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronPort->tenantID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->tenantID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronPort->macAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mac_address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mac_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mac_address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->macAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mac_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mac_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronPort->adminStateUp != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "admin_state_up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}admin_state_up...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, (_neutronPort->adminStateUp));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronPort->deviceOwner != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "device_owner", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}device_owner. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}device_owner...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->deviceOwner));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}device_owner. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}device_owner. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronPort->status != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->status));
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
  if (_neutronPort->portUUID != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->portUUID));
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
  if (_neutronPort->deviceID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "device_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}device_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}device_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->deviceID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}device_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}device_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronPort->networkUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}network_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->networkUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronPort->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronPort->name));
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
  for (i = 0; i < _neutronPort->_sizeof_fixedIPs; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "fixed_ips", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}fixed_ips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutron_IPs for element {}fixed_ips...\n");
#endif
    status = xmlTextWriterWriteNs0Neutron_IPsType(writer, &(_neutronPort->fixedIPs[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutron_IPs for element {}fixed_ips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}fixed_ips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronPort.
 *
 * @param _neutronPort The NeutronPort to free.
 */
static void freeNs0NeutronPortType(struct full_ns0_neutronPort *_neutronPort) {
  int i;
  if (_neutronPort->tenantID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tenantID of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->tenantID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tenantID of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->tenantID);
  }
  if (_neutronPort->macAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor macAddress of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->macAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor macAddress of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->macAddress);
  }
  if (_neutronPort->adminStateUp != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor adminStateUp of type full_ns0_neutronPort...\n");
#endif
    freeXsBooleanType(_neutronPort->adminStateUp);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor adminStateUp of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->adminStateUp);
  }
  if (_neutronPort->deviceOwner != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor deviceOwner of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->deviceOwner);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor deviceOwner of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->deviceOwner);
  }
  if (_neutronPort->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->status);
  }
  if (_neutronPort->portUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor portUUID of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->portUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor portUUID of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->portUUID);
  }
  if (_neutronPort->deviceID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor deviceID of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->deviceID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor deviceID of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->deviceID);
  }
  if (_neutronPort->networkUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkUUID of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->networkUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkUUID of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->networkUUID);
  }
  if (_neutronPort->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_neutronPort...\n");
#endif
    freeXsStringType(_neutronPort->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->name);
  }
  if (_neutronPort->fixedIPs != NULL) {
    for (i = 0; i < _neutronPort->_sizeof_fixedIPs; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor fixedIPs[%i] of type full_ns0_neutronPort...\n", i);
#endif
      freeNs0Neutron_IPsType(&(_neutronPort->fixedIPs[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor fixedIPs of type full_ns0_neutronPort...\n");
#endif
    free(_neutronPort->fixedIPs);
  }
}
#endif /* DEF_full_ns0_neutronPort_M */
#ifndef DEF_full_ns0_neutronRouter_M
#define DEF_full_ns0_neutronRouter_M

/**
 * Reads a NeutronRouter element from XML. The element to be read is "neutronRouter", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouter, or NULL in case of error.
 */
struct full_ns0_neutronRouter *xml_read_full_ns0_neutronRouter(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronRouterElement(reader);
}

/**
 * Writes a NeutronRouter to XML under element name "neutronRouter".
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronRouter(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter) {
  return xmlTextWriterWriteNs0NeutronRouterElementNS(writer, _neutronRouter, 1);
}

/**
 * Frees a NeutronRouter.
 *
 * @param _neutronRouter The NeutronRouter to free.
 */
void free_full_ns0_neutronRouter(struct full_ns0_neutronRouter *_neutronRouter) {
  freeNs0NeutronRouterType(_neutronRouter);
  free(_neutronRouter);
}

/**
 * Reads a NeutronRouter element from XML. The element to be read is "neutronRouter", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter, or NULL in case of error.
 */
struct full_ns0_neutronRouter *xmlTextReaderReadNs0NeutronRouterElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronRouter *_neutronRouter = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronRouter", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronRouter.\n");
#endif
    _neutronRouter = xmlTextReaderReadNs0NeutronRouterType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronRouter == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronRouter failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronRouter failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronRouter;
}

/**
 * Writes a NeutronRouter to XML under element name "neutronRouter".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouterElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter) {
  return xmlTextWriterWriteNs0NeutronRouterElementNS(writer, _neutronRouter, 0);
}

/**
 * Writes a NeutronRouter to XML under element name "neutronRouter".
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouterElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouter", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronRouter. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronRouter for root element {}neutronRouter...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronRouterType(writer, _neutronRouter);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronRouter. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronRouter. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronRouter.
 *
 * @param _neutronRouter The NeutronRouter whose children are to be free.
 */
static void freeNs0NeutronRouterElement(struct full_ns0_neutronRouter *_neutronRouter) {
  freeNs0NeutronRouterType(_neutronRouter);
}

/**
 * Reads a NeutronRouter from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronRouter, or NULL in case of error.
 */
static struct full_ns0_neutronRouter *xmlTextReaderReadNs0NeutronRouterType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronRouter *_neutronRouter = calloc(1, sizeof(struct full_ns0_neutronRouter));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronRouterType(_neutronRouter);
        free(_neutronRouter);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouterType(_neutronRouter);
          free(_neutronRouter);
          return NULL;
        }

        _neutronRouter->tenantID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "external_gateway_info", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}external_gateway_info of type {}neutronRouter_NetworkReference.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronRouter_NetworkReferenceType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}external_gateway_info of type {}neutronRouter_NetworkReference.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouterType(_neutronRouter);
          free(_neutronRouter);
          return NULL;
        }

        _neutronRouter->externalGatewayInfo = ((struct full_ns0_neutronRouter_NetworkReference*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "admin_state_up", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}admin_state_up of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}admin_state_up of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouterType(_neutronRouter);
          free(_neutronRouter);
          return NULL;
        }

        _neutronRouter->adminStateUp = ((int*)_child_accessor);
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
          freeNs0NeutronRouterType(_neutronRouter);
          free(_neutronRouter);
          return NULL;
        }

        _neutronRouter->status = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronRouterType(_neutronRouter);
          free(_neutronRouter);
          return NULL;
        }

        _neutronRouter->routerUUID = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronRouterType(_neutronRouter);
          free(_neutronRouter);
          return NULL;
        }

        _neutronRouter->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronRouter.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronRouter. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronRouter;
}

/**
 * Writes a NeutronRouter to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronRouterType(xmlTextWriterPtr writer, struct full_ns0_neutronRouter *_neutronRouter) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronRouter->tenantID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter->tenantID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronRouter->externalGatewayInfo != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "external_gateway_info", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}external_gateway_info. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronRouter_NetworkReference for element {}external_gateway_info...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceType(writer, (_neutronRouter->externalGatewayInfo));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronRouter_NetworkReference for element {}external_gateway_info. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}external_gateway_info. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronRouter->adminStateUp != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "admin_state_up", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}admin_state_up...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, (_neutronRouter->adminStateUp));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}admin_state_up. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronRouter->status != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter->status));
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
  if (_neutronRouter->routerUUID != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter->routerUUID));
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
  if (_neutronRouter->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter->name));
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
 * Frees the elements of a NeutronRouter.
 *
 * @param _neutronRouter The NeutronRouter to free.
 */
static void freeNs0NeutronRouterType(struct full_ns0_neutronRouter *_neutronRouter) {
  int i;
  if (_neutronRouter->tenantID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tenantID of type full_ns0_neutronRouter...\n");
#endif
    freeXsStringType(_neutronRouter->tenantID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tenantID of type full_ns0_neutronRouter...\n");
#endif
    free(_neutronRouter->tenantID);
  }
  if (_neutronRouter->externalGatewayInfo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor externalGatewayInfo of type full_ns0_neutronRouter...\n");
#endif
    freeNs0NeutronRouter_NetworkReferenceType(_neutronRouter->externalGatewayInfo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor externalGatewayInfo of type full_ns0_neutronRouter...\n");
#endif
    free(_neutronRouter->externalGatewayInfo);
  }
  if (_neutronRouter->adminStateUp != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor adminStateUp of type full_ns0_neutronRouter...\n");
#endif
    freeXsBooleanType(_neutronRouter->adminStateUp);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor adminStateUp of type full_ns0_neutronRouter...\n");
#endif
    free(_neutronRouter->adminStateUp);
  }
  if (_neutronRouter->status != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor status of type full_ns0_neutronRouter...\n");
#endif
    freeXsStringType(_neutronRouter->status);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor status of type full_ns0_neutronRouter...\n");
#endif
    free(_neutronRouter->status);
  }
  if (_neutronRouter->routerUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor routerUUID of type full_ns0_neutronRouter...\n");
#endif
    freeXsStringType(_neutronRouter->routerUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor routerUUID of type full_ns0_neutronRouter...\n");
#endif
    free(_neutronRouter->routerUUID);
  }
  if (_neutronRouter->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_neutronRouter...\n");
#endif
    freeXsStringType(_neutronRouter->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_neutronRouter...\n");
#endif
    free(_neutronRouter->name);
  }
}
#endif /* DEF_full_ns0_neutronRouter_M */
#ifndef DEF_full_ns0_neutronRouter_Interface_M
#define DEF_full_ns0_neutronRouter_Interface_M

/**
 * Reads a NeutronRouter_Interface element from XML. The element to be read is "neutronRouter_Interface", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_Interface, or NULL in case of error.
 */
struct full_ns0_neutronRouter_Interface *xml_read_full_ns0_neutronRouter_Interface(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronRouter_InterfaceElement(reader);
}

/**
 * Writes a NeutronRouter_Interface to XML under element name "neutronRouter_Interface".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronRouter_Interface(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface) {
  return xmlTextWriterWriteNs0NeutronRouter_InterfaceElementNS(writer, _neutronRouter_Interface, 1);
}

/**
 * Frees a NeutronRouter_Interface.
 *
 * @param _neutronRouter_Interface The NeutronRouter_Interface to free.
 */
void free_full_ns0_neutronRouter_Interface(struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface) {
  freeNs0NeutronRouter_InterfaceType(_neutronRouter_Interface);
  free(_neutronRouter_Interface);
}

/**
 * Reads a NeutronRouter_Interface element from XML. The element to be read is "neutronRouter_Interface", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_Interface, or NULL in case of error.
 */
struct full_ns0_neutronRouter_Interface *xmlTextReaderReadNs0NeutronRouter_InterfaceElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronRouter_Interface", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronRouter_Interface.\n");
#endif
    _neutronRouter_Interface = xmlTextReaderReadNs0NeutronRouter_InterfaceType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronRouter_Interface == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronRouter_Interface failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronRouter_Interface failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronRouter_Interface;
}

/**
 * Writes a NeutronRouter_Interface to XML under element name "neutronRouter_Interface".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouter_InterfaceElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface) {
  return xmlTextWriterWriteNs0NeutronRouter_InterfaceElementNS(writer, _neutronRouter_Interface, 0);
}

/**
 * Writes a NeutronRouter_Interface to XML under element name "neutronRouter_Interface".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouter_InterfaceElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouter_Interface", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronRouter_Interface. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronRouter_Interface for root element {}neutronRouter_Interface...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronRouter_InterfaceType(writer, _neutronRouter_Interface);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronRouter_Interface. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronRouter_Interface. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronRouter_Interface.
 *
 * @param _neutronRouter_Interface The NeutronRouter_Interface whose children are to be free.
 */
static void freeNs0NeutronRouter_InterfaceElement(struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface) {
  freeNs0NeutronRouter_InterfaceType(_neutronRouter_Interface);
}

/**
 * Reads a NeutronRouter_Interface from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronRouter_Interface, or NULL in case of error.
 */
static struct full_ns0_neutronRouter_Interface *xmlTextReaderReadNs0NeutronRouter_InterfaceType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface = calloc(1, sizeof(struct full_ns0_neutronRouter_Interface));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronRouter_InterfaceType(_neutronRouter_Interface);
        free(_neutronRouter_Interface);
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
          freeNs0NeutronRouter_InterfaceType(_neutronRouter_Interface);
          free(_neutronRouter_Interface);
          return NULL;
        }

        _neutronRouter_Interface->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouter_InterfaceType(_neutronRouter_Interface);
          free(_neutronRouter_Interface);
          return NULL;
        }

        _neutronRouter_Interface->tenantID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "port_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouter_InterfaceType(_neutronRouter_Interface);
          free(_neutronRouter_Interface);
          return NULL;
        }

        _neutronRouter_Interface->portUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "subnet_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouter_InterfaceType(_neutronRouter_Interface);
          free(_neutronRouter_Interface);
          return NULL;
        }

        _neutronRouter_Interface->subnetUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronRouter_Interface.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronRouter_Interface. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronRouter_Interface;
}

/**
 * Writes a NeutronRouter_Interface to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronRouter_InterfaceType(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronRouter_Interface->id != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter_Interface->id));
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
  if (_neutronRouter_Interface->tenantID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter_Interface->tenantID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronRouter_Interface->portUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}port_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}port_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter_Interface->portUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}port_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}port_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronRouter_Interface->subnetUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnet_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}subnet_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}subnet_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter_Interface->subnetUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}subnet_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}subnet_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronRouter_Interface.
 *
 * @param _neutronRouter_Interface The NeutronRouter_Interface to free.
 */
static void freeNs0NeutronRouter_InterfaceType(struct full_ns0_neutronRouter_Interface *_neutronRouter_Interface) {
  int i;
  if (_neutronRouter_Interface->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type full_ns0_neutronRouter_Interface...\n");
#endif
    freeXsStringType(_neutronRouter_Interface->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type full_ns0_neutronRouter_Interface...\n");
#endif
    free(_neutronRouter_Interface->id);
  }
  if (_neutronRouter_Interface->tenantID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tenantID of type full_ns0_neutronRouter_Interface...\n");
#endif
    freeXsStringType(_neutronRouter_Interface->tenantID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tenantID of type full_ns0_neutronRouter_Interface...\n");
#endif
    free(_neutronRouter_Interface->tenantID);
  }
  if (_neutronRouter_Interface->portUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor portUUID of type full_ns0_neutronRouter_Interface...\n");
#endif
    freeXsStringType(_neutronRouter_Interface->portUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor portUUID of type full_ns0_neutronRouter_Interface...\n");
#endif
    free(_neutronRouter_Interface->portUUID);
  }
  if (_neutronRouter_Interface->subnetUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor subnetUUID of type full_ns0_neutronRouter_Interface...\n");
#endif
    freeXsStringType(_neutronRouter_Interface->subnetUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor subnetUUID of type full_ns0_neutronRouter_Interface...\n");
#endif
    free(_neutronRouter_Interface->subnetUUID);
  }
}
#endif /* DEF_full_ns0_neutronRouter_Interface_M */
#ifndef DEF_full_ns0_neutronRouter_NetworkReference_M
#define DEF_full_ns0_neutronRouter_NetworkReference_M

/**
 * Reads a NeutronRouter_NetworkReference element from XML. The element to be read is "neutronRouter_NetworkReference", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_NetworkReference, or NULL in case of error.
 */
struct full_ns0_neutronRouter_NetworkReference *xml_read_full_ns0_neutronRouter_NetworkReference(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronRouter_NetworkReferenceElement(reader);
}

/**
 * Writes a NeutronRouter_NetworkReference to XML under element name "neutronRouter_NetworkReference".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronRouter_NetworkReference(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference) {
  return xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceElementNS(writer, _neutronRouter_NetworkReference, 1);
}

/**
 * Frees a NeutronRouter_NetworkReference.
 *
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to free.
 */
void free_full_ns0_neutronRouter_NetworkReference(struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference) {
  freeNs0NeutronRouter_NetworkReferenceType(_neutronRouter_NetworkReference);
  free(_neutronRouter_NetworkReference);
}

/**
 * Reads a NeutronRouter_NetworkReference element from XML. The element to be read is "neutronRouter_NetworkReference", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouter_NetworkReference, or NULL in case of error.
 */
struct full_ns0_neutronRouter_NetworkReference *xmlTextReaderReadNs0NeutronRouter_NetworkReferenceElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronRouter_NetworkReference", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronRouter_NetworkReference.\n");
#endif
    _neutronRouter_NetworkReference = xmlTextReaderReadNs0NeutronRouter_NetworkReferenceType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronRouter_NetworkReference == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronRouter_NetworkReference failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronRouter_NetworkReference failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronRouter_NetworkReference;
}

/**
 * Writes a NeutronRouter_NetworkReference to XML under element name "neutronRouter_NetworkReference".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference) {
  return xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceElementNS(writer, _neutronRouter_NetworkReference, 0);
}

/**
 * Writes a NeutronRouter_NetworkReference to XML under element name "neutronRouter_NetworkReference".
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouter_NetworkReference", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronRouter_NetworkReference. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronRouter_NetworkReference for root element {}neutronRouter_NetworkReference...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceType(writer, _neutronRouter_NetworkReference);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronRouter_NetworkReference. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronRouter_NetworkReference. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronRouter_NetworkReference.
 *
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference whose children are to be free.
 */
static void freeNs0NeutronRouter_NetworkReferenceElement(struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference) {
  freeNs0NeutronRouter_NetworkReferenceType(_neutronRouter_NetworkReference);
}

/**
 * Reads a NeutronRouter_NetworkReference from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronRouter_NetworkReference, or NULL in case of error.
 */
static struct full_ns0_neutronRouter_NetworkReference *xmlTextReaderReadNs0NeutronRouter_NetworkReferenceType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference = calloc(1, sizeof(struct full_ns0_neutronRouter_NetworkReference));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronRouter_NetworkReferenceType(_neutronRouter_NetworkReference);
        free(_neutronRouter_NetworkReference);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "network_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouter_NetworkReferenceType(_neutronRouter_NetworkReference);
          free(_neutronRouter_NetworkReference);
          return NULL;
        }

        _neutronRouter_NetworkReference->networkID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronRouter_NetworkReference.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronRouter_NetworkReference. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronRouter_NetworkReference;
}

/**
 * Writes a NeutronRouter_NetworkReference to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronRouter_NetworkReferenceType(xmlTextWriterPtr writer, struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronRouter_NetworkReference->networkID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}network_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronRouter_NetworkReference->networkID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronRouter_NetworkReference.
 *
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to free.
 */
static void freeNs0NeutronRouter_NetworkReferenceType(struct full_ns0_neutronRouter_NetworkReference *_neutronRouter_NetworkReference) {
  int i;
  if (_neutronRouter_NetworkReference->networkID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkID of type full_ns0_neutronRouter_NetworkReference...\n");
#endif
    freeXsStringType(_neutronRouter_NetworkReference->networkID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkID of type full_ns0_neutronRouter_NetworkReference...\n");
#endif
    free(_neutronRouter_NetworkReference->networkID);
  }
}
#endif /* DEF_full_ns0_neutronRouter_NetworkReference_M */
#ifndef DEF_full_ns0_neutronSubnet_M
#define DEF_full_ns0_neutronSubnet_M

/**
 * Reads a NeutronSubnet element from XML. The element to be read is "neutronSubnet", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet, or NULL in case of error.
 */
struct full_ns0_neutronSubnet *xml_read_full_ns0_neutronSubnet(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronSubnetElement(reader);
}

/**
 * Writes a NeutronSubnet to XML under element name "neutronSubnet".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronSubnet(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet) {
  return xmlTextWriterWriteNs0NeutronSubnetElementNS(writer, _neutronSubnet, 1);
}

/**
 * Frees a NeutronSubnet.
 *
 * @param _neutronSubnet The NeutronSubnet to free.
 */
void free_full_ns0_neutronSubnet(struct full_ns0_neutronSubnet *_neutronSubnet) {
  freeNs0NeutronSubnetType(_neutronSubnet);
  free(_neutronSubnet);
}

/**
 * Reads a NeutronSubnet element from XML. The element to be read is "neutronSubnet", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet, or NULL in case of error.
 */
struct full_ns0_neutronSubnet *xmlTextReaderReadNs0NeutronSubnetElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronSubnet *_neutronSubnet = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronSubnet", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronSubnet.\n");
#endif
    _neutronSubnet = xmlTextReaderReadNs0NeutronSubnetType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronSubnet == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronSubnet failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronSubnet failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronSubnet;
}

/**
 * Writes a NeutronSubnet to XML under element name "neutronSubnet".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnetElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet) {
  return xmlTextWriterWriteNs0NeutronSubnetElementNS(writer, _neutronSubnet, 0);
}

/**
 * Writes a NeutronSubnet to XML under element name "neutronSubnet".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnetElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnet", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronSubnet. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronSubnet for root element {}neutronSubnet...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronSubnetType(writer, _neutronSubnet);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronSubnet. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronSubnet. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronSubnet.
 *
 * @param _neutronSubnet The NeutronSubnet whose children are to be free.
 */
static void freeNs0NeutronSubnetElement(struct full_ns0_neutronSubnet *_neutronSubnet) {
  freeNs0NeutronSubnetType(_neutronSubnet);
}

/**
 * Reads a NeutronSubnet from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronSubnet, or NULL in case of error.
 */
static struct full_ns0_neutronSubnet *xmlTextReaderReadNs0NeutronSubnetType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronSubnet *_neutronSubnet = calloc(1, sizeof(struct full_ns0_neutronSubnet));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronSubnetType(_neutronSubnet);
        free(_neutronSubnet);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ip_version", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ip_version of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
        _child_accessor = xmlTextReaderReadXsIntType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ip_version of type {http://www.w3.org/2001/XMLSchema}int.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->ipVersion = ((int*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "gateway_ip", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}gateway_ip of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}gateway_ip of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->gatewayIP = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cidr", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cidr of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cidr of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->cidr = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ipv6_address_mode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

          status = 1;
          if (xmlTextReaderMoveToAttributeNs(reader, BAD_CAST "nil", BAD_CAST "http://www.w3.org/2001/XMLSchema-instance")) {
            if (xmlStrcmp(BAD_CAST "true", xmlTextReaderConstValue(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
              printf("Choice {}ipv6_address_mode was nil according to the xsi:nil attribute.\n");
#endif
              status = 0;
            }
          }

          xmlTextReaderMoveToElement(reader); //move back to the element
          if (status) { //if not "nil"...
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ipv6_address_mode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ipv6_address_mode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->ipV6AddressMode = ((xmlChar*)_child_accessor);
          } //end "if not nil" clause
          else if (xmlTextReaderIsEmptyElement(reader) == 0) {
            //if it's not the empty element, skip it because it's nil.
            xmlTextReaderSkipElement(reader);
          }
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "network_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->networkUUID = ((xmlChar*)_child_accessor);
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
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->subnetUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->tenantID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dns_nameservers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dns_nameservers of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dns_nameservers of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->dnsNameservers = realloc(_neutronSubnet->dnsNameservers, (_neutronSubnet->_sizeof_dnsNameservers + 1) * sizeof(xmlChar));
        memcpy(&(_neutronSubnet->dnsNameservers[_neutronSubnet->_sizeof_dnsNameservers++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
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
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ipv6_ra_mode", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

          status = 1;
          if (xmlTextReaderMoveToAttributeNs(reader, BAD_CAST "nil", BAD_CAST "http://www.w3.org/2001/XMLSchema-instance")) {
            if (xmlStrcmp(BAD_CAST "true", xmlTextReaderConstValue(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
              printf("Choice {}ipv6_ra_mode was nil according to the xsi:nil attribute.\n");
#endif
              status = 0;
            }
          }

          xmlTextReaderMoveToElement(reader); //move back to the element
          if (status) { //if not "nil"...
#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ipv6_ra_mode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ipv6_ra_mode of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->ipV6RaMode = ((xmlChar*)_child_accessor);
          } //end "if not nil" clause
          else if (xmlTextReaderIsEmptyElement(reader) == 0) {
            //if it's not the empty element, skip it because it's nil.
            xmlTextReaderSkipElement(reader);
          }
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "host_routes", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}host_routes of type {}neutronSubnet_HostRoute.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronSubnet_HostRouteType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}host_routes of type {}neutronSubnet_HostRoute.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->hostRoutes = realloc(_neutronSubnet->hostRoutes, (_neutronSubnet->_sizeof_hostRoutes + 1) * sizeof(struct full_ns0_neutronSubnet_HostRoute));
        memcpy(&(_neutronSubnet->hostRoutes[_neutronSubnet->_sizeof_hostRoutes++]), _child_accessor, sizeof(struct full_ns0_neutronSubnet_HostRoute));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "allocation_pools", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}allocation_pools of type {}neutronSubnet_IPAllocationPool.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronSubnet_IPAllocationPoolType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}allocation_pools of type {}neutronSubnet_IPAllocationPool.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->allocationPools = realloc(_neutronSubnet->allocationPools, (_neutronSubnet->_sizeof_allocationPools + 1) * sizeof(struct full_ns0_neutronSubnet_IPAllocationPool));
        memcpy(&(_neutronSubnet->allocationPools[_neutronSubnet->_sizeof_allocationPools++]), _child_accessor, sizeof(struct full_ns0_neutronSubnet_IPAllocationPool));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "enable_dhcp", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}enable_dhcp of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}enable_dhcp of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetType(_neutronSubnet);
          free(_neutronSubnet);
          return NULL;
        }

        _neutronSubnet->enableDHCP = ((int*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronSubnet.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronSubnet. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronSubnet;
}

/**
 * Writes a NeutronSubnet to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronSubnetType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet *_neutronSubnet) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronSubnet->ipVersion != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ip_version", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ip_version. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}int for element {}ip_version...\n");
#endif
    status = xmlTextWriterWriteXsIntType(writer, (_neutronSubnet->ipVersion));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}int for element {}ip_version. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ip_version. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet->gatewayIP != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gateway_ip", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}gateway_ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}gateway_ip...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->gatewayIP));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}gateway_ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}gateway_ip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet->cidr != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cidr", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cidr. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}cidr...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->cidr));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}cidr. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cidr. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet->ipV6AddressMode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ipv6_address_mode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ipv6_address_mode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ipv6_address_mode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->ipV6AddressMode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ipv6_address_mode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ipv6_address_mode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet->networkUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}network_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->networkUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}network_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet->subnetUUID != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->subnetUUID));
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
  if (_neutronSubnet->tenantID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->tenantID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tenant_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronSubnet->_sizeof_dnsNameservers; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dns_nameservers", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dns_nameservers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dns_nameservers...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_neutronSubnet->dnsNameservers[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dns_nameservers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dns_nameservers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->name));
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
  if (_neutronSubnet->ipV6RaMode != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ipv6_ra_mode", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ipv6_ra_mode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ipv6_ra_mode...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet->ipV6RaMode));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ipv6_ra_mode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ipv6_ra_mode. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronSubnet->_sizeof_hostRoutes; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "host_routes", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}host_routes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronSubnet_HostRoute for element {}host_routes...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronSubnet_HostRouteType(writer, &(_neutronSubnet->hostRoutes[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronSubnet_HostRoute for element {}host_routes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}host_routes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronSubnet->_sizeof_allocationPools; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allocation_pools", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}allocation_pools. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronSubnet_IPAllocationPool for element {}allocation_pools...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolType(writer, &(_neutronSubnet->allocationPools[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronSubnet_IPAllocationPool for element {}allocation_pools. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}allocation_pools. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet->enableDHCP != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "enable_dhcp", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}enable_dhcp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}enable_dhcp...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, (_neutronSubnet->enableDHCP));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}enable_dhcp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}enable_dhcp. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronSubnet.
 *
 * @param _neutronSubnet The NeutronSubnet to free.
 */
static void freeNs0NeutronSubnetType(struct full_ns0_neutronSubnet *_neutronSubnet) {
  int i;
  if (_neutronSubnet->ipVersion != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ipVersion of type full_ns0_neutronSubnet...\n");
#endif
    freeXsIntType(_neutronSubnet->ipVersion);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ipVersion of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->ipVersion);
  }
  if (_neutronSubnet->gatewayIP != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor gatewayIP of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->gatewayIP);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor gatewayIP of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->gatewayIP);
  }
  if (_neutronSubnet->cidr != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cidr of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->cidr);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cidr of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->cidr);
  }
  if (_neutronSubnet->ipV6AddressMode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ipV6AddressMode of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->ipV6AddressMode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ipV6AddressMode of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->ipV6AddressMode);
  }
  if (_neutronSubnet->networkUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor networkUUID of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->networkUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor networkUUID of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->networkUUID);
  }
  if (_neutronSubnet->subnetUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor subnetUUID of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->subnetUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor subnetUUID of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->subnetUUID);
  }
  if (_neutronSubnet->tenantID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tenantID of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->tenantID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tenantID of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->tenantID);
  }
  if (_neutronSubnet->dnsNameservers != NULL) {
    for (i = 0; i < _neutronSubnet->_sizeof_dnsNameservers; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor dnsNameservers[%i] of type full_ns0_neutronSubnet...\n", i);
#endif
      freeXsStringType(&(_neutronSubnet->dnsNameservers[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dnsNameservers of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->dnsNameservers);
  }
  if (_neutronSubnet->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->name);
  }
  if (_neutronSubnet->ipV6RaMode != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ipV6RaMode of type full_ns0_neutronSubnet...\n");
#endif
    freeXsStringType(_neutronSubnet->ipV6RaMode);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ipV6RaMode of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->ipV6RaMode);
  }
  if (_neutronSubnet->hostRoutes != NULL) {
    for (i = 0; i < _neutronSubnet->_sizeof_hostRoutes; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor hostRoutes[%i] of type full_ns0_neutronSubnet...\n", i);
#endif
      freeNs0NeutronSubnet_HostRouteType(&(_neutronSubnet->hostRoutes[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor hostRoutes of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->hostRoutes);
  }
  if (_neutronSubnet->allocationPools != NULL) {
    for (i = 0; i < _neutronSubnet->_sizeof_allocationPools; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor allocationPools[%i] of type full_ns0_neutronSubnet...\n", i);
#endif
      freeNs0NeutronSubnet_IPAllocationPoolType(&(_neutronSubnet->allocationPools[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor allocationPools of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->allocationPools);
  }
  if (_neutronSubnet->enableDHCP != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor enableDHCP of type full_ns0_neutronSubnet...\n");
#endif
    freeXsBooleanType(_neutronSubnet->enableDHCP);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor enableDHCP of type full_ns0_neutronSubnet...\n");
#endif
    free(_neutronSubnet->enableDHCP);
  }
}
#endif /* DEF_full_ns0_neutronSubnet_M */
#ifndef DEF_full_ns0_neutronSubnet_HostRoute_M
#define DEF_full_ns0_neutronSubnet_HostRoute_M

/**
 * Reads a NeutronSubnet_HostRoute element from XML. The element to be read is "neutronSubnet_HostRoute", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_HostRoute, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_HostRoute *xml_read_full_ns0_neutronSubnet_HostRoute(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronSubnet_HostRouteElement(reader);
}

/**
 * Writes a NeutronSubnet_HostRoute to XML under element name "neutronSubnet_HostRoute".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronSubnet_HostRoute(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute) {
  return xmlTextWriterWriteNs0NeutronSubnet_HostRouteElementNS(writer, _neutronSubnet_HostRoute, 1);
}

/**
 * Frees a NeutronSubnet_HostRoute.
 *
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to free.
 */
void free_full_ns0_neutronSubnet_HostRoute(struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute) {
  freeNs0NeutronSubnet_HostRouteType(_neutronSubnet_HostRoute);
  free(_neutronSubnet_HostRoute);
}

/**
 * Reads a NeutronSubnet_HostRoute element from XML. The element to be read is "neutronSubnet_HostRoute", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_HostRoute, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_HostRoute *xmlTextReaderReadNs0NeutronSubnet_HostRouteElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronSubnet_HostRoute", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronSubnet_HostRoute.\n");
#endif
    _neutronSubnet_HostRoute = xmlTextReaderReadNs0NeutronSubnet_HostRouteType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronSubnet_HostRoute == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronSubnet_HostRoute failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronSubnet_HostRoute failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronSubnet_HostRoute;
}

/**
 * Writes a NeutronSubnet_HostRoute to XML under element name "neutronSubnet_HostRoute".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_HostRouteElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute) {
  return xmlTextWriterWriteNs0NeutronSubnet_HostRouteElementNS(writer, _neutronSubnet_HostRoute, 0);
}

/**
 * Writes a NeutronSubnet_HostRoute to XML under element name "neutronSubnet_HostRoute".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_HostRouteElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnet_HostRoute", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronSubnet_HostRoute. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronSubnet_HostRoute for root element {}neutronSubnet_HostRoute...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronSubnet_HostRouteType(writer, _neutronSubnet_HostRoute);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronSubnet_HostRoute. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronSubnet_HostRoute. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronSubnet_HostRoute.
 *
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute whose children are to be free.
 */
static void freeNs0NeutronSubnet_HostRouteElement(struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute) {
  freeNs0NeutronSubnet_HostRouteType(_neutronSubnet_HostRoute);
}

/**
 * Reads a NeutronSubnet_HostRoute from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronSubnet_HostRoute, or NULL in case of error.
 */
static struct full_ns0_neutronSubnet_HostRoute *xmlTextReaderReadNs0NeutronSubnet_HostRouteType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute = calloc(1, sizeof(struct full_ns0_neutronSubnet_HostRoute));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronSubnet_HostRouteType(_neutronSubnet_HostRoute);
        free(_neutronSubnet_HostRoute);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nexthop", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nexthop of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nexthop of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnet_HostRouteType(_neutronSubnet_HostRoute);
          free(_neutronSubnet_HostRoute);
          return NULL;
        }

        _neutronSubnet_HostRoute->nextHop = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "destination", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}destination of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}destination of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnet_HostRouteType(_neutronSubnet_HostRoute);
          free(_neutronSubnet_HostRoute);
          return NULL;
        }

        _neutronSubnet_HostRoute->destination = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronSubnet_HostRoute.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronSubnet_HostRoute. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronSubnet_HostRoute;
}

/**
 * Writes a NeutronSubnet_HostRoute to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronSubnet_HostRouteType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronSubnet_HostRoute->nextHop != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nexthop", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nexthop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nexthop...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet_HostRoute->nextHop));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nexthop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nexthop. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet_HostRoute->destination != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "destination", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}destination. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}destination...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet_HostRoute->destination));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}destination. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}destination. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronSubnet_HostRoute.
 *
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to free.
 */
static void freeNs0NeutronSubnet_HostRouteType(struct full_ns0_neutronSubnet_HostRoute *_neutronSubnet_HostRoute) {
  int i;
  if (_neutronSubnet_HostRoute->nextHop != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor nextHop of type full_ns0_neutronSubnet_HostRoute...\n");
#endif
    freeXsStringType(_neutronSubnet_HostRoute->nextHop);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nextHop of type full_ns0_neutronSubnet_HostRoute...\n");
#endif
    free(_neutronSubnet_HostRoute->nextHop);
  }
  if (_neutronSubnet_HostRoute->destination != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor destination of type full_ns0_neutronSubnet_HostRoute...\n");
#endif
    freeXsStringType(_neutronSubnet_HostRoute->destination);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor destination of type full_ns0_neutronSubnet_HostRoute...\n");
#endif
    free(_neutronSubnet_HostRoute->destination);
  }
}
#endif /* DEF_full_ns0_neutronSubnet_HostRoute_M */
#ifndef DEF_full_ns0_neutronSubnet_IPAllocationPool_M
#define DEF_full_ns0_neutronSubnet_IPAllocationPool_M

/**
 * Reads a NeutronSubnet_IPAllocationPool element from XML. The element to be read is "neutronSubnet_IPAllocationPool", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_IPAllocationPool, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_IPAllocationPool *xml_read_full_ns0_neutronSubnet_IPAllocationPool(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronSubnet_IPAllocationPoolElement(reader);
}

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML under element name "neutronSubnet_IPAllocationPool".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronSubnet_IPAllocationPool(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool) {
  return xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolElementNS(writer, _neutronSubnet_IPAllocationPool, 1);
}

/**
 * Frees a NeutronSubnet_IPAllocationPool.
 *
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to free.
 */
void free_full_ns0_neutronSubnet_IPAllocationPool(struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool) {
  freeNs0NeutronSubnet_IPAllocationPoolType(_neutronSubnet_IPAllocationPool);
  free(_neutronSubnet_IPAllocationPool);
}

/**
 * Reads a NeutronSubnet_IPAllocationPool element from XML. The element to be read is "neutronSubnet_IPAllocationPool", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnet_IPAllocationPool, or NULL in case of error.
 */
struct full_ns0_neutronSubnet_IPAllocationPool *xmlTextReaderReadNs0NeutronSubnet_IPAllocationPoolElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronSubnet_IPAllocationPool", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronSubnet_IPAllocationPool.\n");
#endif
    _neutronSubnet_IPAllocationPool = xmlTextReaderReadNs0NeutronSubnet_IPAllocationPoolType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronSubnet_IPAllocationPool == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronSubnet_IPAllocationPool failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronSubnet_IPAllocationPool failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronSubnet_IPAllocationPool;
}

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML under element name "neutronSubnet_IPAllocationPool".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool) {
  return xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolElementNS(writer, _neutronSubnet_IPAllocationPool, 0);
}

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML under element name "neutronSubnet_IPAllocationPool".
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnet_IPAllocationPool", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronSubnet_IPAllocationPool. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronSubnet_IPAllocationPool for root element {}neutronSubnet_IPAllocationPool...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolType(writer, _neutronSubnet_IPAllocationPool);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronSubnet_IPAllocationPool. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronSubnet_IPAllocationPool. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronSubnet_IPAllocationPool.
 *
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool whose children are to be free.
 */
static void freeNs0NeutronSubnet_IPAllocationPoolElement(struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool) {
  freeNs0NeutronSubnet_IPAllocationPoolType(_neutronSubnet_IPAllocationPool);
}

/**
 * Reads a NeutronSubnet_IPAllocationPool from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronSubnet_IPAllocationPool, or NULL in case of error.
 */
static struct full_ns0_neutronSubnet_IPAllocationPool *xmlTextReaderReadNs0NeutronSubnet_IPAllocationPoolType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool = calloc(1, sizeof(struct full_ns0_neutronSubnet_IPAllocationPool));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronSubnet_IPAllocationPoolType(_neutronSubnet_IPAllocationPool);
        free(_neutronSubnet_IPAllocationPool);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "start", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}start of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}start of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnet_IPAllocationPoolType(_neutronSubnet_IPAllocationPool);
          free(_neutronSubnet_IPAllocationPool);
          return NULL;
        }

        _neutronSubnet_IPAllocationPool->poolStart = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "end", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}end of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}end of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnet_IPAllocationPoolType(_neutronSubnet_IPAllocationPool);
          free(_neutronSubnet_IPAllocationPool);
          return NULL;
        }

        _neutronSubnet_IPAllocationPool->poolEnd = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronSubnet_IPAllocationPool.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronSubnet_IPAllocationPool. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronSubnet_IPAllocationPool;
}

/**
 * Writes a NeutronSubnet_IPAllocationPool to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronSubnet_IPAllocationPoolType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronSubnet_IPAllocationPool->poolStart != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "start", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}start...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet_IPAllocationPool->poolStart));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}start. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutronSubnet_IPAllocationPool->poolEnd != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "end", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}end. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}end...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutronSubnet_IPAllocationPool->poolEnd));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}end. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}end. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronSubnet_IPAllocationPool.
 *
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to free.
 */
static void freeNs0NeutronSubnet_IPAllocationPoolType(struct full_ns0_neutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool) {
  int i;
  if (_neutronSubnet_IPAllocationPool->poolStart != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor poolStart of type full_ns0_neutronSubnet_IPAllocationPool...\n");
#endif
    freeXsStringType(_neutronSubnet_IPAllocationPool->poolStart);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor poolStart of type full_ns0_neutronSubnet_IPAllocationPool...\n");
#endif
    free(_neutronSubnet_IPAllocationPool->poolStart);
  }
  if (_neutronSubnet_IPAllocationPool->poolEnd != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor poolEnd of type full_ns0_neutronSubnet_IPAllocationPool...\n");
#endif
    freeXsStringType(_neutronSubnet_IPAllocationPool->poolEnd);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor poolEnd of type full_ns0_neutronSubnet_IPAllocationPool...\n");
#endif
    free(_neutronSubnet_IPAllocationPool->poolEnd);
  }
}
#endif /* DEF_full_ns0_neutronSubnet_IPAllocationPool_M */
#ifndef DEF_full_ns0_neutron_IPs_M
#define DEF_full_ns0_neutron_IPs_M

/**
 * Reads a Neutron_IPs element from XML. The element to be read is "neutron_IPs", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Neutron_IPs, or NULL in case of error.
 */
struct full_ns0_neutron_IPs *xml_read_full_ns0_neutron_IPs(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Neutron_IPsElement(reader);
}

/**
 * Writes a Neutron_IPs to XML under element name "neutron_IPs".
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutron_IPs(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs) {
  return xmlTextWriterWriteNs0Neutron_IPsElementNS(writer, _neutron_IPs, 1);
}

/**
 * Frees a Neutron_IPs.
 *
 * @param _neutron_IPs The Neutron_IPs to free.
 */
void free_full_ns0_neutron_IPs(struct full_ns0_neutron_IPs *_neutron_IPs) {
  freeNs0Neutron_IPsType(_neutron_IPs);
  free(_neutron_IPs);
}

/**
 * Reads a Neutron_IPs element from XML. The element to be read is "neutron_IPs", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Neutron_IPs, or NULL in case of error.
 */
struct full_ns0_neutron_IPs *xmlTextReaderReadNs0Neutron_IPsElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutron_IPs *_neutron_IPs = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutron_IPs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutron_IPs.\n");
#endif
    _neutron_IPs = xmlTextReaderReadNs0Neutron_IPsType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutron_IPs == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutron_IPs failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutron_IPs failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutron_IPs;
}

/**
 * Writes a Neutron_IPs to XML under element name "neutron_IPs".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Neutron_IPsElement(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs) {
  return xmlTextWriterWriteNs0Neutron_IPsElementNS(writer, _neutron_IPs, 0);
}

/**
 * Writes a Neutron_IPs to XML under element name "neutron_IPs".
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Neutron_IPsElementNS(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutron_IPs", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutron_IPs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutron_IPs for root element {}neutron_IPs...\n");
#endif
  status = xmlTextWriterWriteNs0Neutron_IPsType(writer, _neutron_IPs);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutron_IPs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutron_IPs. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Neutron_IPs.
 *
 * @param _neutron_IPs The Neutron_IPs whose children are to be free.
 */
static void freeNs0Neutron_IPsElement(struct full_ns0_neutron_IPs *_neutron_IPs) {
  freeNs0Neutron_IPsType(_neutron_IPs);
}

/**
 * Reads a Neutron_IPs from XML. The reader is assumed to be at the start element.
 *
 * @return the Neutron_IPs, or NULL in case of error.
 */
static struct full_ns0_neutron_IPs *xmlTextReaderReadNs0Neutron_IPsType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutron_IPs *_neutron_IPs = calloc(1, sizeof(struct full_ns0_neutron_IPs));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0Neutron_IPsType(_neutron_IPs);
        free(_neutron_IPs);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "subnet_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0Neutron_IPsType(_neutron_IPs);
          free(_neutron_IPs);
          return NULL;
        }

        _neutron_IPs->subnetUUID = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ip_address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ip_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ip_address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0Neutron_IPsType(_neutron_IPs);
          free(_neutron_IPs);
          return NULL;
        }

        _neutron_IPs->ipAddress = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutron_IPs.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutron_IPs. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutron_IPs;
}

/**
 * Writes a Neutron_IPs to XML.
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0Neutron_IPsType(xmlTextWriterPtr writer, struct full_ns0_neutron_IPs *_neutron_IPs) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutron_IPs->subnetUUID != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnet_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}subnet_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}subnet_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutron_IPs->subnetUUID));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}subnet_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}subnet_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_neutron_IPs->ipAddress != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ip_address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ip_address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_neutron_IPs->ipAddress));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ip_address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Neutron_IPs.
 *
 * @param _neutron_IPs The Neutron_IPs to free.
 */
static void freeNs0Neutron_IPsType(struct full_ns0_neutron_IPs *_neutron_IPs) {
  int i;
  if (_neutron_IPs->subnetUUID != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor subnetUUID of type full_ns0_neutron_IPs...\n");
#endif
    freeXsStringType(_neutron_IPs->subnetUUID);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor subnetUUID of type full_ns0_neutron_IPs...\n");
#endif
    free(_neutron_IPs->subnetUUID);
  }
  if (_neutron_IPs->ipAddress != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ipAddress of type full_ns0_neutron_IPs...\n");
#endif
    freeXsStringType(_neutron_IPs->ipAddress);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ipAddress of type full_ns0_neutron_IPs...\n");
#endif
    free(_neutron_IPs->ipAddress);
  }
}
#endif /* DEF_full_ns0_neutron_IPs_M */
#ifndef DEF_full_ns0_neutronFloatingIPRequest_M
#define DEF_full_ns0_neutronFloatingIPRequest_M

/**
 * Reads a NeutronFloatingIPRequest element from XML. The element to be read is "neutronFloatingIPRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIPRequest, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIPRequest *xml_read_full_ns0_neutronFloatingIPRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronFloatingIPRequestElement(reader);
}

/**
 * Writes a NeutronFloatingIPRequest to XML under element name "neutronFloatingIPRequest".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronFloatingIPRequest(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest) {
  return xmlTextWriterWriteNs0NeutronFloatingIPRequestElementNS(writer, _neutronFloatingIPRequest, 1);
}

/**
 * Frees a NeutronFloatingIPRequest.
 *
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to free.
 */
void free_full_ns0_neutronFloatingIPRequest(struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest) {
  freeNs0NeutronFloatingIPRequestType(_neutronFloatingIPRequest);
  free(_neutronFloatingIPRequest);
}

/**
 * Reads a NeutronFloatingIPRequest element from XML. The element to be read is "neutronFloatingIPRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronFloatingIPRequest, or NULL in case of error.
 */
struct full_ns0_neutronFloatingIPRequest *xmlTextReaderReadNs0NeutronFloatingIPRequestElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronFloatingIPRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronFloatingIPRequest.\n");
#endif
    _neutronFloatingIPRequest = xmlTextReaderReadNs0NeutronFloatingIPRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronFloatingIPRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronFloatingIPRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronFloatingIPRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronFloatingIPRequest;
}

/**
 * Writes a NeutronFloatingIPRequest to XML under element name "neutronFloatingIPRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest) {
  return xmlTextWriterWriteNs0NeutronFloatingIPRequestElementNS(writer, _neutronFloatingIPRequest, 0);
}

/**
 * Writes a NeutronFloatingIPRequest to XML under element name "neutronFloatingIPRequest".
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronFloatingIPRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronFloatingIPRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronFloatingIPRequest for root element {}neutronFloatingIPRequest...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronFloatingIPRequestType(writer, _neutronFloatingIPRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronFloatingIPRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronFloatingIPRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronFloatingIPRequest.
 *
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest whose children are to be free.
 */
static void freeNs0NeutronFloatingIPRequestElement(struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest) {
  freeNs0NeutronFloatingIPRequestType(_neutronFloatingIPRequest);
}

/**
 * Reads a NeutronFloatingIPRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronFloatingIPRequest, or NULL in case of error.
 */
static struct full_ns0_neutronFloatingIPRequest *xmlTextReaderReadNs0NeutronFloatingIPRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest = calloc(1, sizeof(struct full_ns0_neutronFloatingIPRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronFloatingIPRequestType(_neutronFloatingIPRequest);
        free(_neutronFloatingIPRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "floatingip", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}floatingip of type {}neutronFloatingIP.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronFloatingIPType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}floatingip of type {}neutronFloatingIP.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronFloatingIPRequestType(_neutronFloatingIPRequest);
          free(_neutronFloatingIPRequest);
          return NULL;
        }

        _neutronFloatingIPRequest->singletonFloatingIP = ((struct full_ns0_neutronFloatingIP*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "floatingips", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}floatingips of type {}neutronFloatingIP.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronFloatingIPType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}floatingips of type {}neutronFloatingIP.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronFloatingIPRequestType(_neutronFloatingIPRequest);
          free(_neutronFloatingIPRequest);
          return NULL;
        }

        _neutronFloatingIPRequest->bulkRequest = realloc(_neutronFloatingIPRequest->bulkRequest, (_neutronFloatingIPRequest->_sizeof_bulkRequest + 1) * sizeof(struct full_ns0_neutronFloatingIP));
        memcpy(&(_neutronFloatingIPRequest->bulkRequest[_neutronFloatingIPRequest->_sizeof_bulkRequest++]), _child_accessor, sizeof(struct full_ns0_neutronFloatingIP));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronFloatingIPRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronFloatingIPRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronFloatingIPRequest;
}

/**
 * Writes a NeutronFloatingIPRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronFloatingIPRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronFloatingIPRequest->singletonFloatingIP != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floatingip", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}floatingip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronFloatingIP for element {}floatingip...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronFloatingIPType(writer, (_neutronFloatingIPRequest->singletonFloatingIP));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronFloatingIP for element {}floatingip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}floatingip. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronFloatingIPRequest->_sizeof_bulkRequest; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floatingips", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}floatingips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronFloatingIP for element {}floatingips...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronFloatingIPType(writer, &(_neutronFloatingIPRequest->bulkRequest[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronFloatingIP for element {}floatingips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}floatingips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronFloatingIPRequest.
 *
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to free.
 */
static void freeNs0NeutronFloatingIPRequestType(struct full_ns0_neutronFloatingIPRequest *_neutronFloatingIPRequest) {
  int i;
  if (_neutronFloatingIPRequest->singletonFloatingIP != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor singletonFloatingIP of type full_ns0_neutronFloatingIPRequest...\n");
#endif
    freeNs0NeutronFloatingIPType(_neutronFloatingIPRequest->singletonFloatingIP);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor singletonFloatingIP of type full_ns0_neutronFloatingIPRequest...\n");
#endif
    free(_neutronFloatingIPRequest->singletonFloatingIP);
  }
  if (_neutronFloatingIPRequest->bulkRequest != NULL) {
    for (i = 0; i < _neutronFloatingIPRequest->_sizeof_bulkRequest; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor bulkRequest[%i] of type full_ns0_neutronFloatingIPRequest...\n", i);
#endif
      freeNs0NeutronFloatingIPType(&(_neutronFloatingIPRequest->bulkRequest[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bulkRequest of type full_ns0_neutronFloatingIPRequest...\n");
#endif
    free(_neutronFloatingIPRequest->bulkRequest);
  }
}
#endif /* DEF_full_ns0_neutronFloatingIPRequest_M */
#ifndef DEF_full_ns0_neutronNetworkRequest_M
#define DEF_full_ns0_neutronNetworkRequest_M

/**
 * Reads a NeutronNetworkRequest element from XML. The element to be read is "neutronNetworkRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronNetworkRequest, or NULL in case of error.
 */
struct full_ns0_neutronNetworkRequest *xml_read_full_ns0_neutronNetworkRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronNetworkRequestElement(reader);
}

/**
 * Writes a NeutronNetworkRequest to XML under element name "neutronNetworkRequest".
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronNetworkRequest(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest) {
  return xmlTextWriterWriteNs0NeutronNetworkRequestElementNS(writer, _neutronNetworkRequest, 1);
}

/**
 * Frees a NeutronNetworkRequest.
 *
 * @param _neutronNetworkRequest The NeutronNetworkRequest to free.
 */
void free_full_ns0_neutronNetworkRequest(struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest) {
  freeNs0NeutronNetworkRequestType(_neutronNetworkRequest);
  free(_neutronNetworkRequest);
}

/**
 * Reads a NeutronNetworkRequest element from XML. The element to be read is "neutronNetworkRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronNetworkRequest, or NULL in case of error.
 */
struct full_ns0_neutronNetworkRequest *xmlTextReaderReadNs0NeutronNetworkRequestElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronNetworkRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronNetworkRequest.\n");
#endif
    _neutronNetworkRequest = xmlTextReaderReadNs0NeutronNetworkRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronNetworkRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronNetworkRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronNetworkRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronNetworkRequest;
}

/**
 * Writes a NeutronNetworkRequest to XML under element name "neutronNetworkRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronNetworkRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest) {
  return xmlTextWriterWriteNs0NeutronNetworkRequestElementNS(writer, _neutronNetworkRequest, 0);
}

/**
 * Writes a NeutronNetworkRequest to XML under element name "neutronNetworkRequest".
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronNetworkRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronNetworkRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronNetworkRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronNetworkRequest for root element {}neutronNetworkRequest...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronNetworkRequestType(writer, _neutronNetworkRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronNetworkRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronNetworkRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronNetworkRequest.
 *
 * @param _neutronNetworkRequest The NeutronNetworkRequest whose children are to be free.
 */
static void freeNs0NeutronNetworkRequestElement(struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest) {
  freeNs0NeutronNetworkRequestType(_neutronNetworkRequest);
}

/**
 * Reads a NeutronNetworkRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronNetworkRequest, or NULL in case of error.
 */
static struct full_ns0_neutronNetworkRequest *xmlTextReaderReadNs0NeutronNetworkRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest = calloc(1, sizeof(struct full_ns0_neutronNetworkRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronNetworkRequestType(_neutronNetworkRequest);
        free(_neutronNetworkRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "network", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}network of type {}neutronNetwork.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronNetworkType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}network of type {}neutronNetwork.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkRequestType(_neutronNetworkRequest);
          free(_neutronNetworkRequest);
          return NULL;
        }

        _neutronNetworkRequest->singletonNetwork = ((struct full_ns0_neutronNetwork*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "networks", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}networks of type {}neutronNetwork.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronNetworkType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}networks of type {}neutronNetwork.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronNetworkRequestType(_neutronNetworkRequest);
          free(_neutronNetworkRequest);
          return NULL;
        }

        _neutronNetworkRequest->bulkRequest = realloc(_neutronNetworkRequest->bulkRequest, (_neutronNetworkRequest->_sizeof_bulkRequest + 1) * sizeof(struct full_ns0_neutronNetwork));
        memcpy(&(_neutronNetworkRequest->bulkRequest[_neutronNetworkRequest->_sizeof_bulkRequest++]), _child_accessor, sizeof(struct full_ns0_neutronNetwork));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronNetworkRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronNetworkRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronNetworkRequest;
}

/**
 * Writes a NeutronNetworkRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronNetworkRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronNetworkRequest->singletonNetwork != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}network. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronNetwork for element {}network...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronNetworkType(writer, (_neutronNetworkRequest->singletonNetwork));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronNetwork for element {}network. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}network. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronNetworkRequest->_sizeof_bulkRequest; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "networks", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}networks. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronNetwork for element {}networks...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronNetworkType(writer, &(_neutronNetworkRequest->bulkRequest[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronNetwork for element {}networks. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}networks. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronNetworkRequest.
 *
 * @param _neutronNetworkRequest The NeutronNetworkRequest to free.
 */
static void freeNs0NeutronNetworkRequestType(struct full_ns0_neutronNetworkRequest *_neutronNetworkRequest) {
  int i;
  if (_neutronNetworkRequest->singletonNetwork != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor singletonNetwork of type full_ns0_neutronNetworkRequest...\n");
#endif
    freeNs0NeutronNetworkType(_neutronNetworkRequest->singletonNetwork);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor singletonNetwork of type full_ns0_neutronNetworkRequest...\n");
#endif
    free(_neutronNetworkRequest->singletonNetwork);
  }
  if (_neutronNetworkRequest->bulkRequest != NULL) {
    for (i = 0; i < _neutronNetworkRequest->_sizeof_bulkRequest; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor bulkRequest[%i] of type full_ns0_neutronNetworkRequest...\n", i);
#endif
      freeNs0NeutronNetworkType(&(_neutronNetworkRequest->bulkRequest[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bulkRequest of type full_ns0_neutronNetworkRequest...\n");
#endif
    free(_neutronNetworkRequest->bulkRequest);
  }
}
#endif /* DEF_full_ns0_neutronNetworkRequest_M */
#ifndef DEF_full_ns0_neutronPortRequest_M
#define DEF_full_ns0_neutronPortRequest_M

/**
 * Reads a NeutronPortRequest element from XML. The element to be read is "neutronPortRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronPortRequest, or NULL in case of error.
 */
struct full_ns0_neutronPortRequest *xml_read_full_ns0_neutronPortRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronPortRequestElement(reader);
}

/**
 * Writes a NeutronPortRequest to XML under element name "neutronPortRequest".
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronPortRequest(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest) {
  return xmlTextWriterWriteNs0NeutronPortRequestElementNS(writer, _neutronPortRequest, 1);
}

/**
 * Frees a NeutronPortRequest.
 *
 * @param _neutronPortRequest The NeutronPortRequest to free.
 */
void free_full_ns0_neutronPortRequest(struct full_ns0_neutronPortRequest *_neutronPortRequest) {
  freeNs0NeutronPortRequestType(_neutronPortRequest);
  free(_neutronPortRequest);
}

/**
 * Reads a NeutronPortRequest element from XML. The element to be read is "neutronPortRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronPortRequest, or NULL in case of error.
 */
struct full_ns0_neutronPortRequest *xmlTextReaderReadNs0NeutronPortRequestElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronPortRequest *_neutronPortRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronPortRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronPortRequest.\n");
#endif
    _neutronPortRequest = xmlTextReaderReadNs0NeutronPortRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronPortRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronPortRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronPortRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronPortRequest;
}

/**
 * Writes a NeutronPortRequest to XML under element name "neutronPortRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronPortRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest) {
  return xmlTextWriterWriteNs0NeutronPortRequestElementNS(writer, _neutronPortRequest, 0);
}

/**
 * Writes a NeutronPortRequest to XML under element name "neutronPortRequest".
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronPortRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronPortRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronPortRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronPortRequest for root element {}neutronPortRequest...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronPortRequestType(writer, _neutronPortRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronPortRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronPortRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronPortRequest.
 *
 * @param _neutronPortRequest The NeutronPortRequest whose children are to be free.
 */
static void freeNs0NeutronPortRequestElement(struct full_ns0_neutronPortRequest *_neutronPortRequest) {
  freeNs0NeutronPortRequestType(_neutronPortRequest);
}

/**
 * Reads a NeutronPortRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronPortRequest, or NULL in case of error.
 */
static struct full_ns0_neutronPortRequest *xmlTextReaderReadNs0NeutronPortRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronPortRequest *_neutronPortRequest = calloc(1, sizeof(struct full_ns0_neutronPortRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronPortRequestType(_neutronPortRequest);
        free(_neutronPortRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}port of type {}neutronPort.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronPortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}port of type {}neutronPort.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortRequestType(_neutronPortRequest);
          free(_neutronPortRequest);
          return NULL;
        }

        _neutronPortRequest->singletonPort = ((struct full_ns0_neutronPort*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ports", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ports of type {}neutronPort.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronPortType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ports of type {}neutronPort.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronPortRequestType(_neutronPortRequest);
          free(_neutronPortRequest);
          return NULL;
        }

        _neutronPortRequest->bulkRequest = realloc(_neutronPortRequest->bulkRequest, (_neutronPortRequest->_sizeof_bulkRequest + 1) * sizeof(struct full_ns0_neutronPort));
        memcpy(&(_neutronPortRequest->bulkRequest[_neutronPortRequest->_sizeof_bulkRequest++]), _child_accessor, sizeof(struct full_ns0_neutronPort));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronPortRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronPortRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronPortRequest;
}

/**
 * Writes a NeutronPortRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronPortRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronPortRequest *_neutronPortRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronPortRequest->singletonPort != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}port. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronPort for element {}port...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronPortType(writer, (_neutronPortRequest->singletonPort));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronPort for element {}port. status: %i\n", status);
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
  for (i = 0; i < _neutronPortRequest->_sizeof_bulkRequest; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ports", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ports. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronPort for element {}ports...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronPortType(writer, &(_neutronPortRequest->bulkRequest[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronPort for element {}ports. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ports. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronPortRequest.
 *
 * @param _neutronPortRequest The NeutronPortRequest to free.
 */
static void freeNs0NeutronPortRequestType(struct full_ns0_neutronPortRequest *_neutronPortRequest) {
  int i;
  if (_neutronPortRequest->singletonPort != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor singletonPort of type full_ns0_neutronPortRequest...\n");
#endif
    freeNs0NeutronPortType(_neutronPortRequest->singletonPort);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor singletonPort of type full_ns0_neutronPortRequest...\n");
#endif
    free(_neutronPortRequest->singletonPort);
  }
  if (_neutronPortRequest->bulkRequest != NULL) {
    for (i = 0; i < _neutronPortRequest->_sizeof_bulkRequest; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor bulkRequest[%i] of type full_ns0_neutronPortRequest...\n", i);
#endif
      freeNs0NeutronPortType(&(_neutronPortRequest->bulkRequest[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bulkRequest of type full_ns0_neutronPortRequest...\n");
#endif
    free(_neutronPortRequest->bulkRequest);
  }
}
#endif /* DEF_full_ns0_neutronPortRequest_M */
#ifndef DEF_full_ns0_neutronRouterRequest_M
#define DEF_full_ns0_neutronRouterRequest_M

/**
 * Reads a NeutronRouterRequest element from XML. The element to be read is "neutronRouterRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronRouterRequest, or NULL in case of error.
 */
struct full_ns0_neutronRouterRequest *xml_read_full_ns0_neutronRouterRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronRouterRequestElement(reader);
}

/**
 * Writes a NeutronRouterRequest to XML under element name "neutronRouterRequest".
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronRouterRequest(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest) {
  return xmlTextWriterWriteNs0NeutronRouterRequestElementNS(writer, _neutronRouterRequest, 1);
}

/**
 * Frees a NeutronRouterRequest.
 *
 * @param _neutronRouterRequest The NeutronRouterRequest to free.
 */
void free_full_ns0_neutronRouterRequest(struct full_ns0_neutronRouterRequest *_neutronRouterRequest) {
  freeNs0NeutronRouterRequestType(_neutronRouterRequest);
  free(_neutronRouterRequest);
}

/**
 * Reads a NeutronRouterRequest element from XML. The element to be read is "neutronRouterRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronRouterRequest, or NULL in case of error.
 */
struct full_ns0_neutronRouterRequest *xmlTextReaderReadNs0NeutronRouterRequestElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronRouterRequest *_neutronRouterRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronRouterRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronRouterRequest.\n");
#endif
    _neutronRouterRequest = xmlTextReaderReadNs0NeutronRouterRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronRouterRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronRouterRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronRouterRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronRouterRequest;
}

/**
 * Writes a NeutronRouterRequest to XML under element name "neutronRouterRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouterRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest) {
  return xmlTextWriterWriteNs0NeutronRouterRequestElementNS(writer, _neutronRouterRequest, 0);
}

/**
 * Writes a NeutronRouterRequest to XML under element name "neutronRouterRequest".
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronRouterRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouterRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronRouterRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronRouterRequest for root element {}neutronRouterRequest...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronRouterRequestType(writer, _neutronRouterRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronRouterRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronRouterRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronRouterRequest.
 *
 * @param _neutronRouterRequest The NeutronRouterRequest whose children are to be free.
 */
static void freeNs0NeutronRouterRequestElement(struct full_ns0_neutronRouterRequest *_neutronRouterRequest) {
  freeNs0NeutronRouterRequestType(_neutronRouterRequest);
}

/**
 * Reads a NeutronRouterRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronRouterRequest, or NULL in case of error.
 */
static struct full_ns0_neutronRouterRequest *xmlTextReaderReadNs0NeutronRouterRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronRouterRequest *_neutronRouterRequest = calloc(1, sizeof(struct full_ns0_neutronRouterRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronRouterRequestType(_neutronRouterRequest);
        free(_neutronRouterRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "router", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}router of type {}neutronRouter.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronRouterType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}router of type {}neutronRouter.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouterRequestType(_neutronRouterRequest);
          free(_neutronRouterRequest);
          return NULL;
        }

        _neutronRouterRequest->singletonRouter = ((struct full_ns0_neutronRouter*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "routers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}routers of type {}neutronRouter.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronRouterType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}routers of type {}neutronRouter.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronRouterRequestType(_neutronRouterRequest);
          free(_neutronRouterRequest);
          return NULL;
        }

        _neutronRouterRequest->bulkRequest = realloc(_neutronRouterRequest->bulkRequest, (_neutronRouterRequest->_sizeof_bulkRequest + 1) * sizeof(struct full_ns0_neutronRouter));
        memcpy(&(_neutronRouterRequest->bulkRequest[_neutronRouterRequest->_sizeof_bulkRequest++]), _child_accessor, sizeof(struct full_ns0_neutronRouter));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronRouterRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronRouterRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronRouterRequest;
}

/**
 * Writes a NeutronRouterRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronRouterRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronRouterRequest *_neutronRouterRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronRouterRequest->singletonRouter != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "router", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}router. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronRouter for element {}router...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronRouterType(writer, (_neutronRouterRequest->singletonRouter));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronRouter for element {}router. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}router. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronRouterRequest->_sizeof_bulkRequest; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "routers", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}routers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronRouter for element {}routers...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronRouterType(writer, &(_neutronRouterRequest->bulkRequest[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronRouter for element {}routers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}routers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronRouterRequest.
 *
 * @param _neutronRouterRequest The NeutronRouterRequest to free.
 */
static void freeNs0NeutronRouterRequestType(struct full_ns0_neutronRouterRequest *_neutronRouterRequest) {
  int i;
  if (_neutronRouterRequest->singletonRouter != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor singletonRouter of type full_ns0_neutronRouterRequest...\n");
#endif
    freeNs0NeutronRouterType(_neutronRouterRequest->singletonRouter);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor singletonRouter of type full_ns0_neutronRouterRequest...\n");
#endif
    free(_neutronRouterRequest->singletonRouter);
  }
  if (_neutronRouterRequest->bulkRequest != NULL) {
    for (i = 0; i < _neutronRouterRequest->_sizeof_bulkRequest; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor bulkRequest[%i] of type full_ns0_neutronRouterRequest...\n", i);
#endif
      freeNs0NeutronRouterType(&(_neutronRouterRequest->bulkRequest[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bulkRequest of type full_ns0_neutronRouterRequest...\n");
#endif
    free(_neutronRouterRequest->bulkRequest);
  }
}
#endif /* DEF_full_ns0_neutronRouterRequest_M */
#ifndef DEF_full_ns0_neutronSubnetRequest_M
#define DEF_full_ns0_neutronSubnetRequest_M

/**
 * Reads a NeutronSubnetRequest element from XML. The element to be read is "neutronSubnetRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The NeutronSubnetRequest, or NULL in case of error.
 */
struct full_ns0_neutronSubnetRequest *xml_read_full_ns0_neutronSubnetRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NeutronSubnetRequestElement(reader);
}

/**
 * Writes a NeutronSubnetRequest to XML under element name "neutronSubnetRequest".
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_full_ns0_neutronSubnetRequest(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest) {
  return xmlTextWriterWriteNs0NeutronSubnetRequestElementNS(writer, _neutronSubnetRequest, 1);
}

/**
 * Frees a NeutronSubnetRequest.
 *
 * @param _neutronSubnetRequest The NeutronSubnetRequest to free.
 */
void free_full_ns0_neutronSubnetRequest(struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest) {
  freeNs0NeutronSubnetRequestType(_neutronSubnetRequest);
  free(_neutronSubnetRequest);
}

/**
 * Reads a NeutronSubnetRequest element from XML. The element to be read is "neutronSubnetRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The NeutronSubnetRequest, or NULL in case of error.
 */
struct full_ns0_neutronSubnetRequest *xmlTextReaderReadNs0NeutronSubnetRequestElement(xmlTextReaderPtr reader) {
  struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "neutronSubnetRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}neutronSubnetRequest.\n");
#endif
    _neutronSubnetRequest = xmlTextReaderReadNs0NeutronSubnetRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_neutronSubnetRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}neutronSubnetRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}neutronSubnetRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _neutronSubnetRequest;
}

/**
 * Writes a NeutronSubnetRequest to XML under element name "neutronSubnetRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnetRequestElement(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest) {
  return xmlTextWriterWriteNs0NeutronSubnetRequestElementNS(writer, _neutronSubnetRequest, 0);
}

/**
 * Writes a NeutronSubnetRequest to XML under element name "neutronSubnetRequest".
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NeutronSubnetRequestElementNS(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnetRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}neutronSubnetRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}neutronSubnetRequest for root element {}neutronSubnetRequest...\n");
#endif
  status = xmlTextWriterWriteNs0NeutronSubnetRequestType(writer, _neutronSubnetRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}neutronSubnetRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}neutronSubnetRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a NeutronSubnetRequest.
 *
 * @param _neutronSubnetRequest The NeutronSubnetRequest whose children are to be free.
 */
static void freeNs0NeutronSubnetRequestElement(struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest) {
  freeNs0NeutronSubnetRequestType(_neutronSubnetRequest);
}

/**
 * Reads a NeutronSubnetRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the NeutronSubnetRequest, or NULL in case of error.
 */
static struct full_ns0_neutronSubnetRequest *xmlTextReaderReadNs0NeutronSubnetRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest = calloc(1, sizeof(struct full_ns0_neutronSubnetRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NeutronSubnetRequestType(_neutronSubnetRequest);
        free(_neutronSubnetRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "subnet", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}subnet of type {}neutronSubnet.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronSubnetType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}subnet of type {}neutronSubnet.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetRequestType(_neutronSubnetRequest);
          free(_neutronSubnetRequest);
          return NULL;
        }

        _neutronSubnetRequest->singletonSubnet = ((struct full_ns0_neutronSubnet*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "subnets", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}subnets of type {}neutronSubnet.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NeutronSubnetType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}subnets of type {}neutronSubnet.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0NeutronSubnetRequestType(_neutronSubnetRequest);
          free(_neutronSubnetRequest);
          return NULL;
        }

        _neutronSubnetRequest->bulkRequest = realloc(_neutronSubnetRequest->bulkRequest, (_neutronSubnetRequest->_sizeof_bulkRequest + 1) * sizeof(struct full_ns0_neutronSubnet));
        memcpy(&(_neutronSubnetRequest->bulkRequest[_neutronSubnetRequest->_sizeof_bulkRequest++]), _child_accessor, sizeof(struct full_ns0_neutronSubnet));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}neutronSubnetRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}neutronSubnetRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _neutronSubnetRequest;
}

/**
 * Writes a NeutronSubnetRequest to XML.
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0NeutronSubnetRequestType(xmlTextWriterPtr writer, struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_neutronSubnetRequest->singletonSubnet != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnet", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}subnet. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronSubnet for element {}subnet...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronSubnetType(writer, (_neutronSubnetRequest->singletonSubnet));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronSubnet for element {}subnet. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}subnet. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _neutronSubnetRequest->_sizeof_bulkRequest; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnets", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}subnets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}neutronSubnet for element {}subnets...\n");
#endif
    status = xmlTextWriterWriteNs0NeutronSubnetType(writer, &(_neutronSubnetRequest->bulkRequest[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}neutronSubnet for element {}subnets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}subnets. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a NeutronSubnetRequest.
 *
 * @param _neutronSubnetRequest The NeutronSubnetRequest to free.
 */
static void freeNs0NeutronSubnetRequestType(struct full_ns0_neutronSubnetRequest *_neutronSubnetRequest) {
  int i;
  if (_neutronSubnetRequest->singletonSubnet != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor singletonSubnet of type full_ns0_neutronSubnetRequest...\n");
#endif
    freeNs0NeutronSubnetType(_neutronSubnetRequest->singletonSubnet);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor singletonSubnet of type full_ns0_neutronSubnetRequest...\n");
#endif
    free(_neutronSubnetRequest->singletonSubnet);
  }
  if (_neutronSubnetRequest->bulkRequest != NULL) {
    for (i = 0; i < _neutronSubnetRequest->_sizeof_bulkRequest; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor bulkRequest[%i] of type full_ns0_neutronSubnetRequest...\n", i);
#endif
      freeNs0NeutronSubnetType(&(_neutronSubnetRequest->bulkRequest[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor bulkRequest of type full_ns0_neutronSubnetRequest...\n");
#endif
    free(_neutronSubnetRequest->bulkRequest);
  }
}
#endif /* DEF_full_ns0_neutronSubnetRequest_M */
