/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <CoreLocation/CLRegion.h>

@class CLBeaconIdentityConstraint, NSNumber, NSUUID;

@interface CLBeaconRegion : CLRegion

@property (copy, nonatomic, readonly) CLBeaconIdentityConstraint *beaconIdentityConstraint;
@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSUUID *proximityUUID;
@property (copy, nonatomic, readonly) NSNumber *major;
@property (copy, nonatomic, readonly) NSNumber *minor;
@property (nonatomic) _Bool notifyEntryStateOnDisplay;

+ (_Bool)supportsSecureCoding;
+ (id)any;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithBeaconIdentityConstraint:(id)arg1 identifier:(id)arg2;
- (void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(_Bool)arg4;
- (id)initWithUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (BOOL)_measuredPowerForDevice;
- (id)initWithProximityUUID:(id)arg1 identifier:(id)arg2;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3;
- (id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4;
- (id)peripheralDataWithMeasuredPower:(id)arg1;

@end
