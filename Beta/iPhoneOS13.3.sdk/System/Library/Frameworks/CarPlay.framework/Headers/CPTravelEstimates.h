/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSMeasurement;

@interface CPTravelEstimates : NSObject

{
    NSMeasurement *_distanceRemaining;
    double _timeRemaining;
    unsigned long long _timeRemainingColor;
}

@property (nonatomic) unsigned long long timeRemainingColor;
@property (copy, nonatomic, readonly) NSMeasurement *distanceRemaining;
@property (nonatomic, readonly) double timeRemaining;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)initWithDistanceRemaining:(id)arg1 timeRemaining:(double)arg2;

@end
