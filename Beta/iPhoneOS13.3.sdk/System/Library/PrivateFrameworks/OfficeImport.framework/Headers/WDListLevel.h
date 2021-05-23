/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableString, WDCharacterProperties, WDDocument, WDOfficeArt, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : NSObject

{
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long long mStartNumber;
    int mNumberFormat;
    _Bool mRestartNumbering;
    long long mRestartLevel;
    _Bool mLegal;
    int mSuffix;
    NSMutableString *mText;
    _Bool mLegacy;
    long long mLegacySpace;
    long long mLegacyIndent;
    int mJustification;
}

- (id)description;
- (void)setLegacy:(_Bool)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (_Bool)legacy;
- (int)suffix;
- (void)setSuffix:(int)arg1;
- (int)numberFormat;
- (void)setNumberFormat:(int)arg1;
- (id)paragraphProperties;
- (id)characterProperties;
- (int)justification;
- (long long)startNumber;
- (_Bool)restartLevelOverridden;
- (long long)restartLevel;
- (void)setRestartNumbering:(_Bool)arg1;
- (_Bool)restartNumbering;
- (_Bool)legal;
- (void)setStartNumber:(long long)arg1;
- (void)setJustification:(int)arg1;
- (_Bool)startNumberOverridden;
- (_Bool)numberFormatOverridden;
- (_Bool)imageBullet;
- (_Bool)imageBulletOverridden;
- (_Bool)restartNumberingOverridden;
- (_Bool)legalOverridden;
- (_Bool)suffixOverridden;
- (_Bool)textOverridden;
- (long long)legacySpace;
- (long long)legacyIndent;
- (_Bool)justificationOverridden;
- (void)setLegal:(_Bool)arg1;
- (void)setRestartLevel:(long long)arg1;
- (void)setLegacySpace:(long long)arg1;
- (void)setLegacyIndent:(long long)arg1;

@end
