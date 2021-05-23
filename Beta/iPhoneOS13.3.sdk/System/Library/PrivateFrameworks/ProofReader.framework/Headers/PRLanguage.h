/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLanguage : NSObject

{
    NSString *_identifier;
    NSString *_localization;
    NSString *_fallbackLocalization;
    unsigned long long _orthoIndex;
    unsigned int _encoding;
    unsigned char _languageCode;
    unsigned char _languageDialect;
    unsigned char _languageMode;
}

+ (id)languageWithIdentifier:(id)arg1;
+ (id)dataBundle;
+ (id)localizationForLanguage:(id)arg1;
+ (id)fallbackLocalizationForLanguage:(id)arg1;
+ (id)localizationsForLanguage:(id)arg1;
+ (unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1;
+ (unsigned long long)orthographyIndexForForOtherLanguage:(id)arg1;
+ (unsigned int)encodingForOrthographyIndex:(unsigned long long)arg1;
+ (void)getCodesForLanguage:(id)arg1 languageCode:(char *)arg2 languageDialect:(char *)arg3 languageMode:(char *)arg4 orthographyIndex:(unsigned long long *)arg5 encoding:(unsigned int *)arg6;

- (void)dealloc;
- (unsigned char)languageCode;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (unsigned int)encoding;
- (id)localization;
- (id)fallbackLocalization;
- (unsigned long long)orthographyIndex;
- (unsigned char)languageDialect;
- (unsigned char)languageMode;
- (const char *)oneLetterWords;
- (const char *)twoLetterWords;
- (const char *)accents;
- (_Bool)isArabic;
- (_Bool)isBulgarian;
- (_Bool)isCzech;
- (_Bool)isDanish;
- (_Bool)isDutch;
- (_Bool)isEnglish;
- (_Bool)isFinnish;
- (_Bool)isFrench;
- (_Bool)isGerman;
- (_Bool)isGreek;
- (_Bool)isHebrew;
- (_Bool)isHindi;
- (_Bool)isHungarian;
- (_Bool)isIndonesian;
- (_Bool)isItalian;
- (_Bool)isKorean;
- (_Bool)isNorwegian;
- (_Bool)isPolish;
- (_Bool)isPortuguese;
- (_Bool)isRussian;
- (_Bool)isSpanish;
- (_Bool)isSwedish;
- (_Bool)isThai;
- (_Bool)isTurkish;
- (_Bool)isUkrainian;
- (_Bool)isVietnamese;

@end
