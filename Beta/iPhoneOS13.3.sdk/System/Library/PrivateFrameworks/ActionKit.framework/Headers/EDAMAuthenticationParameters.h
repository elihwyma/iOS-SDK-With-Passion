/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMAuthenticationParameters : FATObject

{
    NSString *_usernameOrEmail;
    NSString *_password;
    NSString *_ssoLoginToken;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_deviceIdentifier;
    NSString *_deviceDescription;
    NSNumber *_supportsTwoFactor;
    NSNumber *_supportsBusinessOnlyAccounts;
}

@property (retain, nonatomic) NSString *usernameOrEmail;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *ssoLoginToken;
@property (retain, nonatomic) NSString *consumerKey;
@property (retain, nonatomic) NSString *consumerSecret;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *deviceDescription;
@property (retain, nonatomic) NSNumber *supportsTwoFactor;
@property (retain, nonatomic) NSNumber *supportsBusinessOnlyAccounts;

+ (id)structName;
+ (id)structFields;

@end
