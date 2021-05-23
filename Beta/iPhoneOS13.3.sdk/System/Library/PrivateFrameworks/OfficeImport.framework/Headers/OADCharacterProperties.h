/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

@class NSArray, NSString, OADColor, OADFill, OADHyperlink, OADStroke;

__attribute__((visibility("hidden")))
@interface OADCharacterProperties : OADProperties

{
    NSString *mLatinFont;
    NSString *mEastAsianFont;
    NSString *mBidiFont;
    NSString *mHAnsiFont;
    NSString *mSymbolFont;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    OADFill *mFill;
    OADStroke *mStroke;
    NSArray *mEffects;
    OADFill *mUnderlineFill;
    OADStroke *mUnderlineStroke;
    OADColor *mHighlight;
    float mOpacity;
    float mSize;
    float mSpacing;
    float mBaseline;
    unsigned char mUnderlineType;
    unsigned char mFormatType;
    unsigned char mFormatKerningType;
    unsigned char mStrikeThroughType;
    unsigned char mCaps;
    int mLanguage;
    unsigned int mHasUnderlineFill:1;
    unsigned int mHasUnderlineStroke:1;
    unsigned int mHasHighlight:1;
    unsigned int mHasOpacity:1;
    unsigned int mHasIsBold:1;
    unsigned int mIsBold:1;
    unsigned int mHasIsItalic:1;
    unsigned int mIsItalic:1;
    unsigned int mHasUnderlineType:1;
    unsigned int mHasFormatType:1;
    unsigned int mHasFormatKerningType:1;
    unsigned int mHasStrikeThroughType:1;
    unsigned int mHasSize:1;
    unsigned int mHasSpacing:1;
    unsigned int mHasKerning:1;
    unsigned int mHasIsVerticalText:1;
    unsigned int mIsVerticalText:1;
    unsigned int mHasIsRightToLeft:1;
    unsigned int mIsRightToLeft:1;
    unsigned int mHasBaseline:1;
    unsigned int mHasIsHorizontalNormalized:1;
    unsigned int mIsHorizontalNormalized:1;
    unsigned int mHasCaps:1;
    unsigned int mHasLanguage:1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (float)size;
- (float)spacing;
- (void)setSize:(float)arg1;
- (float)opacity;
- (void)setOpacity:(float)arg1;
- (int)language;
- (void)setLanguage:(int)arg1;
- (void)setSpacing:(float)arg1;
- (_Bool)hasBaseline;
- (id)highlight;
- (id)stroke;
- (id)fill;
- (_Bool)isBold;
- (id)symbolFont;
- (void)setBaseline:(float)arg1;
- (float)baseline;
- (void)setHighlight:(id)arg1;
- (_Bool)hasSize;
- (_Bool)hasLanguage;
- (id)initWithDefaults;
- (_Bool)isRightToLeft;
- (void)setIsRightToLeft:(_Bool)arg1;
- (void)setIsBold:(_Bool)arg1;
- (_Bool)hasIsBold;
- (_Bool)hasStroke;
- (_Bool)hasFill;
- (_Bool)hasEffects;
- (void)setStroke:(id)arg1;
- (unsigned char)caps;
- (void)setFill:(id)arg1;
- (unsigned char)formatType;
- (void)setCaps:(unsigned char)arg1;
- (id)effects;
- (void)setEffects:(id)arg1;
- (id)clickHyperlink;
- (_Bool)isItalic;
- (id)latinFont;
- (_Bool)hasLatinFont;
- (id)eastAsianFont;
- (id)bidiFont;
- (unsigned char)underlineType;
- (_Bool)hasStrikeThroughType;
- (unsigned char)strikeThroughType;
- (_Bool)hasCaps;
- (_Bool)hasSpacing;
- (void)setUnderlineType:(unsigned char)arg1;
- (void)setIsItalic:(_Bool)arg1;
- (void)setIsVerticalText:(_Bool)arg1;
- (void)setStrikeThroughType:(unsigned char)arg1;
- (void)setUnderlineFill:(id)arg1;
- (void)setUnderlineStroke:(id)arg1;
- (void)setClickHyperlink:(id)arg1;
- (void)setHoverHyperlink:(id)arg1;
- (void)setFormatType:(unsigned char)arg1;
- (void)setLatinFont:(id)arg1;
- (void)setEastAsianFont:(id)arg1;
- (void)setBidiFont:(id)arg1;
- (void)setHAnsiFont:(id)arg1;
- (void)setSymbolFont:(id)arg1;
- (void)setFormatKerningType:(unsigned char)arg1;
- (void)setIsHorizontalNormalized:(_Bool)arg1;
- (_Bool)hasOpacity;
- (_Bool)hasUnderlineType;
- (_Bool)hasHighlight;
- (_Bool)hasUnderlineFill;
- (_Bool)hasUnderlineStroke;
- (_Bool)hasIsItalic;
- (_Bool)hasFormatType;
- (_Bool)hasFormatKerningType;
- (_Bool)hasIsVerticalText;
- (_Bool)hasIsRightToLeft;
- (_Bool)hasIsHorizontalNormalized;
- (_Bool)hasEastAsianFont;
- (_Bool)hasBidiFont;
- (_Bool)hasHAnsiFont;
- (_Bool)hasSymbolFont;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (id)hansiFont;
- (id)underlineFill;
- (_Bool)isAnythingOverridden;
- (id)underlineStroke;
- (unsigned char)formatKerningType;
- (_Bool)isVerticalText;
- (_Bool)isHorizontalNormalized;
- (void)overrideWithCharacterProperties:(id)arg1;
- (id)hoverHyperlink;
- (void)removeUnnecessaryOverrides;
- (_Bool)isAnyCharacterPropertyOverridden;
- (void)overrideWithProperties:(id)arg1;

@end
