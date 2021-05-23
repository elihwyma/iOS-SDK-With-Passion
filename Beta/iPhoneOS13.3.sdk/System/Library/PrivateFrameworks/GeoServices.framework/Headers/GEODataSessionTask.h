/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOClientMetrics, GEODataSession, GEODataURLSessionTask, NSData, NSError, NSString, NSURL;

@protocol GEODataSessionTask, GEODataSessionTaskDelegate, GEORequestCounterTicket, NSObject, OS_dispatch_queue, OS_os_activity;

@interface GEODataSessionTask : NSObject

{
    id <GEODataSessionTaskDelegate> _delegate;
    GEODataSession *_session;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_activity> *_activity;
    id <GEODataSessionTask> _completedSubtask;
    GEODataURLSessionTask *_urlTask;
    CDStruct_d1a7ebee _requestKind;
    double _startTime;
    double _endTime;
    _Bool _didStart;
    _Bool _willSendRequestDelegateCalled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *entityTag;
@property (nonatomic, readonly) NSData *receivedData;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) long long responseSource;
@property (nonatomic, readonly) _Bool protocolBufferHasPreamble;
@property (nonatomic, readonly) NSURL *originalRequestURL;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) double loadTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (weak, nonatomic) id <GEODataSessionTaskDelegate> delegate;
@property (weak, nonatomic) GEODataSession *session;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) GEODataURLSessionTask *urlTask;
@property (retain, nonatomic) id <GEODataSessionTask> completedSubtask;
@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) CDStruct_d1a7ebee requestKind;
@property float priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSData *receivedData;
@property (copy, nonatomic, readonly) NSURL *downloadedFileURL;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) _Bool protocolBufferHasPreamble;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) _Bool failedDueToCancel;
@property (nonatomic, readonly) id <GEORequestCounterTicket> requestCounterTicket;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, readonly) id <NSObject> parsedResponse;
@property (nonatomic, readonly) unsigned long long requestedMultipathServiceType;
@property (nonatomic, readonly) _Bool mptcpNegotiated;
@property (nonatomic, readonly) _Bool receivedRNFNotification;

- (void)cancel;
- (void)start;
- (_Bool)validateTileResponse:(_Bool)arg1 error:(id *)arg2;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(CDStruct_d1a7ebee)arg4 requestCounterTicket:(id)arg5;
- (void)_didCompleteSubtask:(id)arg1;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (_Bool)didValidateEntityTagForData:(id *)arg1 entityTag:(id *)arg2;
- (_Bool)validateTransportWithError:(id *)arg1;
- (_Bool)getHeaderValue:(id *)arg1 forField:(id)arg2;
- (double)loadTimeIncludingTask:(id)arg1;

@end
