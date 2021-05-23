/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUIDSReadRequest, CUIDSWriteRequest, IDSService, IDSSession, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUIDSSession : NSObject

{
    IDSService *_idsService;
    IDSSession *_idsSession;
    _Bool _idsInviting;
    int _idsSock;
    CUIDSReadRequest *_readRequestList;
    id *_readRequestNext;
    CUIDSReadRequest *_readRequestCurr;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readSuspended;
    CUIDSWriteRequest *_writeRequestList;
    id *_writeRequestNext;
    CUIDSWriteRequest *_writeRequestCurr;
    NSObject<OS_dispatch_source> *_writeSource;
    _Bool _writeSuspended;
    struct LogCategory *_ucat;
    _Bool _idsEncryption;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_idsDestination;
    NSString *_idsInviteToken;
    NSString *_idsServiceName;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *idsDestination;
@property (nonatomic) _Bool idsEncryption;
@property (copy, nonatomic) NSString *idsInviteToken;
@property (copy, nonatomic) NSString *idsServiceName;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (int)_setupSocket;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)sessionStarted:(id)arg1;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
- (void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processReadRequests;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processWriteRequests;

@end
