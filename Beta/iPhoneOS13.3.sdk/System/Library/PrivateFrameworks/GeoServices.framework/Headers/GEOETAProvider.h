/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEOETATrafficUpdateRequest, GEOMapServiceTraits, GEOProtobufSession, GEOProtobufSessionTask, NSString;

@protocol OS_dispatch_queue;

@interface GEOETAProvider : NSObject

{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_task;
    GEOETATrafficUpdateRequest *_currentRequest;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _willSendRequestHandler;
    GEOApplicationAuditToken *_auditToken;
    GEOMapServiceTraits *_traits;
    _Bool _cancelled;
    struct GEOOnce_s _didStart;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *task;
@property (retain) GEOETATrafficUpdateRequest *currentRequest;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType finishedHandler;
@property (copy, nonatomic) CDUnknownBlockType willSendRequestHandler;

- (id)init;
- (void)cancelRequest;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)_startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)didCompleteTask;
- (id)initWithAuditToken:(id)arg1 traits:(id)arg2;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end
