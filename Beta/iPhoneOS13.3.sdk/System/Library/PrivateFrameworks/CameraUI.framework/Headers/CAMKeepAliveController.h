/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface CAMKeepAliveController : NSObject

{
    NSObject<OS_xpc_object> *__connection;
    NSObject<OS_dispatch_queue> *__keepAliveQueue;
    NSObject<OS_dispatch_source> *__heartbeatSource;
    NSObject<OS_dispatch_queue> *__heartbeatQueue;
}

@property (retain, nonatomic, setter=_setConnection:) NSObject<OS_xpc_object> *_connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_keepAliveQueue;
@property (retain, nonatomic, setter=_setHeartbeatSource:) NSObject<OS_dispatch_source> *_heartbeatSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_heartbeatQueue;

- (id)init;
- (void)dealloc;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)startKeepAliveSession;
- (void)sendCameraRollVisibilityChangedMessage:(_Bool)arg1;
- (void)stopKeepAliveSession;
- (void)_setupConnectionIfNecessary;
- (void)_teardownConnection;
- (void)_keepAliveQueueCreateConnectionIfNecessary;
- (void)_keepAliveQueueCreateHeartbeatIfNecessary;
- (void)_keepAliveQueueTeardownConnection;
- (void)_teardownHeartbeat;
- (void)_handleHeartbeatConnectionReply:(id)arg1;
- (void)_handleHeartbeatSourceEvent;
- (void)_keepAliveQueueTeardownHeartbeat;

@end
