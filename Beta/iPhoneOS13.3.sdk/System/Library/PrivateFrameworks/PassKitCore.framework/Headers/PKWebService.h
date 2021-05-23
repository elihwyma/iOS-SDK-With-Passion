/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class ACAccountStore, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURLSession, NSURLSessionConfiguration;

@protocol OS_dispatch_queue;

@interface PKWebService : NSObject <Swift>

{
    ACAccountStore *_accountStore;
    unsigned long long _taskIDCounter;
    NSString *_webServiceSessionMarker;
    NSOperationQueue *_delegateOperationQueue;
    NSMutableDictionary *_webServiceTasks;
    NSMutableDictionary *_diagnosticReasonsByTaskID;
    NSMutableArray *_diagnosticReasons;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_diagnosticReasonsQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSSet *_sensitiveKeys;
}

@property (readonly) NSURLSessionConfiguration *sessionConfiguration;
@property (nonatomic, readonly) NSString *webServiceSessionMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sharedCookieStorage;

- (id)init;
- (void)invalidate;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_accountStore;
- (id)urlSession;
- (void)addDiagnosticReason:(id)arg1;
- (void)removeDiagnosticReason:(id)arg1;
- (unsigned long long)nextTaskID;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)refreshSessionWithConfiguration:(id)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (_Bool)canBypassTrustExtendedValidation;
- (void)logResponse:(id)arg1 withData:(id)arg2;
- (void)handleAuthenticationFailureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (id)logFacility;
- (void)resetWebServiceSessionMarker;
- (void)setUrlSession:(id)arg1;
- (void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)arg1;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg1;
- (id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg1 forTaskID:(unsigned long long)arg2;
- (void)logRequest:(id)arg1;
- (void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)arg1;
- (_Bool)_trustPassesExtendedValidation:(struct __SecTrust *)arg1;
- (id)_redactLogsWithData:(id)arg1;
- (void)_redactLogsFromJSONObject:(id)arg1;
- (unsigned long long)webServiceTaskIdentifierForTaskIdentifier:(long long)arg1;
- (void)diagnosticSessionWithReason:(id)arg1 sessionHandler:(CDUnknownBlockType)arg2;

@end
