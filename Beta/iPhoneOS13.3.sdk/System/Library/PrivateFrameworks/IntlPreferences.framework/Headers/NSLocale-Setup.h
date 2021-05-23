/*
 Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

#import <NSLocale.h>

@class NSArray, NSString;

@interface NSLocale (Setup)

@property (nonatomic, readonly) NSString *languageIdentifier;
@property (copy, readonly) NSArray *selectableScriptCodes;
@property (copy, readonly) NSString *optionNameForSelectableScripts;
@property (copy, readonly) NSString *optionNameWithColonForSelectableScripts;
@property (copy, readonly) NSString *explanationTextForSelectableScripts;

+ (id)deviceLanguageIdentifier;
+ (void)unregisterPreferredLanguageForKeyboardLanguage:(id)arg1;
+ (void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1;
+ (void)resetTimeFormat;
+ (id)_subdivisionCodeFromSubdivisionTag:(id)arg1 restrictedToRegionCode:(id)arg2;
+ (void)setLocaleOnly:(id)arg1;
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)renderableUILanguages;
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (id)renderableLanguagesFromList:(id)arg1;
+ (id)validateLocale:(id)arg1;
+ (id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1;
+ (void)updateShouldShowPreferredLanguages:(_Bool)arg1;
+ (void)setLocaleAndResetTimeFormat:(id)arg1;
+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;
+ (id)_sanitizedLanguageIdentifierFromKeyboardLanguage:(id)arg1;
+ (id)deviceLanguageLocale;
+ (id)supportedCJLanguageIdentifiers;
+ (id)renderableLocaleLanguages;
+ (void)setLocaleAfterLanguageChange:(id)arg1;
+ (void)setLocaleAfterRegionChange:(id)arg1;
+ (_Bool)shouldShowPreferredLanguages;
+ (void)setLanguageToPreferredLanguages:(id)arg1 fallback:(id)arg2;
+ (void)enableDefaultKeyboardForPreferredLanguages;
+ (id)archivedPreferences;
+ (void)setArchivedPreferences:(id)arg1;
+ (id)displayNameForSelectableScriptCode:(id)arg1;

- (id)_languagesForMultilingualSetupWithKeyboardsIDs:(id)arg1;
- (_Bool)_requiresMultilingualSetupWithKeyboardIDs:(id)arg1;
- (_Bool)requiresMultilingualSetup;
- (id)languagesForMultilingualSetup;
- (id)defaultLanguagesForMultilingualSetup;
- (id)localeByChangingLanguageTo:(id)arg1;

@end
