/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelTVEpisode;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata

{
    MPModelGenericObject *_modelGenericObject;
    MPModelTVEpisode *_episode;
}

@property (retain, nonatomic) MPModelTVEpisode *episode;

+ (id)requiredProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)contentType;
- (id)mediaItem;
- (id)artistName;
- (_Bool)isExplicitTrack;
- (long long)storeSubscriptionAdamID;
- (id)modelGenericObject;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (_Bool)allowsInitiatingPlayWhileDownload;
- (long long)artistStoreAdamID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)contentTitle;
- (double)expectedDuration;
- (long long)storeAdamID;
- (unsigned long long)storeSagaID;
- (id)localFileAsset;
- (id)playbackPosition;
- (id)storeAsset;
- (void)_invalidateModelObjectPlaybackItemMetadata;

@end
