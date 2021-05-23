/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCFeedContext : NSObject <Swift>

{
    _Bool _isHiddenFeed;
    _Bool _isPaidBundleFeed;
    _Bool _isTopStories;
    _Bool _isEditorial;
    _Bool _isEditorialGems;
    _Bool _isCoverArticles;
    NSString *_sectionID;
    NSString *_channelID;
    NSString *_topicID;
}

@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) _Bool isHiddenFeed;
@property (nonatomic) _Bool isPaidBundleFeed;
@property (nonatomic) _Bool isTopStories;
@property (nonatomic) _Bool isEditorial;
@property (nonatomic) _Bool isEditorialGems;
@property (nonatomic) _Bool isCoverArticles;

+ (id)feedContextForTopStoriesChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForEditorialChannel:(id)arg1 editorialGemsSectionID:(id)arg2;
+ (id)feedContextForEditorialChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForTag:(id)arg1;
+ (id)feedContextForHiddenFeed;
+ (id)feedContextForPaidBundleFeed;
+ (id)feedContextForTopStoriesTag:(id)arg1;
+ (id)feedContextForEditorialTag:(id)arg1;
+ (id)feedContextForBreakingNewsChannelID:(id)arg1;
+ (id)feedContextForCoverArticlesFeed;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
