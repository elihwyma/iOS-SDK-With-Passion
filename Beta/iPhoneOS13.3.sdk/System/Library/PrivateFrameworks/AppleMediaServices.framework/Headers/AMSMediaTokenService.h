/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSMediaToken, AMSMediaTokenServiceStore, AMSMediaTokenServiceThrottler, AMSProcessInfo, AMSURLSession, NSString;

@protocol AMSBagProtocol, OS_dispatch_queue;

@interface AMSMediaTokenService : NSObject <Swift>

{
    _Bool _enabled;
    _Bool _URLKnownToBeTrusted;
    AMSURLSession *_session;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSString *_clientIdentifier;
    AMSProcessInfo *_clientInfo;
    NSString *_clientVersion;
    AMSMediaTokenServiceThrottler *_throttler;
    NSObject<OS_dispatch_queue> *_tokenFetchQueue;
    AMSMediaTokenServiceStore *_tokenStore;
    double _refreshPercentage;
    double _refreshTime;
}

@property (retain, nonatomic) AMSMediaToken *cachedMediaToken;
@property (nonatomic, readonly) AMSMediaTokenServiceThrottler *throttler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (nonatomic, readonly) AMSMediaTokenServiceStore *tokenStore;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) double refreshPercentage;
@property (nonatomic) double refreshTime;
@property (nonatomic) _Bool URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *keychainAccessGroup;
@property (weak, nonatomic) AMSURLSession *session;
@property (nonatomic, readonly) NSString *clientVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (void)invalidateMediaToken;
- (id)fetchMediaToken;
- (id)initWithClientIdentifier:(id)arg1 bag:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3;
- (id)_fetchBagProperties;
- (_Bool)_shouldReturnMediaToken:(id)arg1;
- (void)_refreshMediaTokenIfNeeded:(id)arg1;
- (id)_fetchToken;
- (id)_tokenRequestWithError:(id *)arg1;
- (_Bool)_shouldRefreshMediaToken:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;

@end
