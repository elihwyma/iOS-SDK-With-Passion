/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface WLKPlaybackReporter : NSObject

{
    NSXPCConnection *_xpcConnection;
    struct os_unfair_lock_s _xpcLock;
}

- (id)init;
- (id)_connection;
- (void)_invalidationHandler;
- (void)endPlaybackSession:(id)arg1;
- (void)reportPlayback:(id)arg1 sessionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportPlayback:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
