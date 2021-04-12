//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol ACSURLSessionDelegate, OS_dispatch_queue, OS_os_log;

@interface ACSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate>
{
    BOOL _canUseCachingServer;
    int __phase;
    NSObject<OS_os_log> *__logHandle;
    NSObject<OS_dispatch_queue> *__queue;
    NSURLSession *__nsurlSession;
    NSDictionary *__locateOptions;
    id <ACSURLSessionDelegate> __clientDelegate;
    NSOperationQueue *__clientDelegateOpQueue;
    NSMutableDictionary *__tasks;
}

+ (id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(BOOL)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
+ (id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(BOOL)arg2 locateOptions:(id)arg3;
+ (id)sharedSession;
@property int _phase; // @synthesize _phase=__phase;
@property(retain) NSMutableDictionary *_tasks; // @synthesize _tasks=__tasks;
@property(retain) NSOperationQueue *_clientDelegateOpQueue; // @synthesize _clientDelegateOpQueue=__clientDelegateOpQueue;
@property(retain) id <ACSURLSessionDelegate> _clientDelegate; // @synthesize _clientDelegate=__clientDelegate;
@property(retain) NSDictionary *_locateOptions; // @synthesize _locateOptions=__locateOptions;
@property(retain) NSURLSession *_nsurlSession; // @synthesize _nsurlSession=__nsurlSession;
@property(retain) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
@property(retain) NSObject<OS_os_log> *_logHandle; // @synthesize _logHandle=__logHandle;
@property BOOL canUseCachingServer; // @synthesize canUseCachingServer=_canUseCachingServer;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* CDUnknownBlockType */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)_copyAttributesFromNSURLTask:(id)arg1 toNSURLTask:(id)arg2;
- (id)_linkedLocationWithLocation:(id)arg1;
- (id)_errorWithResumeDataFromError:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3;
- (BOOL)_resumeData:(id)arg1 toNSURLResumeData:(id )arg2 originalRequest:(id )arg3 currentRequest:(id )arg4 error:(id )arg5;
- (id)_resumeDataWithNSURLResumeData:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3 error:(id )arg4;
- (void)_downloadTask:(id)arg1 completedWithLocation:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)_dataTask:(id)arg1 completedWithData:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)_onqueue_resumeTask:(id)arg1;
- (void)_resumeTask:(id)arg1;
- (void)_suspendTask:(id)arg1;
- (id)_downloadTaskWithResumeData:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_cancelDownloadTask:(id)arg1 byProducingResumeData:(id /* CDUnknownBlockType */)arg2;
- (void)_cancelTask:(id)arg1;
- (void)_onqueue_task:(id)arg1 willUseCachingServer:(BOOL)arg2 newRequest:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_locateCachingServerForURL:(id)arg1 isUpload:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_onqueue_uniqueTasks;
- (id)_onqueue_taskForNSURLTask:(id)arg1;
- (void)_onqueue_removeTaskForNSURLTask:(id)arg1;
- (void)_removeTask:(id)arg1;
- (void)_onqueue_addTask:(id)arg1 forNSURLTask:(id)arg2;
- (void)_addTask:(id)arg1;
- (id)_keyForNSURLTask:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 canUseCachingServer:(BOOL)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)getAllTasksWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getTasksWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)flushWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)resetWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
@property(copy) NSString *sessionDescription;
@property(readonly, copy) NSDictionary *locateOptions;
@property(readonly, copy) NSURLSessionConfiguration *configuration;
@property(readonly, retain) id <ACSURLSessionDelegate> delegate;
@property(readonly, retain) NSOperationQueue *delegateQueue;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end

