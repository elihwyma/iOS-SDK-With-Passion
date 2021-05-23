/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADCharacterProperties.h>

@class NSArray, OADBulletColor, OADBulletFont, OADBulletProperties, OADBulletSize, OADTextSpacing;

__attribute__((visibility("hidden")))
@interface OADParagraphProperties : OADCharacterProperties

{
    int mLevel;
    OADBulletSize *mBulletSize;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADTextSpacing *mLineSpacing;
    OADTextSpacing *mBeforeSpacing;
    OADTextSpacing *mAfterSpacing;
    NSArray *mTabStops;
    float mLeftMargin;
    float mRightMargin;
    float mIndent;
    float mDefaultTab;
    int mBulletCharSet;
    unsigned char mAlign;
    unsigned char mWrap;
    unsigned char mFontAlign;
    unsigned int mIsLatinLineBreak:1;
    unsigned int mIsHangingPunctuation:1;
    unsigned int mHasLevel:1;
    unsigned int mHasLeftMargin:1;
    unsigned int mHasRightMargin:1;
    unsigned int mHasIndent:1;
    unsigned int mHasDefaultTab:1;
    unsigned int mHasBulletCharSet:1;
    unsigned int mHasAlign:1;
    unsigned int mHasWrap:1;
    unsigned int mHasFontAlign:1;
    unsigned int mHasIsLatinLineBreak:1;
    unsigned int mHasIsHangingPunctuation:1;
}

+ (id)defaultProperties;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)level;
- (id)tabStops;
- (id)lineSpacing;
- (void)setTabStops:(id)arg1;
- (void)setLineSpacing:(id)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setLevel:(int)arg1;
- (float)rightMargin;
- (_Bool)hasLevel;
- (id)initWithDefaults;
- (float)indent;
- (unsigned char)align;
- (void)setAlign:(unsigned char)arg1;
- (unsigned char)wrap;
- (void)setWrap:(unsigned char)arg1;
- (_Bool)hasLineSpacing;
- (void)setIndent:(float)arg1;
- (float)leftMargin;
- (void)setBulletProperties:(id)arg1;
- (id)bulletProperties;
- (id)bulletSize;
- (double)nonOveridenLeftMargin;
- (_Bool)hasBulletSize;
- (_Bool)hasBulletFont;
- (id)bulletFont;
- (_Bool)hasBulletColor;
- (id)bulletColor;
- (_Bool)hasBulletProperties;
- (_Bool)hasAlign;
- (_Bool)hasLeftMargin;
- (_Bool)hasIndent;
- (_Bool)hasBeforeSpacing;
- (id)beforeSpacing;
- (_Bool)hasAfterSpacing;
- (id)afterSpacing;
- (void)setDefaultTab:(float)arg1;
- (void)setIsLatinLineBreak:(_Bool)arg1;
- (void)setIsHangingPunctuation:(_Bool)arg1;
- (void)setBeforeSpacing:(id)arg1;
- (void)setAfterSpacing:(id)arg1;
- (void)setBulletColor:(id)arg1;
- (void)setBulletSize:(id)arg1;
- (void)setBulletFont:(id)arg1;
- (void)setBulletCharSet:(int)arg1;
- (void)setFontAlign:(unsigned char)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (void)overrideWithProperties:(id)arg1;
- (_Bool)hasTabStops;
- (_Bool)hasRightMargin;
- (_Bool)hasDefaultTab;
- (_Bool)hasWrap;
- (_Bool)hasFontAlign;
- (_Bool)hasIsLatinLineBreak;
- (_Bool)hasIsHangingPunctuation;
- (_Bool)hasBulletCharSet;
- (float)defaultTab;
- (unsigned char)fontAlign;
- (_Bool)isLatinLineBreak;
- (_Bool)isHangingPunctuation;
- (int)bulletCharSet;

@end
