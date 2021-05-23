/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelPlaylistEntry.h>

@interface MPModelPlaylistEntry (MPCModelPlaybackIntentDataSourceAdditions)

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredItemPlaybackProperties;

- (id)mpc_protoItemRepresentation;
- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_playbackItemMetadataModelObject;

@end
