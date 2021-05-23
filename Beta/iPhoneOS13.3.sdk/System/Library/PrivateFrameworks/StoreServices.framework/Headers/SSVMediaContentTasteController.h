/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface SSVMediaContentTasteController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    unsigned long long _currentResponseRevisionID;
    unsigned long long _lastNotificationReceivedResponseRevisionID;
    _Bool _havePendingRetryOperation;
    int _itemsDidChangeNotifyToken;
    int _exponentialBackOffSeconds;
    long long _pendingMutateRequestCount;
    NSMutableDictionary *_playlistGlobalIDToContentTasteItem;
    NSMutableDictionary *_playlistGlobalIDToPendingContentTasteItem;
    NSMutableDictionary *_contentTasteItemsToRetry;
    NSMutableDictionary *_storeAdamIDToContentTasteItem;
    NSMutableDictionary *_storeAdamIDToPendingContentTasteItem;
}

+ (id)defaultMediaTasteController;

- (id)init;
- (void)dealloc;
- (_Bool)_isRetryableError:(id)arg1;
- (void)_refreshContentTasteItems;
- (void)_contentTasteForItemUpdate:(id)arg1 finishedWithError:(id)arg2;
- (void)_sendUpdateWithItemUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleContentTasteItemsUpdateResponse:(id)arg1 allowNotifications:(_Bool)arg2;
- (void)_scheduleContentTasteUpdateOperationForFailedItems;
- (void)_retryOperationForItemUpdates:(id)arg1 finishedWithError:(id)arg2;
- (unsigned long long)contentTasteTypeForPlaylistGlobalID:(id)arg1;
- (unsigned long long)contentTasteTypeForStoreAdamID:(long long)arg1;
- (void)setContentTasteType:(unsigned long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setContentTasteType:(unsigned long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
