/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface AFLanguageDetectionUserContext : NSObject <Swift>

{
    NSMutableDictionary *_lidUserContext;
    unsigned int _userContextChangeBit;
    _Bool _simulateLanguageDetectorAssetsAvailability;
    NSArray *_simulatingLanguageCodes;
    NSArray *_finalDictationLanguages;
    NSMutableDictionary *_dictationLanguageMappingCache;
    _Bool _languageToggled;
    NSString *_currentKeyboard;
    NSString *_primaryLanguageCode;
    NSDictionary *_languageCodeOverrides;
    NSString *_prevMessageLanguage;
    NSString *_globalLastUsedKeyboard;
    NSArray *_multiLingualKeyboardLanguages;
    NSArray *_keyboardConvoRecentMessages;
    NSArray *_dictationLanguages;
    NSDictionary *_keyboardConversationLanguagePriors;
    NSDictionary *_keyboardGlobalLanguagePriors;
    NSNumber *_dictationInputOrigin;
}

@property (copy, nonatomic) NSString *currentKeyboard;
@property (copy, nonatomic) NSString *primaryLanguageCode;
@property (copy, nonatomic) NSDictionary *languageCodeOverrides;
@property (nonatomic, getter=wasLanguageToggled, setter=setWasLanguageToggled:) _Bool languageToggled;
@property (copy, nonatomic) NSString *prevMessageLanguage;
@property (copy, nonatomic) NSString *globalLastUsedKeyboard;
@property (copy, nonatomic) NSArray *multiLingualKeyboardLanguages;
@property (copy, nonatomic) NSArray *keyboardConvoRecentMessages;
@property (copy, nonatomic) NSArray *dictationLanguages;
@property (copy, nonatomic) NSDictionary *keyboardConversationLanguagePriors;
@property (copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors;
@property (copy, nonatomic) NSNumber *dictationInputOrigin;

+ (_Bool)supportsSecureCoding;
+ (id)defaultContextWithPrimaryLanguage:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)context;
- (id)userContextLanguageCodeForKeyboardLangauge:(id)arg1 overrideLanguageCode:(id)arg2;
- (void)_removeContextValueForKey:(id)arg1 context:(id)arg2;
- (void)_updateContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;
- (id)getSiriDictationLanguagesFromLanguages:(id)arg1;
- (void)_setContextValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;
- (id)siriDictationLanguageForLanguage:(id)arg1;
- (id)priorsByReplacingKeyboardLanguage:(id)arg1;
- (id)languageDetectorUserContext;
- (void)_setFinalFilteredDictationLanguages:(id)arg1;
- (void)_setDictationLanguageCodeMappingCache:(id)arg1;
- (void)setSimulatingLanguageCodes:(id)arg1;
- (void)setShouldSimulateLanguageDetectorAssetsAvailability:(_Bool)arg1;
- (void)_setUserContextChangeBit:(unsigned int)arg1;
- (void)_setLanguageDetectorContext:(id)arg1;
- (_Bool)isUpdateAvailableForLanguageDetectorContext;
- (unsigned int)languageDetectorContextChangeBits;
- (id)getContextForAnalytics;
- (id)getDictationLanguagesForSupportedLocales:(id)arg1 error:(id *)arg2;
- (id)finalFilteredDictationLanguages;
- (_Bool)shouldSimulateLanguageDetectorAssetsAvailability;
- (id)simulatingLanguageCodes;

@end
