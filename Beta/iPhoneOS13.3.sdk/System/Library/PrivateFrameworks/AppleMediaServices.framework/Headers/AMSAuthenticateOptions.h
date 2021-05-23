/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSProcessInfo, NSDictionary, NSString, NSURL;

@interface AMSAuthenticateOptions : NSObject

{
    unsigned long long _authenticationType;
    _Bool _allowServerDialogs;
    _Bool _canMakeAccountActive;
    _Bool _usernameEditable;
    _Bool _allowSecondaryCredentialSource;
    _Bool _remoteProxyAuthentication;
    NSString *_appProvidedContext;
    NSDictionary *_appProvidedData;
    NSDictionary *_createAccountQueryParams;
    AMSProcessInfo *_clientInfo;
    NSString *_defaultButtonString;
    NSDictionary *_HTTPHeaders;
    NSURL *_iconBundleURL;
    NSString *_logKey;
    NSString *_promptTitle;
    NSString *_proxyAppBundleID;
    NSString *_proxyAppName;
    NSString *_reason;
    NSString *_userAgent;
    NSString *_userAgentSuffix;
    unsigned long long _credentialSource;
}

@property (nonatomic) _Bool allowSecondaryCredentialSource;
@property (nonatomic, readonly) _Bool allowSilentAuthentication;
@property (nonatomic) unsigned long long credentialSource;
@property (nonatomic, readonly, getter=isRemoteProxyAuthentication) _Bool remoteProxyAuthentication;
@property (nonatomic) _Bool allowServerDialogs;
@property (nonatomic) unsigned long long authenticationType;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (nonatomic) _Bool canMakeAccountActive;
@property (retain, nonatomic) NSDictionary *createAccountQueryParams;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *defaultButtonString;
@property (retain, nonatomic) NSDictionary *HTTPHeaders;
@property (retain, nonatomic) NSURL *iconBundleURL;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSString *promptTitle;
@property (retain, nonatomic) NSString *proxyAppBundleID;
@property (retain, nonatomic) NSString *proxyAppName;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *userAgentSuffix;
@property (nonatomic) _Bool usernameEditable;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mediaType;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)arg1;
- (void)setMediaType:(id)arg1;
- (id)optionsDictionaryForRemoteProxyAuthentication;
- (id)authKitData;
- (void)setAuthKitData:(id)arg1;

@end
