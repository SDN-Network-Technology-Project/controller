#import "full.h"
#ifndef DEF_FULLNS0NeutronRouter_NetworkReference_M
#define DEF_FULLNS0NeutronRouter_NetworkReference_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronRouter_NetworkReference

/**
 * (no documentation provided)
 */
- (NSString *) networkID
{
  return _networkID;
}

/**
 * (no documentation provided)
 */
- (void) setNetworkID: (NSString *) newNetworkID
{
  [newNetworkID retain];
  [_networkID release];
  _networkID = newNetworkID;
}

- (void) dealloc
{
  [self setNetworkID: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronRouter_NetworkReference *_fULLNS0NeutronRouter_NetworkReference;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronRouter_NetworkReference = (FULLNS0NeutronRouter_NetworkReference *) [FULLNS0NeutronRouter_NetworkReference readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronRouter_NetworkReference;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronRouter_NetworkReference */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronRouter_NetworkReference (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronRouter_NetworkReference (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronRouter_NetworkReference (JAXB)

/**
 * Read an instance of FULLNS0NeutronRouter_NetworkReference from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronRouter_NetworkReference defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronRouter_NetworkReference *_fULLNS0NeutronRouter_NetworkReference = [[FULLNS0NeutronRouter_NetworkReference alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronRouter_NetworkReference initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronRouter_NetworkReference = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronRouter_NetworkReference autorelease];
  return _fULLNS0NeutronRouter_NetworkReference;
}

/**
 * Initialize this instance of FULLNS0NeutronRouter_NetworkReference according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronRouter_NetworkReference to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronRouter_NetworkReference from an XML reader. The element to be read is
 * "neutronRouter_NetworkReference".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronRouter_NetworkReference.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronRouter_NetworkReference *_neutronRouter_NetworkReference = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronRouter_NetworkReference."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronRouter_NetworkReference", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronRouter_NetworkReference.");
#endif
    _neutronRouter_NetworkReference = (FULLNS0NeutronRouter_NetworkReference *)[FULLNS0NeutronRouter_NetworkReference readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronRouter_NetworkReference.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouter_NetworkReference. Expected element neutronRouter_NetworkReference. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouter_NetworkReference. Expected element neutronRouter_NetworkReference. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronRouter_NetworkReference;
}

/**
 * Writes this FULLNS0NeutronRouter_NetworkReference to XML under element name "neutronRouter_NetworkReference".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_NetworkReference The NeutronRouter_NetworkReference to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronRouter_NetworkReference to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouter_NetworkReference", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronRouter_NetworkReference. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronRouter_NetworkReference for root element {}neutronRouter_NetworkReference...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronRouter_NetworkReference for root element {}neutronRouter_NetworkReference...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronRouter_NetworkReference. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "network_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNetworkID: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self networkID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}network_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}network_id...");
#endif
    [[self networkID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}network_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}network_id."];
    }
  }
}
@end /* implementation FULLNS0NeutronRouter_NetworkReference (JAXB) */

#endif /* DEF_FULLNS0NeutronRouter_NetworkReference_M */
#ifndef DEF_FULLNS0NeutronSubnet_IPAllocationPool_M
#define DEF_FULLNS0NeutronSubnet_IPAllocationPool_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronSubnet_IPAllocationPool

/**
 * (no documentation provided)
 */
- (NSString *) poolStart
{
  return _poolStart;
}

/**
 * (no documentation provided)
 */
- (void) setPoolStart: (NSString *) newPoolStart
{
  [newPoolStart retain];
  [_poolStart release];
  _poolStart = newPoolStart;
}

/**
 * (no documentation provided)
 */
- (NSString *) poolEnd
{
  return _poolEnd;
}

/**
 * (no documentation provided)
 */
- (void) setPoolEnd: (NSString *) newPoolEnd
{
  [newPoolEnd retain];
  [_poolEnd release];
  _poolEnd = newPoolEnd;
}

- (void) dealloc
{
  [self setPoolStart: nil];
  [self setPoolEnd: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronSubnet_IPAllocationPool *_fULLNS0NeutronSubnet_IPAllocationPool;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronSubnet_IPAllocationPool = (FULLNS0NeutronSubnet_IPAllocationPool *) [FULLNS0NeutronSubnet_IPAllocationPool readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronSubnet_IPAllocationPool;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronSubnet_IPAllocationPool */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronSubnet_IPAllocationPool (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronSubnet_IPAllocationPool (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronSubnet_IPAllocationPool (JAXB)

/**
 * Read an instance of FULLNS0NeutronSubnet_IPAllocationPool from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronSubnet_IPAllocationPool defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronSubnet_IPAllocationPool *_fULLNS0NeutronSubnet_IPAllocationPool = [[FULLNS0NeutronSubnet_IPAllocationPool alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronSubnet_IPAllocationPool initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronSubnet_IPAllocationPool = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronSubnet_IPAllocationPool autorelease];
  return _fULLNS0NeutronSubnet_IPAllocationPool;
}

/**
 * Initialize this instance of FULLNS0NeutronSubnet_IPAllocationPool according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronSubnet_IPAllocationPool to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronSubnet_IPAllocationPool from an XML reader. The element to be read is
 * "neutronSubnet_IPAllocationPool".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronSubnet_IPAllocationPool.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronSubnet_IPAllocationPool *_neutronSubnet_IPAllocationPool = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronSubnet_IPAllocationPool."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronSubnet_IPAllocationPool", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronSubnet_IPAllocationPool.");
#endif
    _neutronSubnet_IPAllocationPool = (FULLNS0NeutronSubnet_IPAllocationPool *)[FULLNS0NeutronSubnet_IPAllocationPool readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronSubnet_IPAllocationPool.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnet_IPAllocationPool. Expected element neutronSubnet_IPAllocationPool. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnet_IPAllocationPool. Expected element neutronSubnet_IPAllocationPool. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronSubnet_IPAllocationPool;
}

/**
 * Writes this FULLNS0NeutronSubnet_IPAllocationPool to XML under element name "neutronSubnet_IPAllocationPool".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_IPAllocationPool The NeutronSubnet_IPAllocationPool to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronSubnet_IPAllocationPool to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnet_IPAllocationPool", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronSubnet_IPAllocationPool. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronSubnet_IPAllocationPool for root element {}neutronSubnet_IPAllocationPool...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronSubnet_IPAllocationPool for root element {}neutronSubnet_IPAllocationPool...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronSubnet_IPAllocationPool. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "start", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}start of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}start of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPoolStart: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "end", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}end of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}end of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPoolEnd: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self poolStart]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "start", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}start."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}start...");
#endif
    [[self poolStart] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}start...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}start."];
    }
  }
  if ([self poolEnd]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "end", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}end."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}end...");
#endif
    [[self poolEnd] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}end...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}end."];
    }
  }
}
@end /* implementation FULLNS0NeutronSubnet_IPAllocationPool (JAXB) */

#endif /* DEF_FULLNS0NeutronSubnet_IPAllocationPool_M */
#ifndef DEF_FULLNS0NeutronFloatingIPRequest_M
#define DEF_FULLNS0NeutronFloatingIPRequest_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronFloatingIPRequest

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronFloatingIP *) singletonFloatingIP
{
  return _singletonFloatingIP;
}

/**
 * (no documentation provided)
 */
- (void) setSingletonFloatingIP: (FULLNS0NeutronFloatingIP *) newSingletonFloatingIP
{
  [newSingletonFloatingIP retain];
  [_singletonFloatingIP release];
  _singletonFloatingIP = newSingletonFloatingIP;
}

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest
{
  return _bulkRequest;
}

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest
{
  [newBulkRequest retain];
  [_bulkRequest release];
  _bulkRequest = newBulkRequest;
}

- (void) dealloc
{
  [self setSingletonFloatingIP: nil];
  [self setBulkRequest: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronFloatingIPRequest *_fULLNS0NeutronFloatingIPRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronFloatingIPRequest = (FULLNS0NeutronFloatingIPRequest *) [FULLNS0NeutronFloatingIPRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronFloatingIPRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronFloatingIPRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronFloatingIPRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronFloatingIPRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronFloatingIPRequest (JAXB)

/**
 * Read an instance of FULLNS0NeutronFloatingIPRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronFloatingIPRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronFloatingIPRequest *_fULLNS0NeutronFloatingIPRequest = [[FULLNS0NeutronFloatingIPRequest alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronFloatingIPRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronFloatingIPRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronFloatingIPRequest autorelease];
  return _fULLNS0NeutronFloatingIPRequest;
}

/**
 * Initialize this instance of FULLNS0NeutronFloatingIPRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronFloatingIPRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronFloatingIPRequest from an XML reader. The element to be read is
 * "neutronFloatingIPRequest".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronFloatingIPRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronFloatingIPRequest *_neutronFloatingIPRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronFloatingIPRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronFloatingIPRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronFloatingIPRequest.");
#endif
    _neutronFloatingIPRequest = (FULLNS0NeutronFloatingIPRequest *)[FULLNS0NeutronFloatingIPRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronFloatingIPRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronFloatingIPRequest. Expected element neutronFloatingIPRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronFloatingIPRequest. Expected element neutronFloatingIPRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronFloatingIPRequest;
}

/**
 * Writes this FULLNS0NeutronFloatingIPRequest to XML under element name "neutronFloatingIPRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIPRequest The NeutronFloatingIPRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronFloatingIPRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronFloatingIPRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronFloatingIPRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronFloatingIPRequest for root element {}neutronFloatingIPRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronFloatingIPRequest for root element {}neutronFloatingIPRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronFloatingIPRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "floatingip", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}floatingip of type {}neutronFloatingIP.");
#endif
    __child = [FULLNS0NeutronFloatingIP readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}floatingip of type {}neutronFloatingIP.");
#endif

    [self setSingletonFloatingIP: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "floatingips", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}floatingips of type {}neutronFloatingIP.");
#endif

    __child = [FULLNS0NeutronFloatingIP readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}floatingips of type {}neutronFloatingIP.");
#endif

    if ([self bulkRequest]) {
      [self setBulkRequest: [[self bulkRequest] arrayByAddingObject: __child]];
    }
    else {
      [self setBulkRequest: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self singletonFloatingIP]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floatingip", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}floatingip."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}floatingip...");
#endif
    [[self singletonFloatingIP] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}floatingip...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}floatingip."];
    }
  }
  if ([self bulkRequest]) {
    __enumerator = [[self bulkRequest] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floatingips", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}floatingips."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}floatingips...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}floatingips...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}floatingips."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NeutronFloatingIPRequest (JAXB) */

#endif /* DEF_FULLNS0NeutronFloatingIPRequest_M */
#ifndef DEF_FULLNS0NeutronSubnet_HostRoute_M
#define DEF_FULLNS0NeutronSubnet_HostRoute_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronSubnet_HostRoute

/**
 * (no documentation provided)
 */
- (NSString *) nextHop
{
  return _nextHop;
}

/**
 * (no documentation provided)
 */
- (void) setNextHop: (NSString *) newNextHop
{
  [newNextHop retain];
  [_nextHop release];
  _nextHop = newNextHop;
}

/**
 * (no documentation provided)
 */
- (NSString *) destination
{
  return _destination;
}

/**
 * (no documentation provided)
 */
- (void) setDestination: (NSString *) newDestination
{
  [newDestination retain];
  [_destination release];
  _destination = newDestination;
}

- (void) dealloc
{
  [self setNextHop: nil];
  [self setDestination: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronSubnet_HostRoute *_fULLNS0NeutronSubnet_HostRoute;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronSubnet_HostRoute = (FULLNS0NeutronSubnet_HostRoute *) [FULLNS0NeutronSubnet_HostRoute readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronSubnet_HostRoute;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronSubnet_HostRoute */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronSubnet_HostRoute (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronSubnet_HostRoute (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronSubnet_HostRoute (JAXB)

/**
 * Read an instance of FULLNS0NeutronSubnet_HostRoute from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronSubnet_HostRoute defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronSubnet_HostRoute *_fULLNS0NeutronSubnet_HostRoute = [[FULLNS0NeutronSubnet_HostRoute alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronSubnet_HostRoute initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronSubnet_HostRoute = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronSubnet_HostRoute autorelease];
  return _fULLNS0NeutronSubnet_HostRoute;
}

/**
 * Initialize this instance of FULLNS0NeutronSubnet_HostRoute according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronSubnet_HostRoute to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronSubnet_HostRoute from an XML reader. The element to be read is
 * "neutronSubnet_HostRoute".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronSubnet_HostRoute.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronSubnet_HostRoute *_neutronSubnet_HostRoute = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronSubnet_HostRoute."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronSubnet_HostRoute", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronSubnet_HostRoute.");
#endif
    _neutronSubnet_HostRoute = (FULLNS0NeutronSubnet_HostRoute *)[FULLNS0NeutronSubnet_HostRoute readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronSubnet_HostRoute.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnet_HostRoute. Expected element neutronSubnet_HostRoute. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnet_HostRoute. Expected element neutronSubnet_HostRoute. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronSubnet_HostRoute;
}

/**
 * Writes this FULLNS0NeutronSubnet_HostRoute to XML under element name "neutronSubnet_HostRoute".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet_HostRoute The NeutronSubnet_HostRoute to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronSubnet_HostRoute to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnet_HostRoute", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronSubnet_HostRoute. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronSubnet_HostRoute for root element {}neutronSubnet_HostRoute...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronSubnet_HostRoute for root element {}neutronSubnet_HostRoute...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronSubnet_HostRoute. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nexthop", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nexthop of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nexthop of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNextHop: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "destination", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}destination of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}destination of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDestination: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self nextHop]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nexthop", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nexthop."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nexthop...");
#endif
    [[self nextHop] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nexthop...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nexthop."];
    }
  }
  if ([self destination]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "destination", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}destination."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}destination...");
#endif
    [[self destination] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}destination...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}destination."];
    }
  }
}
@end /* implementation FULLNS0NeutronSubnet_HostRoute (JAXB) */

#endif /* DEF_FULLNS0NeutronSubnet_HostRoute_M */
#ifndef DEF_FULLNS0NeutronRouter_Interface_M
#define DEF_FULLNS0NeutronRouter_Interface_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronRouter_Interface

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSString *) tenantID
{
  return _tenantID;
}

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID
{
  [newTenantID retain];
  [_tenantID release];
  _tenantID = newTenantID;
}

/**
 * (no documentation provided)
 */
- (NSString *) portUUID
{
  return _portUUID;
}

/**
 * (no documentation provided)
 */
- (void) setPortUUID: (NSString *) newPortUUID
{
  [newPortUUID retain];
  [_portUUID release];
  _portUUID = newPortUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) subnetUUID
{
  return _subnetUUID;
}

/**
 * (no documentation provided)
 */
- (void) setSubnetUUID: (NSString *) newSubnetUUID
{
  [newSubnetUUID retain];
  [_subnetUUID release];
  _subnetUUID = newSubnetUUID;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setTenantID: nil];
  [self setPortUUID: nil];
  [self setSubnetUUID: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronRouter_Interface *_fULLNS0NeutronRouter_Interface;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronRouter_Interface = (FULLNS0NeutronRouter_Interface *) [FULLNS0NeutronRouter_Interface readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronRouter_Interface;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronRouter_Interface */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronRouter_Interface (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronRouter_Interface (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronRouter_Interface (JAXB)

/**
 * Read an instance of FULLNS0NeutronRouter_Interface from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronRouter_Interface defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronRouter_Interface *_fULLNS0NeutronRouter_Interface = [[FULLNS0NeutronRouter_Interface alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronRouter_Interface initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronRouter_Interface = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronRouter_Interface autorelease];
  return _fULLNS0NeutronRouter_Interface;
}

/**
 * Initialize this instance of FULLNS0NeutronRouter_Interface according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronRouter_Interface to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronRouter_Interface from an XML reader. The element to be read is
 * "neutronRouter_Interface".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronRouter_Interface.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronRouter_Interface *_neutronRouter_Interface = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronRouter_Interface."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronRouter_Interface", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronRouter_Interface.");
#endif
    _neutronRouter_Interface = (FULLNS0NeutronRouter_Interface *)[FULLNS0NeutronRouter_Interface readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronRouter_Interface.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouter_Interface. Expected element neutronRouter_Interface. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouter_Interface. Expected element neutronRouter_Interface. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronRouter_Interface;
}

/**
 * Writes this FULLNS0NeutronRouter_Interface to XML under element name "neutronRouter_Interface".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronRouter_Interface The NeutronRouter_Interface to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronRouter_Interface to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouter_Interface", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronRouter_Interface. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronRouter_Interface for root element {}neutronRouter_Interface...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronRouter_Interface for root element {}neutronRouter_Interface...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronRouter_Interface. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTenantID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "port_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPortUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "subnet_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSubnetUUID: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self tenantID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tenant_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tenant_id...");
#endif
    [[self tenantID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tenant_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tenant_id."];
    }
  }
  if ([self portUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}port_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}port_id...");
#endif
    [[self portUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}port_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}port_id."];
    }
  }
  if ([self subnetUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnet_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}subnet_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}subnet_id...");
#endif
    [[self subnetUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}subnet_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}subnet_id."];
    }
  }
}
@end /* implementation FULLNS0NeutronRouter_Interface (JAXB) */

#endif /* DEF_FULLNS0NeutronRouter_Interface_M */
#ifndef DEF_FULLNS0NeutronNetworkRequest_M
#define DEF_FULLNS0NeutronNetworkRequest_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronNetworkRequest

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronNetwork *) singletonNetwork
{
  return _singletonNetwork;
}

/**
 * (no documentation provided)
 */
- (void) setSingletonNetwork: (FULLNS0NeutronNetwork *) newSingletonNetwork
{
  [newSingletonNetwork retain];
  [_singletonNetwork release];
  _singletonNetwork = newSingletonNetwork;
}

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest
{
  return _bulkRequest;
}

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest
{
  [newBulkRequest retain];
  [_bulkRequest release];
  _bulkRequest = newBulkRequest;
}

- (void) dealloc
{
  [self setSingletonNetwork: nil];
  [self setBulkRequest: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronNetworkRequest *_fULLNS0NeutronNetworkRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronNetworkRequest = (FULLNS0NeutronNetworkRequest *) [FULLNS0NeutronNetworkRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronNetworkRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronNetworkRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronNetworkRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronNetworkRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronNetworkRequest (JAXB)

/**
 * Read an instance of FULLNS0NeutronNetworkRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronNetworkRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronNetworkRequest *_fULLNS0NeutronNetworkRequest = [[FULLNS0NeutronNetworkRequest alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronNetworkRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronNetworkRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronNetworkRequest autorelease];
  return _fULLNS0NeutronNetworkRequest;
}

/**
 * Initialize this instance of FULLNS0NeutronNetworkRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronNetworkRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronNetworkRequest from an XML reader. The element to be read is
 * "neutronNetworkRequest".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronNetworkRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronNetworkRequest *_neutronNetworkRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronNetworkRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronNetworkRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronNetworkRequest.");
#endif
    _neutronNetworkRequest = (FULLNS0NeutronNetworkRequest *)[FULLNS0NeutronNetworkRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronNetworkRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronNetworkRequest. Expected element neutronNetworkRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronNetworkRequest. Expected element neutronNetworkRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronNetworkRequest;
}

/**
 * Writes this FULLNS0NeutronNetworkRequest to XML under element name "neutronNetworkRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronNetworkRequest The NeutronNetworkRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronNetworkRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronNetworkRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronNetworkRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronNetworkRequest for root element {}neutronNetworkRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronNetworkRequest for root element {}neutronNetworkRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronNetworkRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "network", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}network of type {}neutronNetwork.");
#endif
    __child = [FULLNS0NeutronNetwork readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}network of type {}neutronNetwork.");
#endif

    [self setSingletonNetwork: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "networks", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}networks of type {}neutronNetwork.");
#endif

    __child = [FULLNS0NeutronNetwork readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}networks of type {}neutronNetwork.");
#endif

    if ([self bulkRequest]) {
      [self setBulkRequest: [[self bulkRequest] arrayByAddingObject: __child]];
    }
    else {
      [self setBulkRequest: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self singletonNetwork]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}network."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}network...");
#endif
    [[self singletonNetwork] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}network...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}network."];
    }
  }
  if ([self bulkRequest]) {
    __enumerator = [[self bulkRequest] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "networks", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}networks."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}networks...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}networks...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}networks."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NeutronNetworkRequest (JAXB) */

#endif /* DEF_FULLNS0NeutronNetworkRequest_M */
#ifndef DEF_FULLNS0NeutronRouterRequest_M
#define DEF_FULLNS0NeutronRouterRequest_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronRouterRequest

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronRouter *) singletonRouter
{
  return _singletonRouter;
}

/**
 * (no documentation provided)
 */
- (void) setSingletonRouter: (FULLNS0NeutronRouter *) newSingletonRouter
{
  [newSingletonRouter retain];
  [_singletonRouter release];
  _singletonRouter = newSingletonRouter;
}

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest
{
  return _bulkRequest;
}

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest
{
  [newBulkRequest retain];
  [_bulkRequest release];
  _bulkRequest = newBulkRequest;
}

- (void) dealloc
{
  [self setSingletonRouter: nil];
  [self setBulkRequest: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronRouterRequest *_fULLNS0NeutronRouterRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronRouterRequest = (FULLNS0NeutronRouterRequest *) [FULLNS0NeutronRouterRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronRouterRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronRouterRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronRouterRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronRouterRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronRouterRequest (JAXB)

/**
 * Read an instance of FULLNS0NeutronRouterRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronRouterRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronRouterRequest *_fULLNS0NeutronRouterRequest = [[FULLNS0NeutronRouterRequest alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronRouterRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronRouterRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronRouterRequest autorelease];
  return _fULLNS0NeutronRouterRequest;
}

/**
 * Initialize this instance of FULLNS0NeutronRouterRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronRouterRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronRouterRequest from an XML reader. The element to be read is
 * "neutronRouterRequest".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronRouterRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronRouterRequest *_neutronRouterRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronRouterRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronRouterRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronRouterRequest.");
#endif
    _neutronRouterRequest = (FULLNS0NeutronRouterRequest *)[FULLNS0NeutronRouterRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronRouterRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouterRequest. Expected element neutronRouterRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouterRequest. Expected element neutronRouterRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronRouterRequest;
}

/**
 * Writes this FULLNS0NeutronRouterRequest to XML under element name "neutronRouterRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronRouterRequest The NeutronRouterRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronRouterRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouterRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronRouterRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronRouterRequest for root element {}neutronRouterRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronRouterRequest for root element {}neutronRouterRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronRouterRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "router", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}router of type {}neutronRouter.");
#endif
    __child = [FULLNS0NeutronRouter readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}router of type {}neutronRouter.");
#endif

    [self setSingletonRouter: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "routers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}routers of type {}neutronRouter.");
#endif

    __child = [FULLNS0NeutronRouter readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}routers of type {}neutronRouter.");
#endif

    if ([self bulkRequest]) {
      [self setBulkRequest: [[self bulkRequest] arrayByAddingObject: __child]];
    }
    else {
      [self setBulkRequest: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self singletonRouter]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "router", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}router."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}router...");
#endif
    [[self singletonRouter] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}router...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}router."];
    }
  }
  if ([self bulkRequest]) {
    __enumerator = [[self bulkRequest] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "routers", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}routers."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}routers...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}routers...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}routers."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NeutronRouterRequest (JAXB) */

#endif /* DEF_FULLNS0NeutronRouterRequest_M */
#ifndef DEF_FULLNS0NeutronSubnetRequest_M
#define DEF_FULLNS0NeutronSubnetRequest_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronSubnetRequest

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronSubnet *) singletonSubnet
{
  return _singletonSubnet;
}

/**
 * (no documentation provided)
 */
- (void) setSingletonSubnet: (FULLNS0NeutronSubnet *) newSingletonSubnet
{
  [newSingletonSubnet retain];
  [_singletonSubnet release];
  _singletonSubnet = newSingletonSubnet;
}

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest
{
  return _bulkRequest;
}

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest
{
  [newBulkRequest retain];
  [_bulkRequest release];
  _bulkRequest = newBulkRequest;
}

- (void) dealloc
{
  [self setSingletonSubnet: nil];
  [self setBulkRequest: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronSubnetRequest *_fULLNS0NeutronSubnetRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronSubnetRequest = (FULLNS0NeutronSubnetRequest *) [FULLNS0NeutronSubnetRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronSubnetRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronSubnetRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronSubnetRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronSubnetRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronSubnetRequest (JAXB)

/**
 * Read an instance of FULLNS0NeutronSubnetRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronSubnetRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronSubnetRequest *_fULLNS0NeutronSubnetRequest = [[FULLNS0NeutronSubnetRequest alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronSubnetRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronSubnetRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronSubnetRequest autorelease];
  return _fULLNS0NeutronSubnetRequest;
}

/**
 * Initialize this instance of FULLNS0NeutronSubnetRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronSubnetRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronSubnetRequest from an XML reader. The element to be read is
 * "neutronSubnetRequest".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronSubnetRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronSubnetRequest *_neutronSubnetRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronSubnetRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronSubnetRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronSubnetRequest.");
#endif
    _neutronSubnetRequest = (FULLNS0NeutronSubnetRequest *)[FULLNS0NeutronSubnetRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronSubnetRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnetRequest. Expected element neutronSubnetRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnetRequest. Expected element neutronSubnetRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronSubnetRequest;
}

/**
 * Writes this FULLNS0NeutronSubnetRequest to XML under element name "neutronSubnetRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronSubnetRequest The NeutronSubnetRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronSubnetRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnetRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronSubnetRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronSubnetRequest for root element {}neutronSubnetRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronSubnetRequest for root element {}neutronSubnetRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronSubnetRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "subnet", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}subnet of type {}neutronSubnet.");
#endif
    __child = [FULLNS0NeutronSubnet readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}subnet of type {}neutronSubnet.");
#endif

    [self setSingletonSubnet: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "subnets", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}subnets of type {}neutronSubnet.");
#endif

    __child = [FULLNS0NeutronSubnet readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}subnets of type {}neutronSubnet.");
#endif

    if ([self bulkRequest]) {
      [self setBulkRequest: [[self bulkRequest] arrayByAddingObject: __child]];
    }
    else {
      [self setBulkRequest: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self singletonSubnet]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnet", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}subnet."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}subnet...");
#endif
    [[self singletonSubnet] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}subnet...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}subnet."];
    }
  }
  if ([self bulkRequest]) {
    __enumerator = [[self bulkRequest] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnets", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}subnets."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}subnets...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}subnets...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}subnets."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NeutronSubnetRequest (JAXB) */

#endif /* DEF_FULLNS0NeutronSubnetRequest_M */
#ifndef DEF_FULLNS0NeutronPortRequest_M
#define DEF_FULLNS0NeutronPortRequest_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronPortRequest

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronPort *) singletonPort
{
  return _singletonPort;
}

/**
 * (no documentation provided)
 */
- (void) setSingletonPort: (FULLNS0NeutronPort *) newSingletonPort
{
  [newSingletonPort retain];
  [_singletonPort release];
  _singletonPort = newSingletonPort;
}

/**
 * (no documentation provided)
 */
- (NSArray *) bulkRequest
{
  return _bulkRequest;
}

/**
 * (no documentation provided)
 */
- (void) setBulkRequest: (NSArray *) newBulkRequest
{
  [newBulkRequest retain];
  [_bulkRequest release];
  _bulkRequest = newBulkRequest;
}

- (void) dealloc
{
  [self setSingletonPort: nil];
  [self setBulkRequest: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronPortRequest *_fULLNS0NeutronPortRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronPortRequest = (FULLNS0NeutronPortRequest *) [FULLNS0NeutronPortRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronPortRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronPortRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronPortRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronPortRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronPortRequest (JAXB)

/**
 * Read an instance of FULLNS0NeutronPortRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronPortRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronPortRequest *_fULLNS0NeutronPortRequest = [[FULLNS0NeutronPortRequest alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronPortRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronPortRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronPortRequest autorelease];
  return _fULLNS0NeutronPortRequest;
}

/**
 * Initialize this instance of FULLNS0NeutronPortRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronPortRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronPortRequest from an XML reader. The element to be read is
 * "neutronPortRequest".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronPortRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronPortRequest *_neutronPortRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronPortRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronPortRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronPortRequest.");
#endif
    _neutronPortRequest = (FULLNS0NeutronPortRequest *)[FULLNS0NeutronPortRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronPortRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronPortRequest. Expected element neutronPortRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronPortRequest. Expected element neutronPortRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronPortRequest;
}

/**
 * Writes this FULLNS0NeutronPortRequest to XML under element name "neutronPortRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronPortRequest The NeutronPortRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronPortRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronPortRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronPortRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronPortRequest for root element {}neutronPortRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronPortRequest for root element {}neutronPortRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronPortRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "port", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}port of type {}neutronPort.");
#endif
    __child = [FULLNS0NeutronPort readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}port of type {}neutronPort.");
#endif

    [self setSingletonPort: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ports", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ports of type {}neutronPort.");
#endif

    __child = [FULLNS0NeutronPort readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ports of type {}neutronPort.");
#endif

    if ([self bulkRequest]) {
      [self setBulkRequest: [[self bulkRequest] arrayByAddingObject: __child]];
    }
    else {
      [self setBulkRequest: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self singletonPort]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}port."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}port...");
#endif
    [[self singletonPort] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}port...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}port."];
    }
  }
  if ([self bulkRequest]) {
    __enumerator = [[self bulkRequest] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ports", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}ports."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}ports...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}ports...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}ports."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NeutronPortRequest (JAXB) */

#endif /* DEF_FULLNS0NeutronPortRequest_M */
#ifndef DEF_FULLNS0ConfigurationObject_M
#define DEF_FULLNS0ConfigurationObject_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0ConfigurationObject

- (void) dealloc
{
  [super dealloc];
}
@end /* implementation FULLNS0ConfigurationObject */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0ConfigurationObject (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface FULLNS0ConfigurationObject (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0ConfigurationObject (JAXB)

/**
 * Read an instance of FULLNS0ConfigurationObject from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0ConfigurationObject defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0ConfigurationObject *_fULLNS0ConfigurationObject = [[FULLNS0ConfigurationObject alloc] init];
  NS_DURING
  {
    [_fULLNS0ConfigurationObject initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0ConfigurationObject = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0ConfigurationObject autorelease];
  return _fULLNS0ConfigurationObject;
}

/**
 * Initialize this instance of FULLNS0ConfigurationObject according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0ConfigurationObject to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

}
@end /* implementation FULLNS0ConfigurationObject (JAXB) */

#endif /* DEF_FULLNS0ConfigurationObject_M */
#ifndef DEF_FULLNS0NeutronSubnet_M
#define DEF_FULLNS0NeutronSubnet_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronSubnet

/**
 * (no documentation provided)
 */
- (int *) ipVersion
{
  return _ipVersion;
}

/**
 * (no documentation provided)
 */
- (void) setIpVersion: (int *) newIpVersion
{
  if (_ipVersion != NULL) {
    free(_ipVersion);
  }
  _ipVersion = newIpVersion;
}

/**
 * (no documentation provided)
 */
- (NSString *) gatewayIP
{
  return _gatewayIP;
}

/**
 * (no documentation provided)
 */
- (void) setGatewayIP: (NSString *) newGatewayIP
{
  [newGatewayIP retain];
  [_gatewayIP release];
  _gatewayIP = newGatewayIP;
}

/**
 * (no documentation provided)
 */
- (NSString *) cidr
{
  return _cidr;
}

/**
 * (no documentation provided)
 */
- (void) setCidr: (NSString *) newCidr
{
  [newCidr retain];
  [_cidr release];
  _cidr = newCidr;
}

/**
 * (no documentation provided)
 */
- (NSString *) ipV6AddressMode
{
  return _ipV6AddressMode;
}

/**
 * (no documentation provided)
 */
- (void) setIpV6AddressMode: (NSString *) newIpV6AddressMode
{
  [newIpV6AddressMode retain];
  [_ipV6AddressMode release];
  _ipV6AddressMode = newIpV6AddressMode;
}

/**
 * (no documentation provided)
 */
- (NSString *) networkUUID
{
  return _networkUUID;
}

/**
 * (no documentation provided)
 */
- (void) setNetworkUUID: (NSString *) newNetworkUUID
{
  [newNetworkUUID retain];
  [_networkUUID release];
  _networkUUID = newNetworkUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) subnetUUID
{
  return _subnetUUID;
}

/**
 * (no documentation provided)
 */
- (void) setSubnetUUID: (NSString *) newSubnetUUID
{
  [newSubnetUUID retain];
  [_subnetUUID release];
  _subnetUUID = newSubnetUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) tenantID
{
  return _tenantID;
}

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID
{
  [newTenantID retain];
  [_tenantID release];
  _tenantID = newTenantID;
}

/**
 * (no documentation provided)
 */
- (NSArray *) dnsNameservers
{
  return _dnsNameservers;
}

/**
 * (no documentation provided)
 */
- (void) setDnsNameservers: (NSArray *) newDnsNameservers
{
  [newDnsNameservers retain];
  [_dnsNameservers release];
  _dnsNameservers = newDnsNameservers;
}

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) ipV6RaMode
{
  return _ipV6RaMode;
}

/**
 * (no documentation provided)
 */
- (void) setIpV6RaMode: (NSString *) newIpV6RaMode
{
  [newIpV6RaMode retain];
  [_ipV6RaMode release];
  _ipV6RaMode = newIpV6RaMode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) hostRoutes
{
  return _hostRoutes;
}

/**
 * (no documentation provided)
 */
- (void) setHostRoutes: (NSArray *) newHostRoutes
{
  [newHostRoutes retain];
  [_hostRoutes release];
  _hostRoutes = newHostRoutes;
}

/**
 * (no documentation provided)
 */
- (NSArray *) allocationPools
{
  return _allocationPools;
}

/**
 * (no documentation provided)
 */
- (void) setAllocationPools: (NSArray *) newAllocationPools
{
  [newAllocationPools retain];
  [_allocationPools release];
  _allocationPools = newAllocationPools;
}

/**
 * (no documentation provided)
 */
- (BOOL *) enableDHCP
{
  return _enableDHCP;
}

/**
 * (no documentation provided)
 */
- (void) setEnableDHCP: (BOOL *) newEnableDHCP
{
  if (_enableDHCP != NULL) {
    free(_enableDHCP);
  }
  _enableDHCP = newEnableDHCP;
}

- (void) dealloc
{
  [self setIpVersion: NULL];
  [self setGatewayIP: nil];
  [self setCidr: nil];
  [self setIpV6AddressMode: nil];
  [self setNetworkUUID: nil];
  [self setSubnetUUID: nil];
  [self setTenantID: nil];
  [self setDnsNameservers: nil];
  [self setName: nil];
  [self setIpV6RaMode: nil];
  [self setHostRoutes: nil];
  [self setAllocationPools: nil];
  [self setEnableDHCP: NULL];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronSubnet *_fULLNS0NeutronSubnet;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronSubnet = (FULLNS0NeutronSubnet *) [FULLNS0NeutronSubnet readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronSubnet;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronSubnet */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronSubnet (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronSubnet (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronSubnet (JAXB)

/**
 * Read an instance of FULLNS0NeutronSubnet from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronSubnet defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronSubnet *_fULLNS0NeutronSubnet = [[FULLNS0NeutronSubnet alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronSubnet initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronSubnet = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronSubnet autorelease];
  return _fULLNS0NeutronSubnet;
}

/**
 * Initialize this instance of FULLNS0NeutronSubnet according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronSubnet to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronSubnet from an XML reader. The element to be read is
 * "neutronSubnet".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronSubnet.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronSubnet *_neutronSubnet = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronSubnet."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronSubnet", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronSubnet.");
#endif
    _neutronSubnet = (FULLNS0NeutronSubnet *)[FULLNS0NeutronSubnet readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronSubnet.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnet. Expected element neutronSubnet. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronSubnet. Expected element neutronSubnet. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronSubnet;
}

/**
 * Writes this FULLNS0NeutronSubnet to XML under element name "neutronSubnet".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronSubnet The NeutronSubnet to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronSubnet to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronSubnet", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronSubnet. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronSubnet for root element {}neutronSubnet...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronSubnet for root element {}neutronSubnet...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronSubnet. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ip_version", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIpVersion: ((int*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "gateway_ip", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}gateway_ip of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}gateway_ip of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setGatewayIP: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "cidr", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}cidr of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}cidr of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCidr: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ipv6_address_mode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    status = 1;
    if (xmlTextReaderMoveToAttributeNs(reader, BAD_CAST "nil", BAD_CAST "http://www.w3.org/2001/XMLSchema-instance")) {
      if (xmlStrcmp(BAD_CAST "true", xmlTextReaderConstValue(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
        NSLog(@"Choice {}ipv6_address_mode was nil according to the xsi:nil attribute.");
#endif
        __child = nil;
        status = 0;
      }
    }

    xmlTextReaderMoveToElement(reader); //move back to the element
    if (status) { //if not "nil"...
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ipv6_address_mode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ipv6_address_mode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    } //end "if not nil" clause
    else if (xmlTextReaderIsEmptyElement(reader) == 0) {
      //if it's not the empty element, skip it because it's nil.
      xmlTextReaderSkipElement(reader);
    }

    [self setIpV6AddressMode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "network_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNetworkUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSubnetUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTenantID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dns_nameservers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dns_nameservers of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dns_nameservers of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self dnsNameservers]) {
      [self setDnsNameservers: [[self dnsNameservers] arrayByAddingObject: __child]];
    }
    else {
      [self setDnsNameservers: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ipv6_ra_mode", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    status = 1;
    if (xmlTextReaderMoveToAttributeNs(reader, BAD_CAST "nil", BAD_CAST "http://www.w3.org/2001/XMLSchema-instance")) {
      if (xmlStrcmp(BAD_CAST "true", xmlTextReaderConstValue(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
        NSLog(@"Choice {}ipv6_ra_mode was nil according to the xsi:nil attribute.");
#endif
        __child = nil;
        status = 0;
      }
    }

    xmlTextReaderMoveToElement(reader); //move back to the element
    if (status) { //if not "nil"...
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ipv6_ra_mode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ipv6_ra_mode of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    } //end "if not nil" clause
    else if (xmlTextReaderIsEmptyElement(reader) == 0) {
      //if it's not the empty element, skip it because it's nil.
      xmlTextReaderSkipElement(reader);
    }

    [self setIpV6RaMode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "host_routes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}host_routes of type {}neutronSubnet_HostRoute.");
#endif

    __child = [FULLNS0NeutronSubnet_HostRoute readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}host_routes of type {}neutronSubnet_HostRoute.");
#endif

    if ([self hostRoutes]) {
      [self setHostRoutes: [[self hostRoutes] arrayByAddingObject: __child]];
    }
    else {
      [self setHostRoutes: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "allocation_pools", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}allocation_pools of type {}neutronSubnet_IPAllocationPool.");
#endif

    __child = [FULLNS0NeutronSubnet_IPAllocationPool readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}allocation_pools of type {}neutronSubnet_IPAllocationPool.");
#endif

    if ([self allocationPools]) {
      [self setAllocationPools: [[self allocationPools] arrayByAddingObject: __child]];
    }
    else {
      [self setAllocationPools: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "enable_dhcp", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setEnableDHCP: ((BOOL*) _child_accessor)];
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self ipVersion] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ip_version", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ip_version."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ip_version...");
#endif
    status = xmlTextWriterWriteIntType(writer, [self ipVersion]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ip_version...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}ip_version."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ip_version."];
    }
  }
  if ([self gatewayIP]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gateway_ip", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}gateway_ip."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}gateway_ip...");
#endif
    [[self gatewayIP] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}gateway_ip...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}gateway_ip."];
    }
  }
  if ([self cidr]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cidr", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}cidr."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}cidr...");
#endif
    [[self cidr] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}cidr...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}cidr."];
    }
  }
  if ([self ipV6AddressMode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ipv6_address_mode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ipv6_address_mode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ipv6_address_mode...");
#endif
    [[self ipV6AddressMode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ipv6_address_mode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ipv6_address_mode."];
    }
  }
  if ([self networkUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}network_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}network_id...");
#endif
    [[self networkUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}network_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}network_id."];
    }
  }
  if ([self subnetUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self subnetUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self tenantID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tenant_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tenant_id...");
#endif
    [[self tenantID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tenant_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tenant_id."];
    }
  }
  if ([self dnsNameservers]) {
    __enumerator = [[self dnsNameservers] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dns_nameservers", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}dns_nameservers."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}dns_nameservers...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}dns_nameservers...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}dns_nameservers."];
      }
    } //end item iterator.
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self ipV6RaMode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ipv6_ra_mode", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ipv6_ra_mode."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ipv6_ra_mode...");
#endif
    [[self ipV6RaMode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ipv6_ra_mode...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ipv6_ra_mode."];
    }
  }
  if ([self hostRoutes]) {
    __enumerator = [[self hostRoutes] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "host_routes", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}host_routes."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}host_routes...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}host_routes...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}host_routes."];
      }
    } //end item iterator.
  }
  if ([self allocationPools]) {
    __enumerator = [[self allocationPools] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "allocation_pools", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}allocation_pools."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}allocation_pools...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}allocation_pools...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}allocation_pools."];
      }
    } //end item iterator.
  }
  if ([self enableDHCP] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "enable_dhcp", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}enable_dhcp."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}enable_dhcp...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, [self enableDHCP]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}enable_dhcp...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}enable_dhcp."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}enable_dhcp."];
    }
  }
}
@end /* implementation FULLNS0NeutronSubnet (JAXB) */

#endif /* DEF_FULLNS0NeutronSubnet_M */
#ifndef DEF_FULLNS0NeutronRouter_M
#define DEF_FULLNS0NeutronRouter_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronRouter

/**
 * (no documentation provided)
 */
- (NSString *) tenantID
{
  return _tenantID;
}

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID
{
  [newTenantID retain];
  [_tenantID release];
  _tenantID = newTenantID;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NeutronRouter_NetworkReference *) externalGatewayInfo
{
  return _externalGatewayInfo;
}

/**
 * (no documentation provided)
 */
- (void) setExternalGatewayInfo: (FULLNS0NeutronRouter_NetworkReference *) newExternalGatewayInfo
{
  [newExternalGatewayInfo retain];
  [_externalGatewayInfo release];
  _externalGatewayInfo = newExternalGatewayInfo;
}

/**
 * (no documentation provided)
 */
- (BOOL *) adminStateUp
{
  return _adminStateUp;
}

/**
 * (no documentation provided)
 */
- (void) setAdminStateUp: (BOOL *) newAdminStateUp
{
  if (_adminStateUp != NULL) {
    free(_adminStateUp);
  }
  _adminStateUp = newAdminStateUp;
}

/**
 * (no documentation provided)
 */
- (NSString *) status
{
  return _status;
}

/**
 * (no documentation provided)
 */
- (void) setStatus: (NSString *) newStatus
{
  [newStatus retain];
  [_status release];
  _status = newStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) routerUUID
{
  return _routerUUID;
}

/**
 * (no documentation provided)
 */
- (void) setRouterUUID: (NSString *) newRouterUUID
{
  [newRouterUUID retain];
  [_routerUUID release];
  _routerUUID = newRouterUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

- (void) dealloc
{
  [self setTenantID: nil];
  [self setExternalGatewayInfo: nil];
  [self setAdminStateUp: NULL];
  [self setStatus: nil];
  [self setRouterUUID: nil];
  [self setName: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronRouter *_fULLNS0NeutronRouter;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronRouter = (FULLNS0NeutronRouter *) [FULLNS0NeutronRouter readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronRouter;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronRouter */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronRouter (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronRouter (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronRouter (JAXB)

/**
 * Read an instance of FULLNS0NeutronRouter from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronRouter defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronRouter *_fULLNS0NeutronRouter = [[FULLNS0NeutronRouter alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronRouter initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronRouter = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronRouter autorelease];
  return _fULLNS0NeutronRouter;
}

/**
 * Initialize this instance of FULLNS0NeutronRouter according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronRouter to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronRouter from an XML reader. The element to be read is
 * "neutronRouter".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronRouter.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronRouter *_neutronRouter = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronRouter."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronRouter", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronRouter.");
#endif
    _neutronRouter = (FULLNS0NeutronRouter *)[FULLNS0NeutronRouter readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronRouter.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouter. Expected element neutronRouter. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronRouter. Expected element neutronRouter. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronRouter;
}

/**
 * Writes this FULLNS0NeutronRouter to XML under element name "neutronRouter".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronRouter The NeutronRouter to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronRouter to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronRouter", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronRouter. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronRouter for root element {}neutronRouter...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronRouter for root element {}neutronRouter...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronRouter. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTenantID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "external_gateway_info", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}external_gateway_info of type {}neutronRouter_NetworkReference.");
#endif
    __child = [FULLNS0NeutronRouter_NetworkReference readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}external_gateway_info of type {}neutronRouter_NetworkReference.");
#endif

    [self setExternalGatewayInfo: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "admin_state_up", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setAdminStateUp: ((BOOL*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "status", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRouterUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self tenantID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tenant_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tenant_id...");
#endif
    [[self tenantID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tenant_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tenant_id."];
    }
  }
  if ([self externalGatewayInfo]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "external_gateway_info", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}external_gateway_info."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}external_gateway_info...");
#endif
    [[self externalGatewayInfo] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}external_gateway_info...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}external_gateway_info."];
    }
  }
  if ([self adminStateUp] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "admin_state_up", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}admin_state_up."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}admin_state_up...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, [self adminStateUp]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}admin_state_up...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}admin_state_up."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}admin_state_up."];
    }
  }
  if ([self status]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "status", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}status."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}status...");
#endif
    [[self status] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}status...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}status."];
    }
  }
  if ([self routerUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self routerUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
}
@end /* implementation FULLNS0NeutronRouter (JAXB) */

#endif /* DEF_FULLNS0NeutronRouter_M */
#ifndef DEF_FULLNS0Neutron_IPs_M
#define DEF_FULLNS0Neutron_IPs_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Neutron_IPs

/**
 * (no documentation provided)
 */
- (NSString *) subnetUUID
{
  return _subnetUUID;
}

/**
 * (no documentation provided)
 */
- (void) setSubnetUUID: (NSString *) newSubnetUUID
{
  [newSubnetUUID retain];
  [_subnetUUID release];
  _subnetUUID = newSubnetUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) ipAddress
{
  return _ipAddress;
}

/**
 * (no documentation provided)
 */
- (void) setIpAddress: (NSString *) newIpAddress
{
  [newIpAddress retain];
  [_ipAddress release];
  _ipAddress = newIpAddress;
}

- (void) dealloc
{
  [self setSubnetUUID: nil];
  [self setIpAddress: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Neutron_IPs *_fULLNS0Neutron_IPs;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Neutron_IPs = (FULLNS0Neutron_IPs *) [FULLNS0Neutron_IPs readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Neutron_IPs;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0Neutron_IPs */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Neutron_IPs (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Neutron_IPs (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Neutron_IPs (JAXB)

/**
 * Read an instance of FULLNS0Neutron_IPs from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Neutron_IPs defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Neutron_IPs *_fULLNS0Neutron_IPs = [[FULLNS0Neutron_IPs alloc] init];
  NS_DURING
  {
    [_fULLNS0Neutron_IPs initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Neutron_IPs = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Neutron_IPs autorelease];
  return _fULLNS0Neutron_IPs;
}

/**
 * Initialize this instance of FULLNS0Neutron_IPs according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Neutron_IPs to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0Neutron_IPs from an XML reader. The element to be read is
 * "neutron_IPs".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Neutron_IPs.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Neutron_IPs *_neutron_IPs = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutron_IPs."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutron_IPs", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutron_IPs.");
#endif
    _neutron_IPs = (FULLNS0Neutron_IPs *)[FULLNS0Neutron_IPs readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutron_IPs.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Neutron_IPs. Expected element neutron_IPs. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Neutron_IPs. Expected element neutron_IPs. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutron_IPs;
}

/**
 * Writes this FULLNS0Neutron_IPs to XML under element name "neutron_IPs".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutron_IPs The Neutron_IPs to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Neutron_IPs to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutron_IPs", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutron_IPs. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutron_IPs for root element {}neutron_IPs...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutron_IPs for root element {}neutron_IPs...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutron_IPs. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "subnet_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}subnet_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSubnetUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ip_address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ip_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ip_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIpAddress: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self subnetUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnet_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}subnet_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}subnet_id...");
#endif
    [[self subnetUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}subnet_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}subnet_id."];
    }
  }
  if ([self ipAddress]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ip_address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ip_address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ip_address...");
#endif
    [[self ipAddress] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ip_address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ip_address."];
    }
  }
}
@end /* implementation FULLNS0Neutron_IPs (JAXB) */

#endif /* DEF_FULLNS0Neutron_IPs_M */
#ifndef DEF_FULLNS0NeutronPort_M
#define DEF_FULLNS0NeutronPort_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronPort

/**
 * (no documentation provided)
 */
- (NSString *) tenantID
{
  return _tenantID;
}

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID
{
  [newTenantID retain];
  [_tenantID release];
  _tenantID = newTenantID;
}

/**
 * (no documentation provided)
 */
- (NSString *) macAddress
{
  return _macAddress;
}

/**
 * (no documentation provided)
 */
- (void) setMacAddress: (NSString *) newMacAddress
{
  [newMacAddress retain];
  [_macAddress release];
  _macAddress = newMacAddress;
}

/**
 * (no documentation provided)
 */
- (BOOL *) adminStateUp
{
  return _adminStateUp;
}

/**
 * (no documentation provided)
 */
- (void) setAdminStateUp: (BOOL *) newAdminStateUp
{
  if (_adminStateUp != NULL) {
    free(_adminStateUp);
  }
  _adminStateUp = newAdminStateUp;
}

/**
 * (no documentation provided)
 */
- (NSString *) deviceOwner
{
  return _deviceOwner;
}

/**
 * (no documentation provided)
 */
- (void) setDeviceOwner: (NSString *) newDeviceOwner
{
  [newDeviceOwner retain];
  [_deviceOwner release];
  _deviceOwner = newDeviceOwner;
}

/**
 * (no documentation provided)
 */
- (NSString *) status
{
  return _status;
}

/**
 * (no documentation provided)
 */
- (void) setStatus: (NSString *) newStatus
{
  [newStatus retain];
  [_status release];
  _status = newStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) portUUID
{
  return _portUUID;
}

/**
 * (no documentation provided)
 */
- (void) setPortUUID: (NSString *) newPortUUID
{
  [newPortUUID retain];
  [_portUUID release];
  _portUUID = newPortUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) deviceID
{
  return _deviceID;
}

/**
 * (no documentation provided)
 */
- (void) setDeviceID: (NSString *) newDeviceID
{
  [newDeviceID retain];
  [_deviceID release];
  _deviceID = newDeviceID;
}

/**
 * (no documentation provided)
 */
- (NSString *) networkUUID
{
  return _networkUUID;
}

/**
 * (no documentation provided)
 */
- (void) setNetworkUUID: (NSString *) newNetworkUUID
{
  [newNetworkUUID retain];
  [_networkUUID release];
  _networkUUID = newNetworkUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSArray *) fixedIPs
{
  return _fixedIPs;
}

/**
 * (no documentation provided)
 */
- (void) setFixedIPs: (NSArray *) newFixedIPs
{
  [newFixedIPs retain];
  [_fixedIPs release];
  _fixedIPs = newFixedIPs;
}

- (void) dealloc
{
  [self setTenantID: nil];
  [self setMacAddress: nil];
  [self setAdminStateUp: NULL];
  [self setDeviceOwner: nil];
  [self setStatus: nil];
  [self setPortUUID: nil];
  [self setDeviceID: nil];
  [self setNetworkUUID: nil];
  [self setName: nil];
  [self setFixedIPs: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronPort *_fULLNS0NeutronPort;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronPort = (FULLNS0NeutronPort *) [FULLNS0NeutronPort readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronPort;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronPort */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronPort (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronPort (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronPort (JAXB)

/**
 * Read an instance of FULLNS0NeutronPort from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronPort defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronPort *_fULLNS0NeutronPort = [[FULLNS0NeutronPort alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronPort initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronPort = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronPort autorelease];
  return _fULLNS0NeutronPort;
}

/**
 * Initialize this instance of FULLNS0NeutronPort according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronPort to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronPort from an XML reader. The element to be read is
 * "neutronPort".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronPort.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronPort *_neutronPort = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronPort."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronPort", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronPort.");
#endif
    _neutronPort = (FULLNS0NeutronPort *)[FULLNS0NeutronPort readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronPort.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronPort. Expected element neutronPort. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronPort. Expected element neutronPort. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronPort;
}

/**
 * Writes this FULLNS0NeutronPort to XML under element name "neutronPort".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronPort The NeutronPort to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronPort to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronPort", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronPort. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronPort for root element {}neutronPort...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronPort for root element {}neutronPort...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronPort. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTenantID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mac_address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mac_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mac_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMacAddress: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "admin_state_up", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setAdminStateUp: ((BOOL*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "device_owner", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}device_owner of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}device_owner of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDeviceOwner: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "status", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPortUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "device_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}device_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}device_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDeviceID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "network_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNetworkUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "fixed_ips", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}fixed_ips of type {}neutron_IPs.");
#endif

    __child = [FULLNS0Neutron_IPs readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}fixed_ips of type {}neutron_IPs.");
#endif

    if ([self fixedIPs]) {
      [self setFixedIPs: [[self fixedIPs] arrayByAddingObject: __child]];
    }
    else {
      [self setFixedIPs: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self tenantID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tenant_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tenant_id...");
#endif
    [[self tenantID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tenant_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tenant_id."];
    }
  }
  if ([self macAddress]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mac_address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mac_address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mac_address...");
#endif
    [[self macAddress] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mac_address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mac_address."];
    }
  }
  if ([self adminStateUp] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "admin_state_up", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}admin_state_up."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}admin_state_up...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, [self adminStateUp]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}admin_state_up...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}admin_state_up."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}admin_state_up."];
    }
  }
  if ([self deviceOwner]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "device_owner", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}device_owner."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}device_owner...");
#endif
    [[self deviceOwner] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}device_owner...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}device_owner."];
    }
  }
  if ([self status]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "status", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}status."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}status...");
#endif
    [[self status] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}status...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}status."];
    }
  }
  if ([self portUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self portUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self deviceID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "device_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}device_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}device_id...");
#endif
    [[self deviceID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}device_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}device_id."];
    }
  }
  if ([self networkUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}network_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}network_id...");
#endif
    [[self networkUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}network_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}network_id."];
    }
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self fixedIPs]) {
    __enumerator = [[self fixedIPs] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "fixed_ips", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}fixed_ips."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}fixed_ips...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}fixed_ips...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}fixed_ips."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NeutronPort (JAXB) */

#endif /* DEF_FULLNS0NeutronPort_M */
#ifndef DEF_FULLNS0NeutronNetwork_M
#define DEF_FULLNS0NeutronNetwork_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronNetwork

/**
 * (no documentation provided)
 */
- (NSString *) providerSegmentationID
{
  return _providerSegmentationID;
}

/**
 * (no documentation provided)
 */
- (void) setProviderSegmentationID: (NSString *) newProviderSegmentationID
{
  [newProviderSegmentationID retain];
  [_providerSegmentationID release];
  _providerSegmentationID = newProviderSegmentationID;
}

/**
 * (no documentation provided)
 */
- (NSString *) tenantID
{
  return _tenantID;
}

/**
 * (no documentation provided)
 */
- (void) setTenantID: (NSString *) newTenantID
{
  [newTenantID retain];
  [_tenantID release];
  _tenantID = newTenantID;
}

/**
 * (no documentation provided)
 */
- (NSString *) networkName
{
  return _networkName;
}

/**
 * (no documentation provided)
 */
- (void) setNetworkName: (NSString *) newNetworkName
{
  [newNetworkName retain];
  [_networkName release];
  _networkName = newNetworkName;
}

/**
 * (no documentation provided)
 */
- (BOOL *) routerExternal
{
  return _routerExternal;
}

/**
 * (no documentation provided)
 */
- (void) setRouterExternal: (BOOL *) newRouterExternal
{
  if (_routerExternal != NULL) {
    free(_routerExternal);
  }
  _routerExternal = newRouterExternal;
}

/**
 * (no documentation provided)
 */
- (NSString *) providerNetworkType
{
  return _providerNetworkType;
}

/**
 * (no documentation provided)
 */
- (void) setProviderNetworkType: (NSString *) newProviderNetworkType
{
  [newProviderNetworkType retain];
  [_providerNetworkType release];
  _providerNetworkType = newProviderNetworkType;
}

/**
 * (no documentation provided)
 */
- (BOOL *) shared
{
  return _shared;
}

/**
 * (no documentation provided)
 */
- (void) setShared: (BOOL *) newShared
{
  if (_shared != NULL) {
    free(_shared);
  }
  _shared = newShared;
}

/**
 * (no documentation provided)
 */
- (NSString *) providerPhysicalNetwork
{
  return _providerPhysicalNetwork;
}

/**
 * (no documentation provided)
 */
- (void) setProviderPhysicalNetwork: (NSString *) newProviderPhysicalNetwork
{
  [newProviderPhysicalNetwork retain];
  [_providerPhysicalNetwork release];
  _providerPhysicalNetwork = newProviderPhysicalNetwork;
}

/**
 * (no documentation provided)
 */
- (NSString *) status
{
  return _status;
}

/**
 * (no documentation provided)
 */
- (void) setStatus: (NSString *) newStatus
{
  [newStatus retain];
  [_status release];
  _status = newStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) networkUUID
{
  return _networkUUID;
}

/**
 * (no documentation provided)
 */
- (void) setNetworkUUID: (NSString *) newNetworkUUID
{
  [newNetworkUUID retain];
  [_networkUUID release];
  _networkUUID = newNetworkUUID;
}

/**
 * (no documentation provided)
 */
- (BOOL *) adminStateUp
{
  return _adminStateUp;
}

/**
 * (no documentation provided)
 */
- (void) setAdminStateUp: (BOOL *) newAdminStateUp
{
  if (_adminStateUp != NULL) {
    free(_adminStateUp);
  }
  _adminStateUp = newAdminStateUp;
}

/**
 * (no documentation provided)
 */
- (NSArray *) subnets
{
  return _subnets;
}

/**
 * (no documentation provided)
 */
- (void) setSubnets: (NSArray *) newSubnets
{
  [newSubnets retain];
  [_subnets release];
  _subnets = newSubnets;
}

- (void) dealloc
{
  [self setProviderSegmentationID: nil];
  [self setTenantID: nil];
  [self setNetworkName: nil];
  [self setRouterExternal: NULL];
  [self setProviderNetworkType: nil];
  [self setShared: NULL];
  [self setProviderPhysicalNetwork: nil];
  [self setStatus: nil];
  [self setNetworkUUID: nil];
  [self setAdminStateUp: NULL];
  [self setSubnets: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronNetwork *_fULLNS0NeutronNetwork;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronNetwork = (FULLNS0NeutronNetwork *) [FULLNS0NeutronNetwork readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronNetwork;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronNetwork */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronNetwork (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronNetwork (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronNetwork (JAXB)

/**
 * Read an instance of FULLNS0NeutronNetwork from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronNetwork defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronNetwork *_fULLNS0NeutronNetwork = [[FULLNS0NeutronNetwork alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronNetwork initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronNetwork = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronNetwork autorelease];
  return _fULLNS0NeutronNetwork;
}

/**
 * Initialize this instance of FULLNS0NeutronNetwork according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronNetwork to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronNetwork from an XML reader. The element to be read is
 * "network".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronNetwork.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronNetwork *_neutronNetwork = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element network."];
    }
  }

  if (xmlStrcmp(BAD_CAST "network", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}network.");
#endif
    _neutronNetwork = (FULLNS0NeutronNetwork *)[FULLNS0NeutronNetwork readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}network.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronNetwork. Expected element network. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronNetwork. Expected element network. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronNetwork;
}

/**
 * Writes this FULLNS0NeutronNetwork to XML under element name "network".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronNetwork The NeutronNetwork to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronNetwork to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "network", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}network. XML writer status: %i\n", rc];
  }

  if (writeNs) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing namespaces for start element {}network...");
#endif

    rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:ns2", BAD_CAST "router");
    if (rc < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing attribute 'xmlns:ns2' on '{}network'. XML writer status: %i\n", rc];
    }

    rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:ns1", BAD_CAST "provider");
    if (rc < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing attribute 'xmlns:ns1' on '{}network'. XML writer status: %i\n", rc];
    }
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote namespaces for start element {}network...");
#endif
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronNetwork for root element {}network...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronNetwork for root element {}network...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}network. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "segmentation_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlStrcmp(BAD_CAST "provider", xmlTextReaderConstNamespaceUri(reader)) == 0) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {provider}segmentation_id of element {provider}segmentation_id.");
#endif
    __child = [NSString readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {provider}segmentation_id of element {provider}segmentation_id.");
#endif

    [self setProviderSegmentationID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTenantID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNetworkName: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "external", xmlTextReaderConstLocalName(reader)) == 0
    && xmlStrcmp(BAD_CAST "router", xmlTextReaderConstNamespaceUri(reader)) == 0) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setRouterExternal: ((BOOL*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "network_type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlStrcmp(BAD_CAST "provider", xmlTextReaderConstNamespaceUri(reader)) == 0) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {provider}network_type of element {provider}network_type.");
#endif
    __child = [NSString readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {provider}network_type of element {provider}network_type.");
#endif

    [self setProviderNetworkType: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "shared", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setShared: ((BOOL*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "physical_network", xmlTextReaderConstLocalName(reader)) == 0
    && xmlStrcmp(BAD_CAST "provider", xmlTextReaderConstNamespaceUri(reader)) == 0) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {provider}physical_network of element {provider}physical_network.");
#endif
    __child = [NSString readXMLElement: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {provider}physical_network of element {provider}physical_network.");
#endif

    [self setProviderPhysicalNetwork: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "status", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}status of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNetworkUUID: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "admin_state_up", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setAdminStateUp: ((BOOL*) _child_accessor)];
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "subnets", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}subnets of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}subnets of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self subnets]) {
      [self setSubnets: [[self subnets] arrayByAddingObject: __child]];
    }
    else {
      [self setSubnets: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self providerSegmentationID]) {
    [[self providerSegmentationID] writeXMLElement: writer writeNamespaces: NO];
  }
  if ([self tenantID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tenant_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tenant_id...");
#endif
    [[self tenantID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tenant_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tenant_id."];
    }
  }
  if ([self networkName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self networkName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self routerExternal] != NULL) {
    status = xmlTextWriterStartElementNS(writer, BAD_CAST "ns2", BAD_CAST "external", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {router}external."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {router}external...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, [self routerExternal]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {router}external...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {router}external."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {router}external."];
    }
  }
  if ([self providerNetworkType]) {
    [[self providerNetworkType] writeXMLElement: writer writeNamespaces: NO];
  }
  if ([self shared] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "shared", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}shared."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}shared...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, [self shared]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}shared...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}shared."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}shared."];
    }
  }
  if ([self providerPhysicalNetwork]) {
    [[self providerPhysicalNetwork] writeXMLElement: writer writeNamespaces: NO];
  }
  if ([self status]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "status", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}status."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}status...");
#endif
    [[self status] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}status...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}status."];
    }
  }
  if ([self networkUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self networkUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self adminStateUp] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "admin_state_up", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}admin_state_up."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}admin_state_up...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, [self adminStateUp]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}admin_state_up...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}admin_state_up."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}admin_state_up."];
    }
  }
  if ([self subnets]) {
    __enumerator = [[self subnets] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "subnets", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}subnets."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}subnets...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}subnets...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}subnets."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0NeutronNetwork (JAXB) */

#endif /* DEF_FULLNS0NeutronNetwork_M */
#ifndef DEF_FULLNS0NeutronFloatingIP_M
#define DEF_FULLNS0NeutronFloatingIP_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NeutronFloatingIP

/**
 * (no documentation provided)
 */
- (NSString *) floatingIPAddress
{
  return _floatingIPAddress;
}

/**
 * (no documentation provided)
 */
- (void) setFloatingIPAddress: (NSString *) newFloatingIPAddress
{
  [newFloatingIPAddress retain];
  [_floatingIPAddress release];
  _floatingIPAddress = newFloatingIPAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) portUUID
{
  return _portUUID;
}

/**
 * (no documentation provided)
 */
- (void) setPortUUID: (NSString *) newPortUUID
{
  [newPortUUID retain];
  [_portUUID release];
  _portUUID = newPortUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) tenantUUID
{
  return _tenantUUID;
}

/**
 * (no documentation provided)
 */
- (void) setTenantUUID: (NSString *) newTenantUUID
{
  [newTenantUUID retain];
  [_tenantUUID release];
  _tenantUUID = newTenantUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) floatingNetworkUUID
{
  return _floatingNetworkUUID;
}

/**
 * (no documentation provided)
 */
- (void) setFloatingNetworkUUID: (NSString *) newFloatingNetworkUUID
{
  [newFloatingNetworkUUID retain];
  [_floatingNetworkUUID release];
  _floatingNetworkUUID = newFloatingNetworkUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) floatingIPUUID
{
  return _floatingIPUUID;
}

/**
 * (no documentation provided)
 */
- (void) setFloatingIPUUID: (NSString *) newFloatingIPUUID
{
  [newFloatingIPUUID retain];
  [_floatingIPUUID release];
  _floatingIPUUID = newFloatingIPUUID;
}

/**
 * (no documentation provided)
 */
- (NSString *) fixedIPAddress
{
  return _fixedIPAddress;
}

/**
 * (no documentation provided)
 */
- (void) setFixedIPAddress: (NSString *) newFixedIPAddress
{
  [newFixedIPAddress retain];
  [_fixedIPAddress release];
  _fixedIPAddress = newFixedIPAddress;
}

- (void) dealloc
{
  [self setFloatingIPAddress: nil];
  [self setPortUUID: nil];
  [self setTenantUUID: nil];
  [self setFloatingNetworkUUID: nil];
  [self setFloatingIPUUID: nil];
  [self setFixedIPAddress: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NeutronFloatingIP *_fULLNS0NeutronFloatingIP;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NeutronFloatingIP = (FULLNS0NeutronFloatingIP *) [FULLNS0NeutronFloatingIP readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NeutronFloatingIP;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation FULLNS0NeutronFloatingIP */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NeutronFloatingIP (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NeutronFloatingIP (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NeutronFloatingIP (JAXB)

/**
 * Read an instance of FULLNS0NeutronFloatingIP from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NeutronFloatingIP defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NeutronFloatingIP *_fULLNS0NeutronFloatingIP = [[FULLNS0NeutronFloatingIP alloc] init];
  NS_DURING
  {
    [_fULLNS0NeutronFloatingIP initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NeutronFloatingIP = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NeutronFloatingIP autorelease];
  return _fULLNS0NeutronFloatingIP;
}

/**
 * Initialize this instance of FULLNS0NeutronFloatingIP according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NeutronFloatingIP to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a FULLNS0NeutronFloatingIP from an XML reader. The element to be read is
 * "neutronFloatingIP".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NeutronFloatingIP.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NeutronFloatingIP *_neutronFloatingIP = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element neutronFloatingIP."];
    }
  }

  if (xmlStrcmp(BAD_CAST "neutronFloatingIP", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}neutronFloatingIP.");
#endif
    _neutronFloatingIP = (FULLNS0NeutronFloatingIP *)[FULLNS0NeutronFloatingIP readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}neutronFloatingIP.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronFloatingIP. Expected element neutronFloatingIP. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NeutronFloatingIP. Expected element neutronFloatingIP. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _neutronFloatingIP;
}

/**
 * Writes this FULLNS0NeutronFloatingIP to XML under element name "neutronFloatingIP".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _neutronFloatingIP The NeutronFloatingIP to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NeutronFloatingIP to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "neutronFloatingIP", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}neutronFloatingIP. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}neutronFloatingIP for root element {}neutronFloatingIP...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}neutronFloatingIP for root element {}neutronFloatingIP...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}neutronFloatingIP. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "floating_ip_address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}floating_ip_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}floating_ip_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFloatingIPAddress: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "port_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}port_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPortUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tenant_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tenant_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTenantUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "floating_network_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}floating_network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}floating_network_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFloatingNetworkUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFloatingIPUUID: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "fixed_ip_address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}fixed_ip_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}fixed_ip_address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFixedIPAddress: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self floatingIPAddress]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floating_ip_address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}floating_ip_address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}floating_ip_address...");
#endif
    [[self floatingIPAddress] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}floating_ip_address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}floating_ip_address."];
    }
  }
  if ([self portUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "port_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}port_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}port_id...");
#endif
    [[self portUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}port_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}port_id."];
    }
  }
  if ([self tenantUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tenant_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tenant_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tenant_id...");
#endif
    [[self tenantUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tenant_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tenant_id."];
    }
  }
  if ([self floatingNetworkUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "floating_network_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}floating_network_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}floating_network_id...");
#endif
    [[self floatingNetworkUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}floating_network_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}floating_network_id."];
    }
  }
  if ([self floatingIPUUID]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self floatingIPUUID] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self fixedIPAddress]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "fixed_ip_address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}fixed_ip_address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}fixed_ip_address...");
#endif
    [[self fixedIPAddress] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}fixed_ip_address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}fixed_ip_address."];
    }
  }
}
@end /* implementation FULLNS0NeutronFloatingIP (JAXB) */

#endif /* DEF_FULLNS0NeutronFloatingIP_M */
