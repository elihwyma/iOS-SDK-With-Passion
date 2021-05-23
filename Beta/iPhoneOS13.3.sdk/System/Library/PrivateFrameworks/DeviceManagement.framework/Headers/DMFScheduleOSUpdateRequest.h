/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFScheduleOSUpdateRequest

{
    _Bool _useDelay;
    unsigned long long _action;
    NSString *_productKey;
    NSString *_productVersion;
}

@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *productKey;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) _Bool useDelay;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;
+ (id)_descriptionForAction:(unsigned long long)arg1;
+ (_Bool)_action:(unsigned long long *)arg1 fromString:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
