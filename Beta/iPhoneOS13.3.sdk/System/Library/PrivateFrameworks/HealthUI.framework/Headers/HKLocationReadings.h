/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKWorkout, NSArray;

@interface HKLocationReadings : NSObject

{
    _Bool _isSmoothed;
    HKWorkout *_workout;
    NSArray *_allValidLocations;
    NSArray *_inOrderLocationArrays;
    double _averageSpeed;
    double _topSpeed;
    double _bottomSpeed;
}

@property (nonatomic, readonly) _Bool isSmoothed;
@property (nonatomic, readonly) HKWorkout *workout;
@property (nonatomic, readonly) NSArray *allValidLocations;
@property (nonatomic, readonly) NSArray *inOrderLocationArrays;
@property (nonatomic, readonly) double averageSpeed;
@property (nonatomic, readonly) double topSpeed;
@property (nonatomic, readonly) double bottomSpeed;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)debugDescription;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)firstObject;
- (id)lastObject;
- (void)_filterLocationsByActiveTimePeriod:(id)arg1;
- (void)_calculateSpeeds;
- (id)initWithLocations:(id)arg1 workout:(id)arg2 isSmoothed:(_Bool)arg3;
- (id)initWithLocation:(id)arg1 workout:(id)arg2;

@end
