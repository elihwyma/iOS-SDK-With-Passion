/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection;

@protocol SBSRemoteAlertHandleServiceServerInterface;

@interface _SBRemoteAlertHandleServerTarget : NSObject

{
    BSServiceConnection *_connection;
    id <SBSRemoteAlertHandleServiceServerInterface> _proxyInterface;
}

@property (weak, nonatomic, readonly) BSServiceConnection *connection;
@property (weak, nonatomic) id <SBSRemoteAlertHandleServiceServerInterface> proxyInterface;

+ (id)currentTarget;

- (void)_performBlock:(CDUnknownBlockType)arg1;
- (id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3;
- (id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2;
- (oneway void)invalidateRemoteAlertHandleWithID:(id)arg1;
- (id)initWithConnection:(id)arg1 proxyInterface:(id)arg2;

@end
