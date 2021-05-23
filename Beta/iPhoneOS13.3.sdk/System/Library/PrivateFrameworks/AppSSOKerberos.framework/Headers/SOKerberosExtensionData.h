/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SOKerberosExtensionData : NSObject

{
    _Bool _useSiteAutoDiscovery;
    _Bool _isDefaultRealm;
    _Bool _allowPasswordChange;
    _Bool _allowAutomaticLogin;
    _Bool _requireUserPresence;
    _Bool _pwReqComplexity;
    _Bool _syncLocalPassword;
    NSString *_cacheName;
    NSString *_principalName;
    NSString *_siteCode;
    NSString *_certificateUUID;
    NSArray *_credentialBundleIdACL;
    NSDictionary *_domainRealmMapping;
    NSString *_pwChangeURL;
    NSNumber *_pwExpireOverride;
    NSNumber *_pwNotificationDays;
    NSNumber *_pwReqLength;
    NSNumber *_pwReqMinAge;
    NSNumber *_pwReqHistory;
    NSString *_pwReqText;
    NSNumber *_replicationTime;
}

@property (retain, nonatomic) NSString *cacheName;
@property (retain, nonatomic) NSString *principalName;
@property (retain, nonatomic) NSString *siteCode;
@property (retain, nonatomic) NSString *certificateUUID;
@property (nonatomic) _Bool useSiteAutoDiscovery;
@property (retain, nonatomic) NSArray *credentialBundleIdACL;
@property (retain, nonatomic) NSDictionary *domainRealmMapping;
@property (nonatomic) _Bool isDefaultRealm;
@property (nonatomic) _Bool allowPasswordChange;
@property (nonatomic) _Bool allowAutomaticLogin;
@property (nonatomic) _Bool requireUserPresence;
@property (retain, nonatomic) NSString *pwChangeURL;
@property (retain, nonatomic) NSNumber *pwExpireOverride;
@property (retain, nonatomic) NSNumber *pwNotificationDays;
@property _Bool pwReqComplexity;
@property (retain, nonatomic) NSNumber *pwReqLength;
@property (retain, nonatomic) NSNumber *pwReqMinAge;
@property (retain, nonatomic) NSNumber *pwReqHistory;
@property (retain, nonatomic) NSString *pwReqText;
@property (retain, nonatomic) NSNumber *replicationTime;
@property _Bool syncLocalPassword;

- (id)initWithDictionary:(id)arg1;
- (id)initAndPopulateExtensionData;

@end
