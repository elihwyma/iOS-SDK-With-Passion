/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDDownloadManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_preflightQueue;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (id)acquireDownloadSlotForItem:(id)arg1;
+ (void)releaseDownloadSlot:(id)arg1;

- (id)init;
- (void)progressComputationPreflightForRecursiveRoot:(id)arg1 downloader:(id)arg2 itemProgressNeedsSetup:(CDUnknownBlockType)arg3 itemProgressSetup:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)retrieveFPItemForURL:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)progressComputationPreflightForItem:(id)arg1;
- (void)downloadItem:(id)arg1 recursively:(_Bool)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(CDUnknownBlockType)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)_recursivelyDownloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 perItemCompletion:(CDUnknownBlockType)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_downloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)downloadItems:(id)arg1 recursively:(_Bool)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(CDUnknownBlockType)arg5 withCompletion:(CDUnknownBlockType)arg6;

@end
