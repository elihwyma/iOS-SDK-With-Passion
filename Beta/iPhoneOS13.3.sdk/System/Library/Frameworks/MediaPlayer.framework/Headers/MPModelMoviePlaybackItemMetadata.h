/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelMovie;

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata

{
    MPModelGenericObject *_modelGenericObject;
    MPModelMovie *_movie;
}

@property (retain, nonatomic) MPModelMovie *movie;

+ (id)requiredProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)contentType;
- (id)mediaItem;
- (_Bool)isExplicitTrack;
- (long long)storeSubscriptionAdamID;
- (id)modelGenericObject;
- (_Bool)allowsInitiatingPlayWhileDownload;
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
