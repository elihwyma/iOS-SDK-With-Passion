/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEOClientMetrics, GEODataRequestThrottlerToken, GEOProtobufSession, NSError, NSString, PBCodable;

@protocol GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;

@interface GEOProtobufSessionTask : NSObject

{
    Class _responseClass;
    id <GEODataSessionTask> _dataTask;
    GEOProtobufSession *_session;
    id <GEOProtobufSessionTaskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSError *_error;
    PBCodable *_response;
    unsigned long long _taskIdentifier;
    unsigned int _requestTypeCode;
    CDStruct_d1a7ebee _requestKind;
    GEOApplicationAuditToken *_auditToken;
    _Bool _completedAsCancelled;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool completedAsCancelled;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) PBCodable *response;
@property (nonatomic, readonly) CDStruct_d1a7ebee requestKind;
@property (nonatomic, readonly) Class responseClass;
@property (retain, nonatomic) id <GEODataSessionTask> dataTask;
@property (weak, nonatomic) GEOProtobufSession *session;
@property (weak, nonatomic) id <GEOProtobufSessionTaskDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) _Bool completedAsCancelled;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) PBCodable *response;
@property (nonatomic, readonly) unsigned int requestTypeCode;
@property (nonatomic, readonly) unsigned long long taskIdentifier;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, readonly) unsigned long long requestedMultipathServiceType;
@property (nonatomic, readonly) _Bool mptcpNegotiated;
@property (nonatomic, readonly) _Bool receivedRNFNotification;

- (id)init;
- (void)cancel;
- (void)start;
- (void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)initWithSession:(id)arg1 taskIdentifier:(unsigned long long)arg2 requestTypeCode:(unsigned int)arg3 responseClass:(Class)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 requestKind:(CDStruct_d1a7ebee)arg7 auditToken:(id)arg8 throttleToken:(id)arg9;
- (void)completeWithCancelled:(_Bool)arg1 error:(id)arg2 response:(id)arg3;
- (void)completeWithErrorCode:(long long)arg1;
- (void)_decodeResponseFromTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)parseInnerProtobufFromData:(id)arg1;
- (id)parseResponseFromResponseData:(id)arg1;
- (void)updateDataRequest:(id)arg1 withNewProtobufRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)parsePreambleWithReader:(id)arg1;
- (_Bool)parseProtocolVersionWithReader:(id)arg1;
- (_Bool)parseResponseTypeWithReader:(id)arg1;

@end
