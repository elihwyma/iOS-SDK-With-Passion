/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntrySongPlaybackItemMetadata : MPModelSongPlaybackItemMetadata

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
- (id)song;
- (void)setSong:(id)arg1;

@end
