/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableData, NSString;

@interface NNMKHTMLParser : NSObject

{
    _Bool _containsBlacklistedElements;
    _Bool _parsingHead;
    _Bool _parsingBody;
    _Bool _cancelled;
    _Bool _isLastCharAddedLineBreak;
    NSString *_htmlBodyToParse;
    unsigned long long _encoding;
    struct _xmlParserCtxt *_parserContext;
    NSMutableData *_charactersBuffer;
    NSMutableArray *_stringAttributesStack;
    NSMutableArray *_isQuoteElementStack;
    unsigned long long _currentQuoteLevel;
    NSMutableArray *_listStack;
    unsigned long long _currentListLevel;
    NSString *_ignoringElementSubtree;
    unsigned long long _bodyTagStartIndex;
    NSString *_bodyTagStyle;
    unsigned long long _currentHeadTagStartIndex;
    unsigned long long _currentImgTagStartIndex;
    NSString *_currentImgTagSource;
    struct _xmlSAXHandler _parsingSAXHandler;
}

@property (retain, nonatomic) NSString *htmlBodyToParse;
@property (nonatomic) unsigned long long encoding;
@property (nonatomic) struct _xmlSAXHandler parsingSAXHandler;
@property (nonatomic) struct _xmlParserCtxt *parserContext;
@property (retain, nonatomic) NSMutableData *charactersBuffer;
@property (retain, nonatomic) NSMutableArray *stringAttributesStack;
@property (retain, nonatomic) NSMutableArray *isQuoteElementStack;
@property (nonatomic) unsigned long long currentQuoteLevel;
@property (retain, nonatomic) NSMutableArray *listStack;
@property (nonatomic) unsigned long long currentListLevel;
@property (nonatomic) _Bool isLastCharAddedLineBreak;
@property (retain, nonatomic) NSString *ignoringElementSubtree;
@property (nonatomic) unsigned long long bodyTagStartIndex;
@property (retain, nonatomic) NSString *bodyTagStyle;
@property (nonatomic) unsigned long long currentHeadTagStartIndex;
@property (nonatomic) unsigned long long currentImgTagStartIndex;
@property (retain, nonatomic) NSString *currentImgTagSource;
@property (nonatomic) _Bool containsBlacklistedElements;
@property (nonatomic) _Bool parsingHead;
@property (nonatomic) _Bool parsingBody;
@property (nonatomic) _Bool cancelled;

- (id)init;
- (void)_appendString:(id)arg1;
- (void)_flushCharactersIfNeeded;
- (_Bool)_isElementIgnorable:(id)arg1;
- (_Bool)_isElementBlacklisted:(id)arg1 attributes:(const char **)arg2;
- (_Bool)_isElementQuoteElement:(id)arg1 attributes:(const char **)arg2;
- (void)_requireNewLine;
- (_Bool)_isElementList:(id)arg1 ordered:(_Bool *)arg2;
- (_Bool)_isElementListItem:(id)arg1;
- (_Bool)_isElementImage:(id)arg1;
- (void)_appendImageFromAttributes:(const char **)arg1;
- (_Bool)_isElementDisplayedInBlock:(id)arg1;
- (_Bool)_isElementLineBreak:(id)arg1;
- (void)_appendLineBreak;
- (_Bool)_isElementHyperlink:(id)arg1;
- (void)_stringAttributeForHyperlink:(id)arg1 attributes:(const char **)arg2 stringAttributeKey:(id *)arg3 stringAttributeValue:(id *)arg4;
- (void)_stringAttributeForElement:(id)arg1 attributes:(const char **)arg2 stringAttributeKey:(id *)arg3 stringAttributeValue:(id *)arg4;
- (id)_valueForAttributeNamed:(id)arg1 inAttributes:(const char **)arg2;
- (id)_stringAttributesForStyleAttribute:(id)arg1;
- (void)_pushStringAttributes:(id)arg1;
- (_Bool)_isElementHead:(id)arg1;
- (_Bool)_isElementBody:(id)arg1;
- (_Bool)caresAboutHTMLContentString;
- (void)processBodyHTMLContent:(id)arg1 style:(id)arg2 contentRange:(struct _NSRange)arg3;
- (void)processHeadHTMLTagContent:(id)arg1;
- (void)processImgTagSource:(id)arg1 contentRange:(struct _NSRange)arg2;
- (void)_popStringAttributes;
- (void)_appendCharacters:(const char *)arg1 length:(int)arg2;
- (_Bool)_isErrorBlacklisted:(struct _xmlError *)arg1;
- (_Bool)isElementBlacklisted:(id)arg1 attributeQueryBlock:(CDUnknownBlockType)arg2;
- (_Bool)isErrorTypeBlacklisted:(char *)arg1;
- (void)_enumerateAttributes:(const char **)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)isElementIgnorable:(id)arg1;
- (id)_stringAttributeValueForCSSStyleName:(id)arg1 inStyleAttribute:(id)arg2;
- (unsigned long long)_textAlignmentFromString:(id)arg1;
- (unsigned long long)_writingDirectionFromString:(id)arg1;
- (id)_topStringAttributes;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (void)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2;

@end
