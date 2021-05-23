/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSSet;

@interface DMFFetchLastLoginDateRequest

{
    NSSet *_appleIDs;
}

@property (copy, nonatomic) NSSet *appleIDs;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
