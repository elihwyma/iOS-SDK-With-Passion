/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLBeaconInternal, NSDate, NSNumber, NSUUID;

@interface CLBeacon : NSObject

{
    CLBeaconInternal *_internal;
}

@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSUUID *proximityUUID;
@property (copy, nonatomic, readonly) NSNumber *major;
@property (copy, nonatomic, readonly) NSNumber *minor;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) long long rssi;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 timestamp:(double)arg7;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6;

@end
