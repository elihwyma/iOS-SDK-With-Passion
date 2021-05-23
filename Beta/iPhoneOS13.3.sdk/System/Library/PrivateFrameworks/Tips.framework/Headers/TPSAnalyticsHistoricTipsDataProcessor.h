/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsProcessor.h>

@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor

{
    NSDate *_currentDate;
}

- (id)init;
- (_Bool)_shouldProceedWithCrunching;
- (id)_furthestLookbackDate;
- (void)updateDisplayedCount:(long long *)arg1 andFrequencyControlCount:(long long *)arg2 forTipStatus:(id)arg3 andLookbackDate:(id)arg4;
- (unsigned long long)_daysBetweenDate:(id)arg1 andOtherDate:(id)arg2;
- (void)processAnalytics:(CDUnknownBlockType)arg1;
- (_Bool)_isCarry;

@end
