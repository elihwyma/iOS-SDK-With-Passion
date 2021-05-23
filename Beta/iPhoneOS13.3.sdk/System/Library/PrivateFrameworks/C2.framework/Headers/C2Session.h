/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

#import <C2/Swift-Protocol.h>

@class C2RequestOptions, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;

@protocol C2SessionDelegate;

@interface C2Session : NSObject <Swift>

{
    _Bool _isComplete;
    NSString *_sessionConfigurationName;
    NSURLSession *_session;
    C2RequestOptions *_options;
    NSString *_originalHost;
    NSString *_routeHost;
    double _routeLastUpdated;
    id <C2SessionDelegate> _sessionDelegate;
    double _emptyTimestamp;
    NSMutableDictionary *_wrappedTaskByTaskDescription;
    NSOperationQueue *_queue;
    CDUnknownBlockType _testBehavior_sessionInvalidated_cfnetwork;
    CDUnknownBlockType _testBehavior_sessionInvalidated_shouldInvalidate;
    CDUnknownBlockType _testBehavior_cleanupRetainCycle;
}

@property (retain, nonatomic) NSString *originalHost;
@property (retain, nonatomic) NSString *routeHost;
@property (nonatomic) double routeLastUpdated;
@property (nonatomic) _Bool isComplete;
@property (retain, nonatomic) id <C2SessionDelegate> sessionDelegate;
@property (nonatomic) double emptyTimestamp;
@property (nonatomic, readonly) NSMutableDictionary *wrappedTaskByTaskDescription;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_sessionInvalidated_cfnetwork;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_sessionInvalidated_shouldInvalidate;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_cleanupRetainCycle;
@property (nonatomic, readonly) NSString *sessionConfigurationName;
@property (nonatomic, readonly) NSURLSession *session;
@property (copy, nonatomic, readonly) C2RequestOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)portFromURL:(id)arg1;

- (void)dealloc;
- (void)invalidateAndCancel;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (id)initWithSessionConfigurationName:(id)arg1 routeHost:(id)arg2 options:(id)arg3 sessionDelegate:(id)arg4;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_recalculateSessionDelegateQueuePriority;
- (void)cleanupRetainCycle;
- (void)sessionTaskDelegateCallbackHelper:(id)arg1 task:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)C2Session:(id)arg1 sessionTask:(id)arg2 updatedRoute:(id)arg3;
- (id)createTaskWithOptions:(id)arg1 delegate:(id)arg2;
- (id)addTask:(id)arg1 withDescription:(id)arg2 request:(id)arg3;
- (_Bool)shouldInvalidateAndCancel;
- (void)testBehavior_triggerSessionExpiry;

@end
