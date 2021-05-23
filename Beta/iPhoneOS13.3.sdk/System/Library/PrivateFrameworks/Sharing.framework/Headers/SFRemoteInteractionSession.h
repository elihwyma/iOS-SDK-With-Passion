/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, SDRemoteInteractionAgent, SFDevice, SFSession;

@protocol OS_dispatch_queue;

@interface SFRemoteInteractionSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    SFSession *_remoteSession;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    SFDevice *_peerDevice;
    CDUnknownBlockType _remoteTextEventHandler;
    CDUnknownBlockType _textSessionDidBegin;
    CDUnknownBlockType _textSessionDidEnd;
    CDUnknownBlockType _textSessionDidChange;
    SDRemoteInteractionAgent *_agent;
}

@property (retain, nonatomic) SDRemoteInteractionAgent *agent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) CDUnknownBlockType remoteTextEventHandler;
@property (copy, nonatomic) CDUnknownBlockType textSessionDidBegin;
@property (copy, nonatomic) CDUnknownBlockType textSessionDidEnd;
@property (copy, nonatomic) CDUnknownBlockType textSessionDidChange;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)remoteInteractionSessionRemoteTextEvent:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)arg1;
- (void)remoteInteractionSessionTextSessionDidChange:(id)arg1;
- (void)_sessionHandleEvent:(id)arg1;
- (void)_sessionStart;
- (void)_sessionSendPayload:(struct NSDictionary *)arg1;
- (void)sendPayload:(struct NSDictionary *)arg1;

@end
