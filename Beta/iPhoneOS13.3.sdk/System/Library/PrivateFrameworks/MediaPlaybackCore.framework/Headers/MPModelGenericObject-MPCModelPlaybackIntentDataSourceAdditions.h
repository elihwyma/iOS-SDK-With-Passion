/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelGenericObject.h>

@interface MPModelGenericObject (MPCModelPlaybackIntentDataSourceAdditions)

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredItemPlaybackProperties;
+ (id)mqf_requiredSectionPlaybackProperties;

- (id)mpc_protoContainerRepresentation;
- (id)mpc_protoItemRepresentation;
- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mqf_playbackItemMetadataModelObject;
- (id)mpc_radioContentReference;

@end
