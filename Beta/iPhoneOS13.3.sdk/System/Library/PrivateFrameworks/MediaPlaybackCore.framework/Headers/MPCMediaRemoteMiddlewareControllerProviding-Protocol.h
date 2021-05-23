/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCFuture, MPCMediaRemoteController;

@protocol MPCMediaRemoteMiddlewareControllerProviding <Swift>

@property (nonatomic, readonly) MPCFuture *controllerFuture;
@property (nonatomic, readonly) MPCMediaRemoteController *controller;

@end
