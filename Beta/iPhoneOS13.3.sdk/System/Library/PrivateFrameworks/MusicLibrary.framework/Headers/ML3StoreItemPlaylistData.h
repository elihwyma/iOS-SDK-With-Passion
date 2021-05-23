/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData;

@interface ML3StoreItemPlaylistData : NSObject

{
    NSArray *_lookupItems;
    NSData *_playlistData;
    NSArray *_parsedPlaylistsImportProperties;
}

@property (nonatomic, readonly) NSData *playlistsData;
@property (nonatomic, readonly) NSArray *parsedStorePlaylistsImportProperties;
@property (nonatomic, readonly) unsigned long long playlistCount;

- (id)initWithLookupItems:(id)arg1;
- (id)_playlistPropertiesForLookupItems:(id)arg1;
- (id)_playlistPropertiesFromPlaylistData:(id)arg1;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;
- (id)initWithPlaylistsData:(id)arg1;

@end
