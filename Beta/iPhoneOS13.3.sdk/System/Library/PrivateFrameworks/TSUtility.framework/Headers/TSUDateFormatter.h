/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSUDateFormatter : NSObject

{
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    struct __CFDateFormatter *mFullDateFormatter;
}

+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (id)defaultDateTimeFormat;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)supportedDateFormats;
+ (id)supportedTimeFormats;
+ (id)dateFormatStringSpecialSymbols;
+ (id)shortMonthNamesForNonCachedCurrentLocale;

- (id)init;
- (void)dealloc;
- (id)fullDateString:(id)arg1;
- (id)appropriateOutputFormatStringForInputFormatString:(id)arg1;
- (id)stringFromDate:(id)arg1 format:(id)arg2;

@end
