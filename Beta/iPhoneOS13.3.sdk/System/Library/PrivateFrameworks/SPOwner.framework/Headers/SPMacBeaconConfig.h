/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SPMacBeaconConfig : NSObject

{
    double _initialNoBeaconDuration;
    double _fastRollAdvertisementDuration;
    double _fastRollAdvertisementInterval;
    double _slowRollAdvertisementDuration;
    double _slowRollNoAdvertisementDuration;
    double _noAdvertisementDurationDecayFactor;
    NSArray *_postInitialDayAdvertisementTimes;
}

@property (nonatomic) double initialNoBeaconDuration;
@property (nonatomic) double fastRollAdvertisementDuration;
@property (nonatomic) double fastRollAdvertisementInterval;
@property (nonatomic) double slowRollAdvertisementDuration;
@property (nonatomic) double slowRollNoAdvertisementDuration;
@property (nonatomic) double noAdvertisementDurationDecayFactor;
@property (copy, nonatomic) NSArray *postInitialDayAdvertisementTimes;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialNoBeaconDuration:(double)arg1 fastRollAdvertisementDuration:(double)arg2 fastRollAdvertisementInterval:(double)arg3 slowRollAdvertisementDuration:(double)arg4 slowRollNoAdvertisementDuration:(double)arg5 noAdvertisementDurationDecayFactor:(double)arg6 postInitialDayAdvertisementTimes:(id)arg7;
- (id)initFromPrefs;
- (void)persistToPrefs;

@end
