/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray;

@interface DMFFetchSecurityInformationRequest

{
    NSArray *_infoKeys;
}

@property (copy, nonatomic) NSArray *infoKeys;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;
+ (id)allPlatformSecurityInfoKeys;
+ (id)iOSSecurityInfoKeys;
+ (id)currentPlatformSecurityInfoKeys;
+ (id)macOSSecurityInfoKeys;
+ (id)tvOSSecurityInfoKeys;
+ (id)watchOSSecurityInfoKeys;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
