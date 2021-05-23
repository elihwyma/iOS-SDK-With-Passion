/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

#import <CoreDAV/Swift-Protocol.h>

@class CoreDAVErrorItem, CoreDAVRequestLogger, NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSMutableArray, NSMutableDictionary, NSRunLoop, NSString, NSURL, NSURLConnection, NSURLRequest;

@protocol CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser, CoreDAVTaskDelegate, CoreDAVTaskManager;

@interface CoreDAVTask : NSObject <Swift>

{
    id <CoreDAVTaskManager> _taskManager;
    id <CoreDAVAccountInfoProvider> _accountInfoProvider;
    long long _numDownloadedElements;
    int _depth;
    NSHTTPURLResponse *_response;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    double _timeoutInterval;
    long long _responseStatusCode;
    NSDate *_dateConnectionWentOut;
    _Bool _didSendRequest;
    _Bool _didFailWithError;
    _Bool _didCancel;
    _Bool _didReceiveResponse;
    _Bool _didReceiveData;
    _Bool _didFinishLoading;
    _Bool _finished;
    id _context;
    _Bool _receivedBadPasswordResponse;
    _Bool _triedRenewingCredential;
    _Bool _justTriedTokenAuth;
    _Bool _everTriedTokenAuth;
    _Bool _shouldRetryWithClientToken;
    _Bool _didRetryWithClientToken;
    _Bool _requestIsCompressed;
    _Bool _compressedRequestFailed;
    NSError *_passwordNotificationError;
    id <CoreDAVResponseBodyParser> _responseBodyParser;
    CoreDAVRequestLogger *_logger;
    NSURL *_url;
    _Bool _allowAutomaticRedirects;
    id <CoreDAVTaskDelegate> _delegate;
    CDUnknownBlockType _requestProgressBlock;
    CDUnknownBlockType _responseProgressBlock;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    unsigned long long _totalBytesReceived;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
    NSDictionary *_requestProperties;
    NSData *_fakeResponseData;
    _Bool _haveParsedFakeResponseData;
    CoreDAVErrorItem *_forbiddenErrorItem;
    NSString *_uniqueID;
    _Bool _ignoresGuardianRestrictions;
    _Bool _totalBytesWasProcessedAsAbnormallyLarge;
}

@property (nonatomic) long long responseStatusCode;
@property (nonatomic) unsigned long long totalBytesReceived;
@property (retain, nonatomic) NSError *error;
@property _Bool totalBytesWasProcessedAsAbnormallyLarge;
@property (copy, nonatomic) CDUnknownBlockType requestProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType responseProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly) NSRunLoop *workRunLoop;
@property (weak, nonatomic) id <CoreDAVTaskManager> taskManager;
@property (weak, nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property (weak, nonatomic) id <CoreDAVTaskDelegate> delegate;
@property (retain, nonatomic) id context;
@property (nonatomic) int depth;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) _Bool allowAutomaticRedirects;
@property (retain, nonatomic) id <CoreDAVResponseBodyParser> responseBodyParser;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic) _Bool ignoresGuardianRestrictions;
@property (nonatomic, readonly) NSURL *url;
@property (retain, nonatomic) NSDictionary *requestProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned int)uniqueQueryID;
+ (id)stringFromDepth:(int)arg1;

- (void)dealloc;
- (id)redactedDescription;
- (id)initWithURL:(id)arg1;
- (void)reset;
- (_Bool)validate:(id *)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (unsigned long long)cachePolicy;
- (void)loadRequest:(id)arg1;
- (_Bool)markAsFinished;
- (id)httpMethod;
- (id)requestBody;
- (id)additionalHeaderValues;
- (void)startModal;
- (void)tearDownResources;
- (id)requestBodyStream;
- (_Bool)shouldLogResponseBody;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (id)lastRedirectURL;
- (long long)numDownloadedElements;
- (void)finishEarlyWithError:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)performCoreDAVTask;
- (void)submitWithTaskManager:(id)arg1;
- (id)_connectionForLogging;
- (id)_requestForLogging;
- (void)_logSantizedRequest:(id)arg1 withTaskID:(id)arg2;
- (id)_compressBodyData:(id)arg1;
- (void)_failImmediately;
- (id)_createBodyData;
- (_Bool)_includeGeneralHeaders;
- (id)_applyAuthenticationChain:(struct __CFArray *)arg1 toRequest:(id)arg2;
- (id)_applyStorageSession:(struct __CFURLStorageSession *)arg1 toRequest:(id)arg2;
- (void)reportStatusWithError:(id)arg1;
- (void)_sendTimeSpentInNetworkingToProvider;
- (void)handleWebLoginRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_shouldHandleStatusCode:(long long)arg1;
- (_Bool)_shouldCreateCredentialForBasicOrDigestAuthChallenge:(id)arg1;
- (id)credentialForOAuthChallenge:(id)arg1;
- (id)credentialForClientCertificateChallenge:(id)arg1;
- (_Bool)_handleUnauthorizedAccessError:(id)arg1;
- (void)_handleBadPasswordResponse;

@end
