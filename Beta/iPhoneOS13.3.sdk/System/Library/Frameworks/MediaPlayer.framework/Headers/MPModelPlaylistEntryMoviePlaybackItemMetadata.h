/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelMoviePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata

{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;

+ (id)requiredProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)movie;
- (void)setMovie:(id)arg1;
- (id)modelGenericObject;
- (void)_invalidateModelObjectPlaybackItemMetadata;

@end
