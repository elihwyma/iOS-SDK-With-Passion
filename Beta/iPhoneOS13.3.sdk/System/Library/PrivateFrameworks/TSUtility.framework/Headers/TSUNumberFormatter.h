/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TSUNumberFormatter : NSObject

{
    struct __CFLocale *mLocale;
    struct __CFArray *mDecimalFormatters;
    struct __CFArray *mCurrencyFormatters;
    struct __CFArray *mPercentageFormatters;
    struct __CFArray *mScientificFormatters;
    struct __CFNumberFormatter *mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    struct __CFString *mAdditionalCurrencyCode;
    struct __CFArray *mAdditionalCurrencyCodeFormatters;
}

+ (void)initialize;
+ (id)currentLocaleDecimalSeparator;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)userVisibleCurrencyCodes;
+ (id)formatterForLocale:(struct __CFLocale *)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)localizedPercentSymbol;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (id)availableCurrencyCodes;
+ (id)currentNonCachedLocaleCurrencyCode;
+ (id)currentNonCachedLocaleDecimalSeparator;
+ (id)currentLocaleListSeparator;
+ (id)numberFormatStringSpecialSymbols;

- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale *)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)currentLocaleCurrencyCode;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (_Bool)decimalFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (_Bool)currencyFromString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (_Bool)percentageFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (_Bool)scientificFromString:(struct __CFString *)arg1 value:(double *)arg2 formatString:(const struct __CFString **)arg3;
- (_Bool)fractionFromString:(struct __CFString *)arg1 value:(double *)arg2;
- (id)displayNameForCurrencyCode:(id)arg1;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)localizedPercentSymbol;
- (void)numberPreferencesChanged:(id)arg1;
- (struct __CFArray *)p_decimalFormatters;
- (_Bool)valueFromString:(struct __CFString *)arg1 formatters:(struct __CFArray *)arg2 value:(double *)arg3 formatString:(const struct __CFString **)arg4 currencyCode:(const struct __CFString **)arg5;
- (_Bool)findCurrencySymbolInString:(struct __CFString *)arg1 additionalCurrencyCode:(struct __CFString *)arg2 successTSUlString:(const struct __CFString **)arg3;
- (struct __CFArray *)p_currencyFormatters;
- (struct __CFArray *)p_percentageFormatters;
- (struct __CFArray *)p_scientificFormatters;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;

@end
