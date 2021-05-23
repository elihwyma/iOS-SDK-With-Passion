/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATOperationQueue, CATStateMachine, CATTransport, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;

@protocol CATTaskSessionDelegate, OS_dispatch_group;

@interface CATTaskSession : NSObject

{
    CATStateMachine *mFSM;
    CATTransport *mTransport;
    NSMutableSet *mOperations;
    NSMutableDictionary *mOperationByRemoteUUID;
    NSMutableArray *mEnqueuedMessages;
    CATTaskSession *mStrongSelf;
    NSHashTable *mOrphanedTransports;
    CATOperationQueue *mOrphanedOperationQueue;
    NSDictionary *mPreviousSessionInfo;
    NSMapTable *mRemoteUUIDsByFinishedOperationProgressUpdates;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    _Bool mIsStarting;
    CATOperationQueue *mDelegationQueue;
    NSUUID *_sessionUUID;
    id <CATTaskSessionDelegate> _delegate;
    NSDictionary *_userInfo;
    NSDictionary *_clientUserInfo;
}

@property (copy, nonatomic) NSDictionary *clientUserInfo;
@property (retain, nonatomic) NSUUID *sessionUUID;
@property (nonatomic, readonly) CATTransport *transport;
@property (weak, nonatomic) id <CATTaskSessionDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)disconnect;
- (void)sendMessage:(id)arg1;
- (void)invalidateWithError:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)connectWithTransport:(id)arg1;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidConnect;
- (void)sessionDidInvalidate;
- (void)abandonTransport;
- (void)enqueueMessage:(id)arg1;
- (void)resumeTransport:(id)arg1;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)transportDidInvalidate:(id)arg1;
- (void)sendMessageThroughTransport:(id)arg1;
- (void)processTaskMessage:(id)arg1;
- (void)processNotificationMessage:(id)arg1;
- (void)delegateDidDisconnect;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;
- (void)delegateDidInvalidateAndFinalize;
- (id)captureTransport;
- (void)delegateWillInvalidate;
- (void)delegateDidInvalidate;
- (void)processSessionMessage:(id)arg1;
- (void)transport:(id)arg1 didSendMessage:(id)arg2;
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)connectWithTransportFromTaskSession:(id)arg1;
- (void)resumeCapturedTransportFromTaskSession:(id)arg1;
- (void)clientDidResumeWithMessage:(id)arg1;
- (void)evaluateConnectionWithResumeMessage:(id)arg1;
- (void)acceptConnection;
- (void)sendResumedMessage;
- (void)rejectConnection;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)didCompleteSendForMessage:(id)arg1;
- (void)localOperationDidFinish:(id)arg1;
- (void)delegateEnqueueOperation:(id)arg1;
- (void)savePreviousSessionInfo;
- (_Bool)delegateShouldAcceptConnection;
- (void)discardPreviousSessionInfo;
- (void)restorePreviousSessionInfo;
- (void)processStartMessage:(id)arg1;
- (void)processCancelMessage:(id)arg1;
- (void)processFetchProgressMessage:(id)arg1;
- (id)delegatePrepareOperationWithRequest:(id)arg1 error:(id *)arg2;
- (void)operationDidIncrementProgress:(id)arg1 remoteUUID:(id)arg2;
- (void)operationDidFinish:(id)arg1 remoteUUID:(id)arg2;
- (void)delegatedidReceiveNotificationWithName:(id)arg1;

@end
