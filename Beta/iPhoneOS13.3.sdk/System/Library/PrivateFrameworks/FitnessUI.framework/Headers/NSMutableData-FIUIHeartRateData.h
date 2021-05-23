/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSMutableData.h>

@interface NSMutableData (FIUIHeartRateData)

- (void)fiui_appendHeartRate:(double)arg1 date:(id)arg2;
- (double)fiui_weightedAverageHeartRateWithStartDate:(id)arg1 endDate:(id)arg2;

@end
