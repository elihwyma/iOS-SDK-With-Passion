/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface HKChartPointRangeBuilder : NSObject

{
    double _uMax;
    double _uMin;
    double _vMax;
    double _vMin;
    double _maximumMax;
    double _minimumMin;
    long long _numChartPoints;
}

@property (nonatomic) double uMax;
@property (nonatomic) double uMin;
@property (nonatomic) double vMax;
@property (nonatomic) double vMin;
@property (nonatomic) double maximumMax;
@property (nonatomic) double minimumMin;
@property (nonatomic) long long numChartPoints;

- (id)init;
- (id)suggestedValueRangeWithRounding:(_Bool)arg1;
- (void)visitChartPoint:(id)arg1;

@end
