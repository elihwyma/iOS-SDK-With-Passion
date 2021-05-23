/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class BLServiceProxy, NSArray, NSHashTable, NSMutableDictionary, NSNumber, NSString;

@interface BLDownloadQueue : NSObject

{
    struct os_unfair_lock_s _observersLock;
    struct os_unfair_lock_s _activeDownloadsLock;
    NSHashTable *_observers;
    BLServiceProxy *_serviceProxy;
    NSMutableDictionary *_activeDownloads;
    NSNumber *_currentAccountNumber;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) BLServiceProxy *serviceProxy;
@property (retain, nonatomic) NSMutableDictionary *activeDownloads;
@property (retain, nonatomic) NSNumber *currentAccountNumber;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)cancelAllActiveDownloads;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_storeChanged:(id)arg1;
- (void)cancelDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pauseDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resumeDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_notifyProgress:(id)arg1;
- (void)_notifyComplete:(id)arg1;
- (void)_notifyFailed:(id)arg1;
- (void)_purchaseSucceeded:(id)arg1;
- (void)_purchaseFailed:(id)arg1;
- (void)_cancelAllPausedDownloads;
- (void)purchaseWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)arg1 orPermlink:(id)arg2 downloadID:(id)arg3 isPaused:(_Bool)arg4 isAudiobook:(_Bool)arg5 targetObserver:(id)arg6;
- (void)_sendCancelCompletionNotificationForDownloadWithDownloadID:(id)arg1;
- (void)_addDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg1;
- (id)_stringFromObject:(id)arg1;
- (id)_numberFromObject:(id)arg1;
- (id)_dateFromObject:(id)arg1;
- (id)_downloadStatusStoreID:(id)arg1 orPermLink:(id)arg2 downloadID:(id)arg3 isPaused:(_Bool)arg4 isAudiobook:(_Bool)arg5;
- (id)_downloadStatusFromDictionary:(id)arg1 outParamNewlyTrackedDownload:(_Bool *)arg2;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)arg1 failed:(_Bool)arg2;
- (id)_purchaseResponseFromDictionary:(id)arg1;
- (void)addDownloadWithPurchaseParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDownloadWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRestoreDownloadWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAllActiveDownloadsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addDownloadsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(_Bool)arg3 userInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addDownloadWithPurchaseParameters:(id)arg1 storeID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
