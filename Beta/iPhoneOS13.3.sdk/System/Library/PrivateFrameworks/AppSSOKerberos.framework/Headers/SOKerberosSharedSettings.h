/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SOKerberosRealmSettings, SOSiteCode;

@interface SOKerberosSharedSettings : NSObject

{
    _Bool _isDefaultRealm;
    SOKerberosRealmSettings *_currentSettings;
    NSString *_currentRealm;
    NSDictionary *_domainRealmMapping;
    SOSiteCode *_siteCode;
}

@property (retain, nonatomic) SOKerberosRealmSettings *currentSettings;
@property (retain, nonatomic) NSString *currentRealm;
@property (nonatomic) _Bool isDefaultRealm;
@property (retain, nonatomic) NSDictionary *domainRealmMapping;
@property (retain, nonatomic) SOSiteCode *siteCode;

+ (id)sharedInstance;

@end
