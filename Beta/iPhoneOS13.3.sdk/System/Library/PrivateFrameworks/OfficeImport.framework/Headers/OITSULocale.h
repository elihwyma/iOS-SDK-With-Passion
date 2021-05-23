/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCache, NSLocale, NSLock, NSMutableArray, NSMutableDictionary, NSString, NSTimeZone, OITSUDateParserLibrary;

__attribute__((visibility("hidden")))
@interface OITSULocale : NSObject

{
    NSLocale *_locale;
    NSLocale *_gregorianCalendarLocale;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_documentLanguageIdentifier;
    _Bool _isAutoUpdating;
    NSString *_currencyCode;
    NSString *_decimalSeparator;
    NSString *_currencyDecimalSeparator;
    NSString *_groupingSeparator;
    NSString *_currencyGroupingSeparator;
    NSString *_listSeparator;
    NSString *_percentSymbol;
    long long _dateComponentOrdering;
    NSArray *_monthSymbols;
    NSArray *_standaloneMonthSymbols;
    NSArray *_weekdaySymbols;
    NSArray *_standaloneWeekdaySymbols;
    NSArray *_shortMonthSymbols;
    NSArray *_shortStandaloneMonthSymbols;
    NSArray *_shortWeekdaySymbols;
    NSArray *_shortStandaloneWeekdaySymbols;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _formattersMutex;
    NSMutableArray *_numberFormatters;
    NSMutableArray *_scientificNumberFormatters;
    OITSUDateParserLibrary *_dateParserLibrary;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    struct __CFNumberFormatter *_plainFormatter;
    struct __CFNumberFormatter *_noMinusSignPlainFormatter;
    struct __CFNumberFormatter *_currencyFormatter;
    struct __CFNumberFormatter *_noMinusSignCurrencyFormatter;
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    unsigned long long _groupingSize;
    NSLock *_localeSpecificStorageLock;
    NSMutableDictionary *_localeSpecificStorage;
    NSCache *_cachedLocalizedStrings;
    NSString *_trueString;
    NSString *_falseString;
    NSString *_amString;
    NSString *_pmString;
}

@property (readonly) NSLocale *locale;
@property (readonly) struct __CFLocale *cfLocale;
@property (readonly) NSLocale *gregorianCalendarLocale;
@property (readonly) struct __CFLocale *cfGregorianCalendarLocale;
@property (readonly) NSString *languageCode;
@property (readonly) NSString *localeIdentifier;
@property (readonly) NSString *documentLanguageIdentifier;
@property (readonly) _Bool isAutoUpdating;
@property (readonly) NSString *decimalSeparator;
@property (readonly) NSString *currencyDecimalSeparator;
@property (readonly) NSString *groupingSeparator;
@property (readonly) NSString *currencyGroupingSeparator;
@property (readonly) NSString *listSeparator;
@property (readonly) NSString *arrayRowSeparator;
@property (readonly) NSString *percentSymbol;
@property (readonly) unsigned long long groupingSize;
@property (readonly) NSString *currencyCode;
@property (readonly) long long dateComponentOrdering;
@property (readonly) NSArray *monthSymbols;
@property (readonly) NSArray *standaloneMonthSymbols;
@property (readonly) NSArray *weekdaySymbols;
@property (readonly) NSArray *standaloneWeekdaySymbols;
@property (readonly) NSArray *shortMonthSymbols;
@property (readonly) NSArray *shortStandaloneMonthSymbols;
@property (readonly) NSArray *shortWeekdaySymbols;
@property (readonly) NSArray *shortStandaloneWeekdaySymbols;
@property (readonly) NSString *amString;
@property (readonly) NSString *pmString;
@property (readonly) NSString *trueString;
@property (readonly) NSString *falseString;
@property (readonly) OITSUDateParserLibrary *dateParserLibrary;
@property (readonly) NSTimeZone *timeZone;

+ (void)initialize;
+ (id)currentLocale;
+ (id)preferredLanguages;
+ (id)preferredLocale;
+ (id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageOnly:(id)arg1;
+ (id)deducedScriptForLocale:(id)arg1;
+ (_Bool)localeIsAutoUpdating:(id)arg1;
+ (id)localeIDWithDefaultRegionCode:(id)arg1;
+ (id)localeIDWithoutDefaultRegionCode:(id)arg1 avoidAmbiguousCases:(_Bool)arg2;
+ (id)displayNameForCode:(id)arg1 ofType:(id)arg2 displayStandalone:(_Bool)arg3;
+ (id)applicationLocale;
+ (id)allSupportedTier3Languages;
+ (id)canonicalizeLocaleIdentifier:(id)arg1;
+ (id)localeForLocaleIdentifier:(id)arg1 documentLanguageIdentifier:(id)arg2;
+ (void)saveLocaleForReuse:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg1;
+ (id)simplifiedDisplayNameForLocaleID:(id)arg1 displayStandalone:(_Bool)arg2;
+ (void)setLocalizedStringBundle:(struct __CFBundle *)arg1;
+ (unsigned long long)autoupdatingCurrentLocaleChangeCount;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg1;
+ (id)allSupportedTier1Languages;
+ (id)allSupportedTemplatePickerLanguages;
+ (id)cacheKeyForLocale:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringWithFormat:(id)arg1;
- (id)localeSpecificStorageForKey:(id)arg1;
- (void)setLocaleSpecificStorage:(id)arg1 forKey:(id)arg2;
- (id)numberFormatterStringFromDouble:(double)arg1 withFormat:(id)arg2 useDecimalPlaces:(_Bool)arg3 minDecimalPlaces:(unsigned short)arg4 decimalPlaces:(unsigned short)arg5 showThousandsSeparator:(_Bool)arg6 currencyCode:(id)arg7 suppressMinusSign:(_Bool)arg8;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 useAutoupdating:(_Bool)arg3;
- (void)_initializeNumberFormatterStringFromDoubleCache;
- (long long)localizedCaseInsensitiveCompare:(id)arg1 toString:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundle:(struct __CFBundle *)arg4;
- (id)localeIdentifierWithLanguageAndRegionOnly;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2;
- (id)localeIdentifierWithLanguageScriptAndRegionOnly;
- (id)copyWithDocumentLanguageIdentifier:(id)arg1;
- (id)simplifiedDisplayNameWithStandalone:(_Bool)arg1;
- (id)displayLanguageNameWithStandalone:(_Bool)arg1;
- (struct __CFNumberFormatter *)checkoutNumberFormatter;
- (void)returnNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (struct __CFNumberFormatter *)checkoutScientificNumberFormatter;
- (void)returnScientificNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (long long)localizedCompare:(id)arg1 toString:(id)arg2;
- (_Bool)localizedCaseInsensitiveIsEqual:(id)arg1 toString:(id)arg2;

@end
