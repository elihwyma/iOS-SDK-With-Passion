/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString, NSURL;

@interface DMFInviteUserToVPPRequest

{
    NSURL *_URL;
    NSString *_originator;
}

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *originator;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
