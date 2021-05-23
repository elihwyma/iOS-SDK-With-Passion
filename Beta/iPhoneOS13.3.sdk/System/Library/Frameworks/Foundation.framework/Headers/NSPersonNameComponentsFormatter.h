/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSLocale, NSString;

@interface NSPersonNameComponentsFormatter : NSFormatter <Swift>

{
    id _private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool _forceFamilyNameFirst;
@property _Bool _forceGivenNameFirst;
@property NSLocale *_locale;
@property _Bool _ignoresFallbacks;
@property long long style;
@property (getter=isPhonetic) _Bool phonetic;

+ (_Bool)supportsSecureCoding;
+ (id)__familyNameFirstOrdering;
+ (id)__givenNameFirstOrdering;
+ (_Bool)__shortStyleRestrictionExistsForComponents:(id)arg1 shortStyle:(long long)arg2;
+ (unsigned long long)__inferredScriptIndexFromString:(id)arg1;
+ (_Bool)isKatakana:(id)arg1;
+ (id)__initialsForString:(id)arg1;
+ (_Bool)_shouldPreferNicknames;
+ (_Bool)_isCJKScript:(id)arg1;
+ (_Bool)_isMixedScript:(id)arg1;
+ (_Bool)_shortNameIsEnabled;
+ (long long)__abbreviatedNameFormatForPersonNameComponents:(id)arg1;
+ (_Bool)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (id)__currentLocale;
+ (id)__preferredLanguages;
+ (_Bool)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (id)_formatterWithStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (id)_styleFormatterForStyle:(long long)arg1 masterFormatter:(id)arg2;
+ (struct USet *)__getCharacterSetWithPattern:(id)arg1;
+ (_Bool)__contents:(id)arg1 exclusivelyInCharacterSet:(struct USet *)arg2;
+ (id)__characterSetWithPattern:(id)arg1;
+ (void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
+ (id)__stringByStrippingNonInitialPunctuationFromString:(id)arg1;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ignoreUndeterminedComponents:(_Bool)arg2;
+ (id)_cjkLanguagesSet;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1;
+ (id)_cjkLocaleIdentifiers;
+ (long long)__nameOrderForLocale:(id)arg1 usingNativeOrdering:(_Bool)arg2;
+ (long long)_defaultDisplayNameOrder;
+ (long long)_defaultShortNameFormat;
+ (_Bool)__style:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (_Bool)__shortStyle:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (_Bool)__style:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (_Bool)__shortStyle:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (long long)__shortNameFormatForLocale:(id)arg1;
+ (id)__naiveDelimiterForCombinedNameString:(id)arg1;
+ (void)__registerDefaults;
+ (SEL)__initialsCreatorForScript:(unsigned long long)arg1;
+ (id)__thaiConsonantSet;
+ (id)__localizedNameDefaults;
+ (id)__supportedNameDefaultsFromLocale:(id)arg1;
+ (id)__scriptIdentifierFromIndex:(unsigned long long)arg1;
+ (id)__supportedScriptDefaultsFromScriptName:(id)arg1;
+ (long long)__abbreviatedNameFormatForString:(id)arg1;
+ (id)__stringValueForStyle:(long long)arg1;
+ (id)__stringValueForShortStyle:(long long)arg1;
+ (CDUnknownBlockType)westernInitialsCreator;
+ (id)localizedStringFromPersonNameComponents:(id)arg1 style:(long long)arg2 options:(unsigned long long)arg3;
+ (id)__longestComponentFromComponents:(id)arg1;
+ (_Bool)_currentLocaleIsCJK;
+ (long long)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (id)_localizedDelimiterForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (id)_relevantKeyPathsForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (id)_fallbackDescriptorForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (id)_localizedShortNameForComponents:(id)arg1 withStyle:(long long)arg2 options:(unsigned long long)arg3;
+ (CDUnknownBlockType)thaiInitialsCreator;
+ (CDUnknownBlockType)tibetanInitialsCreator;
+ (CDUnknownBlockType)arabicInitialsCreator;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringFromPersonNameComponents:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)__localizedRestrictionExistsForStyle:(long long)arg1;
- (_Bool)__localizedRestrictionExistsForComponents:(id)arg1 ignoreUndeterminedComponents:(_Bool)arg2;
- (long long)__computedNameOrderForComponents:(id)arg1;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (long long)__computedShortNameFormat;
- (_Bool)__localizedRestrictionExistsForShortStyle:(long long)arg1;
- (long long)__localizedNameOrderUsingNativeOrdering:(_Bool)arg1;
- (long long)__localizedShortNameFormat;
- (long long)_nameOrderWithOverridesForComponents:(id)arg1;
- (id)personNameComponentsFromString:(id)arg1;
- (_Bool)isEqualToFormatter:(id)arg1;

@end
