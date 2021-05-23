/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATOperationQueue, CATStateMachine, NSString;

@protocol CATTransportDelegate;

@interface CATTransport : NSObject

{
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
    NSString *_name;
    id <CATTransportDelegate> _delegate;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id <CATTransportDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)sendMessage:(id)arg1;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)resumeQueue;
- (void)invalidateConnection;
- (void)didInvalidate;
- (void)didInterruptWithError:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (id)operationToSendMessage:(id)arg1;
- (void)delegateDidInvalidate;
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;
- (void)sendHelloMessageAndResumeQueue;
- (void)enqueueSendForMessage:(id)arg1;
- (void)resumeQueueAndConnection;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)suspendQueueAndConnection;
- (void)enqueueDelegateDidConnect;
- (void)enqueueDelegateCouldNotConnectWithError:(id)arg1;
- (void)enqueueDelegateDidReceiveMessage:(id)arg1;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)invalidSendForMessage:(id)arg1;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (void)delegateDidResume;
- (void)suspendQueue;

@end
