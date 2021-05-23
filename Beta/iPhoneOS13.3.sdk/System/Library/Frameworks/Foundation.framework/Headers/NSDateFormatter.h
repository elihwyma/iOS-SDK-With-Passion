/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSLocale, NSMutableDictionary, NSString, NSTimeZone;

@interface NSDateFormatter : NSFormatter <Swift>

{
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter *_formatter;
    unsigned long long _counter;
    long long _cacheGeneration;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property long long formattingContext;
@property (copy) NSString *dateFormat;
@property unsigned long long dateStyle;
@property unsigned long long timeStyle;
@property (copy) NSLocale *locale;
@property _Bool generatesCalendarDates;
@property unsigned long long formatterBehavior;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSCalendar *calendar;
@property (getter=isLenient) _Bool lenient;
@property (copy) NSDate *twoDigitStartDate;
@property (copy) NSDate *defaultDate;
@property (copy) NSArray *eraSymbols;
@property (copy) NSArray *monthSymbols;
@property (copy) NSArray *shortMonthSymbols;
@property (copy) NSArray *weekdaySymbols;
@property (copy) NSArray *shortWeekdaySymbols;
@property (copy) NSString *AMSymbol;
@property (copy) NSString *PMSymbol;
@property (copy) NSArray *longEraSymbols;
@property (copy) NSArray *veryShortMonthSymbols;
@property (copy) NSArray *standaloneMonthSymbols;
@property (copy) NSArray *shortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortWeekdaySymbols;
@property (copy) NSArray *standaloneWeekdaySymbols;
@property (copy) NSArray *shortStandaloneWeekdaySymbols;
@property (copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (copy) NSArray *quarterSymbols;
@property (copy) NSArray *shortQuarterSymbols;
@property (copy) NSArray *standaloneQuarterSymbols;
@property (copy) NSArray *shortStandaloneQuarterSymbols;
@property (copy) NSDate *gregorianStartDate;
@property _Bool doesRelativeDateFormatting;

+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
+ (unsigned long long)defaultFormatterBehavior;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (id)_componentsFromFormatString:(id)arg1;
+ (id)_formatStringFromComponents:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (long long)_cacheGenerationCount;
- (_Bool)_tracksCacheGenerationCount;
- (void)_invalidateCache;
- (void)_clearFormatter;
- (void)_regenerateFormatter;
- (void)_reset;
- (_Bool)_usesCharacterDirection;
- (void)_setUsesCharacterDirection:(_Bool)arg1;
- (id)_timeZone_forOldMethods;
- (id)_locale_forOldMethods;
- (void)_regenerateFormatterIfAbsent;
- (id)_getLocaleAlreadyLocked:(_Bool)arg1;
- (void)_setDateFormat:(id)arg1 alreadyLocked:(_Bool)arg2;
- (void)setLocalizedDateFormatFromTemplate:(id)arg1;
- (id)_dateFormat;
- (void)_setDateFormat:(id)arg1;
- (void)_setIsLenient:(_Bool)arg1;
- (id)_attributedStringWithFieldsFromDate:(id)arg1;

@end
