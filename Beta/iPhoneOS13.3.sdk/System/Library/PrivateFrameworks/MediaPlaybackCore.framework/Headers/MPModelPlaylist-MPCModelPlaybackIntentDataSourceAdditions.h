/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelPlaylist.h>

@interface MPModelPlaylist (MPCModelPlaybackIntentDataSourceAdditions)

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredSectionPlaybackProperties;

- (id)mpc_protoContainerRepresentation;

@end
