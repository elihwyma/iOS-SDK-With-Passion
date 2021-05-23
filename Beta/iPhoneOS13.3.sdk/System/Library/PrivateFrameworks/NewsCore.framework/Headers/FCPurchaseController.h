/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCAsyncSerialQueue, FCCloudContext, FCKeyValueStore, FCPurchaseLookUpEntriesManager, NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURLSession;

@protocol FCEntitlementsOverrideProviderType, OS_dispatch_queue;

@interface FCPurchaseController : NSObject <Swift>

{
    NSSet *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_webAccessEntriesByTagID;
    id <FCEntitlementsOverrideProviderType> _entitlementsOverrideProvider;
    FCCloudContext *_cloudContext;
    NSURLSession *_session;
    FCKeyValueStore *_localStore;
    FCPurchaseLookUpEntriesManager *_purchaseLookupEntriesManager;
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_entitlementQueue;
}

@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (retain, nonatomic) FCPurchaseLookUpEntriesManager *purchaseLookupEntriesManager;
@property (copy) NSDictionary *readOnlyPurchaseLookUpEntriesByTagID;
@property (retain, nonatomic) NSMutableDictionary *webAccessEntriesByTagID;
@property (retain, nonatomic) NSSet *purchasesDiscoveredTagIDs;
@property (copy, nonatomic) NSDate *lastEntitlementCheckTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) FCAsyncSerialQueue *entitlementQueue;
@property (nonatomic, readonly) NSString *lastSignedInItunesAccountName;
@property (nonatomic, readonly) NSDictionary *purchaseLookUpEntriesByTagID;
@property (nonatomic, readonly) NSSet *allPurchasedTagIDs;
@property (nonatomic, readonly) NSSet *allTagIDs;
@property (retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *purchasedTagIDs;

- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackground;
- (void)loadLocalCachesFromStore;
- (id)initWithCloudContext:(id)arg1 keyValueStoreOption:(unsigned long long)arg2;
- (void)_initializeAppStorePurchaseDiscoveredList;
- (void)cleanupExpiredPurchaseLookupEntriesIfNeeded;
- (void)saveToDisk;
- (void)notifyPurchaseListChanged;
- (id)_allPurchasedTagIDs;
- (void)notifyWebAccessOptedInListChanged;
- (id)lastSignedInItunesAccountDSID;
- (_Bool)atleastOneValidAppStorePurchase;
- (void)notifyPurchaseRemovedWithTagIDs:(id)arg1;
- (void)notifyPurchasesDiscoveredWithTagIDs:(id)arg1;
- (void)addToPurchasedChannelsListWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 purchaseValidationState:(unsigned long long)arg4 isNewsAppPurchase:(_Bool)arg5 lastVerificationTime:(id)arg6;
- (id)webAccessOptedInTagIDs;
- (void)_entitlementCheckWithIgnoreCache:(_Bool)arg1 restorableBundleIAPs:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4 serialCompletion:(CDUnknownBlockType)arg5;
- (id)allAppStorePurchasedTagIDsByPurchaseID;
- (id)purchaseLookUpEntryForTagID:(id)arg1;
- (void)updatePurchaseEntryToValid:(id)arg1 purchaseType:(unsigned long long)arg2;
- (void)silentRemoveFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1;
- (void)updatePurchaseEntryToSubcsriptionNotSupported:(id)arg1;
- (id)allAppStorePurchasedTagIDs;
- (void)updatePurchaseEntryToExpired:(id)arg1;
- (void)removeFromWebAccessOptedInListWithTagID:(id)arg1;
- (id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1;
- (_Bool)isTagIDPurchased:(id)arg1;
- (void)notifyPurchaseAddedWithTagIDs:(id)arg1;
- (void)updatePurchaseEntryToExpired:(id)arg1 hasShownRenewalNotice:(_Bool)arg2;
- (void)_removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)handleAccessTokenChangeWithTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)handleAccessTokenVerificationFailureWithTagID:(id)arg1;
- (void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(_Bool)arg2 accessToken:(id)arg3;
- (void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)webAccessEntryForTagID:(id)arg1;
- (id)_webAccessEntryIDForTagID:(id)arg1;
- (void)addToWebAccessEntryListWithEntry:(id)arg1;
- (void)handleWebAccessSuccessWithTagID:(id)arg1;
- (void)handleWebAcccessFailureWithTagID:(id)arg1 purchaseID:(id)arg2 email:(id)arg3 purchaseReceipt:(id)arg4;
- (void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
- (void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(_Bool)arg3;
- (void)activityObservingApplicationDidEnterBackground;
- (id)initWithCloudContext:(id)arg1;
- (void)addToWebAccessOptedInListWithTagID:(id)arg1;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(_Bool)arg3 isBundleSubscriber:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(_Bool)arg3 isBundleSubscriber:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)clearAllAppStorePurchases;
- (void)setLastSignedInItunesAccountDSIDWithDSID:(id)arg1;
- (void)setLastSignedInItunesAccountNameWithName:(id)arg1;
- (void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2;
- (void)clearAllPurchases;
- (void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(_Bool)arg4;
- (void)addExpiredPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(_Bool)arg4 expirationDate:(id)arg5;
- (_Bool)isPaidSubscriber;
- (_Bool)isPaidSubscriberFromNews;
- (_Bool)isPaidSubscriberFromAppStore;
- (_Bool)isPaidSubscriberFromWeb;
- (_Bool)hasPurchaseTypeAppStore;
- (void)forceExpireAllSubscriptionsIfNeeded;
- (id)expiredPurchaseChannelIDs;
- (id)subscriptionNotSupportedChannelIDs;
- (void)performEntitlementCheckWithIgnoreCache:(_Bool)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isTagPurchased:(id)arg1;
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1;
- (void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

@end
