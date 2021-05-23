/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSString, SSDownloadManager, SSPurchaseManager;

@protocol OS_dispatch_queue;

@interface TLToneStoreDownloadStoreServicesController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    NSString *_storeAccountName;
    NSMutableDictionary *_toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
    SSDownloadManager *_storeDownloadManager;
    SSPurchaseManager *_storePurchaseManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *storeAccountName;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_updateStoreAccountName;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_handleToneManagerContentsDidChangeNotification:(id)arg1;
- (void)_assertRunningOnAccessQueue;
- (void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1;
- (void)_openToneStoreWithStoreItemKind:(id)arg1;
- (void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3;
- (void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
- (void)openAlertToneStore;
- (void)openRingtoneStore;
- (void)redownloadAllTones;

@end
