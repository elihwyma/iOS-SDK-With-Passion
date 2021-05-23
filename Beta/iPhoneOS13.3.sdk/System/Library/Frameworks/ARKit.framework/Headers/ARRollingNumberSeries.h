/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARRollingNumberSeries : NSObject

{
    double *_series;
    unsigned long long _currentIndex;
    double _sumVariance;
    unsigned long long _windowSize;
    unsigned long long _count;
    double _sum;
    double _average;
    double _variance;
}

@property (nonatomic, readonly) unsigned long long windowSize;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double sum;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double average;
@property (nonatomic, readonly) double variance;

- (void)dealloc;
- (void)clear;
- (id)initWithWindowSize:(unsigned long long)arg1;
- (void)appendNumber:(double)arg1;

@end
