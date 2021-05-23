/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSDate, NSString;

@interface MPModelGenre : MPModelObject

@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)kindWithAlbumKind:(id)arg1;
+ (id)__name_KEY;

- (id)humanDescription;
- (id)artworkCatalog;

@end
