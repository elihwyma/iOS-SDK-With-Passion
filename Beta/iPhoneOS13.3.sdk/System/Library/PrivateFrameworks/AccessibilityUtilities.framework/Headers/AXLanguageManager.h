/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSSet, NSString;

@interface AXLanguageManager : NSObject

{
    AXDialectMap *_dialectForSystemLanguage;
    AXDialectMap *_dialectForCurrentLocale;
    AXDialectMap *_dialectForCurrentRegion;
    _Bool __unitTest_didUpdateForLocaleChange;
    NSArray *_langMaps;
    NSCharacterSet *_commonCharacters;
    NSLocale *_userLocale;
}

@property (retain, nonatomic) NSArray *langMaps;
@property (copy, nonatomic) NSLocale *userLocale;
@property (retain, nonatomic) NSCharacterSet *commonCharacters;
@property (weak, nonatomic) AXDialectMap *dialectForSystemLanguage;
@property (weak, nonatomic) AXDialectMap *dialectForCurrentLocale;
@property (weak, nonatomic) AXDialectMap *dialectForCurrentRegion;
@property (nonatomic) _Bool _unitTest_didUpdateForLocaleChange;
@property (nonatomic, readonly) NSString *systemLanguageID;
@property (weak, nonatomic, readonly) AXDialectMap *dialectForUserLocale;
@property (nonatomic, readonly) NSSet *preferredLanguageIDsFromUserSelectedKeyboards;

+ (id)sharedInstance;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1;
+ (id)nonlocalizedNameForLanguage:(id)arg1;
+ (_Bool)voiceOverSupportedInCurrentLanguage;
+ (id)commonPunctuationCharacters;
+ (id)doNotTranslateWords;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1;
+ (id)nameForAlternativeVoiceIdentifier:(id)arg1;
+ (id)dialectForAlternativeVoiceIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)dialectForLanguageID:(id)arg1;
- (id)basicDescription;
- (_Bool)isCharacterCommon:(unsigned short)arg1;
- (void)_handleUserLocaleDidChange:(id)arg1;
- (id)_loadLangMaps;
- (void)updateCachedDialects;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1;
- (id)characterSetForRanges:(id)arg1;
- (id)dialectsThatCanSpeakString:(id)arg1;
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg1;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (_Bool)isStringComposedByCommonCharacters:(id)arg1;
- (id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2;
- (_Bool)didUpdateForLocaleChange;

@end
