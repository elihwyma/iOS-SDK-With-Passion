/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject

{
    NSArray *_lookupItems;
    NSData *_trackData;
    NSArray *_parsedStoreItemsImportProperties;
    NSDateFormatter *_storePlatformDateFormatter;
}

@property (nonatomic, readonly) NSData *trackData;
@property (nonatomic, readonly) NSArray *parsedStoreItemsImportProperties;
@property (nonatomic, readonly) unsigned long long trackCount;

- (id)initWithLookupItems:(id)arg1;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;
- (id)_storeItemsImportPropertiesFromLookupItems:(id)arg1;
- (id)_storeItemsImportPropertiesFromTrackData:(id)arg1;
- (id)_allSongItemsFromLookupItems:(id)arg1;
- (id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2;
- (_Bool)_platformMetadataItemIsMusicKind:(id)arg1;
- (_Bool)_platformMetadataItemIsAUCKind:(id)arg1;
- (_Bool)_platformMetadataItemIsVideoKind:(id)arg1;
- (_Bool)_platformMetadataItemIsMusicVideoKind:(id)arg1;
- (_Bool)_platformMetadataItemIsAUCVideoKind:(id)arg1;
- (_Bool)_platformMetadataItemIsTVShowKind:(id)arg1;
- (_Bool)_platformMetadataItemIsMovieKind:(id)arg1;
- (id)_parentDictForItemAlbumId:(id)arg1;
- (long long)_episodeTypeFromVideoSubTypeString:(id)arg1;
- (id)_lookupItemArtworksForArtworkDictionaries:(id)arg1;
- (id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (id)_storePlatformDateFormatter;
- (double)_songDurationFromOffersArray:(id)arg1;
- (id)_artworkTokenForItemWithCollectionID:(long long)arg1 itemID:(long long)arg2;
- (id)_allSongItemsFromCollectionLookupItem:(id)arg1;
- (_Bool)_platformMetadataItemIsSongKind:(id)arg1;
- (_Bool)_platformMetadataItem:(id)arg1 matchesKind:(id)arg2;
- (_Bool)_platformMetadataItemIsAUCAudioKind:(id)arg1;
- (id)initWithTrackData:(id)arg1;
- (id)_artworkTokenFromLookupItem:(id)arg1;

@end
