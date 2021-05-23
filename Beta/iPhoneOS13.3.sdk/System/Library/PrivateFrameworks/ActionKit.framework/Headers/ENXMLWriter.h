/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class ENXMLDTD, NSMutableString, NSString;

@protocol ENXMLWriterDelegate;

@interface ENXMLWriter : NSObject

{
    id <ENXMLWriterDelegate> _delegate;
    NSMutableString *_contents;
    struct _xmlTextWriter *_xmlWriter;
    struct _xmlOutputBuffer {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
    } *_xmlOutputBuffer;
    ENXMLDTD *_dtd;
    NSString *_currentElementName;
    unsigned long long _openElementCount;
}

@property (retain, nonatomic) NSString *currentElementName;
@property (weak, nonatomic) id <ENXMLWriterDelegate> delegate;
@property (retain, nonatomic) ENXMLDTD *dtd;
@property (nonatomic) unsigned long long openElementCount;
@property (nonatomic, readonly) NSString *contents;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)endElement;
- (void)writeString:(id)arg1;
- (_Bool)startElement:(id)arg1 withAttributes:(id)arg2;
- (_Bool)startElement:(id)arg1;
- (_Bool)startElement:(id)arg1 attributes:(id)arg2;
- (void)startCDATA;
- (void)endCDATA;
- (void)startDocument;
- (void)endDocument;
- (_Bool)writeElement:(id)arg1 attributes:(id)arg2 content:(id)arg3;
- (_Bool)writeAttributeName:(id)arg1 value:(id)arg2;
- (void)writeString:(id)arg1 raw:(_Bool)arg2;
- (void)writeRawString:(id)arg1;
- (void)writeCDATA:(id)arg1;
- (_Bool)writeElement:(id)arg1 withAttributes:(id)arg2 content:(id)arg3;

@end
