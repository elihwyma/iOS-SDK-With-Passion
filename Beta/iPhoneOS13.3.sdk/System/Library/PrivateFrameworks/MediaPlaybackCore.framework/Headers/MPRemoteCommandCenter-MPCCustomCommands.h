/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPRemoteCommandCenter.h>

@class MPRemoteCommand;

@interface MPRemoteCommandCenter (MPCCustomCommands)

@property (nonatomic, readonly) MPRemoteCommand *startPictureInPictureCommand;
@property (nonatomic, readonly) MPRemoteCommand *disableQueueModificationsCommand;
@property (nonatomic, readonly) MPRemoteCommand *stagePlaybackSessionCommand;

@end
