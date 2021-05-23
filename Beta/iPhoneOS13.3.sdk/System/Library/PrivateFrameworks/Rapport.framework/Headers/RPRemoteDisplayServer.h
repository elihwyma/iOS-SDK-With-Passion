/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface RPRemoteDisplayServer : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_sessions;
    NSXPCConnection *_xpcCnx;
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
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _sessionStartHandler;
    CDUnknownBlockType _sessionEndedHandler;
}

@property (nonatomic, readonly) unsigned int internalAuthFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionStartHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionEndedHandler;
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
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)tryPassword:(id)arg1;
- (void)remoteDisplayShowPassword:(id)arg1 flags:(unsigned int)arg2;
- (void)remoteDisplayHidePasswordWithFlags:(unsigned int)arg1;
- (void)remoteDisplayStartServerSessionID:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteDisplaySessionEndedWithID:(id)arg1;
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 sessionID:(id)arg5;

@end
