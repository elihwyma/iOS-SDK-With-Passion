/*
 Image: /System/Library/PrivateFrameworks/InternationalSupport.framework/InternationalSupport
 */

#import <Foundation/NSLocale.h>

@class NSArray, NSString;

@interface NSLocale (InternationalSupportExtensions)

@property (readonly) NSString *languageIdentifier;
@property (copy, readonly) NSString *numberingSystem;
@property (copy, readonly) NSArray *availableNumberingSystems;

+ (id)deviceLanguage;
+ (id)supportedLanguages;
+ (id)languagesByAddingRelatedLanguagesToLanguages:(id)arg1;
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)baseLanguageFromLanguage:(id)arg1;
+ (id)baseSystemLanguages;
+ (id)languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3 filter:(long long)arg4;
+ (id)exemplarForLanguage:(id)arg1;
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;
+ (id)_globalPreferredLanguages;
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;
+ (id)_languagesToExemplarStrings;
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)_supportedKeyboardLanguages;
+ (id)_languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3;
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;
+ (id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3;
+ (id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;
+ (id)scriptCodeFromLanguage:(id)arg1;
+ (id)relatedLanguagesForLanguage:(id)arg1;
+ (id)_languageNameOverrides;
+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames *)arg2;
+ (id)_regionLanguageDataForRegionCode:(id)arg1 subdivisionCode:(id)arg2;
+ (id)supportedRegions;
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;

- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2;
- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
- (_Bool)isEquivalentTo:(id)arg1;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;
- (id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(_Bool)arg3;
- (id)localizedStringForNumberingSystem:(id)arg1 short:(_Bool)arg2;
- (id)countryCodeTopLevelDomainsUsingPunycode:(_Bool)arg1;

@end
