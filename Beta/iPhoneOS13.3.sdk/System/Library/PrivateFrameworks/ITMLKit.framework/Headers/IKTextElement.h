/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSArray, NSAttributedString, NSMutableArray, UIColor;

@interface IKTextElement : IKViewElement

{
    IKTextParser *_textParser;
    NSMutableArray *_textBadges;
    NSMutableArray *_textBadgeElements;
    NSMutableArray *_textSpanElements;
    unsigned long long _textStyle;
}

@property (retain, nonatomic, readonly) NSAttributedString *text;
@property (nonatomic, readonly) NSArray *badges;
@property (nonatomic, readonly) unsigned long long textStyle;
@property (nonatomic, readonly) long long maxLines;
@property (nonatomic, readonly) unsigned long long alignment;
@property (nonatomic, readonly) UIColor *color;

+ (_Bool)shouldParseChildDOMElements;

- (id)debugDescription;
- (id)accessibilityText;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)appDocumentDidMarkStylesDirty;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)initWithOriginalElement:(id)arg1;
- (unsigned long long)_styleForTagName:(id)arg1;
- (id)attributedStringWithFont:(id)arg1;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 defaultAttributes:(id *)arg2;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 defaultAttributes:(id *)arg4;

@end
