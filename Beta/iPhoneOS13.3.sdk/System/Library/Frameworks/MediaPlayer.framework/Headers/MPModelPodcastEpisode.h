/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelPodcast, MPModelPodcastAuthor, NSDate, NSDateComponents, NSString, NSURL;

@interface MPModelPodcastEpisode : MPModelObject

{
    NSString *_commentText;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents;
@property (nonatomic) double duration;
@property (nonatomic) float userRating;
@property (nonatomic, getter=isExplicitEpisode) _Bool explicitEpisode;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *commentText;
@property (copy, nonatomic) NSDate *datePlayed;
@property (copy, nonatomic) NSURL *streamURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelPodcast *podcast;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, nonatomic) MPModelPodcastAuthor *author;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;
@property (nonatomic, readonly) _Bool hasVideo;
@property (nonatomic, readonly) long long episodeType;
@property (nonatomic, readonly) long long episodeNumber;
@property (nonatomic, readonly) long long seasonNumber;

+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)__title_KEY;
+ (id)__duration_KEY;
+ (id)__hasVideo_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__userRating_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__datePlayed_KEY;
+ (id)__descriptionText_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeType_KEY;
+ (id)__shareURL_KEY;
+ (id)__author_KEY;
+ (id)__podcast_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__explicitEpisode_KEY;
+ (id)__streamURL_KEY;
+ (id)__seasonNumber_KEY;

- (id)humanDescription;
- (id)artworkCatalog;

@end
