/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKURLBagCache, NSDictionary, NSNumber, NSString, SSMetricsController;

@interface IKJSITunesStore : IKJSObject <Swift>

{
    NSNumber *_lastAccountDSID;
    NSDictionary *_lastKnownStatusDictionary;
    SSMetricsController *_metricsController;
    NSString *_storeFrontSuffix;
    id _ssAccountStoreChangedToken;
    id _subscriptionStatusDidChangeToken;
    id _urlBagCacheUpdateToken;
    NSString *_cookieURL;
    IKURLBagCache *_bagCache;
}

@property (retain, nonatomic) IKURLBagCache *bagCache;
@property (retain, nonatomic) NSString *cookieURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSDictionary *accountInfo;
@property (nonatomic, readonly) NSString *userAgent;
@property (nonatomic, readonly) NSString *networkConnectionType;
@property (retain, nonatomic) NSString *storefront;
@property (retain, nonatomic) id cookie;
@property (nonatomic, readonly, getter=isManagedAppleID) _Bool managedAppleID;

+ (void)setITunesStoreHeaders:(id)arg1;
+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;

- (void)dealloc;
- (id)eligibilityForService:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (id)getBag;
- (void)invalidateBag;
- (id)makeStoreXMLHttpRequest;
- (void)recordEvent:(id)arg1:(id)arg2;
- (void)flushUnreportedEvents;
- (void)clearCookies;
- (void)getServiceEligibility:(id)arg1:(id)arg2;
- (void)loadStoreContent:(id)arg1:(id)arg2;
- (void)evaluateScripts:(id)arg1:(id)arg2;
- (void)authenticate:(id)arg1:(id)arg2;
- (void)signOut;
- (void)updateServiceEligibility:(id)arg1;
- (id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2;
- (void)_bagCacheUpdated;
- (void)_accountStoreChanged;
- (void)_subscriptionStatusDidChanged:(id)arg1;
- (id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(_Bool)arg2;
- (id)asPrivateIKJSITunesStore;

@end
