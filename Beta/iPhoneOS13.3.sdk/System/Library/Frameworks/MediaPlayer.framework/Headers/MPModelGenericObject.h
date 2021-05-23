/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelArtist, MPModelMediaClip, MPModelMovie, MPModelPlaylist, MPModelPlaylistEntry, MPModelPodcast, MPModelPodcastEpisode, MPModelRadioStation, MPModelSong, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow;

@interface MPModelGenericObject : MPModelObject

@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelMediaClip *mediaClip;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelPodcast *podcast;
@property (retain, nonatomic) MPModelPodcastEpisode *podcastEpisode;
@property (retain, nonatomic) MPModelRadioStation *radioStation;

+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;
+ (id)__season_KEY;
+ (id)__show_KEY;
+ (id)__mediaClip_KEY;
+ (id)__movie_KEY;
+ (id)__song_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)genericObjectWithModelObject:(id)arg1;
+ (id)kindWithRelationshipKinds:(id)arg1;
+ (id)__playlistEntry_KEY;
+ (id)__tvEpisode_KEY;
+ (id)__podcast_KEY;
+ (id)__podcastEpisode_KEY;

- (long long)type;
- (id)anyObject;
- (id)identifiers;
- (id)humanDescription;
- (id)artworkCatalog;
- (id)mediaItemPropertyValues;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)copyWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)flattenedGenericObject;

@end
