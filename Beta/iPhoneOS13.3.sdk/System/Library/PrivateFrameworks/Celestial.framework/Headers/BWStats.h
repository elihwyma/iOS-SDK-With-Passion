/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWStats : NSObject

{
    long long _numberOfSamples;
    double _min;
    double _max;
    double _sumX;
    double _sumXX;
}

@property (nonatomic, readonly) long long numberOfSamples;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double average;
@property (nonatomic, readonly) double standardDeviation;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)addDataPoint:(double)arg1;

@end
