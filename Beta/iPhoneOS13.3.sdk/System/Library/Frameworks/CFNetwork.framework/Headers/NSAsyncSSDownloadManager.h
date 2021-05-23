/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, SSDownloadManager;

@interface NSAsyncSSDownloadManager : NSObject

{
    SSDownloadManager *_manager;
    NSOperationQueue *_queue;
    NSMutableDictionary *_downloads;
    _Bool _reconnectInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadHandlerDisconnected:(_Bool)arg1;
- (void)cancelDownload:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)withDownloadMatchingIdentifier:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)setDelegate:(id)arg1 forDownload:(long long)arg2;
- (void)addDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)finishDownload:(long long)arg1;
- (id)initWithDownloadManager:(id)arg1;
- (void)withDownload:(long long)arg1 perform:(CDUnknownBlockType)arg2;
- (void)withDownload:(long long)arg1 performAsync:(CDUnknownBlockType)arg2;
- (void)addDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_attemptReconnect;

@end
