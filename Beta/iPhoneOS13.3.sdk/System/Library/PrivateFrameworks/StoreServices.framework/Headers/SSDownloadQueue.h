/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSSet, NSString, SSDownloadManager;

@interface SSDownloadQueue : NSObject

{
    _Bool _autoFinishDownloads;
    SSDownloadManager *_downloadManager;
    struct __CFSet *_observers;
}

@property (nonatomic, readonly) NSArray *placeholderDownloads;
@property (nonatomic, readonly) NSArray *preorders;
@property (readonly) NSSet *downloadKinds;
@property (readonly) SSDownloadManager *downloadManager;
@property (nonatomic, readonly) NSArray *downloads;
@property (nonatomic) _Bool shouldAutomaticallyFinishDownloads;
@property (readonly, getter=isUsingNetwork) _Bool usingNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mediaDownloadKinds;
+ (id)softwareApplicationDownloadKinds;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)cancelDownload:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)getDownloadsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)reloadFromServer;
- (void)_handleDownloadsDidChange:(id)arg1;
- (id)initWithDownloadKinds:(id)arg1;
- (id)_initWithDownloadManagerOptions:(id)arg1;
- (_Bool)canCancelDownload:(id)arg1;
- (void)_sendDownloadStatusChangedAtIndex:(long long)arg1;
- (void)_handleDownloadsRemoved:(id)arg1;
- (void)_sendQueueNetworkUsageChanged;
- (void)_messageObserversWithFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)_sendQueueChangedWithRemovals:(id)arg1;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (id)initWithDownloadManagerOptions:(id)arg1;
- (_Bool)addDownload:(id)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (id)downloadForItemIdentifier:(unsigned long long)arg1;
- (void)removePlaceholderDownload:(id)arg1;
- (_Bool)startPreOrderDownload:(id)arg1;
- (void)_sendQueuePreOrdersChanged;

@end
