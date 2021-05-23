/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaItemCollection.h>

@class MPMediaQuery, NSArray, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection

{
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}

@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long playlistAttributes;
@property (nonatomic, readonly) NSArray *seedItems;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSString *authorDisplayName;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isValidPlaylistProperty:(id)arg1;
+ (_Bool)canFilterByProperty:(id)arg1;
+ (void)_createFilterableDictionary;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)items;
- (id)valueForProperty:(id)arg1;
- (id)representativeItem;
- (unsigned long long)mediaTypes;
- (id)artworkCatalog;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1 mediaLibrary:(id)arg2;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)existsInLibrary;
- (void)removeFirstItem;
- (id)multiverseIdentifier;
- (id)representativeArtists;
- (id)seedTracksQuery;
- (_Bool)isCloudMix;
- (void)setUserSelectedArtworkImage:(id)arg1;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1;
- (id)tiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;

@end
