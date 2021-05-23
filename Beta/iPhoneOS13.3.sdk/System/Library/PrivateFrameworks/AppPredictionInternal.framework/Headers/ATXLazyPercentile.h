/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXLazyOperator.h>

@interface ATXLazyPercentile : ATXLazyOperator

{
    double _percentile;
}

@property (nonatomic) double percentile;

- (id)init;
- (double)opExecute;
- (id)init:(id)arg1 percentile:(double)arg2;

@end
