/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXLangMap, AXLanguageManager, NSCharacterSet, NSLocale, NSString;

@interface AXDialectMap : NSObject

{
    AXLangMap *_langMap;
    NSString *_voiceName;
    NSLocale *_locale;
    NSString *_specificLanguageID;
    NSCharacterSet *_speakableCharacters;
    NSCharacterSet *_secondaryLanguageRange;
}

@property (weak, nonatomic) AXLangMap *langMap;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *voiceName;
@property (retain, nonatomic) NSCharacterSet *speakableCharacters;
@property (copy, nonatomic) NSString *specificLanguageID;
@property (nonatomic, readonly) AXLanguageManager *langManager;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange;
@property (nonatomic, readonly) NSString *languageNameInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameInNativeLocale;
@property (nonatomic, readonly) NSString *languageNameAndLocaleInCurrentLocale;
@property (nonatomic, readonly) NSString *localeNameInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameAndLocaleInNativeLocale;
@property (nonatomic, readonly) NSString *regionID;

+ (id)_hanjaCharacterSet;
+ (id)_hanjaToHangulMap;

- (id)description;
- (id)debugDescription;
- (id)basicDescription;
- (_Bool)speakingRequiresTransliteration;
- (id)_transliteratedSpeechCharacters;
- (_Bool)canSpeakCharacter:(unsigned short)arg1;
- (_Bool)_languageIsKorean;
- (id)_stringByTransliterationHanjaToHangul:(id)arg1;
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5;
- (_Bool)isDialectSecondaryForCharacter:(unsigned short)arg1;
- (_Bool)canSpeakLongCharacter:(unsigned int)arg1;
- (_Bool)canSpeakString:(id)arg1;
- (id)transliteratedStringForString:(id)arg1;

@end
