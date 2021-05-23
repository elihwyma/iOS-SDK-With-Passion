/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObjectPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelSong;

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata

{
    MPModelGenericObject *_modelGenericObject;
    MPModelSong *_song;
}

@property (retain, nonatomic) MPModelSong *song;

+ (id)requiredProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)contentType;
- (id)mediaItem;
- (id)artistName;
- (_Bool)isExplicitTrack;
- (id)copyrightText;
- (long long)storeSubscriptionAdamID;
- (id)modelGenericObject;
- (id)composerName;
- (_Bool)showComposer;
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
- (float)volumeNormalization;
- (id)homeSharingAsset;

@end
