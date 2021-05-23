/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFEraseDeviceRequest

{
    _Bool _hideProximitySetupPane;
    unsigned long long _eraseDeviceType;
    unsigned long long _dataResetOptions;
    NSString *_pin;
}

@property (nonatomic) unsigned long long eraseDeviceType;
@property (nonatomic) unsigned long long dataResetOptions;
@property (copy, nonatomic) NSString *pin;
@property (nonatomic) _Bool hideProximitySetupPane;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
