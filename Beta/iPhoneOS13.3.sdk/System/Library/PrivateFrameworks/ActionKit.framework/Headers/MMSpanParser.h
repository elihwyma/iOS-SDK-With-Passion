/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class MMElement, MMHTMLParser, NSMutableArray;

@interface MMSpanParser : NSObject

{
    _Bool _parseEm;
    _Bool _parseImages;
    _Bool _parseLinks;
    _Bool _parseStrong;
    unsigned long long _extensions;
    MMHTMLParser *_htmlParser;
    NSMutableArray *_elements;
    NSMutableArray *_openElements;
    MMElement *_blockElement;
}

@property (nonatomic, readonly) unsigned long long extensions;
@property (nonatomic, readonly) MMHTMLParser *htmlParser;
@property (retain, nonatomic) NSMutableArray *elements;
@property (retain, nonatomic) NSMutableArray *openElements;
@property (retain, nonatomic) MMElement *blockElement;
@property (nonatomic) _Bool parseEm;
@property (nonatomic) _Bool parseImages;
@property (nonatomic) _Bool parseLinks;
@property (nonatomic) _Bool parseStrong;

- (id)initWithExtensions:(unsigned long long)arg1;
- (id)parseSpansInBlockElement:(id)arg1 withScanner:(id)arg2;
- (id)parseSpansInTableColumns:(id)arg1 withScanner:(id)arg2;
- (id)_parseWithScanner:(id)arg1 untilTestPasses:(CDUnknownBlockType)arg2;
- (id)_parseNextElementWithScanner:(id)arg1;
- (_Bool)_parseAutolinkDomainWithScanner:(id)arg1;
- (void)_parseAutolinkPathWithScanner:(id)arg1;
- (id)_parseAutolinkEmailAddressWithScanner:(id)arg1;
- (id)_parseAutolinkURLWithScanner:(id)arg1;
- (id)_parseAutolinkWWWURLWithScanner:(id)arg1;
- (id)_parseStrikethroughWithScanner:(id)arg1;
- (id)_parseEmAndStrongWithScanner:(id)arg1;
- (id)_parseCodeSpanWithScanner:(id)arg1;
- (id)_parseLineBreakWithScanner:(id)arg1;
- (id)_parseAutomaticLinkWithScanner:(id)arg1;
- (id)_parseAutomaticEmailLinkWithScanner:(id)arg1;
- (id)_parseLinkTextBodyWithScanner:(id)arg1;
- (id)_parseInlineLinkWithScanner:(id)arg1;
- (id)_parseReferenceLinkWithScanner:(id)arg1;
- (id)_parseLinkWithScanner:(id)arg1;
- (id)_parseImageWithScanner:(id)arg1;
- (id)_parseAmpersandWithScanner:(id)arg1;
- (id)_parseBackslashWithScanner:(id)arg1;
- (id)_parseLeftAngleBracketWithScanner:(id)arg1;
- (id)_stringWithBackslashEscapesRemoved:(id)arg1;

@end
