/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest

{
    _Bool _useDelay;
    NSString *_productVersion;
}

@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) _Bool useDelay;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
