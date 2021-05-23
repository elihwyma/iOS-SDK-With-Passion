/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATStateMachine, CATTransport, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSUUID;

@protocol CATTaskClientDelegate, OS_dispatch_group;

@interface CATTaskClient : NSObject

{
    CATStateMachine *mFSM;
    CATTransport *mTransport;
    NSMutableSet *mActiveRemoteTaskOperations;
    NSMapTable *mRemoteTaskByUUID;
    NSMutableArray *mEnqueuedMessages;
    NSMutableArray *mEnqueuedTaskUUIDs;
    NSHashTable *mOrphanedTransports;
    CATTaskClient *mStrongSelf;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    _Bool mIsStarting;
    NSUUID *_sessionUUID;
    id <CATTaskClientDelegate> _delegate;
    NSDictionary *_userInfo;
    NSDictionary *_serverUserInfo;
}

@property (retain, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *serverUserInfo;
@property (nonatomic, readonly) CATTransport *transport;
@property (weak, nonatomic) id <CATTaskClientDelegate> delegate;
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
- (id)prepareTaskOperationForRequest:(id)arg1;
- (void)connectWithTransport:(id)arg1;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)remoteTaskOperation:(id)arg1 preparedMessage:(id)arg2;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidConnect;
- (void)sessionDidInvalidate;
- (void)abandonTransport;
- (void)didPrepareTaskOperation:(id)arg1;
- (void)enqueueTaskOperation:(id)arg1;
- (void)enqueueMessage:(id)arg1;
- (void)resumeTransport:(id)arg1;
- (void)connectWithTransportFromTaskClient:(id)arg1;
- (void)resumeCapturedTransportFromTaskClient:(id)arg1;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)transportDidResume:(id)arg1;
- (void)transportDidInvalidate:(id)arg1;
- (void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;
- (void)resumeSession;
- (void)sessionResumedWithTaskUUIDs:(id)arg1;
- (void)resumeWithTaskUUIDs:(id)arg1;
- (void)trackTaskOperation:(id)arg1;
- (void)sendMessageThroughTransport:(id)arg1;
- (void)processTaskMessage:(id)arg1;
- (void)processNotificationMessage:(id)arg1;
- (void)delegateDidDisconnect;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;
- (void)taskOperationDidFailWithInvalidTaskClient:(id)arg1;
- (void)delegateDidInvalidateAndFinalize;
- (id)captureTransport;
- (void)delegateWillInvalidate;
- (void)delegateDidInvalidate;
- (void)activeOperationDidFinish:(id)arg1;
- (void)processSessionMessage:(id)arg1;
- (void)delegatedidReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)transport:(id)arg1 didSendMessage:(id)arg2;
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;

@end
