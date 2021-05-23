/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CMFitnessMachineData : NSObject

{
    double fTimestamp;
    double _elapsedTime;
    double _totalEnergy;
    double _totalDistance;
    double _totalElevationAscended;
    long long _totalStrideCount;
    long long _totalStrokeCount;
    long long _totalFloorsClimbed;
    double _instantaneousSpeed;
    double _instantaneousCadence;
    double _instantaneousPower;
    double _inclination;
    double _resistanceLevel;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double totalEnergy;
@property (nonatomic) double totalDistance;
@property (nonatomic) double totalElevationAscended;
@property (nonatomic) long long totalStrideCount;
@property (nonatomic) long long totalStrokeCount;
@property (nonatomic) long long totalFloorsClimbed;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double inclination;
@property (nonatomic) double resistanceLevel;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAvailable;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1;
- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData *)arg1;

@end
