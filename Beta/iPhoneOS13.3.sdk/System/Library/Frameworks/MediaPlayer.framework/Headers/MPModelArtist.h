/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelPerson.h>

@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson

@property (nonatomic) _Bool hasBiography;
@property (nonatomic) long long songCount;
@property (nonatomic) long long albumCount;
@property (copy, nonatomic) MPModelGenre *genre;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (id)__genre_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)kindWithAlbumKind:(id)arg1;
+ (id)__hasBiography_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__songCount_KEY;
+ (id)__albumCount_KEY;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
