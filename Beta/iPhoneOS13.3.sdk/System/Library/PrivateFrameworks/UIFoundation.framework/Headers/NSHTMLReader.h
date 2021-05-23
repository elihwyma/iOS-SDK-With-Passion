/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class DOMDocument, DOMRange, NSData, NSDictionary, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString, NSURL, WebDataSource, WebView;

@interface NSHTMLReader : NSObject

{
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSData *_data;
    NSURL *_baseURL;
    NSDictionary *_options;
    WebView *_webView;
    id _webDelegate;
    DOMDocument *_document;
    DOMRange *_domRange;
    NSMutableArray *_domStartAncestors;
    WebDataSource *_dataSource;
    NSString *_standardFontFamily;
    double _textSizeMultiplier;
    double _webViewTextSizeMultiplier;
    double _defaultTabInterval;
    double _defaultFontSize;
    double _minimumFontSize;
    NSMutableArray *_textLists;
    NSMutableArray *_textBlocks;
    NSMutableArray *_textTables;
    NSMutableDictionary *_textTableFooters;
    NSMutableArray *_textTableSpacings;
    NSMutableArray *_textTablePaddings;
    NSMutableArray *_textTableRows;
    NSMutableArray *_textTableRowArrays;
    NSMutableArray *_textTableRowBackgroundColors;
    NSMutableDictionary *_computedStylesForElements;
    NSMutableDictionary *_specifiedStylesForElements;
    NSMutableDictionary *_stringsForNodes;
    NSMutableDictionary *_floatsForNodes;
    NSMutableDictionary *_colorsForNodes;
    NSMutableDictionary *_attributesForElements;
    NSMutableDictionary *_elementIsBlockLevel;
    NSMutableDictionary *_fontCache;
    NSMutableArray *_writingDirectionArray;
    long long _domRangeStartIndex;
    long long _indexingLimit;
    long long _thumbnailLimit;
    long long _errorCode;
    long long _quoteLevel;
    struct {
        unsigned int isSoft:1;
        unsigned int reachedStart:1;
        unsigned int reachedEnd:1;
        unsigned int isIndexing:1;
        unsigned int isTesting:1;
        unsigned int hasTrailingNewline:1;
        unsigned int pad:26;
    } _flags;
}

+ (void)initialize;
+ (id)defaultParagraphStyle;
+ (_Bool)allowsAttributedStringAgentForOptions:(id)arg1;
+ (_Bool)_usesLibXML2ForOptions:(id)arg1;

- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)attributedString;
- (void)setMutableAttributedString:(id)arg1;
- (id)documentAttributes;
- (id)_computedStyleForElement:(id)arg1;
- (id)_specifiedStyleForElement:(id)arg1;
- (id)_stringForNode:(id)arg1 property:(id)arg2;
- (id)_computedStringForNode:(id)arg1 property:(id)arg2;
- (_Bool)_getFloat:(double *)arg1 forNode:(id)arg2 property:(id)arg3;
- (_Bool)_getComputedFloat:(double *)arg1 forNode:(id)arg2 property:(id)arg3;
- (_Bool)_elementIsBlockLevel:(id)arg1;
- (id)_blockLevelElementForNode:(id)arg1;
- (_Bool)_elementHasOwnBackgroundColor:(id)arg1;
- (id)_colorForNode:(id)arg1 property:(id)arg2;
- (id)_computedColorForNode:(id)arg1 property:(id)arg2;
- (id)_computedAttributesForElement:(id)arg1;
- (id)_attributesForElement:(id)arg1;
- (Class)_DOMHTMLTableCellElementClass;
- (id)_childrenForNode:(id)arg1;
- (void)_processMetaElementWithName:(id)arg1 content:(id)arg2;
- (void)_processHeadElement:(id)arg1;
- (void)_newParagraphForElement:(id)arg1 tag:(id)arg2 allowEmpty:(_Bool)arg3 suppressTrailingSpace:(_Bool)arg4 isEntering:(_Bool)arg5;
- (void)_fillInBlock:(id)arg1 forElement:(id)arg2 backgroundColor:(id)arg3 extraMargin:(double)arg4 extraPadding:(double)arg5 isTable:(_Bool)arg6;
- (void)_addTableCellForElement:(id)arg1;
- (void)_addTableForElement:(id)arg1;
- (_Bool)_addAttachmentForElement:(id)arg1 URL:(id)arg2 needsParagraph:(_Bool)arg3 usePlaceholder:(_Bool)arg4;
- (void)_traverseNode:(id)arg1 depth:(long long)arg2 embedded:(_Bool)arg3;
- (void)_newLineForElement:(id)arg1;
- (void)_addQuoteForElement:(id)arg1 opening:(_Bool)arg2 level:(long long)arg3;
- (void)_addValue:(id)arg1 forElement:(id)arg2;
- (void)_newTabForElement:(id)arg1;
- (void)_traverseFooterNode:(id)arg1 depth:(long long)arg2;
- (void)_addMarkersToList:(id)arg1 range:(struct _NSRange)arg2;
- (_Bool)_enterElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 embedded:(_Bool)arg5;
- (_Bool)_processElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4;
- (void)_exitElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 startIndex:(unsigned long long)arg5;
- (void)_processText:(id)arg1;
- (_Bool)_sanitizeWebArchiveDictionary:(id)arg1;
- (_Bool)_sanitizeWebArchiveArray:(id)arg1;
- (Class)_webArchiveClass;
- (Class)_webViewClass;
- (id)_createWebArchiveForData:(id)arg1;
- (id)_webPreferences;
- (void)_parseNode:(id)arg1;
- (void)_adjustTrailingNewline;
- (void)_loadUsingWebKit;
- (void)_loadFromDOMRange;
- (void)_loadUsingWebKitOnMainThread;
- (void)_load;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (id)initWithDOMRange:(id)arg1;

@end
