/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOClientMetrics, GEODataRequest, NSData, NSDate, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLRequest, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol GEODataSessionTaskDelegate, GEORequestCounterTicket, NSObject, OS_dispatch_queue, OS_os_activity, OS_voucher;

@interface GEODataURLSessionTask : NSObject

{
    id <GEODataSessionTaskDelegate> _delegate;
    GEODataRequest *_request;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSURLSessionTask *_backingTask;
    NSError *_nonBackingTaskError;
    NSData *_cachedData;
    NSMutableData *_receivedData;
    NSURLSessionTaskMetrics *_urlTaskMetrics;
    double _startTime;
    double _endTime;
    CDStruct_d1a7ebee _requestKind;
    _Bool _mptcpNegotiated;
    _Bool _receivedRNFNotification;
    float _priority;
    unsigned int _sessionIdentifier;
    _Bool _backingTaskNeedsResume;
    _Bool _finished;
    unsigned int _qos;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_voucher> *_voucher;
    id <NSObject> _parsedResponse;
    NSDate *_originalStartDate;
}

@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) double loadTime;
@property (nonatomic, readonly) NSString *entityTag;
@property (nonatomic, readonly) NSString *contentLengthString;
@property (nonatomic, readonly) unsigned long long contentLength;
@property (nonatomic, readonly) _Bool failedDueToCancel;
@property (nonatomic, readonly) long long HTTPStatusCode;
@property (nonatomic, readonly) NSURL *originalRequestURL;
@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (weak, nonatomic, readonly) id <GEODataSessionTaskDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy, nonatomic) NSData *cachedData;
@property (nonatomic, readonly) GEODataRequest *request;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) _Bool finished;
@property (nonatomic, readonly) NSURLSessionTask *backingTask;
@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic) _Bool receivedRNFNotification;
@property (nonatomic, readonly) NSData *receivedData;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) NSURLRequest *originalURLRequest;
@property (nonatomic, readonly) CDStruct_d1a7ebee requestKind;
@property float priority;
@property (nonatomic, readonly) _Bool protocolBufferHasPreamble;
@property (nonatomic, readonly) NSURLSessionTaskMetrics *urlTaskMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSURL *downloadedFileURL;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) _Bool failedDueToCancel;
@property (nonatomic, readonly) id <GEORequestCounterTicket> requestCounterTicket;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, readonly) id <NSObject> parsedResponse;
@property (nonatomic, readonly) unsigned long long requestedMultipathServiceType;
@property (nonatomic, readonly) _Bool mptcpNegotiated;

- (id)init;
- (void)cancel;
- (void)start;
- (void)_start;
- (_Bool)validateTileResponse:(_Bool)arg1 error:(id *)arg2;
- (_Bool)validateNonEmptyResponseWithError:(id *)arg1;
- (_Bool)validateContentLengthWithError:(id *)arg1;
- (_Bool)didValidateEntityTagForData:(id *)arg1 entityTag:(id *)arg2;
- (double)loadTimeIncludingTask:(id)arg1;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(CDStruct_d1a7ebee)arg4 priority:(float)arg5;
- (void)_prepareForRestart;
- (id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2;
- (void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didReceiveResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didReceiveData:(id)arg1;
- (void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2;
- (void)didCollectMetrics:(id)arg1;
- (void)delegateAsync:(CDUnknownBlockType)arg1;
- (void)setParsedResponse:(id)arg1;
- (void)notifyDelegateWithSession:(id)arg1;
- (id)createURLRequest;
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;
- (void)updateRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
