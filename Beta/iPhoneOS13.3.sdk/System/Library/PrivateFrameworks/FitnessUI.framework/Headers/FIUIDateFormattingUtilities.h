/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@interface FIUIDateFormattingUtilities : NSObject

+ (id)_dateFormatter;
+ (id)timeFormatter;
+ (_Bool)_dateStringFits:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (id)timeStringWithSpaceRemoved:(id)arg1 date:(id)arg2;
+ (id)_localizedTodayFormatterWithTemplate:(id)arg1;
+ (id)stringWithLongestStyleDate:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (id)stringWithShortStyleDate:(id)arg1;
+ (id)timeRangeStringFromDateInterval:(id)arg1;
+ (id)stringWithEitherTodayOrLongStyleDateFromDate:(id)arg1;
+ (id)stringWithDayNameAndShortMonthFromDate:(id)arg1;

@end
