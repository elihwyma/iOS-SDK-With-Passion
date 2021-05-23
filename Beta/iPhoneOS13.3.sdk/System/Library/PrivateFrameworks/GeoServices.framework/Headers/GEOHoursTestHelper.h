/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOHoursTestHelper : NSObject

+ (id)dateWithString:(id)arg1;
+ (id)_pdHoursFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4 inTimeZone:(id)arg5 onDay:(long long)arg6 month:(long long)arg7 year:(long long)arg8 openingThreshold:(double)arg9 closingThreshold:(double)arg10 shouldGoOverMidnight:(_Bool)arg11;
+ (struct GEOPDLocalTimeRange)_rangeWithFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4;
+ (id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testDateForMKLocalizedHoursBuilderTest;
+ (id)testTimeZoneForMKLocalizedHoursBuilderTest;
+ (id)testTimeZoneForGEOPlaceDailyHoursTest;
+ (id)testingDictionaryForIsWeekdayInRange;

@end
