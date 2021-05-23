/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSURLSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICURLSession : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableSet *_activeRequests;
    NSMutableDictionary *_completionHandlers;
    _Bool _paused;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    NSURLSession *_urlSession;
    unsigned long long _maxConcurrentRequests;
}

@property (nonatomic, readonly) unsigned long long maxConcurrentRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)defaultMaximumConcurrentRequests;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (id)initWithConfiguration:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3;
- (void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)_enqueueRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)_finishRequest:(id)arg1;
- (void)enqueueDataRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueDownloadRequest:(id)arg1 toDestination:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)enqueueAVDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2 qualityOfService:(long long)arg3;
- (id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2;
- (void)_checkRequestTimeouts;
- (void)cancelRequest:(id)arg1 withError:(id)arg2;
- (void)_processPendingRequests;
- (id)_requestForTask:(id)arg1;
- (id)_newResponseForRequest:(id)arg1;
- (void)_updateProgressForRequest:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)_processRequest:(id)arg1;
- (void)_scheduleNextRequestTimeoutCheck;
- (double)_timeoutForRequest:(id)arg1;
- (void)enqueueUploadRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueDownloadRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueAVDownloadRequest:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
