/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@interface BMBasketExtractor : NSObject

{
    double _samplingInterval;
}

@property double samplingInterval;

- (id)slotForHourOfDay:(id)arg1;
- (id)initWithSamplingInterval:(double)arg1;
- (id)extractBasketsFromEvents:(id)arg1 withTemporalFeatures:(_Bool)arg2;
- (id)slotForHourOfDay:(id)arg1 slotDuration:(id)arg2;
- (id)extractTemporalItemsFromDate:(id)arg1;

@end
