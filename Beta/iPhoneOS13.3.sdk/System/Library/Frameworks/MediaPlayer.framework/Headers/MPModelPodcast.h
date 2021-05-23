/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class MPModelPodcastAuthor, NSString, NSURL;

@interface MPModelPodcast : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *feedURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (nonatomic) _Bool supportsSubscription;
@property (retain, nonatomic) MPModelPodcastAuthor *author;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;

+ (id)__title_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (id)__feedURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__author_KEY;

- (id)humanDescription;
- (id)artworkCatalog;

@end
