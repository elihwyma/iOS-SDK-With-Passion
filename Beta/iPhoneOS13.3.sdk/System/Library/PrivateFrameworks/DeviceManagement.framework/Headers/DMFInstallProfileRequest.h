/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSData, NSString;

@interface DMFInstallProfileRequest

{
    unsigned long long _style;
    unsigned long long _type;
    NSString *_managingProfileIdentifier;
    NSData *_profileData;
    NSString *_personaID;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *managingProfileIdentifier;
@property (copy, nonatomic) NSData *profileData;
@property (copy, nonatomic) NSString *personaID;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
