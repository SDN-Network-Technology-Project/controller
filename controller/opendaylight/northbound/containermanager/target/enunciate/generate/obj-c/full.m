#import "full.h"
#ifndef DEF_FULLNS0ContainerConfigs_M
#define DEF_FULLNS0ContainerConfigs_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0ContainerConfigs

/**
 * (no documentation provided)
 */
- (NSArray *) containerConfig
{
  return _containerConfig;
}

/**
 * (no documentation provided)
 */
- (void) setContainerConfig: (NSArray *) newContainerConfig
{
  [newContainerConfig retain];
  [_containerConfig release];
  _containerConfig = newContainerConfig;
}

- (void) dealloc
{
  [self setContainerConfig: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0ContainerConfigs *_fULLNS0ContainerConfigs;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0ContainerConfigs = (FULLNS0ContainerConfigs *) [FULLNS0ContainerConfigs readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0ContainerConfigs;
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
@end /* implementation FULLNS0ContainerConfigs */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0ContainerConfigs (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0ContainerConfigs (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0ContainerConfigs (JAXB)

/**
 * Read an instance of FULLNS0ContainerConfigs from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0ContainerConfigs defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0ContainerConfigs *_fULLNS0ContainerConfigs = [[FULLNS0ContainerConfigs alloc] init];
  NS_DURING
  {
    [_fULLNS0ContainerConfigs initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0ContainerConfigs = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0ContainerConfigs autorelease];
  return _fULLNS0ContainerConfigs;
}

/**
 * Initialize this instance of FULLNS0ContainerConfigs according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0ContainerConfigs to the writer.
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
 * Reads a FULLNS0ContainerConfigs from an XML reader. The element to be read is
 * "containerConfig-list".
 *
 * @param reader The XML reader.
 * @return The FULLNS0ContainerConfigs.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0ContainerConfigs *_containerConfigs = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element containerConfig-list."];
    }
  }

  if (xmlStrcmp(BAD_CAST "containerConfig-list", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}containerConfig-list.");
#endif
    _containerConfigs = (FULLNS0ContainerConfigs *)[FULLNS0ContainerConfigs readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}containerConfig-list.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0ContainerConfigs. Expected element containerConfig-list. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0ContainerConfigs. Expected element containerConfig-list. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _containerConfigs;
}

/**
 * Writes this FULLNS0ContainerConfigs to XML under element name "containerConfig-list".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _containerConfigs The ContainerConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0ContainerConfigs to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "containerConfig-list", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}containerConfig-list. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}containerConfigs for root element {}containerConfig-list...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}containerConfigs for root element {}containerConfig-list...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}containerConfig-list. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "containerConfig", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}containerConfig of type {}containerConfig.");
#endif

    __child = [FULLNS0ContainerConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}containerConfig of type {}containerConfig.");
#endif

    if ([self containerConfig]) {
      [self setContainerConfig: [[self containerConfig] arrayByAddingObject: __child]];
    }
    else {
      [self setContainerConfig: [NSArray arrayWithObject: __child]];
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

  if ([self containerConfig]) {
    __enumerator = [[self containerConfig] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "containerConfig", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}containerConfig."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}containerConfig...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}containerConfig...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}containerConfig."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0ContainerConfigs (JAXB) */

#endif /* DEF_FULLNS0ContainerConfigs_M */
#ifndef DEF_FULLNS0FlowSpecConfigs_M
#define DEF_FULLNS0FlowSpecConfigs_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0FlowSpecConfigs

/**
 * (no documentation provided)
 */
- (NSArray *) containerFlowConfig
{
  return _containerFlowConfig;
}

/**
 * (no documentation provided)
 */
- (void) setContainerFlowConfig: (NSArray *) newContainerFlowConfig
{
  [newContainerFlowConfig retain];
  [_containerFlowConfig release];
  _containerFlowConfig = newContainerFlowConfig;
}

- (void) dealloc
{
  [self setContainerFlowConfig: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0FlowSpecConfigs *_fULLNS0FlowSpecConfigs;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0FlowSpecConfigs = (FULLNS0FlowSpecConfigs *) [FULLNS0FlowSpecConfigs readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0FlowSpecConfigs;
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
@end /* implementation FULLNS0FlowSpecConfigs */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0FlowSpecConfigs (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0FlowSpecConfigs (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0FlowSpecConfigs (JAXB)

/**
 * Read an instance of FULLNS0FlowSpecConfigs from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0FlowSpecConfigs defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0FlowSpecConfigs *_fULLNS0FlowSpecConfigs = [[FULLNS0FlowSpecConfigs alloc] init];
  NS_DURING
  {
    [_fULLNS0FlowSpecConfigs initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0FlowSpecConfigs = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0FlowSpecConfigs autorelease];
  return _fULLNS0FlowSpecConfigs;
}

/**
 * Initialize this instance of FULLNS0FlowSpecConfigs according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0FlowSpecConfigs to the writer.
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
 * Reads a FULLNS0FlowSpecConfigs from an XML reader. The element to be read is
 * "flow-spec-configs".
 *
 * @param reader The XML reader.
 * @return The FULLNS0FlowSpecConfigs.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0FlowSpecConfigs *_flowSpecConfigs = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element flow-spec-configs."];
    }
  }

  if (xmlStrcmp(BAD_CAST "flow-spec-configs", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}flow-spec-configs.");
#endif
    _flowSpecConfigs = (FULLNS0FlowSpecConfigs *)[FULLNS0FlowSpecConfigs readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}flow-spec-configs.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowSpecConfigs. Expected element flow-spec-configs. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0FlowSpecConfigs. Expected element flow-spec-configs. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _flowSpecConfigs;
}

/**
 * Writes this FULLNS0FlowSpecConfigs to XML under element name "flow-spec-configs".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _flowSpecConfigs The FlowSpecConfigs to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0FlowSpecConfigs to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow-spec-configs", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}flow-spec-configs. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}flowSpecConfigs for root element {}flow-spec-configs...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}flowSpecConfigs for root element {}flow-spec-configs...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}flow-spec-configs. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "flow-spec-config", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flow-spec-config of type {}containerFlowConfig.");
#endif

    __child = [FULLNS0ContainerFlowConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flow-spec-config of type {}containerFlowConfig.");
#endif

    if ([self containerFlowConfig]) {
      [self setContainerFlowConfig: [[self containerFlowConfig] arrayByAddingObject: __child]];
    }
    else {
      [self setContainerFlowConfig: [NSArray arrayWithObject: __child]];
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

  if ([self containerFlowConfig]) {
    __enumerator = [[self containerFlowConfig] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow-spec-config", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}flow-spec-config."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}flow-spec-config...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}flow-spec-config...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}flow-spec-config."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0FlowSpecConfigs (JAXB) */

#endif /* DEF_FULLNS0FlowSpecConfigs_M */
#ifndef DEF_FULLNS0StringList_M
#define DEF_FULLNS0StringList_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0StringList

/**
 * (no documentation provided)
 */
- (NSArray *) list
{
  return _list;
}

/**
 * (no documentation provided)
 */
- (void) setList: (NSArray *) newList
{
  [newList retain];
  [_list release];
  _list = newList;
}

- (void) dealloc
{
  [self setList: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0StringList *_fULLNS0StringList;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0StringList = (FULLNS0StringList *) [FULLNS0StringList readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0StringList;
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
@end /* implementation FULLNS0StringList */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0StringList (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0StringList (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0StringList (JAXB)

/**
 * Read an instance of FULLNS0StringList from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0StringList defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0StringList *_fULLNS0StringList = [[FULLNS0StringList alloc] init];
  NS_DURING
  {
    [_fULLNS0StringList initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0StringList = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0StringList autorelease];
  return _fULLNS0StringList;
}

/**
 * Initialize this instance of FULLNS0StringList according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0StringList to the writer.
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
 * Reads a FULLNS0StringList from an XML reader. The element to be read is
 * "nodeConnectors".
 *
 * @param reader The XML reader.
 * @return The FULLNS0StringList.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0StringList *_stringList = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element nodeConnectors."];
    }
  }

  if (xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}nodeConnectors.");
#endif
    _stringList = (FULLNS0StringList *)[FULLNS0StringList readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}nodeConnectors.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0StringList. Expected element nodeConnectors. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0StringList. Expected element nodeConnectors. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _stringList;
}

/**
 * Writes this FULLNS0StringList to XML under element name "nodeConnectors".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0StringList to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}nodeConnectors. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}stringList for root element {}nodeConnectors...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}stringList for root element {}nodeConnectors...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}nodeConnectors. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self list]) {
      [self setList: [[self list] arrayByAddingObject: __child]];
    }
    else {
      [self setList: [NSArray arrayWithObject: __child]];
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

  if ([self list]) {
    __enumerator = [[self list] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}nodeConnectors."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}nodeConnectors...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}nodeConnectors...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}nodeConnectors."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0StringList (JAXB) */

#endif /* DEF_FULLNS0StringList_M */
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
#ifndef DEF_FULLNS0ContainerFlowConfig_M
#define DEF_FULLNS0ContainerFlowConfig_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0ContainerFlowConfig

/**
 * (no documentation provided)
 */
- (NSString *) tpDst
{
  return _tpDst;
}

/**
 * (no documentation provided)
 */
- (void) setTpDst: (NSString *) newTpDst
{
  [newTpDst retain];
  [_tpDst release];
  _tpDst = newTpDst;
}

/**
 * (no documentation provided)
 */
- (NSString *) nwDst
{
  return _nwDst;
}

/**
 * (no documentation provided)
 */
- (void) setNwDst: (NSString *) newNwDst
{
  [newNwDst retain];
  [_nwDst release];
  _nwDst = newNwDst;
}

/**
 * (no documentation provided)
 */
- (NSString *) dlVlan
{
  return _dlVlan;
}

/**
 * (no documentation provided)
 */
- (void) setDlVlan: (NSString *) newDlVlan
{
  [newDlVlan retain];
  [_dlVlan release];
  _dlVlan = newDlVlan;
}

/**
 * (no documentation provided)
 */
- (NSString *) nwSrc
{
  return _nwSrc;
}

/**
 * (no documentation provided)
 */
- (void) setNwSrc: (NSString *) newNwSrc
{
  [newNwSrc retain];
  [_nwSrc release];
  _nwSrc = newNwSrc;
}

/**
 * (no documentation provided)
 */
- (NSString *) tpSrc
{
  return _tpSrc;
}

/**
 * (no documentation provided)
 */
- (void) setTpSrc: (NSString *) newTpSrc
{
  [newTpSrc retain];
  [_tpSrc release];
  _tpSrc = newTpSrc;
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
- (NSString *) protocol
{
  return _protocol;
}

/**
 * (no documentation provided)
 */
- (void) setProtocol: (NSString *) newProtocol
{
  [newProtocol retain];
  [_protocol release];
  _protocol = newProtocol;
}

- (void) dealloc
{
  [self setTpDst: nil];
  [self setNwDst: nil];
  [self setDlVlan: nil];
  [self setNwSrc: nil];
  [self setTpSrc: nil];
  [self setName: nil];
  [self setProtocol: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0ContainerFlowConfig *_fULLNS0ContainerFlowConfig;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0ContainerFlowConfig = (FULLNS0ContainerFlowConfig *) [FULLNS0ContainerFlowConfig readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0ContainerFlowConfig;
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
@end /* implementation FULLNS0ContainerFlowConfig */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0ContainerFlowConfig (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0ContainerFlowConfig (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0ContainerFlowConfig (JAXB)

/**
 * Read an instance of FULLNS0ContainerFlowConfig from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0ContainerFlowConfig defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0ContainerFlowConfig *_fULLNS0ContainerFlowConfig = [[FULLNS0ContainerFlowConfig alloc] init];
  NS_DURING
  {
    [_fULLNS0ContainerFlowConfig initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0ContainerFlowConfig = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0ContainerFlowConfig autorelease];
  return _fULLNS0ContainerFlowConfig;
}

/**
 * Initialize this instance of FULLNS0ContainerFlowConfig according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0ContainerFlowConfig to the writer.
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
 * Reads a FULLNS0ContainerFlowConfig from an XML reader. The element to be read is
 * "flow-spec-config".
 *
 * @param reader The XML reader.
 * @return The FULLNS0ContainerFlowConfig.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0ContainerFlowConfig *_containerFlowConfig = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element flow-spec-config."];
    }
  }

  if (xmlStrcmp(BAD_CAST "flow-spec-config", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}flow-spec-config.");
#endif
    _containerFlowConfig = (FULLNS0ContainerFlowConfig *)[FULLNS0ContainerFlowConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}flow-spec-config.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0ContainerFlowConfig. Expected element flow-spec-config. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0ContainerFlowConfig. Expected element flow-spec-config. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _containerFlowConfig;
}

/**
 * Writes this FULLNS0ContainerFlowConfig to XML under element name "flow-spec-config".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _containerFlowConfig The ContainerFlowConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0ContainerFlowConfig to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flow-spec-config", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}flow-spec-config. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}containerFlowConfig for root element {}flow-spec-config...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}containerFlowConfig for root element {}flow-spec-config...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}flow-spec-config. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "tpDst", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tpDst of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tpDst of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTpDst: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nwDst", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nwDst of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nwDst of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNwDst: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dlVlan", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dlVlan of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dlVlan of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDlVlan: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nwSrc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nwSrc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nwSrc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNwSrc: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tpSrc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tpSrc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tpSrc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTpSrc: __child];
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
    && xmlStrcmp(BAD_CAST "protocol", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}protocol of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}protocol of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setProtocol: __child];
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

  if ([self tpDst]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tpDst", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tpDst."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tpDst...");
#endif
    [[self tpDst] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tpDst...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tpDst."];
    }
  }
  if ([self nwDst]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nwDst", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nwDst."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nwDst...");
#endif
    [[self nwDst] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nwDst...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nwDst."];
    }
  }
  if ([self dlVlan]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dlVlan", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dlVlan."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dlVlan...");
#endif
    [[self dlVlan] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dlVlan...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dlVlan."];
    }
  }
  if ([self nwSrc]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nwSrc", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}nwSrc."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}nwSrc...");
#endif
    [[self nwSrc] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}nwSrc...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}nwSrc."];
    }
  }
  if ([self tpSrc]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tpSrc", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tpSrc."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tpSrc...");
#endif
    [[self tpSrc] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tpSrc...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tpSrc."];
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
  if ([self protocol]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "protocol", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}protocol."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}protocol...");
#endif
    [[self protocol] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}protocol...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}protocol."];
    }
  }
}
@end /* implementation FULLNS0ContainerFlowConfig (JAXB) */

#endif /* DEF_FULLNS0ContainerFlowConfig_M */
#ifndef DEF_FULLNS0ContainerConfig_M
#define DEF_FULLNS0ContainerConfig_M

/**
 * (no documentation provided)
 */
@implementation FULLNS0ContainerConfig

/**
 * (no documentation provided)
 */
- (NSString *) staticVlan
{
  return _staticVlan;
}

/**
 * (no documentation provided)
 */
- (void) setStaticVlan: (NSString *) newStaticVlan
{
  [newStaticVlan retain];
  [_staticVlan release];
  _staticVlan = newStaticVlan;
}

/**
 * (no documentation provided)
 */
- (NSString *) container
{
  return _container;
}

/**
 * (no documentation provided)
 */
- (void) setContainer: (NSString *) newContainer
{
  [newContainer retain];
  [_container release];
  _container = newContainer;
}

/**
 * (no documentation provided)
 */
- (NSArray *) ports
{
  return _ports;
}

/**
 * (no documentation provided)
 */
- (void) setPorts: (NSArray *) newPorts
{
  [newPorts retain];
  [_ports release];
  _ports = newPorts;
}

/**
 * (no documentation provided)
 */
- (NSArray *) containerFlows
{
  return _containerFlows;
}

/**
 * (no documentation provided)
 */
- (void) setContainerFlows: (NSArray *) newContainerFlows
{
  [newContainerFlows retain];
  [_containerFlows release];
  _containerFlows = newContainerFlows;
}

- (void) dealloc
{
  [self setStaticVlan: nil];
  [self setContainer: nil];
  [self setPorts: nil];
  [self setContainerFlows: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  FULLNS0ContainerConfig *_fULLNS0ContainerConfig;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _fULLNS0ContainerConfig = (FULLNS0ContainerConfig *) [FULLNS0ContainerConfig readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _fULLNS0ContainerConfig;
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
@end /* implementation FULLNS0ContainerConfig */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface FULLNS0ContainerConfig (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface FULLNS0ContainerConfig (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation FULLNS0ContainerConfig (JAXB)

/**
 * Read an instance of FULLNS0ContainerConfig from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of FULLNS0ContainerConfig defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  FULLNS0ContainerConfig *_fULLNS0ContainerConfig = [[FULLNS0ContainerConfig alloc] init];
  NS_DURING
  {
    [_fULLNS0ContainerConfig initWithReader: reader];
  }
  NS_HANDLER
  {
    _fULLNS0ContainerConfig = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_fULLNS0ContainerConfig autorelease];
  return _fULLNS0ContainerConfig;
}

/**
 * Initialize this instance of FULLNS0ContainerConfig according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of FULLNS0ContainerConfig to the writer.
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
 * Reads a FULLNS0ContainerConfig from an XML reader. The element to be read is
 * "containerConfig".
 *
 * @param reader The XML reader.
 * @return The FULLNS0ContainerConfig.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  FULLNS0ContainerConfig *_containerConfig = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element containerConfig."];
    }
  }

  if (xmlStrcmp(BAD_CAST "containerConfig", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}containerConfig.");
#endif
    _containerConfig = (FULLNS0ContainerConfig *)[FULLNS0ContainerConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}containerConfig.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0ContainerConfig. Expected element containerConfig. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read FULLNS0ContainerConfig. Expected element containerConfig. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _containerConfig;
}

/**
 * Writes this FULLNS0ContainerConfig to XML under element name "containerConfig".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _containerConfig The ContainerConfig to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this FULLNS0ContainerConfig to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "containerConfig", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}containerConfig. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}containerConfig for root element {}containerConfig...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}containerConfig for root element {}containerConfig...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}containerConfig. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "staticVlan", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}staticVlan of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}staticVlan of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setStaticVlan: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "container", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}container of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}container of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setContainer: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "nodeConnectors", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}nodeConnectors of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self ports]) {
      [self setPorts: [[self ports] arrayByAddingObject: __child]];
    }
    else {
      [self setPorts: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "flowSpecs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}flowSpecs of type {}containerFlowConfig.");
#endif

    __child = [FULLNS0ContainerFlowConfig readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}flowSpecs of type {}containerFlowConfig.");
#endif

    if ([self containerFlows]) {
      [self setContainerFlows: [[self containerFlows] arrayByAddingObject: __child]];
    }
    else {
      [self setContainerFlows: [NSArray arrayWithObject: __child]];
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

  if ([self staticVlan]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "staticVlan", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}staticVlan."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}staticVlan...");
#endif
    [[self staticVlan] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}staticVlan...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}staticVlan."];
    }
  }
  if ([self container]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "container", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}container."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}container...");
#endif
    [[self container] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}container...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}container."];
    }
  }
  if ([self ports]) {
    __enumerator = [[self ports] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nodeConnectors", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}nodeConnectors."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}nodeConnectors...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}nodeConnectors...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}nodeConnectors."];
      }
    } //end item iterator.
  }
  if ([self containerFlows]) {
    __enumerator = [[self containerFlows] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "flowSpecs", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}flowSpecs."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}flowSpecs...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}flowSpecs...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}flowSpecs."];
      }
    } //end item iterator.
  }
}
@end /* implementation FULLNS0ContainerConfig (JAXB) */

#endif /* DEF_FULLNS0ContainerConfig_M */
