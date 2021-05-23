/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject

{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (id)remoteObjectInterface;
- (id)connection;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)invalidateConnection;

@end
