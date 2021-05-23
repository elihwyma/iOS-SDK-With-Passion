/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSUUID;

@interface CLBeaconIdentityConstraint : NSObject

{
    NSUUID *_UUID;
    NSNumber *_major;
    NSNumber *_minor;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSNumber *major;
@property (copy, nonatomic, readonly) NSNumber *minor;

+ (_Bool)supportsSecureCoding;
+ (id)any;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3;

@end
