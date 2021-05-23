/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXProviderConfiguration, NSArray, NSMutableArray, NSString;

@protocol CXProviderDelegate, CXProviderDelegatePrivate, CXProviderHostProtocol, OS_dispatch_queue;

@interface CXProvider : NSObject

{
    CXProviderConfiguration *_configuration;
    id <CXProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableArray *_mutablePendingTransactions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id <CXProviderDelegate> delegate;
@property (nonatomic, readonly) id <CXProviderDelegatePrivate> privateDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSMutableArray *mutablePendingTransactions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <CXProviderHostProtocol> hostProtocolDelegate;
@property (nonatomic, readonly) _Bool requiresProxyingAVAudioSessionState;
@property (copy, nonatomic) CXProviderConfiguration *configuration;
@property (copy, nonatomic, readonly) NSArray *pendingTransactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (void)invalidate;
- (id)initWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)performCompletionBlock:(CDUnknownBlockType)arg1;
- (void)actionCompleted:(id)arg1;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (id)_pendingActionWithUUID:(id)arg1;
- (void)_updatePendingTransactions;
- (void)_performAction:(id)arg1;
- (void)sendProviderDidBegin;
- (void)handleConnectionInterruption;
- (void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerCurrentConfiguration;
- (void)handleMediaServicesWereResetNotification:(id)arg1;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3;
- (id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3;
- (void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3;

@end
