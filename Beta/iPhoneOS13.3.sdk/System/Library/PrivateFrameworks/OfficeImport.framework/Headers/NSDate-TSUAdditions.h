/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSDate.h>

@interface NSDate (TSUAdditions)

@property (nonatomic, readonly) CDStruct_d65e47c4 tsu_DOSTime;

+ (id)tc_dateWithWordDate:(const struct WrdDateTime *)arg1;

- (id)tsu_initWithDOSTime:(CDStruct_d65e47c4)arg1;
- (id)tsu_fullFormattedDateWithPeriod;
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterdayShortAsPossible:(id)arg1;
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_rule1To23HoursAgo:(long long)arg1;
- (id)p_rule1To59MinutesAgo:(long long)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(_Bool)arg3;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;
- (_Bool)tsu_isEqualToDate:(id)arg1;
- (void)tc_copyToWordDate:(struct WrdDateTime *)arg1;

@end
