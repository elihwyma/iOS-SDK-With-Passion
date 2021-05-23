/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/KSForwardingWriter.h>

@class KSXMLAttributes, KSXMLElementContentsProxy, NSArray, NSMutableArray;

@interface KSXMLWriter : KSForwardingWriter

{
    KSXMLAttributes *_attributes;
    NSMutableArray *_openElements;
    _Bool _elementIsEmpty;
    unsigned long long _inlineWritingLevel;
    KSXMLElementContentsProxy *_contentsProxy;
    long long _indentation;
    unsigned long long _encoding;
}

@property (nonatomic) unsigned long long encoding;
@property (nonatomic) long long indentationLevel;
@property (weak, nonatomic, readonly) NSArray *openElements;

+ (void)initialize;
+ (id)stringFromCharacters:(id)arg1;
+ (id)stringFromAttributeValue:(id)arg1;

- (void)close;
- (void)flush;
- (void)endElement;
- (void)writeString:(id)arg1;
- (id)initWithOutputWriter:(id)arg1;
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;
- (void)pushAttribute:(id)arg1 value:(id)arg2;
- (id)currentAttributes;
- (_Bool)hasCurrentAttributes;
- (_Bool)elementCanBeEmpty:(id)arg1;
- (_Bool)canWriteElementInline:(id)arg1;
- (_Bool)validateElement:(id)arg1;
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;
- (void)startElement:(id)arg1 writeInline:(_Bool)arg2;
- (void)closeEmptyElementTag;
- (id)initWithOutputWriter:(id)arg1 encoding:(unsigned long long)arg2;
- (void)writeCharacters:(id)arg1;
- (id)writeElement:(id)arg1 contentsInvocationTarget:(id)arg2;
- (void)writeElement:(id)arg1 text:(id)arg2;
- (void)startElement:(id)arg1;
- (void)startElement:(id)arg1 attributes:(id)arg2;
- (void)willStartElement:(id)arg1;
- (void)pushElement:(id)arg1;
- (void)popElement;
- (void)writeAttributeValue:(id)arg1;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)startNewline;
- (void)writeComment:(id)arg1;
- (void)openComment;
- (void)closeComment;
- (void)startCDATA;
- (void)endCDATA;
- (void)increaseIndentationLevel;
- (void)decreaseIndentationLevel;
- (unsigned long long)openElementsCount;
- (_Bool)hasOpenElement:(id)arg1;
- (id)topElement;
- (void)didStartElement;
- (void)closeStartTag;
- (void)writeEndTag:(id)arg1;
- (_Bool)isWritingInline;
- (void)startWritingInline;
- (void)stopWritingInline;
- (void)writeStringByEscapingXMLEntities:(id)arg1 escapeQuot:(_Bool)arg2;

@end
