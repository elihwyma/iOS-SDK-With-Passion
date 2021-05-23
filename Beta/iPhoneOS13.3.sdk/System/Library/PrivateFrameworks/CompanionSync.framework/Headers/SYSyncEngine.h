/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString, PBCodable, SYService;

@protocol OS_dispatch_queue, OS_os_activity, OS_os_transaction, SYSyncEngineResponder;

__attribute__((visibility("hidden")))
@interface SYSyncEngine : NSObject

{
    id <SYSyncEngineResponder> _responder;
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_activity> *_transportActivity;
    SYService *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id <SYSyncEngineResponder> responder;
@property (nonatomic, readonly) NSObject<OS_os_activity> *transportActivity;
@property (nonatomic, readonly) _Bool isInSession;
@property (nonatomic, readonly) _Bool buffersSessions;
@property (nonatomic, readonly) _Bool buffersHandshake;
@property (weak, nonatomic, readonly) SYService *service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) _Bool targetIsNearby;
@property (nonatomic, readonly) _Bool targetConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PBCodable *stateForLogging;

- (void)dealloc;
- (void)suspend;
- (void)endSession;
- (_Bool)resume:(id *)arg1;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)beginSession;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (id)cancelMessagesReturningFailures:(id)arg1;

@end
