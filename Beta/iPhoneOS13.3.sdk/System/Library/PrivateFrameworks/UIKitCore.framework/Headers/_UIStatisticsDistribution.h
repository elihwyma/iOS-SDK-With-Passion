/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatistics.h>

__attribute__((visibility("hidden")))
@interface _UIStatisticsDistribution : _UIStatistics

- (void)startTimingForObject:(id)arg1;
- (void)recordTimingForObject:(id)arg1;
- (void)recordDistributionValue:(double)arg1;
- (void)cancelTimingForObject:(id)arg1;
- (_Bool)isTimingForObject:(id)arg1;
- (void)resetDistribution;
- (void)resetDistributionToValue:(double)arg1;

@end
