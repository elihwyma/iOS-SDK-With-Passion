/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFManagementLockRequest

{
    NSString *_lockedByLabel;
    NSString *_passcode;
}

@property (copy, nonatomic) NSString *lockedByLabel;
@property (copy, nonatomic) NSString *passcode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
