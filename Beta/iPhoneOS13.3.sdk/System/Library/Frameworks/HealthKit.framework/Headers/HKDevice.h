/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSString;

@interface HKDevice : NSObject <Swift>

{
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_hardwareVersion;
    NSString *_firmwareVersion;
    NSString *_softwareVersion;
    NSString *_localIdentifier;
    NSString *_UDIDeviceIdentifier;
}

@property (nonatomic, readonly) NSString *_connectedGymDeviceFullName;
@property (nonatomic, readonly) NSString *_connectedGymDeviceTypeName;
@property (readonly) NSString *name;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *hardwareVersion;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *softwareVersion;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSString *UDIDeviceIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)localDevice;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_setName:(id)arg1;
- (void)_setModel:(id)arg1;
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 hardwareVersion:(id)arg4 firmwareVersion:(id)arg5 softwareVersion:(id)arg6 localIdentifier:(id)arg7 UDIDeviceIdentifier:(id)arg8;
- (_Bool)_isConnectedGymDevice;
- (unsigned long long)_fitnessMachineType;
- (void)_setFitnessMachineType:(unsigned long long)arg1;
- (void)_setManufacturer:(id)arg1;
- (void)_setHardwareVersion:(id)arg1;
- (void)_setFirmwareVersion:(id)arg1;
- (void)_setSoftwareVersion:(id)arg1;
- (void)_setLocalIdentifier:(id)arg1;
- (void)_setUDIDeviceIdentifier:(id)arg1;

@end
