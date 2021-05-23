/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

#import <iTunesStoreUI/Swift-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, SUQueueSessionManager;

@protocol SUPurchaseManagerDelegate;

@interface SUPurchaseManager : NSObject <Swift>

{
    id <SUPurchaseManagerDelegate> _delegate;
    NSMutableSet *_futurePurchases;
    NSMutableSet *_inflightContinuations;
    NSMutableArray *_observedDownloadManagers;
    NSMutableArray *_pendingContinuations;
    NSMutableArray *_pendingPurchases;
    NSMutableSet *_purchasedIdentifiers;
    NSMutableArray *_purchaseRequests;
    SUQueueSessionManager *_queueSessionManager;
    _Bool _showingErrorDialogs;
    NSDictionary *_tidHeaders;
    long long _updatesCount;
    NSString *_userAgent;
    _Bool _waitingForAuthentication;
    NSNumber *_accountDSID;
}

@property (nonatomic) id <SUPurchaseManagerDelegate> delegate;
@property (retain, nonatomic) SUQueueSessionManager *queueSessionManager;
@property (copy, nonatomic) NSNumber *accountDSID;
@property (copy, nonatomic) NSDictionary *tidHeaders;
@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic, readonly) long long numberOfPendingPurchases;
@property (nonatomic, readonly) NSSet *futurePurchases;
@property (nonatomic, readonly) NSSet *purchasedItemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)beginUpdates;
- (void)endUpdates;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)_performNextAction;
- (void)purchaseRequest:(id)arg1 purchaseDidFail:(id)arg2 withError:(id)arg3;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceed:(id)arg2;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceedWithResponse:(id)arg2;
- (void)_dialogDidFinish:(id)arg1;
- (void)addPurchasedItemIdentifier:(unsigned long long)arg1;
- (void)_showDialogsForErrors:(id)arg1;
- (void)_enqueueContinuations:(id)arg1;
- (void)_enqueuePurchases:(id)arg1;
- (void)removePurchasedItemIdentifier:(unsigned long long)arg1;
- (void)_removePlaceholdersForPurchase:(id)arg1;
- (void)_removePurchaseRequest:(id)arg1;
- (id)_downloadManagerForDownloadKind:(id)arg1;
- (id)_accountDSIDForPurchase:(id)arg1;
- (void)addPurchasedItemIdentifiers:(id)arg1;
- (void)_startContinuations:(id)arg1;
- (void)_startPurchases:(id)arg1;
- (void)_enqueueExternalDownload:(id)arg1;
- (_Bool)_issuePurchaseRequestForPurchases:(id)arg1;
- (void)continuation:(id)arg1 failedWithError:(id)arg2;
- (void)continuationFinished:(id)arg1;
- (void)addFuturePurchase:(id)arg1;
- (_Bool)addPurchaseBatch:(id)arg1;
- (void)cancelFuturePurchase:(id)arg1;
- (_Bool)itemIdentifierIsPurchased:(unsigned long long)arg1;
- (_Bool)itemIdentifierIsPurchasing:(unsigned long long)arg1;
- (id)newPurchaseBatchForItems:(id)arg1 offers:(id)arg2;
- (_Bool)_needsAuthenticationForPurchases:(id)arg1;
- (void)addExternalDownloads:(id)arg1 withOptions:(id)arg2 inContext:(struct OpaqueJSContext *)arg3;
- (id)_newDictionaryForWebScriptValue:(id)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)_newExternalDownloadWithDictionary:(id)arg1;
- (void)_addBatchForPurchases:(id)arg1 options:(id)arg2;
- (id)copyPurchaseForScriptObject:(id)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)_newPurchaseBatchForPurchases:(id)arg1;
- (void)purchaseScriptObject:(id)arg1 withOptions:(id)arg2 inContext:(struct OpaqueJSContext *)arg3;
- (void)_schedulePurchaseCallback:(id)arg1 forPurchases:(id)arg2;
- (id)_newExternalDownloadWithItemDictionary:(id)arg1;
- (id)_newExternalDownloadWithDownloadDictionary:(id)arg1;
- (void)addExternalDownloads:(id)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)copyPurchaseForScriptObject:(id)arg1;
- (void)enqueueScriptPurchases:(id)arg1;
- (void)purchaseScriptObject:(id)arg1;

@end
