/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface SBSRemoteAlertHandleXPCClient : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    BSServiceConnection *_connection;
    _Bool _connectionActivated;
    _Bool _connectionInvalidated;
    NSMutableDictionary *_handleIDToHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_connection;
- (oneway void)remoteAlertHandleWithIDDidActivate:(id)arg1;
- (oneway void)remoteAlertHandleWithIDDidDeactivate:(id)arg1;
- (oneway void)remoteAlertHandleWithID:(id)arg1 didInvalidateWithError:(id)arg2;
- (id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(_Bool)arg2 configurationContext:(id)arg3;
- (id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
- (void)invalidateRemoteAlertHandle:(id)arg1;
- (void)_invalidateHandleForHandleID:(id)arg1 withError:(id)arg2;
- (void)_handleError:(id)arg1;

@end
