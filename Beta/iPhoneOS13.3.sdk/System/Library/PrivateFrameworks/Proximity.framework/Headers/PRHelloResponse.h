/*
 Image: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface PRHelloResponse : NSObject

{
    unsigned char _hsiVersionMajor;
    unsigned char _hsiVersionMinor;
    NSString *_roseFirmwareVersion;
    unsigned long long _hardwareVersion;
    NSNumber *_addlInfoSize;
    NSNumber *_apFirmwareVersion;
    NSNumber *_dspFirmwareVersion;
    NSString *_target;
    NSNumber *_calDataVersion;
    NSNumber *_moduleID;
    NSNumber *_modemInitVersion;
}

@property (nonatomic, readonly) NSString *roseFirmwareVersion;
@property (nonatomic, readonly) unsigned char hsiVersionMajor;
@property (nonatomic, readonly) unsigned char hsiVersionMinor;
@property (nonatomic, readonly) unsigned long long hardwareVersion;
@property (copy) NSNumber *addlInfoSize;
@property (copy) NSNumber *apFirmwareVersion;
@property (copy) NSNumber *dspFirmwareVersion;
@property (copy) NSString *target;
@property (copy) NSNumber *calDataVersion;
@property (copy) NSNumber *moduleID;
@property (copy) NSNumber *modemInitVersion;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoseFirmwareVersion:(id)arg1 hsiVersionMajor:(unsigned char)arg2 hsiVersionMinor:(unsigned char)arg3 hardwareVersion:(unsigned long long)arg4;
- (id)initWithHelloResponse:(const struct HelloResponse *)arg1;

@end
