/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetInterfaceOrientationRequest

{
    _Bool _lockOrientation;
    unsigned long long _interfaceOrientation;
}

@property (nonatomic) _Bool lockOrientation;
@property (nonatomic) unsigned long long interfaceOrientation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
