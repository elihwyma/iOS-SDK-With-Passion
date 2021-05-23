/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSMutableArray, NSString, NSUUID;

@interface SOKerberosRealmSettings : NSObject

{
    NSString *_userPrincipalName;
    NSString *_userName;
    NSUUID *_credentialUUID;
    NSString *_cacheName;
    NSData *_smartCardIssuer;
    NSData *_smartCardSerialNumber;
    NSString *_smartCardTokenID;
    NSDate *_dateLastLogin;
    NSString *_datePasswordLastChanged;
    NSString *_dateLocalPasswordLastChanged;
    NSString *_datePasswordExpires;
    NSString *_networkHomeDirectory;
    NSMutableArray *_siteCodeCache;
}

@property (retain, nonatomic) NSMutableArray *siteCodeCache;
@property (retain, nonatomic) NSString *userPrincipalName;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSUUID *credentialUUID;
@property (retain, nonatomic) NSString *cacheName;
@property (retain, nonatomic) NSData *smartCardIssuer;
@property (retain, nonatomic) NSData *smartCardSerialNumber;
@property (retain, nonatomic) NSString *smartCardTokenID;
@property (retain, nonatomic) NSDate *dateLastLogin;
@property (retain, nonatomic) NSString *datePasswordLastChanged;
@property (retain, nonatomic) NSString *dateLocalPasswordLastChanged;
@property (retain, nonatomic) NSString *datePasswordExpires;
@property (retain, nonatomic) NSString *networkHomeDirectory;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpSiteCodeCache;
- (void)cacheSiteCode:(id)arg1;
- (id)siteCodeForNetworkFingerprint:(id)arg1;

@end
