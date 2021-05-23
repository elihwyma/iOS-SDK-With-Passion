/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODataURLSessionList, NSMutableDictionary, NSOperationQueue, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEODataURLSession : NSObject

{
    GEODataURLSessionList *_urlSessions;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSOperationQueue *_sessionIsolationOperationQueue;
    NSMutableDictionary *_sessionTasks;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    unsigned int _nextSessionIdentifier;
    int _symptomsAlternateAdviceToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEODataURLSessionList *urlSessions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (nonatomic, readonly) NSOperationQueue *sessionIsolationOperationQueue;
@property (nonatomic, readonly) NSMutableDictionary *sessionTasks;
@property (nonatomic) unsigned int nextSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tearDown;
- (id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)urlSessionForRequest:(id)arg1;
- (id)activeSessionIdentifiers;
- (id)createNewURLSessionWithRequest:(id)arg1;
- (void)pruneInactiveSessions;
- (void)_considerRetryingDueToAlternateAdvice;
- (void)didReceiveMemoryPressureWarning;
- (void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (_Bool)_wifiAssistRetryEnabled;
- (double)_wifiAssistRetryDelay;
- (void)_configureTask:(id)arg1 withRequest:(id)arg2;
- (id)taskForURLSession:(id)arg1 task:(id)arg2;
- (id)removeTaskForURLSession:(id)arg1 task:(id)arg2;

@end
