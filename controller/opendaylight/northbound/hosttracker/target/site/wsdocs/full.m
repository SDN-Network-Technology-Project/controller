#import "full.h"
#ifndef DEF_FULLNS0Hosts_M
#define DEF_FULLNS0Hosts_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Hosts

/**
 * (no documentation provided)
 */
- (NSArray *) hostConfig
{
  return _hostConfig;
}

/**
 * (no documentation provided)
 */
- (void) setHostConfig: (NSArray *) newHostConfig
{
  [newHostConfig retain];
  [_hostConfig release];
  _hostConfig = newHostConfig;
}

- (void) dealloc
{
  [self setHostConfig: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Hosts *_fULLNS0Hosts;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Hosts = (FULLNS0Hosts *) [FULLNS0Hosts readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Hosts;
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
@end /* implementation FULLNS0Hosts */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Hosts (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Hosts (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Hosts (JAXB)

/**
 * Read an instance of FULLNS0Hosts from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Hosts defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Hosts *_fULLNS0Hosts = [[FULLNS0Hosts alloc] init];
  NS_DURING
  {
    [_fULLNS0Hosts initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Hosts = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Hosts autorelease];
  return _fULLNS0Hosts;
}

/**
 * Initialize this instance of FULLNS0Hosts according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Hosts to the writer.
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
 * Reads a FULLNS0Hosts from an XML reader. The element to be read is
 * "list".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Hosts.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Hosts *_hosts = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element list."];
    }
  }

  if (xmlStrcmp(BAD_CAST "list", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}list.");
#endif
    _hosts = (FULLNS0Hosts *)[FULLNS0Hosts readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}list.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Hosts. Expected element list. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Hosts. Expected element list. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _hosts;
}

/**
 * Writes this FULLNS0Hosts to XML under element name "list".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _hosts The Hosts to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Hosts to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}list. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}hosts for root element {}list...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}hosts for root element {}list...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}list. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "hostConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}hostConfig of type {}hostConfig.");
#endif

    __child = [FULLNS0HostConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}hostConfig of type {}hostConfig.");
#endif

    if ([self hostConfig]) {
      [self setHostConfig: [[self hostConfig] arrayByAddingObject: __child]];
    }
    else {
      [self setHostConfig: [NSArray arrayWithObject: __child]];
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

  if ([self hostConfig]) {
    __enumerator = [[self hostConfig] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hostConfig", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}hostConfig."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}hostConfig...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}hostConfig...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}hostConfig."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0Hosts (JAXB) */

#endif /* DEF_FULLNS0Hosts_M */
#ifndef DEF_FULLNS0HostConfig_M
#define DEF_FULLNS0HostConfig_M

/**
 *  Configuration Java Object which represents a Host configuration information
 for HostTracker.

 */
@implementation FULLNS0HostConfig

/**
 * (no documentation provided)
 */
- (NSString *) dataLayerAddress
{
  return _dataLayerAddress;
}

/**
 * (no documentation provided)
 */
- (void) setDataLayerAddress: (NSString *) newDataLayerAddress
{
  [newDataLayerAddress retain];
  [_dataLayerAddress release];
  _dataLayerAddress = newDataLayerAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeType
{
  return _nodeType;
}

/**
 * (no documentation provided)
 */
- (void) setNodeType: (NSString *) newNodeType
{
  [newNodeType retain];
  [_nodeType release];
  _nodeType = newNodeType;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeId
{
  return _nodeId;
}

/**
 * (no documentation provided)
 */
- (void) setNodeId: (NSString *) newNodeId
{
  [newNodeId retain];
  [_nodeId release];
  _nodeId = newNodeId;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorType
{
  return _nodeConnectorType;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorType: (NSString *) newNodeConnectorType
{
  [newNodeConnectorType retain];
  [_nodeConnectorType release];
  _nodeConnectorType = newNodeConnectorType;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorId
{
  return _nodeConnectorId;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorId: (NSString *) newNodeConnectorId
{
  [newNodeConnectorId retain];
  [_nodeConnectorId release];
  _nodeConnectorId = newNodeConnectorId;
}

/**
 * (no documentation provided)
 */
- (NSString *) vlan
{
  return _vlan;
}

/**
 * (no documentation provided)
 */
- (void) setVlan: (NSString *) newVlan
{
  [newVlan retain];
  [_vlan release];
  _vlan = newVlan;
}

/**
 * (no documentation provided)
 */
- (BOOL) staticHost
{
  return _staticHost;
}

/**
 * (no documentation provided)
 */
- (void) setStaticHost: (BOOL) newStaticHost
{
  _staticHost = newStaticHost;
}

/**
 * (no documentation provided)
 */
- (NSString *) networkAddress
{
  return _networkAddress;
}

/**
 * (no documentation provided)
 */
- (void) setNetworkAddress: (NSString *) newNetworkAddress
{
  [newNetworkAddress retain];
  [_networkAddress release];
  _networkAddress = newNetworkAddress;
}

- (void) dealloc
{
  [self setDataLayerAddress: nil];
  [self setNodeType: nil];
  [self setNodeId: nil];
  [self setNodeConnectorType: nil];
  [self setNodeConnectorId: nil];
  [self setVlan: nil];
  [self setNetworkAddress: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0HostConfig *_fULLNS0HostConfig;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0HostConfig = (FULLNS0HostConfig *) [FULLNS0HostConfig readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0HostConfig;
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
@end /* implementation FULLNS0HostConfig */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0HostConfig (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0HostConfig (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0HostConfig (JAXB)

/**
 * Read an instance of FULLNS0HostConfig from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0HostConfig defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0HostConfig *_fULLNS0HostConfig = [[FULLNS0HostConfig alloc] init];
  NS_DURING
  {
    [_fULLNS0HostConfig initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0HostConfig = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0HostConfig autorelease];
  return _fULLNS0HostConfig;
}

/**
 * Initialize this instance of FULLNS0HostConfig according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0HostConfig to the writer.
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
 * Reads a FULLNS0HostConfig from an XML reader. The element to be read is
 * "hostConfig".
 *
 * @param reader The XML reader.
 * @return The FULLNS0HostConfig.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0HostConfig *_hostConfig = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element hostConfig."];
    }
  }

  if (xmlStrcmp(BAD_CAST "hostConfig", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}hostConfig.");
#endif
    _hostConfig = (FULLNS0HostConfig *)[FULLNS0HostConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}hostConfig.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0HostConfig. Expected element hostConfig. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0HostConfig. Expected element hostConfig. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _hostConfig;
}

/**
 * Writes this FULLNS0HostConfig to XML under element name "hostConfig".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _hostConfig The HostConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0HostConfig to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hostConfig", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}hostConfig. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}hostConfig for root element {}hostConfig...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}hostConfig for root element {}hostConfig...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}hostConfig. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "dataLayerAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dataLayerAddress of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dataLayerAddress of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDataLayerAddress: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNodeType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNodeId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectorType", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeConnectorType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeConnectorType of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNodeConnectorType: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectorId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeConnectorId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeConnectorId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNodeConnectorId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "vlan", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}vlan of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}vlan of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setVlan: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "staticHost", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setStaticHost: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "networkAddress", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}networkAddress of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNetworkAddress: __child];
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

  if ([self dataLayerAddress]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dataLayerAddress", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dataLayerAddress."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dataLayerAddress...");
#endif
    [[self dataLayerAddress] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dataLayerAddress...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dataLayerAddress."];
    }
  }
  if ([self nodeType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeType...");
#endif
    [[self nodeType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeType."];
    }
  }
  if ([self nodeId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeId...");
#endif
    [[self nodeId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeId."];
    }
  }
  if ([self nodeConnectorType]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorType", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeConnectorType."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeConnectorType...");
#endif
    [[self nodeConnectorType] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeConnectorType...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeConnectorType."];
    }
  }
  if ([self nodeConnectorId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeConnectorId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeConnectorId...");
#endif
    [[self nodeConnectorId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeConnectorId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeConnectorId."];
    }
  }
  if ([self vlan]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "vlan", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}vlan."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}vlan...");
#endif
    [[self vlan] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}vlan...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}vlan."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "staticHost", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}staticHost."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}staticHost...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_staticHost);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}staticHost...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}staticHost."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}staticHost."];
    }
  }
  if ([self networkAddress]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "networkAddress", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}networkAddress."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}networkAddress...");
#endif
    [[self networkAddress] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}networkAddress...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}networkAddress."];
    }
  }
}
@end /* implementation FULLNS0HostConfig (JAXB) */

#endif /* DEF_FULLNS0HostConfig_M */
