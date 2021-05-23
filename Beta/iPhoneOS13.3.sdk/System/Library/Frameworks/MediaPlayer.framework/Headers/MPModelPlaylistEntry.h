/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPArtworkCatalog, MPModelMovie, MPModelPlaylist, MPModelSocialPerson, MPModelSong, MPModelTVEpisode;

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;

+ (id)__playlist_KEY;
+ (id)__movie_KEY;
+ (id)__song_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (_Bool)supportsLibraryRemoval;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (_Bool)supportsKeepLocalStatusObservation;
+ (id)__tvEpisode_KEY;
+ (id)kindWithKinds:(id)arg1;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)___artworkCatalog_KEY;

- (long long)type;
- (id)anyObject;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;

@end
