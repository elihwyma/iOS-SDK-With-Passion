/*
 Image: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSUUID;

@interface PRBeaconDescriptor : NSObject

{
    NSUUID *_UUID;
    NSNumber *_major;
    NSNumber *_minor;
    unsigned long long _macAddress;
}

@property (copy, readonly) NSUUID *UUID;
@property (readonly) NSNumber *major;
@property (readonly) NSNumber *minor;
@property unsigned long long macAddress;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3;

@end
