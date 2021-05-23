/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLocale, NSMutableDictionary, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface TPSSubscriptionLabeler : NSObject

{
    NSMutableDictionary *_labelDictionary;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSURL *_url;
    NSArray *_applicableUnlocalizedLabels;
    NSString *_applicableLanguage;
    NSLocale *_updatingLocale;
    NSArray *_cachedResult;
}

@property (retain, nonatomic) NSMutableDictionary *labelDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSArray *applicableUnlocalizedLabels;
@property (retain, nonatomic) NSString *applicableLanguage;
@property (retain, nonatomic) NSLocale *updatingLocale;
@property (retain, nonatomic) NSArray *cachedResult;

+ (id)localizedLabelForLabel:(id)arg1;
+ (id)localizedLabelForLabel:(id)arg1 longForm:(_Bool)arg2 languageStringOverrides:(id)arg3;
+ (id)localizedStringDictionaryForLanguageIdentifiers:(id)arg1 selectedLanguage:(id *)arg2;
+ (id)localizedLabelsForLabels:(id)arg1 languageStringOverrides:(id)arg2;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageStringOverrides:(id)arg2;
+ (id)displayShortLabelStringsForLongFormShortLabels:(id)arg1;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
+ (id)stringsByAbbreviatingToPrefixesOfStrings:(id)arg1;
+ (id)stringsByClippingStrings:(id)arg1 toWidthOfString:(id)arg2;
+ (id)stringsByNumericallyDisambiguatingStrings:(id)arg1;
+ (_Bool)isExclusivelyCJKString:(id)arg1 characterSets:(id)arg2;
+ (id)fontAttributeDictionary;
+ (double)widthOfString:(id)arg1 attributes:(id)arg2;
+ (id)_groupStringsByCollationEquivalency:(id)arg1;
+ (_Bool)_dictionary:(id)arg1 containsCollationEquivalentKey:(id)arg2;
+ (_Bool)isString:(id)arg1 exclusivelyInCharacterSet:(struct USet *)arg2;
+ (id)_resultWithAllCharacters:(CDUnknownBlockType)arg1 string:(id)arg2;
+ (id)localizedLabelsForLabels:(id)arg1 languageIdentifiers:(id)arg2;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1;
+ (id)stringByShorteningString:(id)arg1 maximumWidth:(double)arg2 attributes:(id)arg3;
+ (id)standardLabelIdentifiers;

- (void)_validateLabelsForInstalledUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
- (id)initWithLabelStorage:(id)arg1;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1;

@end
