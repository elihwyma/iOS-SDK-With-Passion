/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <iCloudQuotaUI/ICQUpgradeFlowManager.h>

@class NSDictionary, NSString, NSURLSession, PSCloudStorageOffersManager;

@interface ICQUpgradeCloudStorageFlowManager : ICQUpgradeFlowManager

{
    NSURLSession *_buyProductSession;
    NSString *_storagePurchaseButtonId;
    PSCloudStorageOffersManager *_storageOffersManager;
    CDUnknownBlockType _purchaseCompletionHandler;
}

@property (retain, nonatomic) NSString *storagePurchaseButtonId;
@property (nonatomic, readonly) NSDictionary *storagePurchaseKeybag;
@property (retain, nonatomic) PSCloudStorageOffersManager *storageOffersManager;
@property (copy, nonatomic) CDUnknownBlockType purchaseCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldSubclassShowForOffer:(id)arg1;
+ (_Bool)_canDoTokenPurchaseWithOffer:(id)arg1;

- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (id)initSubclassWithOffer:(id)arg1;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPurchase;
- (id)_buyProductQueryKeySet;
- (id)_storageContextJSONString;
- (id)_dummyRequestWithAccount:(id)arg1 token:(id)arg2;
- (id)_storageContextHeaderDictionary;
- (id)_buyProductQueryDictionary;
- (void)_adoptRemoteUIWithPurchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3;
- (id)secureTokenMissingError;
- (void)_performPurchaseUsingSettingsUI;
- (void)_buyProductShouldUseToken:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performPurchaseUsingTouchID;

@end
