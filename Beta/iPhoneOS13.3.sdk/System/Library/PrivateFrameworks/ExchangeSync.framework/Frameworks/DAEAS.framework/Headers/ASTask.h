/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

#import <DAEAS/Swift-Protocol.h>

@class ASItem, ASParseContext, ASTaskManager, DATaskManager, NSDate, NSError, NSHTTPURLResponse, NSString, NSThread, NSTimer, NSURLRequest, NSURLSession, NSURLSessionDataTask;

@interface ASTask : NSObject <Swift>

{
    _Bool _haveSwitchedCodePage;
    _Bool _haveParsedCommand;
    ASItem *_currentlyParsingItem;
    id _delegate;
    NSHTTPURLResponse *_response;
    ASParseContext *_parseContext;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    NSURLRequest *_request;
    _Bool _isFakingIt;
    _Bool _didSendRequest;
    _Bool _didFailWithError;
    _Bool _didCancel;
    _Bool _didReceiveResponse;
    _Bool _didReceiveData;
    _Bool _didFinishLoading;
    _Bool _didReset;
    _Bool _finished;
    _Bool _finishedByTimeoutEnforcer;
    int _interfaceBinding;
    id _context;
    _Bool _isExclusive;
    int _numBadPasswordResponses;
    _Bool _askedToCancelWhileModal;
    _Bool _haveCheckedForTopLevelError;
    _Bool _handledTopLevelError;
    int _taskID;
    ASTaskManager *_taskManager;
    int _modalReason;
    int _modalPushCount;
    NSString *_lastKnownPolicyKey;
    NSError *_passwordNotificationError;
    NSString *_lastKnownPassword;
    NSDate *_dateConnectionWentOut;
    NSTimer *_timeoutEnforcer;
    _Bool _retry;
    int _serverRequestedRetryCount;
    _Bool _isLoadedOnMainThread;
    long long _sentBytesCount;
    long long _receivedBytesCount;
    NSString *_sourceApplicationBundleIdentifier;
    DATaskManager *_strongTaskManagerDuringDelegateCallout;
    NSThread *_thread;
}

@property (retain, nonatomic) DATaskManager *strongTaskManagerDuringDelegateCallout;
@property (retain, nonatomic) NSString *lastKnownPassword;
@property (retain, nonatomic) NSTimer *timeoutEnforcer;
@property (nonatomic) _Bool isLoadedOnMainThread;
@property (retain, nonatomic) NSThread *thread;
@property (weak, nonatomic) DATaskManager *taskManager;
@property (weak, nonatomic) id delegate;
@property (nonatomic, readonly) ASParseContext *parseContext;
@property (retain, nonatomic) id context;
@property (nonatomic) int interfaceBinding;
@property (nonatomic) _Bool isExclusive;
@property (retain, nonatomic) ASItem *currentlyParsingItem;
@property (nonatomic) _Bool askedToCancelWhileModal;
@property (nonatomic) long long sentBytesCount;
@property (nonatomic) long long receivedBytesCount;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_setDefaultTaskTimeout:(double)arg1 failureFallbackTimeout:(double)arg2;
+ (void)_restoreDefaultTaskTimeout;

- (id)init;
- (void)dealloc;
- (id)_url;
- (void)reset;
- (id)contentType;
- (void)finishWithError:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (double)timeoutInterval;
- (double)percentComplete;
- (void)loadRequest:(id)arg1;
- (id)command;
- (void)performTask;
- (id)httpMethod;
- (int)taskID;
- (id)requestBody;
- (id)onBehalfOfBundleIdentifier;
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)startModal;
- (_Bool)shouldHoldPowerAssertion;
- (void)_handleCompletion;
- (void)tearDownResources;
- (int)numDownloadedElements;
- (id)_requestForLogging;
- (void)_failImmediately;
- (id)_applyAuthenticationChain:(id)arg1 toRequest:(id)arg2;
- (void)reportStatusWithError:(id)arg1;
- (void)_handleBadPasswordResponse;
- (void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_canAuthenticateAgainstProtectionSpace:(id)arg1;
- (long long)taskStatusForError:(id)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (_Bool)attemptRetryWithStatus:(long long)arg1 error:(id)arg2;
- (void)finishWithError:(id)arg1 afterDelegateCallout:(CDUnknownBlockType)arg2;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (void)didProcessContext:(id)arg1;
- (id)_easVersion;
- (id)_policyKey;
- (id)_HTTPMethodForRequest:(id)arg1;
- (_Bool)_shouldSendAuthForRequest:(id)arg1;
- (void)_addAuthToRequest:(id)arg1;
- (_Bool)_shouldRedirectToHTTPForRequest:(id)arg1;
- (_Bool)shouldHandlePasswordErrors;
- (_Bool)shouldStallAfterConnectionLost;
- (_Bool)requiresEASVersionInformaton;
- (_Bool)shouldLogIncomingData;
- (id)responseContentType;
- (id)parameterData;
- (void)handleTopLevelErrorStatus:(id)arg1;
- (_Bool)checkForErrorInContext:(id)arg1;
- (_Bool)shouldHandleServerErrorRetryLater;
- (_Bool)shouldReportTimeInNetwork;
- (_Bool)requiresEASVersionUpdate;
- (id)requestBodyStreamOutKnownSize:(int *)arg1;
- (id)_sessionForLogging;
- (void)tearDownResourcesAndCancelTask;
- (void)_assignConnectionProperties:(id)arg1 toSessionConfiguration:(id)arg2;
- (void)tearDownResourcesButLeaveSessionAlone;
- (void)_tearDownResourcesHelper;
- (void)_pushModalForReason:(int)arg1;
- (void)_continuePerformTask;
- (void)taskManagerDidFindEASVersion;
- (void)taskManagerDidUpdatePolicyKey;
- (void)_popModal;
- (_Bool)_isWBXML;
- (void)_setHTTPParametersOnRequest:(id)arg1 outBodyStream:(id *)arg2 outBodyData:(id *)arg3;
- (void)willCallOutToDelegate;
- (void)didCallOutToDelegate;
- (_Bool)isInCallOutToDelegate;
- (void)_handleCredentialRenewalResult:(id)arg1;
- (void)_URLSessionDidBecomeInvalidWithError:(id)arg1;
- (void)_URLSessionTaskDidCompleteWithError:(id)arg1;
- (void)_handleCompletionError:(id)arg1;
- (void)_URLSessionDataTaskDidReceiveData:(id)arg1;
- (void)willProcessContext;
- (_Bool)_shouldUseUsernamePasswordForAuthenticationMethod:(id)arg1;
- (id)_getCredential:(id)arg1;
- (_Bool)_handleRedirect:(id)arg1;
- (_Bool)_handleCertificateError:(id)arg1;
- (void)_timeoutEnforcerFired:(id)arg1;
- (void)taskManagerDidFailToUpdatePolicyKey;
- (void)_initFakeParseContext;
- (void)_unitTestFinished;

@end
