/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EMNumberFormatter : NSObject

{
    struct __CFNumberFormatter *_genericFormatter;
    struct __CFNumberFormatter *_doubleFormatter;
    struct __CFNumberFormatter *_percentFormatter;
    struct __CFNumberFormatter *_bigNumberFormatter;
    struct __CFNumberFormatter *_currencyFormatter;
    struct __CFDateFormatter *_dateFormatter;
    NSString *_excelFormatString;
    NSString *_baseICUFormatString;
    _Bool _isNegativeRed;
    _Bool _hasLocales;
    int _formatType;
}

+ (id)formatterForFormat:(id)arg1;

- (void)dealloc;
- (struct __CFDateFormatter *)_dateFormatter;
- (struct __CFNumberFormatter *)_percentFormatter;
- (struct __CFNumberFormatter *)_currencyFormatter;
- (int)formatType;
- (id)formatPhoneNumber:(double)arg1;
- (id)formatDefault:(double)arg1;
- (unsigned long long)optimalNumberOfDigitsForValue:(double)arg1;
- (id)formatDefault:(double)arg1 showingNumberOfDigits:(unsigned long long)arg2;
- (_Bool)isNegativeRed;
- (id)formatValue:(double)arg1 inWorkbook:(id)arg2;
- (id)formatPercent:(double)arg1;
- (id)formatDate:(id)arg1;
- (id)initWithExcelFormatString:(id)arg1;
- (id)initForGeneralFormatting;
- (void)_parseExcelFormatString:(id)arg1;
- (id)convertedGenericNumberFormatWithFormat:(id)arg1;
- (id)_icuFormatStringForDateFormat;
- (id)_icuFormatStringForCurrencyFormat;
- (void)convertGenericNumberFormat:(id)arg1;
- (struct __CFNumberFormatter *)_doubleFormatter;
- (struct __CFNumberFormatter *)_bigNumberFormatter;
- (struct __CFNumberFormatter *)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)arg1;
- (id)formatCurrency:(double)arg1;
- (id)formatFraction:(double)arg1;
- (id)formatDoubleValue:(double)arg1;

@end
