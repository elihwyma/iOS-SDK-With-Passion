/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class AKAuthorizationDaemonConnection;

@interface AKAuthorizationAppSignInDiscovery : NSObject

{
    AKAuthorizationDaemonConnection *_daemonConnection;
}

- (id)init;
- (void)dealloc;
- (void)startDiscoveryWithCompletion:(CDUnknownBlockType)arg1;

@end
