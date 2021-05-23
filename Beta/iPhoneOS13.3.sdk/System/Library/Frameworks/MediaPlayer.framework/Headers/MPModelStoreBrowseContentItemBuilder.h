/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelCuratorBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelRadioStationBuilder, MPStoreModelSocialPersonBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder, MPStoreModelTVShowCreatorBuilder;

@interface MPModelStoreBrowseContentItemBuilder : MPStoreModelObjectBuilder

{
    struct {
        unsigned int initialized:1;
        unsigned int itemType:1;
        unsigned int detailedItemType:1;
        unsigned int artist:1;
        unsigned int album:1;
        unsigned int curator:1;
        unsigned int episode:1;
        unsigned int movie:1;
        unsigned int playlist:1;
        unsigned int radioStation:1;
        unsigned int socialPerson:1;
        unsigned int song:1;
        unsigned int season:1;
        unsigned int show:1;
        unsigned int showCreator:1;
        unsigned int aucType:1;
    } _requestedBrowseContentItemProperties;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelCuratorBuilder *_curatorBuilder;
    MPStoreModelTVEpisodeBuilder *_episodeBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelRadioStationBuilder *_radioStationBuilder;
    MPStoreModelSocialPersonBuilder *_socialPersonBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelTVSeasonBuilder *_seasonBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVShowBuilder *_showBuilder;
    MPStoreModelTVShowCreatorBuilder *_showCreatorBuilder;
    _Bool _shouldFakeEpisodes;
    _Bool _allowsRadioStations;
    _Bool _allowsVideoContent;
}

@property (nonatomic) _Bool allowsRadioStations;
@property (nonatomic) _Bool allowsVideoContent;

+ (id)allSupportedProperties;

- (id)initWithRequestedPropertySet:(id)arg1;
- (long long)contentItemTypeForRawResponseKindIdentifierValue:(long long)arg1;
- (long long)contentItemTypeForRawResponseKindIdentifiers:(id)arg1;
- (long long)contentItemTypeForStoreItemMetadata:(id)arg1;
- (long long)contentItemTypeForMusicAPIType:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
