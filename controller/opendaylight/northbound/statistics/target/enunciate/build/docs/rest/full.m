#import "full.h"
#ifndef DEF_FULLNS0Node_M
#define DEF_FULLNS0Node_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Node

/**
 * (no documentation provided)
 */
- (NSString *) type
{
  return _type;
}

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType
{
  [newType retain];
  [_type release];
  _type = newType;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeIDString
{
  return _nodeIDString;
}

/**
 * (no documentation provided)
 */
- (void) setNodeIDString: (NSString *) newNodeIDString
{
  [newNodeIDString retain];
  [_nodeIDString release];
  _nodeIDString = newNodeIDString;
}

- (void) dealloc
{
  [self setType: nil];
  [self setNodeIDString: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Node *_fULLNS0Node;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Node = (FULLNS0Node *) [FULLNS0Node readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Node;
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
@end /* implementation FULLNS0Node */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Node (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Node (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Node (JAXB)

/**
 * Read an instance of FULLNS0Node from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Node defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Node *_fULLNS0Node = [[FULLNS0Node alloc] init];
  NS_DURING
  {
    [_fULLNS0Node initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Node = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Node autorelease];
  return _fULLNS0Node;
}

/**
 * Initialize this instance of FULLNS0Node according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Node to the writer.
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
 * Reads a FULLNS0Node from an XML reader. The element to be read is
 * "node".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Node.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Node *_node = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element node."];
    }
  }

  if (xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}node.");
#endif
    _node = (FULLNS0Node *)[FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}node.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Node. Expected element node. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Node. Expected element node. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _node;
}

/**
 * Writes this FULLNS0Node to XML under element name "node".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _node The Node to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Node to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}node. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}node for root element {}node...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}node for root element {}node...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}node. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setType: __child];
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

    [self setNodeIDString: __child];
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

  if ([self type]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}type...");
#endif
    [[self type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}type...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}type."];
    }
  }
  if ([self nodeIDString]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self nodeIDString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
}
@end /* implementation FULLNS0Node (JAXB) */

#endif /* DEF_FULLNS0Node_M */
#ifndef DEF_FULLNS0NodeTable_M
#define DEF_FULLNS0NodeTable_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeTable

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) nodeTableNode
{
  return _nodeTableNode;
}

/**
 * (no documentation provided)
 */
- (void) setNodeTableNode: (FULLNS0Node *) newNodeTableNode
{
  [newNodeTableNode retain];
  [_nodeTableNode release];
  _nodeTableNode = newNodeTableNode;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeTableIDString
{
  return _nodeTableIDString;
}

/**
 * (no documentation provided)
 */
- (void) setNodeTableIDString: (NSString *) newNodeTableIDString
{
  [newNodeTableIDString retain];
  [_nodeTableIDString release];
  _nodeTableIDString = newNodeTableIDString;
}

- (void) dealloc
{
  [self setNodeTableNode: nil];
  [self setNodeTableIDString: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeTable *_fULLNS0NodeTable;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeTable = (FULLNS0NodeTable *) [FULLNS0NodeTable readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeTable;
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
@end /* implementation FULLNS0NodeTable */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeTable (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeTable (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeTable (JAXB)

/**
 * Read an instance of FULLNS0NodeTable from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeTable defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeTable *_fULLNS0NodeTable = [[FULLNS0NodeTable alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeTable initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeTable = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeTable autorelease];
  return _fULLNS0NodeTable;
}

/**
 * Initialize this instance of FULLNS0NodeTable according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeTable to the writer.
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
 * Reads a FULLNS0NodeTable from an XML reader. The element to be read is
 * "nodeTable".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeTable.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeTable *_nodeTable = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeTable."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeTable.");
#endif
    _nodeTable = (FULLNS0NodeTable *)[FULLNS0NodeTable readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeTable.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTable. Expected element nodeTable. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTable. Expected element nodeTable. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeTable;
}

/**
 * Writes this FULLNS0NodeTable to XML under element name "nodeTable".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeTable The NodeTable to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeTable to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeTable. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeTable for root element {}nodeTable...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeTable for root element {}nodeTable...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeTable. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNodeTableNode: __child];
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

    [self setNodeTableIDString: __child];
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

  if ([self nodeTableNode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self nodeTableNode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self nodeTableIDString]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self nodeTableIDString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
}
@end /* implementation FULLNS0NodeTable (JAXB) */

#endif /* DEF_FULLNS0NodeTable_M */
#ifndef DEF_FULLNS0Match_M
#define DEF_FULLNS0Match_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Match

/**
 * (no documentation provided)
 */
- (NSArray *) matchFields
{
  return _matchFields;
}

/**
 * (no documentation provided)
 */
- (void) setMatchFields: (NSArray *) newMatchFields
{
  [newMatchFields retain];
  [_matchFields release];
  _matchFields = newMatchFields;
}

- (void) dealloc
{
  [self setMatchFields: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Match *_fULLNS0Match;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Match = (FULLNS0Match *) [FULLNS0Match readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Match;
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
@end /* implementation FULLNS0Match */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Match (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Match (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Match (JAXB)

/**
 * Read an instance of FULLNS0Match from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Match defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Match *_fULLNS0Match = [[FULLNS0Match alloc] init];
  NS_DURING
  {
    [_fULLNS0Match initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Match = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Match autorelease];
  return _fULLNS0Match;
}

/**
 * Initialize this instance of FULLNS0Match according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Match to the writer.
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
 * Reads a FULLNS0Match from an XML reader. The element to be read is
 * "match".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Match.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Match *_match = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element match."];
    }
  }

  if (xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}match.");
#endif
    _match = (FULLNS0Match *)[FULLNS0Match readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}match.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Match. Expected element match. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Match. Expected element match. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _match;
}

/**
 * Writes this FULLNS0Match to XML under element name "match".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _match The Match to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Match to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}match. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}match for root element {}match...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}match for root element {}match...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}match. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}matchField of type {}matchField.");
#endif

    __child = [FULLNS0MatchField readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}matchField of type {}matchField.");
#endif

    if ([self matchFields]) {
      [self setMatchFields: [[self matchFields] arrayByAddingObject: __child]];
    }
    else {
      [self setMatchFields: [NSArray arrayWithObject: __child]];
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

  if ([self matchFields]) {
    __enumerator = [[self matchFields] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}matchField."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}matchField...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}matchField...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}matchField."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0Match (JAXB) */

#endif /* DEF_FULLNS0Match_M */
#ifndef DEF_FULLNS0FlowOnNode_M
#define DEF_FULLNS0FlowOnNode_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0FlowOnNode

/**
 * (no documentation provided)
 */
- (long) packetCount
{
  return _packetCount;
}

/**
 * (no documentation provided)
 */
- (void) setPacketCount: (long) newPacketCount
{
  _packetCount = newPacketCount;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Flow *) flow
{
  return _flow;
}

/**
 * (no documentation provided)
 */
- (void) setFlow: (FULLNS0Flow *) newFlow
{
  [newFlow retain];
  [_flow release];
  _flow = newFlow;
}

/**
 * (no documentation provided)
 */
- (unsigned char) tableId
{
  return _tableId;
}

/**
 * (no documentation provided)
 */
- (void) setTableId: (unsigned char) newTableId
{
  _tableId = newTableId;
}

/**
 * (no documentation provided)
 */
- (long) byteCount
{
  return _byteCount;
}

/**
 * (no documentation provided)
 */
- (void) setByteCount: (long) newByteCount
{
  _byteCount = newByteCount;
}

/**
 * (no documentation provided)
 */
- (int) durationNanoseconds
{
  return _durationNanoseconds;
}

/**
 * (no documentation provided)
 */
- (void) setDurationNanoseconds: (int) newDurationNanoseconds
{
  _durationNanoseconds = newDurationNanoseconds;
}

/**
 * (no documentation provided)
 */
- (int) durationSeconds
{
  return _durationSeconds;
}

/**
 * (no documentation provided)
 */
- (void) setDurationSeconds: (int) newDurationSeconds
{
  _durationSeconds = newDurationSeconds;
}

- (void) dealloc
{
  [self setFlow: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0FlowOnNode *_fULLNS0FlowOnNode;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0FlowOnNode = (FULLNS0FlowOnNode *) [FULLNS0FlowOnNode readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0FlowOnNode;
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
@end /* implementation FULLNS0FlowOnNode */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0FlowOnNode (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0FlowOnNode (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0FlowOnNode (JAXB)

/**
 * Read an instance of FULLNS0FlowOnNode from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0FlowOnNode defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0FlowOnNode *_fULLNS0FlowOnNode = [[FULLNS0FlowOnNode alloc] init];
  NS_DURING
  {
    [_fULLNS0FlowOnNode initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0FlowOnNode = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0FlowOnNode autorelease];
  return _fULLNS0FlowOnNode;
}

/**
 * Initialize this instance of FULLNS0FlowOnNode according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0FlowOnNode to the writer.
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
 * Reads a FULLNS0FlowOnNode from an XML reader. The element to be read is
 * "FlowStat".
 *
 * @param reader The XML reader.
 * @return The FULLNS0FlowOnNode.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0FlowOnNode *_flowOnNode = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element FlowStat."];
    }
  }

  if (xmlStrcmp(BAD_CAST "FlowStat", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}FlowStat.");
#endif
    _flowOnNode = (FULLNS0FlowOnNode *)[FULLNS0FlowOnNode readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}FlowStat.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowOnNode. Expected element FlowStat. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowOnNode. Expected element FlowStat. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flowOnNode;
}

/**
 * Writes this FULLNS0FlowOnNode to XML under element name "FlowStat".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flowOnNode The FlowOnNode to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0FlowOnNode to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "FlowStat", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}FlowStat. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flowOnNode for root element {}FlowStat...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flowOnNode for root element {}FlowStat...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}FlowStat. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "packetCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPacketCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flow of type {}flow.");
#endif
    __child = [FULLNS0Flow readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flow of type {}flow.");
#endif

    [self setFlow: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tableId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadByteType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTableId: *((unsigned char*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "byteCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setByteCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "durationNanoseconds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setDurationNanoseconds: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "durationSeconds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setDurationSeconds: *((int*) _child_accessor)];
    free(_child_accessor);
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

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "packetCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}packetCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}packetCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_packetCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}packetCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}packetCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}packetCount."];
    }
  }
  if ([self flow]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}flow."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}flow...");
#endif
    [[self flow] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}flow...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}flow."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tableId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tableId...");
#endif
    status = xmlTextWriterWriteByteType(writer, &_tableId);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tableId...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}tableId."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tableId."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "byteCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}byteCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}byteCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_byteCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}byteCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}byteCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}byteCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationNanoseconds", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}durationNanoseconds."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}durationNanoseconds...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_durationNanoseconds);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}durationNanoseconds...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}durationNanoseconds."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}durationNanoseconds."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "durationSeconds", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}durationSeconds."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}durationSeconds...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_durationSeconds);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}durationSeconds...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}durationSeconds."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}durationSeconds."];
    }
  }
}
@end /* implementation FULLNS0FlowOnNode (JAXB) */

#endif /* DEF_FULLNS0FlowOnNode_M */
#ifndef DEF_FULLNS0NodeTableStatistics_M
#define DEF_FULLNS0NodeTableStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeTableStatistics

/**
 * (no documentation provided)
 */
- (int) maximumEntries
{
  return _maximumEntries;
}

/**
 * (no documentation provided)
 */
- (void) setMaximumEntries: (int) newMaximumEntries
{
  _maximumEntries = newMaximumEntries;
}

/**
 * (no documentation provided)
 */
- (int) activeCount
{
  return _activeCount;
}

/**
 * (no documentation provided)
 */
- (void) setActiveCount: (int) newActiveCount
{
  _activeCount = newActiveCount;
}

/**
 * (no documentation provided)
 */
- (long) lookupCount
{
  return _lookupCount;
}

/**
 * (no documentation provided)
 */
- (void) setLookupCount: (long) newLookupCount
{
  _lookupCount = newLookupCount;
}

/**
 * (no documentation provided)
 */
- (long) matchedCount
{
  return _matchedCount;
}

/**
 * (no documentation provided)
 */
- (void) setMatchedCount: (long) newMatchedCount
{
  _matchedCount = newMatchedCount;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeTable *) nodeTable
{
  return _nodeTable;
}

/**
 * (no documentation provided)
 */
- (void) setNodeTable: (FULLNS0NodeTable *) newNodeTable
{
  [newNodeTable retain];
  [_nodeTable release];
  _nodeTable = newNodeTable;
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
  [self setNodeTable: nil];
  [self setName: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeTableStatistics *_fULLNS0NodeTableStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeTableStatistics = (FULLNS0NodeTableStatistics *) [FULLNS0NodeTableStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeTableStatistics;
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
@end /* implementation FULLNS0NodeTableStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeTableStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeTableStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeTableStatistics (JAXB)

/**
 * Read an instance of FULLNS0NodeTableStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeTableStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeTableStatistics *_fULLNS0NodeTableStatistics = [[FULLNS0NodeTableStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeTableStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeTableStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeTableStatistics autorelease];
  return _fULLNS0NodeTableStatistics;
}

/**
 * Initialize this instance of FULLNS0NodeTableStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeTableStatistics to the writer.
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
 * Reads a FULLNS0NodeTableStatistics from an XML reader. The element to be read is
 * "nodeTableStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeTableStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeTableStatistics *_nodeTableStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeTableStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeTableStatistics.");
#endif
    _nodeTableStatistics = (FULLNS0NodeTableStatistics *)[FULLNS0NodeTableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeTableStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTableStatistics. Expected element nodeTableStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeTableStatistics. Expected element nodeTableStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeTableStatistics;
}

/**
 * Writes this FULLNS0NodeTableStatistics to XML under element name "nodeTableStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeTableStatistics The NodeTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeTableStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTableStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeTableStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeTableStatistics for root element {}nodeTableStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeTableStatistics for root element {}nodeTableStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeTableStatistics. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "maximumEntries", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setMaximumEntries: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "activeCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadIntType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setActiveCount: *((int*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lookupCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setLookupCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "matchedCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setMatchedCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeTable", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeTable of type {}nodeTable.");
#endif
    __child = [FULLNS0NodeTable readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeTable of type {}nodeTable.");
#endif

    [self setNodeTable: __child];
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

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "maximumEntries", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}maximumEntries."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}maximumEntries...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_maximumEntries);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}maximumEntries...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}maximumEntries."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}maximumEntries."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "activeCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}activeCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}activeCount...");
#endif
    status = xmlTextWriterWriteIntType(writer, &_activeCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}activeCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}activeCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}activeCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lookupCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lookupCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lookupCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_lookupCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lookupCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}lookupCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lookupCount."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchedCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}matchedCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}matchedCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_matchedCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}matchedCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}matchedCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}matchedCount."];
    }
  }
  if ([self nodeTable]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTable", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeTable."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeTable...");
#endif
    [[self nodeTable] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeTable...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeTable."];
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
@end /* implementation FULLNS0NodeTableStatistics (JAXB) */

#endif /* DEF_FULLNS0NodeTableStatistics_M */
#ifndef DEF_FULLNS0AllPortStatistics_M
#define DEF_FULLNS0AllPortStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0AllPortStatistics

/**
 * (no documentation provided)
 */
- (NSArray *) portStatistics
{
  return _portStatistics;
}

/**
 * (no documentation provided)
 */
- (void) setPortStatistics: (NSArray *) newPortStatistics
{
  [newPortStatistics retain];
  [_portStatistics release];
  _portStatistics = newPortStatistics;
}

- (void) dealloc
{
  [self setPortStatistics: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0AllPortStatistics *_fULLNS0AllPortStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0AllPortStatistics = (FULLNS0AllPortStatistics *) [FULLNS0AllPortStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0AllPortStatistics;
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
@end /* implementation FULLNS0AllPortStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0AllPortStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0AllPortStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0AllPortStatistics (JAXB)

/**
 * Read an instance of FULLNS0AllPortStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0AllPortStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0AllPortStatistics *_fULLNS0AllPortStatistics = [[FULLNS0AllPortStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0AllPortStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0AllPortStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0AllPortStatistics autorelease];
  return _fULLNS0AllPortStatistics;
}

/**
 * Initialize this instance of FULLNS0AllPortStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0AllPortStatistics to the writer.
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
 * Reads a FULLNS0AllPortStatistics from an XML reader. The element to be read is
 * "list".
 *
 * @param reader The XML reader.
 * @return The FULLNS0AllPortStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0AllPortStatistics *_allPortStatistics = nil;

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
    _allPortStatistics = (FULLNS0AllPortStatistics *)[FULLNS0AllPortStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}list.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllPortStatistics. Expected element list. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllPortStatistics. Expected element list. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _allPortStatistics;
}

/**
 * Writes this FULLNS0AllPortStatistics to XML under element name "list".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _allPortStatistics The AllPortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0AllPortStatistics to an XML writer.
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
  NSLog(@"writing type {}allPortStatistics for root element {}list...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}allPortStatistics for root element {}list...");
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
    && xmlStrcmp(BAD_CAST "portStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}portStatistics of type {}portStatistics.");
#endif

    __child = [FULLNS0PortStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}portStatistics of type {}portStatistics.");
#endif

    if ([self portStatistics]) {
      [self setPortStatistics: [[self portStatistics] arrayByAddingObject: __child]];
    }
    else {
      [self setPortStatistics: [NSArray arrayWithObject: __child]];
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

  if ([self portStatistics]) {
    __enumerator = [[self portStatistics] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistics", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}portStatistics."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}portStatistics...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}portStatistics...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}portStatistics."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0AllPortStatistics (JAXB) */

#endif /* DEF_FULLNS0AllPortStatistics_M */
#ifndef DEF_FULLNS0FlowStatistics_M
#define DEF_FULLNS0FlowStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0FlowStatistics

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node
{
  return _node;
}

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode
{
  [newNode retain];
  [_node release];
  _node = newNode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) flowStatistic
{
  return _flowStatistic;
}

/**
 * (no documentation provided)
 */
- (void) setFlowStatistic: (NSArray *) newFlowStatistic
{
  [newFlowStatistic retain];
  [_flowStatistic release];
  _flowStatistic = newFlowStatistic;
}

- (void) dealloc
{
  [self setNode: nil];
  [self setFlowStatistic: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0FlowStatistics *_fULLNS0FlowStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0FlowStatistics = (FULLNS0FlowStatistics *) [FULLNS0FlowStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0FlowStatistics;
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
@end /* implementation FULLNS0FlowStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0FlowStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0FlowStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0FlowStatistics (JAXB)

/**
 * Read an instance of FULLNS0FlowStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0FlowStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0FlowStatistics *_fULLNS0FlowStatistics = [[FULLNS0FlowStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0FlowStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0FlowStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0FlowStatistics autorelease];
  return _fULLNS0FlowStatistics;
}

/**
 * Initialize this instance of FULLNS0FlowStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0FlowStatistics to the writer.
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
 * Reads a FULLNS0FlowStatistics from an XML reader. The element to be read is
 * "nodeFlowStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0FlowStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0FlowStatistics *_flowStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeFlowStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeFlowStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeFlowStatistics.");
#endif
    _flowStatistics = (FULLNS0FlowStatistics *)[FULLNS0FlowStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeFlowStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowStatistics. Expected element nodeFlowStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowStatistics. Expected element nodeFlowStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flowStatistics;
}

/**
 * Writes this FULLNS0FlowStatistics to XML under element name "nodeFlowStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flowStatistics The FlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0FlowStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeFlowStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeFlowStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flowStatistics for root element {}nodeFlowStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flowStatistics for root element {}nodeFlowStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeFlowStatistics. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flowStatistic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flowStatistic of type {}flowOnNode.");
#endif

    __child = [FULLNS0FlowOnNode readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flowStatistic of type {}flowOnNode.");
#endif

    if ([self flowStatistic]) {
      [self setFlowStatistic: [[self flowStatistic] arrayByAddingObject: __child]];
    }
    else {
      [self setFlowStatistic: [NSArray arrayWithObject: __child]];
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

  if ([self node]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self node] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self flowStatistic]) {
    __enumerator = [[self flowStatistic] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistic", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}flowStatistic."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}flowStatistic...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}flowStatistic...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}flowStatistic."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0FlowStatistics (JAXB) */

#endif /* DEF_FULLNS0FlowStatistics_M */
#ifndef DEF_FULLNS0TableStatistics_M
#define DEF_FULLNS0TableStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0TableStatistics

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node
{
  return _node;
}

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode
{
  [newNode retain];
  [_node release];
  _node = newNode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) tableStatistic
{
  return _tableStatistic;
}

/**
 * (no documentation provided)
 */
- (void) setTableStatistic: (NSArray *) newTableStatistic
{
  [newTableStatistic retain];
  [_tableStatistic release];
  _tableStatistic = newTableStatistic;
}

- (void) dealloc
{
  [self setNode: nil];
  [self setTableStatistic: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0TableStatistics *_fULLNS0TableStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0TableStatistics = (FULLNS0TableStatistics *) [FULLNS0TableStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0TableStatistics;
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
@end /* implementation FULLNS0TableStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0TableStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0TableStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0TableStatistics (JAXB)

/**
 * Read an instance of FULLNS0TableStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0TableStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0TableStatistics *_fULLNS0TableStatistics = [[FULLNS0TableStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0TableStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0TableStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0TableStatistics autorelease];
  return _fULLNS0TableStatistics;
}

/**
 * Initialize this instance of FULLNS0TableStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0TableStatistics to the writer.
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
 * Reads a FULLNS0TableStatistics from an XML reader. The element to be read is
 * "nodeTableStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0TableStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0TableStatistics *_tableStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeTableStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeTableStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeTableStatistics.");
#endif
    _tableStatistics = (FULLNS0TableStatistics *)[FULLNS0TableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeTableStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0TableStatistics. Expected element nodeTableStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0TableStatistics. Expected element nodeTableStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tableStatistics;
}

/**
 * Writes this FULLNS0TableStatistics to XML under element name "nodeTableStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tableStatistics The TableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0TableStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeTableStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeTableStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}tableStatistics for root element {}nodeTableStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}tableStatistics for root element {}nodeTableStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeTableStatistics. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tableStatistic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tableStatistic of type {}nodeTableStatistics.");
#endif

    __child = [FULLNS0NodeTableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tableStatistic of type {}nodeTableStatistics.");
#endif

    if ([self tableStatistic]) {
      [self setTableStatistic: [[self tableStatistic] arrayByAddingObject: __child]];
    }
    else {
      [self setTableStatistic: [NSArray arrayWithObject: __child]];
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

  if ([self node]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self node] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self tableStatistic]) {
    __enumerator = [[self tableStatistic] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistic", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}tableStatistic."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}tableStatistic...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}tableStatistic...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}tableStatistic."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0TableStatistics (JAXB) */

#endif /* DEF_FULLNS0TableStatistics_M */
#ifndef DEF_FULLNS0PortStatistics_M
#define DEF_FULLNS0PortStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0PortStatistics

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) node
{
  return _node;
}

/**
 * (no documentation provided)
 */
- (void) setNode: (FULLNS0Node *) newNode
{
  [newNode retain];
  [_node release];
  _node = newNode;
}

/**
 * (no documentation provided)
 */
- (NSArray *) portStatistic
{
  return _portStatistic;
}

/**
 * (no documentation provided)
 */
- (void) setPortStatistic: (NSArray *) newPortStatistic
{
  [newPortStatistic retain];
  [_portStatistic release];
  _portStatistic = newPortStatistic;
}

- (void) dealloc
{
  [self setNode: nil];
  [self setPortStatistic: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0PortStatistics *_fULLNS0PortStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0PortStatistics = (FULLNS0PortStatistics *) [FULLNS0PortStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0PortStatistics;
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
@end /* implementation FULLNS0PortStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0PortStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0PortStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0PortStatistics (JAXB)

/**
 * Read an instance of FULLNS0PortStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0PortStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0PortStatistics *_fULLNS0PortStatistics = [[FULLNS0PortStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0PortStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0PortStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0PortStatistics autorelease];
  return _fULLNS0PortStatistics;
}

/**
 * Initialize this instance of FULLNS0PortStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0PortStatistics to the writer.
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
 * Reads a FULLNS0PortStatistics from an XML reader. The element to be read is
 * "nodePortStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0PortStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0PortStatistics *_portStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodePortStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodePortStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodePortStatistics.");
#endif
    _portStatistics = (FULLNS0PortStatistics *)[FULLNS0PortStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodePortStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PortStatistics. Expected element nodePortStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0PortStatistics. Expected element nodePortStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _portStatistics;
}

/**
 * Writes this FULLNS0PortStatistics to XML under element name "nodePortStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _portStatistics The PortStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0PortStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodePortStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodePortStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}portStatistics for root element {}nodePortStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}portStatistics for root element {}nodePortStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodePortStatistics. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNode: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "portStatistic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}portStatistic of type {}nodeConnectorStatistics.");
#endif

    __child = [FULLNS0NodeConnectorStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}portStatistic of type {}nodeConnectorStatistics.");
#endif

    if ([self portStatistic]) {
      [self setPortStatistic: [[self portStatistic] arrayByAddingObject: __child]];
    }
    else {
      [self setPortStatistic: [NSArray arrayWithObject: __child]];
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

  if ([self node]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self node] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self portStatistic]) {
    __enumerator = [[self portStatistic] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "portStatistic", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}portStatistic."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}portStatistic...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}portStatistic...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}portStatistic."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0PortStatistics (JAXB) */

#endif /* DEF_FULLNS0PortStatistics_M */
#ifndef DEF_FULLNS0AllTableStatistics_M
#define DEF_FULLNS0AllTableStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0AllTableStatistics

/**
 * (no documentation provided)
 */
- (NSArray *) tableStatistics
{
  return _tableStatistics;
}

/**
 * (no documentation provided)
 */
- (void) setTableStatistics: (NSArray *) newTableStatistics
{
  [newTableStatistics retain];
  [_tableStatistics release];
  _tableStatistics = newTableStatistics;
}

- (void) dealloc
{
  [self setTableStatistics: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0AllTableStatistics *_fULLNS0AllTableStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0AllTableStatistics = (FULLNS0AllTableStatistics *) [FULLNS0AllTableStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0AllTableStatistics;
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
@end /* implementation FULLNS0AllTableStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0AllTableStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0AllTableStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0AllTableStatistics (JAXB)

/**
 * Read an instance of FULLNS0AllTableStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0AllTableStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0AllTableStatistics *_fULLNS0AllTableStatistics = [[FULLNS0AllTableStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0AllTableStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0AllTableStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0AllTableStatistics autorelease];
  return _fULLNS0AllTableStatistics;
}

/**
 * Initialize this instance of FULLNS0AllTableStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0AllTableStatistics to the writer.
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
 * Reads a FULLNS0AllTableStatistics from an XML reader. The element to be read is
 * "list".
 *
 * @param reader The XML reader.
 * @return The FULLNS0AllTableStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0AllTableStatistics *_allTableStatistics = nil;

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
    _allTableStatistics = (FULLNS0AllTableStatistics *)[FULLNS0AllTableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}list.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllTableStatistics. Expected element list. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllTableStatistics. Expected element list. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _allTableStatistics;
}

/**
 * Writes this FULLNS0AllTableStatistics to XML under element name "list".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _allTableStatistics The AllTableStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0AllTableStatistics to an XML writer.
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
  NSLog(@"writing type {}allTableStatistics for root element {}list...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}allTableStatistics for root element {}list...");
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
    && xmlStrcmp(BAD_CAST "tableStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tableStatistics of type {}tableStatistics.");
#endif

    __child = [FULLNS0TableStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tableStatistics of type {}tableStatistics.");
#endif

    if ([self tableStatistics]) {
      [self setTableStatistics: [[self tableStatistics] arrayByAddingObject: __child]];
    }
    else {
      [self setTableStatistics: [NSArray arrayWithObject: __child]];
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

  if ([self tableStatistics]) {
    __enumerator = [[self tableStatistics] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tableStatistics", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}tableStatistics."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}tableStatistics...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}tableStatistics...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}tableStatistics."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0AllTableStatistics (JAXB) */

#endif /* DEF_FULLNS0AllTableStatistics_M */
#ifndef DEF_FULLNS0AllFlowStatistics_M
#define DEF_FULLNS0AllFlowStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0AllFlowStatistics

/**
 * (no documentation provided)
 */
- (NSArray *) flowStatistics
{
  return _flowStatistics;
}

/**
 * (no documentation provided)
 */
- (void) setFlowStatistics: (NSArray *) newFlowStatistics
{
  [newFlowStatistics retain];
  [_flowStatistics release];
  _flowStatistics = newFlowStatistics;
}

- (void) dealloc
{
  [self setFlowStatistics: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0AllFlowStatistics *_fULLNS0AllFlowStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0AllFlowStatistics = (FULLNS0AllFlowStatistics *) [FULLNS0AllFlowStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0AllFlowStatistics;
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
@end /* implementation FULLNS0AllFlowStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0AllFlowStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0AllFlowStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0AllFlowStatistics (JAXB)

/**
 * Read an instance of FULLNS0AllFlowStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0AllFlowStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0AllFlowStatistics *_fULLNS0AllFlowStatistics = [[FULLNS0AllFlowStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0AllFlowStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0AllFlowStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0AllFlowStatistics autorelease];
  return _fULLNS0AllFlowStatistics;
}

/**
 * Initialize this instance of FULLNS0AllFlowStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0AllFlowStatistics to the writer.
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
 * Reads a FULLNS0AllFlowStatistics from an XML reader. The element to be read is
 * "list".
 *
 * @param reader The XML reader.
 * @return The FULLNS0AllFlowStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0AllFlowStatistics *_allFlowStatistics = nil;

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
    _allFlowStatistics = (FULLNS0AllFlowStatistics *)[FULLNS0AllFlowStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}list.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllFlowStatistics. Expected element list. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0AllFlowStatistics. Expected element list. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _allFlowStatistics;
}

/**
 * Writes this FULLNS0AllFlowStatistics to XML under element name "list".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _allFlowStatistics The AllFlowStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0AllFlowStatistics to an XML writer.
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
  NSLog(@"writing type {}allFlowStatistics for root element {}list...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}allFlowStatistics for root element {}list...");
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
    && xmlStrcmp(BAD_CAST "flowStatistics", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flowStatistics of type {}flowStatistics.");
#endif

    __child = [FULLNS0FlowStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flowStatistics of type {}flowStatistics.");
#endif

    if ([self flowStatistics]) {
      [self setFlowStatistics: [[self flowStatistics] arrayByAddingObject: __child]];
    }
    else {
      [self setFlowStatistics: [NSArray arrayWithObject: __child]];
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

  if ([self flowStatistics]) {
    __enumerator = [[self flowStatistics] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowStatistics", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}flowStatistics."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}flowStatistics...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}flowStatistics...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}flowStatistics."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0AllFlowStatistics (JAXB) */

#endif /* DEF_FULLNS0AllFlowStatistics_M */
#ifndef DEF_FULLNS0NodeConnectorStatistics_M
#define DEF_FULLNS0NodeConnectorStatistics_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeConnectorStatistics

/**
 * (no documentation provided)
 */
- (long) receiveDrops
{
  return _receiveDrops;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveDrops: (long) newReceiveDrops
{
  _receiveDrops = newReceiveDrops;
}

/**
 * (no documentation provided)
 */
- (long) receiveFrameError
{
  return _receiveFrameError;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveFrameError: (long) newReceiveFrameError
{
  _receiveFrameError = newReceiveFrameError;
}

/**
 * (no documentation provided)
 */
- (long) receiveErrors
{
  return _receiveErrors;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveErrors: (long) newReceiveErrors
{
  _receiveErrors = newReceiveErrors;
}

/**
 * (no documentation provided)
 */
- (long) receivePackets
{
  return _receivePackets;
}

/**
 * (no documentation provided)
 */
- (void) setReceivePackets: (long) newReceivePackets
{
  _receivePackets = newReceivePackets;
}

/**
 * (no documentation provided)
 */
- (long) receiveBytes
{
  return _receiveBytes;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveBytes: (long) newReceiveBytes
{
  _receiveBytes = newReceiveBytes;
}

/**
 * (no documentation provided)
 */
- (long) receiveCrcError
{
  return _receiveCrcError;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveCrcError: (long) newReceiveCrcError
{
  _receiveCrcError = newReceiveCrcError;
}

/**
 * (no documentation provided)
 */
- (long) transmitPackets
{
  return _transmitPackets;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitPackets: (long) newTransmitPackets
{
  _transmitPackets = newTransmitPackets;
}

/**
 * (no documentation provided)
 */
- (long) receiveOverRunError
{
  return _receiveOverRunError;
}

/**
 * (no documentation provided)
 */
- (void) setReceiveOverRunError: (long) newReceiveOverRunError
{
  _receiveOverRunError = newReceiveOverRunError;
}

/**
 * (no documentation provided)
 */
- (long) transmitErrors
{
  return _transmitErrors;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitErrors: (long) newTransmitErrors
{
  _transmitErrors = newTransmitErrors;
}

/**
 * (no documentation provided)
 */
- (long) transmitDrops
{
  return _transmitDrops;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitDrops: (long) newTransmitDrops
{
  _transmitDrops = newTransmitDrops;
}

/**
 * (no documentation provided)
 */
- (long) transmitBytes
{
  return _transmitBytes;
}

/**
 * (no documentation provided)
 */
- (void) setTransmitBytes: (long) newTransmitBytes
{
  _transmitBytes = newTransmitBytes;
}

/**
 * (no documentation provided)
 */
- (long) collisionCount
{
  return _collisionCount;
}

/**
 * (no documentation provided)
 */
- (void) setCollisionCount: (long) newCollisionCount
{
  _collisionCount = newCollisionCount;
}

/**
 * (no documentation provided)
 */
- (FULLNS0NodeConnector *) nodeConnector
{
  return _nodeConnector;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnector: (FULLNS0NodeConnector *) newNodeConnector
{
  [newNodeConnector retain];
  [_nodeConnector release];
  _nodeConnector = newNodeConnector;
}

- (void) dealloc
{
  [self setNodeConnector: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeConnectorStatistics *_fULLNS0NodeConnectorStatistics;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeConnectorStatistics = (FULLNS0NodeConnectorStatistics *) [FULLNS0NodeConnectorStatistics readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeConnectorStatistics;
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
@end /* implementation FULLNS0NodeConnectorStatistics */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeConnectorStatistics (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeConnectorStatistics (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeConnectorStatistics (JAXB)

/**
 * Read an instance of FULLNS0NodeConnectorStatistics from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeConnectorStatistics defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeConnectorStatistics *_fULLNS0NodeConnectorStatistics = [[FULLNS0NodeConnectorStatistics alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeConnectorStatistics initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeConnectorStatistics = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeConnectorStatistics autorelease];
  return _fULLNS0NodeConnectorStatistics;
}

/**
 * Initialize this instance of FULLNS0NodeConnectorStatistics according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeConnectorStatistics to the writer.
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
 * Reads a FULLNS0NodeConnectorStatistics from an XML reader. The element to be read is
 * "nodeConnectorStatistics".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeConnectorStatistics.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeConnectorStatistics *_nodeConnectorStatistics = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeConnectorStatistics."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeConnectorStatistics", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeConnectorStatistics.");
#endif
    _nodeConnectorStatistics = (FULLNS0NodeConnectorStatistics *)[FULLNS0NodeConnectorStatistics readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeConnectorStatistics.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectorStatistics. Expected element nodeConnectorStatistics. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnectorStatistics. Expected element nodeConnectorStatistics. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeConnectorStatistics;
}

/**
 * Writes this FULLNS0NodeConnectorStatistics to XML under element name "nodeConnectorStatistics".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeConnectorStatistics The NodeConnectorStatistics to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeConnectorStatistics to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectorStatistics", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeConnectorStatistics. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeConnectorStatistics for root element {}nodeConnectorStatistics...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeConnectorStatistics for root element {}nodeConnectorStatistics...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeConnectorStatistics. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "receiveDrops", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveDrops: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveFrameError", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveFrameError: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveErrors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveErrors: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receivePackets", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceivePackets: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveBytes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveBytes: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveCrcError", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveCrcError: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitPackets", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitPackets: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "receiveOverRunError", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReceiveOverRunError: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitErrors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitErrors: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitDrops", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitDrops: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "transmitBytes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setTransmitBytes: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "collisionCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setCollisionCount: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeConnector of type {}nodeConnector.");
#endif
    __child = [FULLNS0NodeConnector readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeConnector of type {}nodeConnector.");
#endif

    [self setNodeConnector: __child];
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

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveDrops", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveDrops."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveDrops...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveDrops);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveDrops...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveDrops."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveDrops."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveFrameError", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveFrameError."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveFrameError...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveFrameError);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveFrameError...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveFrameError."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveFrameError."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveErrors", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveErrors."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveErrors...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveErrors);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveErrors...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveErrors."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveErrors."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receivePackets", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receivePackets."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receivePackets...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receivePackets);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receivePackets...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receivePackets."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receivePackets."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveBytes", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveBytes."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveBytes...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveBytes);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveBytes...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveBytes."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveBytes."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveCrcError", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveCrcError."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveCrcError...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveCrcError);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveCrcError...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveCrcError."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveCrcError."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitPackets", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitPackets."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitPackets...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitPackets);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitPackets...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitPackets."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitPackets."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "receiveOverRunError", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}receiveOverRunError."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}receiveOverRunError...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_receiveOverRunError);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}receiveOverRunError...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}receiveOverRunError."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}receiveOverRunError."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitErrors", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitErrors."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitErrors...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitErrors);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitErrors...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitErrors."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitErrors."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitDrops", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitDrops."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitDrops...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitDrops);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitDrops...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitDrops."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitDrops."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "transmitBytes", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}transmitBytes."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}transmitBytes...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_transmitBytes);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}transmitBytes...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}transmitBytes."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}transmitBytes."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "collisionCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}collisionCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}collisionCount...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_collisionCount);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}collisionCount...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}collisionCount."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}collisionCount."];
    }
  }
  if ([self nodeConnector]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nodeConnector."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nodeConnector...");
#endif
    [[self nodeConnector] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nodeConnector...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nodeConnector."];
    }
  }
}
@end /* implementation FULLNS0NodeConnectorStatistics (JAXB) */

#endif /* DEF_FULLNS0NodeConnectorStatistics_M */
#ifndef DEF_FULLNS0MatchField_M
#define DEF_FULLNS0MatchField_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0MatchField

- (void) dealloc
{
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0MatchField *_fULLNS0MatchField;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0MatchField = (FULLNS0MatchField *) [FULLNS0MatchField readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0MatchField;
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
@end /* implementation FULLNS0MatchField */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0MatchField (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0MatchField (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0MatchField (JAXB)

/**
 * Read an instance of FULLNS0MatchField from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0MatchField defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0MatchField *_fULLNS0MatchField = [[FULLNS0MatchField alloc] init];
  NS_DURING
  {
    [_fULLNS0MatchField initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0MatchField = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0MatchField autorelease];
  return _fULLNS0MatchField;
}

/**
 * Initialize this instance of FULLNS0MatchField according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0MatchField to the writer.
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
 * Reads a FULLNS0MatchField from an XML reader. The element to be read is
 * "matchField".
 *
 * @param reader The XML reader.
 * @return The FULLNS0MatchField.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0MatchField *_matchField = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element matchField."];
    }
  }

  if (xmlStrcmp(BAD_CAST "matchField", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}matchField.");
#endif
    _matchField = (FULLNS0MatchField *)[FULLNS0MatchField readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}matchField.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0MatchField. Expected element matchField. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0MatchField. Expected element matchField. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _matchField;
}

/**
 * Writes this FULLNS0MatchField to XML under element name "matchField".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _matchField The MatchField to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0MatchField to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "matchField", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}matchField. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}matchField for root element {}matchField...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}matchField for root element {}matchField...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}matchField. XML writer status: %i\n", rc];
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
@end /* implementation FULLNS0MatchField (JAXB) */

#endif /* DEF_FULLNS0MatchField_M */
#ifndef DEF_FULLNS0Flow_M
#define DEF_FULLNS0Flow_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Flow

/**
 * (no documentation provided)
 */
- (long) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (long) newIdentifier
{
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSArray *) actions
{
  return _actions;
}

/**
 * (no documentation provided)
 */
- (void) setActions: (NSArray *) newActions
{
  [newActions retain];
  [_actions release];
  _actions = newActions;
}

/**
 * (no documentation provided)
 */
- (short) priority
{
  return _priority;
}

/**
 * (no documentation provided)
 */
- (void) setPriority: (short) newPriority
{
  _priority = newPriority;
}

/**
 * (no documentation provided)
 */
- (FULLNS0Match *) match
{
  return _match;
}

/**
 * (no documentation provided)
 */
- (void) setMatch: (FULLNS0Match *) newMatch
{
  [newMatch retain];
  [_match release];
  _match = newMatch;
}

/**
 * (no documentation provided)
 */
- (short) idleTimeout
{
  return _idleTimeout;
}

/**
 * (no documentation provided)
 */
- (void) setIdleTimeout: (short) newIdleTimeout
{
  _idleTimeout = newIdleTimeout;
}

/**
 * (no documentation provided)
 */
- (short) hardTimeout
{
  return _hardTimeout;
}

/**
 * (no documentation provided)
 */
- (void) setHardTimeout: (short) newHardTimeout
{
  _hardTimeout = newHardTimeout;
}

- (void) dealloc
{
  [self setActions: nil];
  [self setMatch: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Flow *_fULLNS0Flow;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Flow = (FULLNS0Flow *) [FULLNS0Flow readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Flow;
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
@end /* implementation FULLNS0Flow */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Flow (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Flow (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Flow (JAXB)

/**
 * Read an instance of FULLNS0Flow from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Flow defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Flow *_fULLNS0Flow = [[FULLNS0Flow alloc] init];
  NS_DURING
  {
    [_fULLNS0Flow initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Flow = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Flow autorelease];
  return _fULLNS0Flow;
}

/**
 * Initialize this instance of FULLNS0Flow according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Flow to the writer.
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
 * Reads a FULLNS0Flow from an XML reader. The element to be read is
 * "flow".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Flow.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Flow *_flow = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element flow."];
    }
  }

  if (xmlStrcmp(BAD_CAST "flow", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}flow.");
#endif
    _flow = (FULLNS0Flow *)[FULLNS0Flow readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}flow.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Flow. Expected element flow. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Flow. Expected element flow. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flow;
}

/**
 * Writes this FULLNS0Flow to XML under element name "flow".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flow The Flow to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Flow to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}flow. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flow for root element {}flow...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flow for root element {}flow...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}flow. XML writer status: %i\n", rc];
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

    _child_accessor = xmlTextReaderReadLongType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIdentifier: *((long*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "actions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}actions of type {}action.");
#endif

    __child = [FULLNS0Action readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}actions of type {}action.");
#endif

    if ([self actions]) {
      [self setActions: [[self actions] arrayByAddingObject: __child]];
    }
    else {
      [self setActions: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "priority", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPriority: *((short*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "match", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}match of type {}match.");
#endif
    __child = [FULLNS0Match readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}match of type {}match.");
#endif

    [self setMatch: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "idleTimeout", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setIdleTimeout: *((short*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "hardTimeout", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadShortType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setHardTimeout: *((short*) _child_accessor)];
    free(_child_accessor);
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

  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    status = xmlTextWriterWriteLongType(writer, &_identifier);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}id."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self actions]) {
    __enumerator = [[self actions] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "actions", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}actions."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}actions...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}actions...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}actions."];
      }
    } //end item iterator.
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "priority", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}priority."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}priority...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_priority);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}priority...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}priority."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}priority."];
    }
  }
  if ([self match]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "match", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}match."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}match...");
#endif
    [[self match] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}match...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}match."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "idleTimeout", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}idleTimeout."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}idleTimeout...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_idleTimeout);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}idleTimeout...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}idleTimeout."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}idleTimeout."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hardTimeout", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}hardTimeout."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}hardTimeout...");
#endif
    status = xmlTextWriterWriteShortType(writer, &_hardTimeout);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}hardTimeout...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}hardTimeout."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}hardTimeout."];
    }
  }
}
@end /* implementation FULLNS0Flow (JAXB) */

#endif /* DEF_FULLNS0Flow_M */
#ifndef DEF_FULLNS0NodeConnector_M
#define DEF_FULLNS0NodeConnector_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0NodeConnector

/**
 * (no documentation provided)
 */
- (FULLNS0Node *) nodeConnectorNode
{
  return _nodeConnectorNode;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorNode: (FULLNS0Node *) newNodeConnectorNode
{
  [newNodeConnectorNode retain];
  [_nodeConnectorNode release];
  _nodeConnectorNode = newNodeConnectorNode;
}

/**
 * (no documentation provided)
 */
- (NSString *) nodeConnectorIDString
{
  return _nodeConnectorIDString;
}

/**
 * (no documentation provided)
 */
- (void) setNodeConnectorIDString: (NSString *) newNodeConnectorIDString
{
  [newNodeConnectorIDString retain];
  [_nodeConnectorIDString release];
  _nodeConnectorIDString = newNodeConnectorIDString;
}

/**
 * (no documentation provided)
 */
- (NSString *) type
{
  return _type;
}

/**
 * (no documentation provided)
 */
- (void) setType: (NSString *) newType
{
  [newType retain];
  [_type release];
  _type = newType;
}

- (void) dealloc
{
  [self setNodeConnectorNode: nil];
  [self setNodeConnectorIDString: nil];
  [self setType: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0NodeConnector *_fULLNS0NodeConnector;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0NodeConnector = (FULLNS0NodeConnector *) [FULLNS0NodeConnector readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0NodeConnector;
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
@end /* implementation FULLNS0NodeConnector */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0NodeConnector (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0NodeConnector (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0NodeConnector (JAXB)

/**
 * Read an instance of FULLNS0NodeConnector from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0NodeConnector defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0NodeConnector *_fULLNS0NodeConnector = [[FULLNS0NodeConnector alloc] init];
  NS_DURING
  {
    [_fULLNS0NodeConnector initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0NodeConnector = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0NodeConnector autorelease];
  return _fULLNS0NodeConnector;
}

/**
 * Initialize this instance of FULLNS0NodeConnector according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0NodeConnector to the writer.
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
 * Reads a FULLNS0NodeConnector from an XML reader. The element to be read is
 * "nodeConnector".
 *
 * @param reader The XML reader.
 * @return The FULLNS0NodeConnector.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0NodeConnector *_nodeConnector = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeConnector."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeConnector", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeConnector.");
#endif
    _nodeConnector = (FULLNS0NodeConnector *)[FULLNS0NodeConnector readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeConnector.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnector. Expected element nodeConnector. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0NodeConnector. Expected element nodeConnector. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _nodeConnector;
}

/**
 * Writes this FULLNS0NodeConnector to XML under element name "nodeConnector".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _nodeConnector The NodeConnector to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0NodeConnector to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnector", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeConnector. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}nodeConnector for root element {}nodeConnector...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}nodeConnector for root element {}nodeConnector...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeConnector. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "node", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}node of type {}node.");
#endif
    __child = [FULLNS0Node readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}node of type {}node.");
#endif

    [self setNodeConnectorNode: __child];
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

    [self setNodeConnectorIDString: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}type of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setType: __child];
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

  if ([self nodeConnectorNode]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "node", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}node."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}node...");
#endif
    [[self nodeConnectorNode] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}node...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}node."];
    }
  }
  if ([self nodeConnectorIDString]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self nodeConnectorIDString] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self type]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}type...");
#endif
    [[self type] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}type...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}type."];
    }
  }
}
@end /* implementation FULLNS0NodeConnector (JAXB) */

#endif /* DEF_FULLNS0NodeConnector_M */
#ifndef DEF_FULLNS0Action_M
#define DEF_FULLNS0Action_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0Action

/**
 * (no documentation provided)
 */
- (enum FULLNS0ActionType *) type
{
  return _type;
}

/**
 * (no documentation provided)
 */
- (void) setType: (enum FULLNS0ActionType *) newType
{
  if (_type != NULL) {
    free(_type);
  }
  _type = newType;
}

- (void) dealloc
{
  [self setType: NULL];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0Action *_fULLNS0Action;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0Action = (FULLNS0Action *) [FULLNS0Action readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0Action;
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
@end /* implementation FULLNS0Action */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0Action (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0Action (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0Action (JAXB)

/**
 * Read an instance of FULLNS0Action from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0Action defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0Action *_fULLNS0Action = [[FULLNS0Action alloc] init];
  NS_DURING
  {
    [_fULLNS0Action initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0Action = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0Action autorelease];
  return _fULLNS0Action;
}

/**
 * Initialize this instance of FULLNS0Action according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0Action to the writer.
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
 * Reads a FULLNS0Action from an XML reader. The element to be read is
 * "action".
 *
 * @param reader The XML reader.
 * @return The FULLNS0Action.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0Action *_action = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element action."];
    }
  }

  if (xmlStrcmp(BAD_CAST "action", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}action.");
#endif
    _action = (FULLNS0Action *)[FULLNS0Action readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}action.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Action. Expected element action. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0Action. Expected element action. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _action;
}

/**
 * Writes this FULLNS0Action to XML under element name "action".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _action The Action to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0Action to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "action", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}action. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}action for root element {}action...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}action for root element {}action...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}action. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "type", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadFULLNS0ActionTypeType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setType: ((enum FULLNS0ActionType*) _child_accessor)];
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

  if ([self type] != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "type", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}type."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}type...");
#endif
    status = xmlTextWriterWriteFULLNS0ActionTypeType(writer, [self type]);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}type...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}type."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}type."];
    }
  }
}
@end /* implementation FULLNS0Action (JAXB) */

#endif /* DEF_FULLNS0Action_M */
#ifndef DEF_FULLNS0ActionType_M
#define DEF_FULLNS0ActionType_M

/**
 * Reads a ActionType from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ActionType, or NULL if unable to be read.
 */
static enum FULLNS0ActionType *xmlTextReaderReadFULLNS0ActionTypeType(xmlTextReaderPtr reader)
{
  xmlChar *enumValue = xmlTextReaderReadEntireNodeValue(reader);
  enum FULLNS0ActionType *value = calloc(1, sizeof(enum FULLNS0ActionType));
  if (enumValue != NULL) {
    if (xmlStrcmp(enumValue, BAD_CAST "DROP") == 0) {
      *value = FULL_NS0_ACTIONTYPE_DROP;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "LOOPBACK") == 0) {
      *value = FULL_NS0_ACTIONTYPE_LOOPBACK;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "FLOOD") == 0) {
      *value = FULL_NS0_ACTIONTYPE_FLOOD;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "FLOOD_ALL") == 0) {
      *value = FULL_NS0_ACTIONTYPE_FLOOD_ALL;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "CONTROLLER") == 0) {
      *value = FULL_NS0_ACTIONTYPE_CONTROLLER;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "INTERFACE") == 0) {
      *value = FULL_NS0_ACTIONTYPE_INTERFACE;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SW_PATH") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SW_PATH;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "HW_PATH") == 0) {
      *value = FULL_NS0_ACTIONTYPE_HW_PATH;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "OUTPUT") == 0) {
      *value = FULL_NS0_ACTIONTYPE_OUTPUT;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "ENQUEUE") == 0) {
      *value = FULL_NS0_ACTIONTYPE_ENQUEUE;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_DL_SRC") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_DL_SRC;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_DL_DST") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_DL_DST;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_VLAN_ID") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_VLAN_ID;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_VLAN_PCP") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_VLAN_PCP;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_VLAN_CFI") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_VLAN_CFI;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "POP_VLAN") == 0) {
      *value = FULL_NS0_ACTIONTYPE_POP_VLAN;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "PUSH_VLAN") == 0) {
      *value = FULL_NS0_ACTIONTYPE_PUSH_VLAN;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_DL_TYPE") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_DL_TYPE;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NW_SRC") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NW_SRC;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NW_DST") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NW_DST;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NW_TOS") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NW_TOS;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_TP_SRC") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_TP_SRC;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_TP_DST") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_TP_DST;
      free(enumValue);
      return value;
    }
    if (xmlStrcmp(enumValue, BAD_CAST "SET_NEXT_HOP") == 0) {
      *value = FULL_NS0_ACTIONTYPE_SET_NEXT_HOP;
      free(enumValue);
      return value;
    }
#if DEBUG_ENUNCIATE
    NSLog(@"Attempt to read enum value failed: %s doesn't match an enum value.", enumValue);
#endif
  }
#if DEBUG_ENUNCIATE
  else {
    NSLog(@"Attempt to read enum value failed: NULL value.");
  }
#endif

  return NULL;
}

/**
 * Utility method for getting the enum value for a string.
 *
 * @param _actionType The string to format.
 * @return The enum value or NULL on error.
 */
static enum FULLNS0ActionType *formatStringToFULLNS0ActionTypeType(NSString *_actionType)
{
  enum FULLNS0ActionType *value = calloc(1, sizeof(enum FULLNS0ActionType));
  value = NULL;
  if ([@"DROP" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_DROP;
  }
  if ([@"LOOPBACK" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_LOOPBACK;
  }
  if ([@"FLOOD" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_FLOOD;
  }
  if ([@"FLOOD_ALL" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_FLOOD_ALL;
  }
  if ([@"CONTROLLER" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_CONTROLLER;
  }
  if ([@"INTERFACE" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_INTERFACE;
  }
  if ([@"SW_PATH" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SW_PATH;
  }
  if ([@"HW_PATH" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_HW_PATH;
  }
  if ([@"OUTPUT" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_OUTPUT;
  }
  if ([@"ENQUEUE" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_ENQUEUE;
  }
  if ([@"SET_DL_SRC" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_DL_SRC;
  }
  if ([@"SET_DL_DST" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_DL_DST;
  }
  if ([@"SET_VLAN_ID" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_VLAN_ID;
  }
  if ([@"SET_VLAN_PCP" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_VLAN_PCP;
  }
  if ([@"SET_VLAN_CFI" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_VLAN_CFI;
  }
  if ([@"POP_VLAN" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_POP_VLAN;
  }
  if ([@"PUSH_VLAN" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_PUSH_VLAN;
  }
  if ([@"SET_DL_TYPE" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_DL_TYPE;
  }
  if ([@"SET_NW_SRC" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_NW_SRC;
  }
  if ([@"SET_NW_DST" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_NW_DST;
  }
  if ([@"SET_NW_TOS" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_NW_TOS;
  }
  if ([@"SET_TP_SRC" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_TP_SRC;
  }
  if ([@"SET_TP_DST" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_TP_DST;
  }
  if ([@"SET_NEXT_HOP" isEqualToString:_actionType]) {
    *value = FULL_NS0_ACTIONTYPE_SET_NEXT_HOP;
  }
#if DEBUG_ENUNCIATE
  NSLog(@"Attempt to read enum value failed: %s doesn't match an enum value.", _actionType);
#endif

  return value;
}

/**
 * Writes a ActionType to XML.
 *
 * @param writer The XML writer.
 * @param _actionType The ActionType to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteFULLNS0ActionTypeType(xmlTextWriterPtr writer, enum FULLNS0ActionType *_actionType)
{
  switch (*_actionType) {
    case FULL_NS0_ACTIONTYPE_DROP:
      return xmlTextWriterWriteString(writer, BAD_CAST "DROP");
    case FULL_NS0_ACTIONTYPE_LOOPBACK:
      return xmlTextWriterWriteString(writer, BAD_CAST "LOOPBACK");
    case FULL_NS0_ACTIONTYPE_FLOOD:
      return xmlTextWriterWriteString(writer, BAD_CAST "FLOOD");
    case FULL_NS0_ACTIONTYPE_FLOOD_ALL:
      return xmlTextWriterWriteString(writer, BAD_CAST "FLOOD_ALL");
    case FULL_NS0_ACTIONTYPE_CONTROLLER:
      return xmlTextWriterWriteString(writer, BAD_CAST "CONTROLLER");
    case FULL_NS0_ACTIONTYPE_INTERFACE:
      return xmlTextWriterWriteString(writer, BAD_CAST "INTERFACE");
    case FULL_NS0_ACTIONTYPE_SW_PATH:
      return xmlTextWriterWriteString(writer, BAD_CAST "SW_PATH");
    case FULL_NS0_ACTIONTYPE_HW_PATH:
      return xmlTextWriterWriteString(writer, BAD_CAST "HW_PATH");
    case FULL_NS0_ACTIONTYPE_OUTPUT:
      return xmlTextWriterWriteString(writer, BAD_CAST "OUTPUT");
    case FULL_NS0_ACTIONTYPE_ENQUEUE:
      return xmlTextWriterWriteString(writer, BAD_CAST "ENQUEUE");
    case FULL_NS0_ACTIONTYPE_SET_DL_SRC:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_DL_SRC");
    case FULL_NS0_ACTIONTYPE_SET_DL_DST:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_DL_DST");
    case FULL_NS0_ACTIONTYPE_SET_VLAN_ID:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_VLAN_ID");
    case FULL_NS0_ACTIONTYPE_SET_VLAN_PCP:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_VLAN_PCP");
    case FULL_NS0_ACTIONTYPE_SET_VLAN_CFI:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_VLAN_CFI");
    case FULL_NS0_ACTIONTYPE_POP_VLAN:
      return xmlTextWriterWriteString(writer, BAD_CAST "POP_VLAN");
    case FULL_NS0_ACTIONTYPE_PUSH_VLAN:
      return xmlTextWriterWriteString(writer, BAD_CAST "PUSH_VLAN");
    case FULL_NS0_ACTIONTYPE_SET_DL_TYPE:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_DL_TYPE");
    case FULL_NS0_ACTIONTYPE_SET_NW_SRC:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NW_SRC");
    case FULL_NS0_ACTIONTYPE_SET_NW_DST:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NW_DST");
    case FULL_NS0_ACTIONTYPE_SET_NW_TOS:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NW_TOS");
    case FULL_NS0_ACTIONTYPE_SET_TP_SRC:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_TP_SRC");
    case FULL_NS0_ACTIONTYPE_SET_TP_DST:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_TP_DST");
    case FULL_NS0_ACTIONTYPE_SET_NEXT_HOP:
      return xmlTextWriterWriteString(writer, BAD_CAST "SET_NEXT_HOP");
  }

#if DEBUG_ENUNCIATE
  NSLog(@"Unable to write enum value (no valid value found).");
#endif
  return -1;
}

/**
 * Utility method for getting the string value of ActionType.
 *
 * @param _actionType The ActionType to format.
 * @return The string value or NULL on error.
 */
static NSString *formatFULLNS0ActionTypeTypeToString(enum FULLNS0ActionType *_actionType)
{
  switch (*_actionType) {
    case FULL_NS0_ACTIONTYPE_DROP:
      return @"DROP";
    case FULL_NS0_ACTIONTYPE_LOOPBACK:
      return @"LOOPBACK";
    case FULL_NS0_ACTIONTYPE_FLOOD:
      return @"FLOOD";
    case FULL_NS0_ACTIONTYPE_FLOOD_ALL:
      return @"FLOOD_ALL";
    case FULL_NS0_ACTIONTYPE_CONTROLLER:
      return @"CONTROLLER";
    case FULL_NS0_ACTIONTYPE_INTERFACE:
      return @"INTERFACE";
    case FULL_NS0_ACTIONTYPE_SW_PATH:
      return @"SW_PATH";
    case FULL_NS0_ACTIONTYPE_HW_PATH:
      return @"HW_PATH";
    case FULL_NS0_ACTIONTYPE_OUTPUT:
      return @"OUTPUT";
    case FULL_NS0_ACTIONTYPE_ENQUEUE:
      return @"ENQUEUE";
    case FULL_NS0_ACTIONTYPE_SET_DL_SRC:
      return @"SET_DL_SRC";
    case FULL_NS0_ACTIONTYPE_SET_DL_DST:
      return @"SET_DL_DST";
    case FULL_NS0_ACTIONTYPE_SET_VLAN_ID:
      return @"SET_VLAN_ID";
    case FULL_NS0_ACTIONTYPE_SET_VLAN_PCP:
      return @"SET_VLAN_PCP";
    case FULL_NS0_ACTIONTYPE_SET_VLAN_CFI:
      return @"SET_VLAN_CFI";
    case FULL_NS0_ACTIONTYPE_POP_VLAN:
      return @"POP_VLAN";
    case FULL_NS0_ACTIONTYPE_PUSH_VLAN:
      return @"PUSH_VLAN";
    case FULL_NS0_ACTIONTYPE_SET_DL_TYPE:
      return @"SET_DL_TYPE";
    case FULL_NS0_ACTIONTYPE_SET_NW_SRC:
      return @"SET_NW_SRC";
    case FULL_NS0_ACTIONTYPE_SET_NW_DST:
      return @"SET_NW_DST";
    case FULL_NS0_ACTIONTYPE_SET_NW_TOS:
      return @"SET_NW_TOS";
    case FULL_NS0_ACTIONTYPE_SET_TP_SRC:
      return @"SET_TP_SRC";
    case FULL_NS0_ACTIONTYPE_SET_TP_DST:
      return @"SET_TP_DST";
    case FULL_NS0_ACTIONTYPE_SET_NEXT_HOP:
      return @"SET_NEXT_HOP";
    default:
      return NULL;
  }

  return NULL;
}
#endif /* DEF_FULLNS0ActionType_M */
