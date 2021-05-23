/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSNumber, NSString, WLKArtworkVariantListing, WLKPlayable;

@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata

{
    NSString *_showTitle;
    NSString *_canonicalShowID;
    NSString *_canonicalSeasonID;
    NSNumber *_seasonNumber;
    NSNumber *_episodeNumber;
    double _duration;
    NSDate *_releaseDate;
    WLKArtworkVariantListing *_showImages;
    WLKArtworkVariantListing *_seasonImages;
    WLKPlayable *_playable;
}

@property (copy, nonatomic, readonly) NSString *showTitle;
@property (copy, nonatomic, readonly) NSString *canonicalShowID;
@property (copy, nonatomic, readonly) NSString *canonicalSeasonID;
@property (nonatomic, readonly) NSNumber *seasonNumber;
@property (nonatomic, readonly) NSNumber *episodeNumber;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) WLKArtworkVariantListing *showImages;
@property (nonatomic, readonly) WLKArtworkVariantListing *seasonImages;
@property (nonatomic, readonly) WLKPlayable *playable;

+ (id)episodesWithDictionaries:(id)arg1 context:(id)arg2;

- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;

@end
