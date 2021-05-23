/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelTVEpisodePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata

{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;

+ (id)requiredProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)modelGenericObject;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (void)setEpisode:(id)arg1;
- (id)episode;

@end
