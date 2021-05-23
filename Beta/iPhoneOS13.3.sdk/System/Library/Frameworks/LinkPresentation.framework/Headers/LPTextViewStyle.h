/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPGlyphStyle, LPPadding, LPPointUnit, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface LPTextViewStyle : NSObject

{
    _Bool _shouldScaleMaximumLinesWithDynamicType;
    unsigned int _maximumLines;
    UIColor *_color;
    UIFont *_font;
    long long _textAlignment;
    LPPointUnit *_firstLineLeading;
    LPPointUnit *_lastLineDescent;
    LPGlyphStyle *_leadingGlyph;
    LPPadding *_padding;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned int maximumLines;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) LPPointUnit *firstLineLeading;
@property (retain, nonatomic) LPPointUnit *lastLineDescent;
@property (retain, nonatomic) LPGlyphStyle *leadingGlyph;
@property (retain, nonatomic, readonly) LPPadding *padding;
@property (nonatomic) _Bool shouldScaleMaximumLinesWithDynamicType;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
