/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATOperationQueue, CATStateMachine, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@protocol CATTaskServerDelegate, OS_dispatch_group;

@interface CATTaskServer : NSObject

{
    CATStateMachine *mFSM;
    NSMutableSet *mSessions;
    NSMutableDictionary *mActiveSessionsByUUID;
    NSMutableDictionary *mInvalidatingSessionsByUUID;
    NSMutableDictionary *mConnectedSessionsByUUID;
    CATTaskServer *mStrongSelf;
    NSObject<OS_dispatch_group> *mAllSessionsDidInvalidateGroup;
    CATOperationQueue *mOrphanedOperationQueue;
    id <CATTaskServerDelegate> _delegate;
    NSDictionary *_userInfo;
}

@property (weak, nonatomic) id <CATTaskServerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic, readonly) NSArray *clientSessions;
@property (copy, nonatomic, readonly) NSArray *connectedClientSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)connectWithClientTransport:(id)arg1;
- (void)disconnectAllClientSessions;
- (void)delegateDidInvalidateAndFinalize;
- (void)delegateDidInvalidate;
- (void)makeSessionWithClientTransport:(id)arg1;
- (void)startInvalidatingWithError:(id)arg1;
- (void)allSessionsDidInvalidate;
- (_Bool)delegateClientSession:(id)arg1 shouldConnectWithTransport:(id)arg2;
- (void)delegateClientSessionDidConnect:(id)arg1;
- (void)delegateClientSessionDidDisconnect:(id)arg1;
- (void)delegateClientSession:(id)arg1 didInterruptWithError:(id)arg2;
- (void)delegateSessionDidInvalidate:(id)arg1;
- (void)delegateClientSession:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id *)arg3;
- (_Bool)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;
- (void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)session:(id)arg1 didInterruptWithError:(id)arg2;
- (void)sessionWillInvalidate:(id)arg1;
- (void)sessionDidInvalidate:(id)arg1;
- (void)session:(id)arg1 enqueueOperation:(id)arg2;
- (void)invalidateAllClientSessions;

@end
