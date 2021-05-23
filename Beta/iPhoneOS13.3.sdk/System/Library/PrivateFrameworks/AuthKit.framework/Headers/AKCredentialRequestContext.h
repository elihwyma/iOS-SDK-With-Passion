/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

#import <AuthKit/Swift-Protocol.h>

@class AKAuthorizationRequest, AKPasswordRequest, NSArray, NSData, NSNumber, NSString, NSUUID, NSValue;

@interface AKCredentialRequestContext : NSObject <Swift>

{
    _Bool _passcodeProtected;
    _Bool _shouldForceUI;
    _Bool _shouldSkipBiometrics;
    _Bool _shouldSkipAuthorizationUI;
    _Bool _shouldForcePrivateEmail;
    _Bool _requirePassword;
    _Bool _isWebLogin;
    _Bool _isFirstPartyLogin;
    _Bool _isRapportLogin;
    NSString *_informativeText;
    NSString *_iconName;
    NSData *_iconData;
    NSNumber *_iconScale;
    NSValue *_iconSize;
    NSString *_proxiedClientAppName;
    NSString *_proxiedClientBundleID;
    NSString *_proxiedClientAppID;
    NSString *_proxiedClientTeamID;
    NSArray *_proxiedAssociatedDomains;
    NSString *_callerBundleID;
    NSString *_proxiedDeviceName;
    NSString *_proxiedDeviceClass;
    NSString *_proxiedClientServiceID;
    NSUUID *_requestIdentifier;
    AKAuthorizationRequest *_authorizationRequest;
    AKPasswordRequest *_passwordRequest;
}

@property (copy, nonatomic) NSString *_iconName;
@property (copy, nonatomic) NSData *_iconData;
@property (copy, nonatomic) NSNumber *_iconScale;
@property (copy, nonatomic) NSValue *_iconSize;
@property (copy, nonatomic) NSString *_informativeText;
@property (nonatomic) _Bool _shouldForceUI;
@property (nonatomic) _Bool _shouldSkipBiometrics;
@property (nonatomic) _Bool _shouldSkipAuthorizationUI;
@property (nonatomic) _Bool _shouldForcePrivateEmail;
@property (nonatomic) _Bool _requirePassword;
@property (nonatomic) _Bool _isWebLogin;
@property (nonatomic) _Bool _isFirstPartyLogin;
@property (nonatomic) _Bool _isRapportLogin;
@property (retain, nonatomic) NSString *_callerBundleID;
@property (retain, nonatomic) NSString *_proxiedClientAppName;
@property (retain, nonatomic) NSString *_proxiedClientBundleID;
@property (retain, nonatomic) NSString *_proxiedClientServiceID;
@property (retain, nonatomic) NSString *_proxiedClientTeamID;
@property (retain, nonatomic) NSString *_proxiedClientAppID;
@property (retain, nonatomic) NSArray *_proxiedAssociatedDomains;
@property (retain, nonatomic) NSString *_proxiedDeviceName;
@property (retain, nonatomic) NSString *_proxiedDeviceClass;
@property (copy, nonatomic, readonly) NSUUID *requestIdentifier;
@property (retain, nonatomic) AKAuthorizationRequest *authorizationRequest;
@property (retain, nonatomic) AKPasswordRequest *passwordRequest;
@property (retain, nonatomic) NSArray *credentialRequests;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
