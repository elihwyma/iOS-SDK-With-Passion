/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSDate.h>

@interface NSDate (WBSNSDateExtras)

@property (nonatomic, readonly) double safari_timeIntervalUntilNow;

+ (void)safari_dateFromNTPServerWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)safari_dateOfMidnightNumberOfDaysAgo:(long long)arg1;

- (id)safari_stringsFromDateForLocaleIdentifiers:(id)arg1;
- (id)safari_startOfDay;
- (_Bool)safari_isInclusivelyBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)_safari_stringWithDashSeparatorWithDateFormatter:(id)arg1;
- (long long)safari_numberOfWeeksUntilDate:(id)arg1;
- (_Bool)safari_isInToday;
- (_Bool)safari_isInSameDayAsDate:(id)arg1;
- (_Bool)safari_isNowOrInRecentPast;

@end
