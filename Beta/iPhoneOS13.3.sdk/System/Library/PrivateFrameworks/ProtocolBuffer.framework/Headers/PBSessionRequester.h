/*
 Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionTask, PBDataReader;

@protocol PBSessionRequesterDelegate;

@interface PBSessionRequester : NSObject

{
    NSURL *_URL;
    id <PBSessionRequesterDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSURLSession *_session;
    NSURLSessionTask *_currentTask;
    NSOperationQueue *_sessionDelegateQ;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned long long _lastGoodDataOffset;
    unsigned long long _uploadPayloadSize;
    unsigned long long _downloadPayloadSize;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    long long _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSDictionary *_httpResponseHeaders;
    NSMutableDictionary *_httpRequestHeaders;
    double _timeoutSeconds;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
    _Bool _didNotifyRequestCompleted;
    NSArray *_clientCertificates;
    NSDictionary *_connectionProperties;
    _Bool _shouldHandleCookies;
    NSString *_apsRelayTopic;
    unsigned long long _nwActivityDomain;
    unsigned long long _nwActivityLabel;
    struct {
        unsigned int ignoresResponse:1;
        unsigned int loading:1;
        unsigned int needsCancel:1;
        unsigned int responseStatusSet:1;
        unsigned int parsedResponseHeader:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int delegateDidFinish:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidFailWithError:1;
        unsigned int paused:1;
        unsigned int resuming:1;
    } _flags;
}

@property _Bool needsCancel;
@property (retain, nonatomic) NSURL *URL;
@property (weak, readonly) id <PBSessionRequesterDelegate> delegate;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *currentTask;
@property (nonatomic) _Bool ignoresResponse;
@property (retain, nonatomic) NSString *logRequestToFile;
@property (retain, nonatomic) NSString *logResponseToFile;
@property (nonatomic, readonly) NSArray *requests;
@property (nonatomic, readonly) unsigned long long uploadPayloadSize;
@property (nonatomic, readonly) unsigned long long downloadPayloadSize;
@property (nonatomic, readonly) unsigned long long requestResponseTime;
@property (copy, nonatomic) NSString *apsRelayTopic;
@property (nonatomic) unsigned long long nwActivityDomain;
@property (nonatomic) unsigned long long nwActivityLabel;
@property (nonatomic) double timeoutSeconds;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSDictionary *httpRequestHeaders;
@property (retain, nonatomic) NSDictionary *httpResponseHeaders;
@property (nonatomic) _Bool shouldHandleCookies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)start;
- (_Bool)isPaused;
- (void)_start;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)_cleanup;
- (void)_didSetDelegate:(id)arg1;
- (void)setNeedsCancel;
- (void)clearRequests;
- (void)addRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (id)internalRequests;
- (void)addInternalRequest:(id)arg1;
- (id)responseForInternalRequest:(id)arg1;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
- (id)_languageLocale;
- (id)_applicationID;
- (id)_osVersion;
- (id)requestPreamble;
- (void)writeRequest:(id)arg1 into:(id)arg2;
- (_Bool)_sendPayload:(id)arg1 error:(id *)arg2;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_serializePayload:(CDUnknownBlockType)arg1;
- (void)_cancelNoNotify;
- (void)_performOnDelegateQueue:(CDUnknownBlockType)arg1;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)cancelWithErrorCode:(long long)arg1 description:(id)arg2;
- (void)cancelWithErrorCode:(long long)arg1;
- (_Bool)readResponsePreamble:(id)arg1;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (_Bool)_tryParseData;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;
- (id)decodeResponseData:(id)arg1;
- (id)newMutableURLRequestWithURL:(id)arg1;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;
- (id)_newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;
- (id)newSessionTaskOnSession:(id)arg1 withURLRequest:(id)arg2;
- (void)startWithConnectionProperties:(id)arg1;

@end
