/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchRestrictionsRequest

{
    _Bool _includeProfileRestrictions;
    unsigned long long _profileFilterFlags;
}

@property (nonatomic) _Bool includeProfileRestrictions;
@property (nonatomic) unsigned long long profileFilterFlags;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
