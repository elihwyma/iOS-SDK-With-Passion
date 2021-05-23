/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, SDAutoFillAgent;

@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillSessionHelper : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _dismissUserNotificationHandler;
    CDUnknownBlockType _pairingResponseHandler;
    CDUnknownBlockType _promptForPINHandler;
    SDAutoFillAgent *_agent;
}

@property (retain, nonatomic) SDAutoFillAgent *agent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType dismissUserNotificationHandler;
@property (copy, nonatomic) CDUnknownBlockType pairingResponseHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)autoFillDismissUserNotification;
- (void)autoFillPairingSucceeded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)autoFillPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)serverDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)serverTryPIN:(id)arg1;
- (void)serverUserNotificationDidActivate:(id)arg1;
- (void)serverUserNotificationDidDismiss:(id)arg1;
- (void)clientDismissUserNotification;
- (void)clientPairingSucceeded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;

@end
