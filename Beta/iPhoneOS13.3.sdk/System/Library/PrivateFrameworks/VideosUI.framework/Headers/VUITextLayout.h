/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSNumber, NSShadow, NSString, UIColor;

@interface VUITextLayout : NSObject <Swift>

{
    _Bool _alwaysFocusable;
    unsigned int _fontTraits;
    int _blendMode;
    long long _textStyle;
    NSString *_maximumContentSizeCategory;
    NSString *_fontFamily;
    long long _fontWeight;
    double _fontSize;
    long long _fontFeature;
    UIColor *_color;
    UIColor *_darkColor;
    UIColor *_highlightOrSelectedColor;
    UIColor *_darkHighlightOrSelectedColor;
    UIColor *_seeMoreTextColor;
    UIColor *_darkSeeMoreTextColor;
    NSString *_compositingFilter;
    NSString *_darkCompositingFilter;
    long long _textTransform;
    long long _alignment;
    unsigned long long _numberOfLines;
    unsigned long long _numberOfLinesAXSmall;
    unsigned long long _numberOfLinesAXLarge;
    double _minimumScaleFactor;
    NSShadow *_shadow;
    NSNumber *_letterSpacing;
    long long _lineBreakMode;
    struct UIEdgeInsets _margin;
}

@property (nonatomic) long long textStyle;
@property (retain, nonatomic) NSString *maximumContentSizeCategory;
@property (retain, nonatomic) NSString *fontFamily;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned int fontTraits;
@property (nonatomic) long long fontFeature;
@property (nonatomic) struct UIEdgeInsets margin;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *darkColor;
@property (retain, nonatomic) UIColor *highlightOrSelectedColor;
@property (retain, nonatomic) UIColor *darkHighlightOrSelectedColor;
@property (retain, nonatomic) UIColor *seeMoreTextColor;
@property (retain, nonatomic) UIColor *darkSeeMoreTextColor;
@property (retain, nonatomic) NSString *compositingFilter;
@property (retain, nonatomic) NSString *darkCompositingFilter;
@property (nonatomic) long long textTransform;
@property (nonatomic) long long alignment;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long numberOfLinesAXSmall;
@property (nonatomic) unsigned long long numberOfLinesAXLarge;
@property (nonatomic) double minimumScaleFactor;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) NSNumber *letterSpacing;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) int blendMode;
@property (nonatomic) _Bool alwaysFocusable;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_defaultParagraphStyle;
- (void)setColorWithOpacityType:(long long)arg1;
- (id)attributedStringWithString:(id)arg1 view:(id)arg2;
- (id)attributedStringWithAttributedString:(id)arg1 view:(id)arg2;
- (id)defaultAttributesForLabel:(id)arg1;
- (id)attributedStringWithString:(id)arg1;
- (unsigned long long)numberOfLinesForTraitCollection:(id)arg1;

@end
