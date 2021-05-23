/*
 Image: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
 */

#import <NSObject.h>

#import <AssetCacheServices/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@protocol ACSURLSessionDelegate, OS_dispatch_queue, OS_os_log;

@interface ACSURLSession : NSObject <Swift>

{
    _Bool _canUseCachingServer;
    int __phase;
    NSObject<OS_os_log> *__logHandle;
    NSObject<OS_dispatch_queue> *__queue;
    NSURLSession *__nsurlSession;
    NSDictionary *__locateOptions;
    id <ACSURLSessionDelegate> __clientDelegate;
    NSOperationQueue *__clientDelegateOpQueue;
    NSMutableDictionary *__tasks;
}

@property _Bool canUseCachingServer;
@property (retain) NSObject<OS_os_log> *_logHandle;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property (retain) NSURLSession *_nsurlSession;
@property (retain) NSDictionary *_locateOptions;
@property (retain) id <ACSURLSessionDelegate> _clientDelegate;
@property (retain) NSOperationQueue *_clientDelegateOpQueue;
@property (retain) NSMutableDictionary *_tasks;
@property int _phase;
@property (retain, readonly) NSOperationQueue *delegateQueue;
@property (retain, readonly) id <ACSURLSessionDelegate> delegate;
@property (copy, readonly) NSURLSessionConfiguration *configuration;
@property (copy, readonly) NSDictionary *locateOptions;
@property (copy) NSString *sessionDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedSession;
+ (id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(_Bool)arg2 locateOptions:(id)arg3;
+ (id)sessionWithConfiguration:(id)arg1 canUseCachingServer:(_Bool)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;

- (void)dealloc;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)invalidateAndCancel;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)finishTasksAndInvalidate;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dataTaskWithURL:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1 canUseCachingServer:(_Bool)arg2 locateOptions:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)_onqueue_uniqueTasks;
- (void)_addTask:(id)arg1;
- (id)_downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_addTask:(id)arg1 forNSURLTask:(id)arg2;
- (id)_keyForNSURLTask:(id)arg1;
- (void)_onqueue_removeTaskForNSURLTask:(id)arg1;
- (id)_resumeDataWithNSURLResumeData:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3 error:(id *)arg4;
- (_Bool)_resumeData:(id)arg1 toNSURLResumeData:(id *)arg2 originalRequest:(id *)arg3 currentRequest:(id *)arg4 error:(id *)arg5;
- (void)_downloadTask:(id)arg1 completedWithLocation:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_copyAttributesFromNSURLTask:(id)arg1 toNSURLTask:(id)arg2;
- (void)_onqueue_resumeTask:(id)arg1;
- (void)_onqueue_task:(id)arg1 willUseCachingServer:(_Bool)arg2 newRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_locateCachingServerForURL:(id)arg1 isUpload:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_errorWithResumeDataFromError:(id)arg1 originalRequest:(id)arg2 currentRequest:(id)arg3;
- (void)_removeTask:(id)arg1;
- (id)_linkedLocationWithLocation:(id)arg1;
- (id)_onqueue_taskForNSURLTask:(id)arg1;
- (void)_cancelTask:(id)arg1;
- (void)_cancelDownloadTask:(id)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;
- (void)_suspendTask:(id)arg1;
- (void)_resumeTask:(id)arg1;
- (void)_dataTask:(id)arg1 completedWithData:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
