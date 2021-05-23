/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/KSXMLWriter.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface KSHTMLWriter : KSXMLWriter

{
    NSString *_docType;
    _Bool _isXHTML;
    NSMutableSet *_IDs;
    NSMutableArray *_classNames;
}

@property (copy, nonatomic) NSString *docType;

+ (_Bool)isDocTypeXHTML:(id)arg1;

- (id)initWithOutputWriter:(id)arg1;
- (id)initWithOutputWriter:(id)arg1 docType:(id)arg2 encoding:(unsigned long long)arg3;
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;
- (_Bool)isXHTML;
- (id)currentElementClassName;
- (void)pushClassName:(id)arg1;
- (void)pushAttribute:(id)arg1 value:(id)arg2;
- (id)currentAttributes;
- (_Bool)hasCurrentAttributes;
- (void)writeHTMLString:(id)arg1;
- (void)writeHTMLFormat:(id)arg1;
- (void)startElement:(id)arg1 className:(id)arg2;
- (void)startElement:(id)arg1 idName:(id)arg2 className:(id)arg3;
- (_Bool)isIDValid:(id)arg1;
- (void)writeLineBreak;
- (void)startAnchorElementWithHref:(id)arg1 title:(id)arg2 target:(id)arg3 rel:(id)arg4;
- (void)writeImageWithSrc:(id)arg1 alt:(id)arg2 width:(id)arg3 height:(id)arg4;
- (void)writeLinkWithHref:(id)arg1 type:(id)arg2 rel:(id)arg3 title:(id)arg4 media:(id)arg5;
- (void)writeLinkToStylesheet:(id)arg1 title:(id)arg2 media:(id)arg3;
- (void)writeJavascriptWithSrc:(id)arg1 encoding:(unsigned long long)arg2;
- (void)writeJavascriptWithSrc:(id)arg1 charset:(id)arg2;
- (void)writeJavascript:(id)arg1 useCDATA:(_Bool)arg2;
- (void)startJavascriptElementWithSrc:(id)arg1;
- (void)startJavascriptCDATA;
- (void)endJavascriptCDATA;
- (void)writeParamElementWithName:(id)arg1 value:(id)arg2;
- (void)writeStyleElementWithCSSString:(id)arg1;
- (void)startStyleElementWithType:(id)arg1;
- (_Bool)topElementIsList;
- (_Bool)elementCanBeEmpty:(id)arg1;
- (_Bool)canWriteElementInline:(id)arg1;
- (_Bool)validateElement:(id)arg1;
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;
- (void)startElement:(id)arg1 writeInline:(_Bool)arg2;
- (void)closeEmptyElementTag;

@end
