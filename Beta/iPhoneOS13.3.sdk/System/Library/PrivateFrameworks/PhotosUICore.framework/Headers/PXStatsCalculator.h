/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXStatsCalculator : NSObject

{
    double _sum;
    double _squareSum;
    long long _count;
    double _min;
    double _max;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) double mean;
@property (nonatomic, readonly) double standardDeviation;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double max;

- (void)addValue:(double)arg1;

@end
