/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableOrderedSet, NSString, NSURL, WFPythonHTMLParser;

@interface WFHTMLToMarkdown : NSObject

{
    _Bool _unicodeSnob;
    _Bool _escapeSnob;
    _Bool _linksEachParagraph;
    _Bool _skipInternalLinks;
    _Bool _inlineLinks;
    _Bool _ignoreLinks;
    _Bool _ignoreImages;
    _Bool _ignoreEmphasis;
    _Bool _start;
    _Bool _space;
    _Bool _pre;
    _Bool _startpre;
    _Bool _code;
    _Bool _lastWasNewline;
    _Bool _lastWasList;
    NSURL *_baseURL;
    long long _bodyWidth;
    WFPythonHTMLParser *_parser;
    NSDictionary *_nameToCodepointMapping;
    NSDictionary *_unifiableN;
    NSMutableArray *_outTextList;
    NSString *_outText;
    long long _quiet;
    long long _p_p;
    long long _outCount;
    NSMutableArray *_a;
    NSMutableArray *_aStack;
    NSString *_maybeAutomaticLink;
    long long _aCount;
    NSMutableArray *_list;
    long long _blockquote;
    long long _style;
    NSString *_abbreviationTitle;
    NSString *_abbreviationData;
    NSMutableOrderedSet *_abbreviationList;
    NSString *_ulItemMark;
    NSString *_emphasisMark;
    NSString *_strongMark;
}

@property (retain, nonatomic) WFPythonHTMLParser *parser;
@property (retain, nonatomic) NSDictionary *nameToCodepointMapping;
@property (retain, nonatomic) NSDictionary *unifiableN;
@property (retain, nonatomic) NSMutableArray *outTextList;
@property (copy, nonatomic) NSString *outText;
@property (nonatomic) long long quiet;
@property (nonatomic) long long p_p;
@property (nonatomic) long long outCount;
@property (nonatomic) _Bool start;
@property (nonatomic) _Bool space;
@property (retain, nonatomic) NSMutableArray *a;
@property (retain, nonatomic) NSMutableArray *aStack;
@property (copy, nonatomic) NSString *maybeAutomaticLink;
@property (nonatomic) long long aCount;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) long long blockquote;
@property (nonatomic) _Bool pre;
@property (nonatomic) _Bool startpre;
@property (nonatomic) _Bool code;
@property (nonatomic) _Bool lastWasNewline;
@property (nonatomic) _Bool lastWasList;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *abbreviationTitle;
@property (copy, nonatomic) NSString *abbreviationData;
@property (retain, nonatomic) NSMutableOrderedSet *abbreviationList;
@property (copy, nonatomic) NSString *ulItemMark;
@property (copy, nonatomic) NSString *emphasisMark;
@property (copy, nonatomic) NSString *strongMark;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) _Bool unicodeSnob;
@property (nonatomic) _Bool escapeSnob;
@property (nonatomic) _Bool linksEachParagraph;
@property (nonatomic) long long bodyWidth;
@property (nonatomic) _Bool skipInternalLinks;
@property (nonatomic) _Bool inlineLinks;
@property (nonatomic) _Bool ignoreLinks;
@property (nonatomic) _Bool ignoreImages;
@property (nonatomic) _Bool ignoreEmphasis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)close;
- (void)p;
- (id)initWithBaseURL:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)output:(id)arg1;
- (id)handleHTML:(id)arg1;
- (void)parser:(id)arg1 foundStartTag:(id)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 foundData:(id)arg2;
- (void)parser:(id)arg1 foundEndTag:(id)arg2;
- (void)parser:(id)arg1 foundEntityRef:(id)arg2;
- (void)parser:(id)arg1 foundCharacterRef:(id)arg2;
- (_Bool)skipwrap:(id)arg1;
- (id)wrapText:(id)arg1 toWidth:(long long)arg2;
- (_Bool)onlywhite:(id)arg1;
- (id)optwrap:(id)arg1;
- (id)charref:(id)arg1;
- (id)entityref:(id)arg1;
- (id)previousIndex:(id)arg1;
- (int)tagHeaderNumber:(id)arg1;
- (id)escapeMD:(id)arg1;
- (id)escapeMDSection:(id)arg1 snob:(_Bool)arg2;
- (void)handleTag:(id)arg1 attributes:(id)arg2 start:(_Bool)arg3;
- (void)pbr;
- (void)output:(id)arg1 pureData:(_Bool)arg2 force:(id)arg3;
- (unsigned short)nameToCodepoint:(id)arg1;
- (id)unifiable;

@end
