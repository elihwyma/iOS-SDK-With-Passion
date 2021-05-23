/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <Foundation/NSObject.h>

@class NSLock, NSXPCConnection;

@interface WLDaemonConnection : NSObject

{
    NSLock *_daemonLock;
    NSXPCConnection *_daemonConn;
    CDUnknownBlockType _interruptionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;

- (id)init;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemonConnection;
- (void)invalidateDaemonConnection;

@end
