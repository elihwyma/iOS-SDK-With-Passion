/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVItem.h>

@class NSString;

@interface MPPlaceholderAVItem : MPAVItem

{
    _Bool _explicitTrack;
    _Bool _likeStateEnabled;
    _Bool _supportsLikedState;
    _Bool _tailPlaceholder;
    NSString *_album;
    NSString *_artist;
    double _durationFromExternalMetadata;
    NSString *_mainTitle;
    CDUnknownBlockType _artworkCatalogBlock;
}

@property (nonatomic, getter=isTailPlaceholder) _Bool tailPlaceholder;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) double durationFromExternalMetadata;
@property (nonatomic, getter=isExplicitTrack) _Bool explicitTrack;
@property (nonatomic, getter=isLikedStateEnabled) _Bool likedStateEnabled;
@property (retain, nonatomic) NSString *mainTitle;
@property (nonatomic) _Bool supportsLikedState;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;

+ (_Bool)isPlaceholder;

- (id)init;
- (id)description;
- (void)loadAssetAndPlayerItem;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;

@end
