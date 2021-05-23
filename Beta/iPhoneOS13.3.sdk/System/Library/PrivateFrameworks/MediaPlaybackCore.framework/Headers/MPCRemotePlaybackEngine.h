/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCPlaybackEngine.h>

@class MPCPlayerPath, NSXPCConnection;

@interface MPCRemotePlaybackEngine : MPCPlaybackEngine

{
    MPCPlayerPath *_playerPath;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;

+ (_Bool)requiresMainThread;

- (void)dealloc;
- (void)start;
- (id)playerPath;
- (void)setWantsReverseProcessAssertion:(_Bool)arg1;
- (void)becomeActive;
- (void)_updatePlayerPath;
- (void)_initializePlaybackStack;

@end
