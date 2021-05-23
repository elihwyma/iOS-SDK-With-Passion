/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStore, FCPurchaseController, NSMutableDictionary, NSString;

@protocol FCBundleSubscriptionManagerType, FCCoreConfigurationManager, FCPaymentTransactionManager, FCPurchaseFlowOverrideProviderType, FCPurchaseIntegrityChecker, FCPurchaseManagerDelegate, FCPurchaseReceiptProvider;

@interface FCPurchaseManager : NSObject

{
    id <FCPurchaseManagerDelegate> _delegate;
    id <FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider;
    FCKeyValueStore *_localStore;
    id <FCPaymentTransactionManager> _paymentTransactionManager;
    id <FCPurchaseIntegrityChecker> _purchaseIntegrityChecker;
    id <FCPurchaseReceiptProvider> _purchaseReceiptProvider;
    id <FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    FCPurchaseController *_purchaseController;
    NSMutableDictionary *_ongoingPurchaseEntriesByProductID;
    id <FCCoreConfigurationManager> _configurationManager;
    NSString *_lastSignedInItunesAccountDSID;
}

@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (nonatomic, readonly) id <FCPaymentTransactionManager> paymentTransactionManager;
@property (nonatomic, readonly) id <FCPurchaseIntegrityChecker> purchaseIntegrityChecker;
@property (nonatomic, readonly) id <FCPurchaseReceiptProvider> purchaseReceiptProvider;
@property (nonatomic, readonly) id <FCBundleSubscriptionManagerType> bundleSubscriptionManager;
@property (nonatomic, readonly) FCPurchaseController *purchaseController;
@property (retain, nonatomic) NSMutableDictionary *ongoingPurchaseEntriesByProductID;
@property (retain, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property (copy, nonatomic) NSString *lastSignedInItunesAccountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FCPurchaseManagerDelegate> delegate;
@property (retain, nonatomic) id <FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider;

- (id)init;
- (void)loadLocalCachesFromStore;
- (void)saveToDisk;
- (void)activityObservingApplicationDidEnterBackground;
- (void)transactionPurchasedWithProductID:(id)arg1;
- (void)transactionFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3;
- (void)cleanupStaleOngoingPurchaseEntries;
- (id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurcase:(_Bool)arg2;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(_Bool)arg7 payment:(id)arg8 error:(id *)arg9;
- (void)finishPurchaseTransactionWithProductID:(id)arg1;
- (id)_ongoingPurchaseEntryIDForProductID:(id)arg1;
- (_Bool)signInDetected;
- (void)_purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;
- (void)performEntitlementWithTagID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPurchaseTimeElapsedWithEntry:(id)arg1;
- (void)removeOngoingPurchaseEntryForProductID:(id)arg1;
- (void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2;
- (void)startBundlePurchaseWithPurchase:(id)arg1 error:(id *)arg2;
- (void)startPurchaseWithTagID:(id)arg1 purchase:(id)arg2 webAccessOptIn:(_Bool)arg3 error:(id *)arg4;
- (void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3;
- (void)simulateFailurePurchaseWithProductID:(id)arg1 transactionState:(long long)arg2 error:(id)arg3;
- (void)authenticateAppleIDWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isPurchaseOngoingForTagID:(id)arg1;
- (_Bool)anyOngoingPurchases;
- (id)initWithCloudContext:(id)arg1 purchaseIntegrityChecker:(id)arg2 purchaseReceiptProvider:(id)arg3 paymentTransactionManager:(id)arg4 bundleSubscriptionManager:(id)arg5 keyValueStoreOption:(unsigned long long)arg6;
- (id)ongoingPurchaseEntryForProductID:(id)arg1;
- (void)clearAllOngoingPurchaseEntries;

@end
