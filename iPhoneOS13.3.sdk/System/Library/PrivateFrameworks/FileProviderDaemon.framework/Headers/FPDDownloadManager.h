//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_preflightQueue;
}

+ (void)initialize;
+ (void)releaseDownloadSlot:(id)arg1;
+ (id)acquireDownloadSlotForItem:(id)arg1;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_downloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)_recursivelyDownloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 perItemCompletion:(id /* CDUnknownBlockType */)arg4 withCompletion:(id /* CDUnknownBlockType */)arg5;
- (void)progressComputationPreflightForRecursiveRoot:(id)arg1 downloader:(id)arg2 itemProgressNeedsSetup:(id /* CDUnknownBlockType */)arg3 itemProgressSetup:(id /* CDUnknownBlockType */)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (id)progressComputationPreflightForItem:(id)arg1;
- (void)retrieveFPItemForURL:(id)arg1 domain:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)downloadItem:(id)arg1 recursively:(BOOL)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(id /* CDUnknownBlockType */)arg5 withCompletion:(id /* CDUnknownBlockType */)arg6;
- (void)downloadItems:(id)arg1 recursively:(BOOL)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(id /* CDUnknownBlockType */)arg5 withCompletion:(id /* CDUnknownBlockType */)arg6;
- (id)init;

@end

