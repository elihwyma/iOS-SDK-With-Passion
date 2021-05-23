/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSURLSession;

@protocol OS_dispatch_queue;

@interface PKObjectDownloader : NSObject

{
    NSMutableDictionary *_downloads;
    NSMutableOrderedSet *_pendingURLs;
    NSMutableSet *_downloadingURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_session;
    long long _concurrentRequests;
}

@property (retain) NSURLSession *session;
@property long long concurrentRequests;

+ (id)sharedImageAssetDownloader;

- (id)init;
- (void)invalidate;
- (id)initWithSession:(id)arg1;
- (void)downloadFromUrl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cachedDataForURL:(id)arg1;
- (void)_schedulePendingDownloads;
- (void)_scheduleDownload:(id)arg1 forURL:(id)arg2;
- (void)downloadWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResponseForURL:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4;

@end
