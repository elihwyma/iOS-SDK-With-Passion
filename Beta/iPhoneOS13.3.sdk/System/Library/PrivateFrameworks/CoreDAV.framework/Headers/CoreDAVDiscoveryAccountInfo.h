/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVDiscoveryAccountInfo : NSObject

{
    NSString *_scheme;
    NSString *_host;
    NSString *_serverRoot;
    long long _port;
    NSString *_user;
    NSString *_password;
    NSData *_identityPersist;
    NSURL *_principalURL;
    NSString *_accountID;
    NSDictionary *_serverHeaders;
    NSSet *_serverComplianceClasses;
    NSString *_userAgentHeader;
    _Bool _shouldFailAllTasks;
    _Bool _started;
    _Bool _success;
    NSError *_error;
    id <CoreDAVAccountInfoProvider> _backingAccountInfoProvider;
}

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *serverRoot;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *user;
@property (nonatomic) long long port;
@property (retain, nonatomic) NSData *identityPersist;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSDictionary *serverHeaders;
@property (retain, nonatomic) NSSet *serverComplianceClasses;
@property (retain, nonatomic) NSString *userAgentHeader;
@property (nonatomic) _Bool shouldFailAllTasks;
@property (nonatomic) _Bool started;
@property (nonatomic) _Bool success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id <CoreDAVAccountInfoProvider> backingAccountInfoProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)url;
- (id)clientToken;
- (id)getAppleIDSession;
- (struct __CFURLStorageSession *)copyStorageSession;
- (void)clientTokenRequestedByServer;
- (_Bool)handleCertificateError:(id)arg1;
- (id)additionalHeaderValues;
- (id)oauthInfoProvider;
- (_Bool)shouldUseOpportunisticSockets;
- (_Bool)handleTrustChallenge:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1;
- (_Bool)shouldSendClientInfoHeaderForURL:(id)arg1;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)clientCertificateInfoProvider;
- (_Bool)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
- (_Bool)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (_Bool)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (_Bool)shouldRetryUnauthorizedConnection:(id)arg1;
- (_Bool)handleShouldUseCredentialStorage;
- (_Bool)shouldHandleHTTPCookiesForURL:(id)arg1;
- (_Bool)shouldTurnModalOnBadPassword;
- (_Bool)shouldTryRenewingCredential;
- (_Bool)renewCredential;

@end
