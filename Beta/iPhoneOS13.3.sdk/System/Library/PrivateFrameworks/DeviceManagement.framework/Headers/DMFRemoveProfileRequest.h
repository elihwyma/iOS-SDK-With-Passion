/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFRemoveProfileRequest

{
    unsigned long long _type;
    NSString *_profileIdentifier;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *profileIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
