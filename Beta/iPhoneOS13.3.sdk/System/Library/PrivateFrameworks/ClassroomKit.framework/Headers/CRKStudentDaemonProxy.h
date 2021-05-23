/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATOperationQueue, CATTaskClient, NSHashTable, NSString;

@interface CRKStudentDaemonProxy : NSObject

{
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    NSHashTable *mObservers;
    long long mConnectionAttempt;
    _Bool mConnecting;
    _Bool _connected;
    _Bool _userExpectsReconnect;
    long long _maxConnectionAttempts;
}

@property (nonatomic, getter=isConnected) _Bool connected;
@property (nonatomic) _Bool userExpectsReconnect;
@property (nonatomic) long long maxConnectionAttempts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setActiveStudentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)studentDidAuthenticate:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchResourceFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)studentDaemonConnection;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)disconnect;
- (void)connect;
- (void)enqueueOperation:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (id)operationForRequest:(id)arg1;
- (id)enqueuedOperationForRequest:(id)arg1;

@end
