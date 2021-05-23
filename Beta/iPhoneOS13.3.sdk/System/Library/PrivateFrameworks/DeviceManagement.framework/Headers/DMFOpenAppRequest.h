/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSData, NSString;

@interface DMFOpenAppRequest

{
    _Bool _lockInApp;
    NSString *_bundleIdentifier;
    NSString *_activityType;
    NSData *_activityData;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSData *activityData;
@property (nonatomic) _Bool lockInApp;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
