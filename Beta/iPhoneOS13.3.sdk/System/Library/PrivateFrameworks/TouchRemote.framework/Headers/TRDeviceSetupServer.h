/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString, TRTransferServer;

@protocol OS_dispatch_semaphore, TRDeviceSetupServerDelegate;

@interface TRDeviceSetupServer : NSObject

{
    TRTransferServer *_transferServer;
    NSData *_dataToSend;
    NSObject<OS_dispatch_semaphore> *_dataToSendSemaphore;
    _Bool _cancelledSetupInProgress;
    int _notifyToken;
    _Bool _notifyTokenIsValid;
    _Bool _setupInProgress;
    _Bool _started;
    id <TRDeviceSetupServerDelegate> _delegate;
    NSMutableArray *_accountsToAuthenticate;
    NSMutableDictionary *_cachedAuthInfo;
}

@property (retain, nonatomic) NSMutableArray *accountsToAuthenticate;
@property (retain, nonatomic) NSMutableDictionary *cachedAuthInfo;
@property (weak, nonatomic) id <TRDeviceSetupServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)server:(id)arg1 didFailToReceiveData:(id)arg2;
- (void)serverWillReceiveData:(id)arg1;
- (void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_finishSetupWithError:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_connectWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_authenticateWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_setUpWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_finishWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelTransferConnection;
- (void)_requestAuthenticationForNextAccountWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_requestAuthenticationForAccount:(unsigned long long)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_requestGeneralSetupWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_authenticateAccount:(unsigned long long)arg1 withAuthInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestAuthenticationFromPeripheralForAccount:(unsigned long long)arg1 lastAttemptAction:(id)arg2 lastAttemptError:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)_sendAction:(id)arg1 sendDataHandler:(CDUnknownBlockType)arg2 shouldSendNilOnFailure:(_Bool)arg3 error:(id *)arg4;
- (void)cancelActiveSetup;

@end
