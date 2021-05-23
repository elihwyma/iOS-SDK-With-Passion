/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class CUBonjourDevice, NSNumber, NSString, NSXPCConnection, RPRemoteDisplayDevice, RPRemoteDisplayServer;

@protocol OS_dispatch_queue;

@interface RPRemoteDisplaySession : NSObject

{
    _Bool _activateCalled;
    struct NSMutableDictionary *_eventRegistrations;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_requestRegistrations;
    _Bool _needsAWDL;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _internalAuthFlags;
    NSString *_password;
    CDUnknownBlockType _authCompletionHandler;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    unsigned long long _controlFlags;
    RPRemoteDisplayDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CUBonjourDevice *_bonjourDevice;
    RPRemoteDisplayDevice *_daemonDevice;
    RPRemoteDisplayServer *_server;
    NSNumber *_sessionID;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (retain, nonatomic) RPRemoteDisplayDevice *daemonDevice;
@property (nonatomic, readonly) unsigned int internalAuthFlags;
@property (nonatomic) _Bool needsAWDL;
@property (retain, nonatomic) RPRemoteDisplayServer *server;
@property (copy, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSXPCConnection *xpcCnx;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) RPRemoteDisplayDevice *destinationDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (nonatomic, readonly) int passwordTypeActual;
@property (copy, nonatomic) CDUnknownBlockType authCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType showPasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPasswordHandler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)deregisterRequestID:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tryPassword:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deregisterEventID:(id)arg1;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)remoteDisplayAuthCompleted:(id)arg1;
- (void)remoteDisplaySessionError:(id)arg1;
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;

@end
