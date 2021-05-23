/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder, NSMapTable;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder

{
    NSMapTable *_baseContentItemIDToOccurrenceCount;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;
    MPStoreModelTVShowBuilder *_tvShowBuilder;
    _Bool _shouldUsePlaylistEntry;
}

@property (nonatomic) _Bool shouldUsePlaylistEntry;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1;

@end
