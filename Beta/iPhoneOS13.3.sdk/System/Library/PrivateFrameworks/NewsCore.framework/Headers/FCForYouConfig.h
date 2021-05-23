/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCGroupConfig, FCInterestToken, FCSpecialEventGroupConfig, FCSpotlightGroupConfig, FCTopStoriesGroupConfig, FCVideoGroupConfig, NSArray, NSDate, NSString, NTPBForYouConfigRecord;

@protocol FCForYouBridgedConfiguration;

@interface FCForYouConfig : NSObject <Swift>

{
    FCSpecialEventGroupConfig *_breakingNewsGroupConfig;
    FCSpecialEventGroupConfig *_specialEventGroupConfig;
    FCTopStoriesGroupConfig *_topStoriesGroupConfig;
    FCGroupConfig *_trendingGroupConfig;
    FCSpotlightGroupConfig *_spotlightGroupConfig;
    FCGroupConfig *_coverArticlesGroupConfig;
    NSArray *_editorialGroupConfigs;
    FCVideoGroupConfig *_topVideosGroupConfig;
    FCVideoGroupConfig *_moreVideosGroupConfig;
    NSArray *_demoGroupConfigs;
    id <FCForYouBridgedConfiguration> _bridgedConfiguration;
    NTPBForYouConfigRecord *_forYouConfigRecord;
    FCInterestToken *_interestToken;
}

@property (retain, nonatomic) NTPBForYouConfigRecord *forYouConfigRecord;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (retain, nonatomic) FCSpecialEventGroupConfig *breakingNewsGroupConfig;
@property (retain, nonatomic) FCSpecialEventGroupConfig *specialEventGroupConfig;
@property (retain, nonatomic) FCTopStoriesGroupConfig *topStoriesGroupConfig;
@property (retain, nonatomic) FCGroupConfig *trendingGroupConfig;
@property (retain, nonatomic) FCSpotlightGroupConfig *spotlightGroupConfig;
@property (retain, nonatomic) FCGroupConfig *coverArticlesGroupConfig;
@property (retain, nonatomic) NSArray *editorialGroupConfigs;
@property (retain, nonatomic) FCVideoGroupConfig *topVideosGroupConfig;
@property (retain, nonatomic) FCVideoGroupConfig *moreVideosGroupConfig;
@property (copy, nonatomic) id <FCForYouBridgedConfiguration> bridgedConfiguration;
@property (nonatomic, readonly) NSArray *demoGroupConfigs;
@property (nonatomic, readonly) NSArray *breakingNewsArticleIDs;
@property (nonatomic, readonly) NSArray *specialEventArticleIDs;
@property (nonatomic, readonly) NSArray *todayFeedTopStoriesArticleIDs;
@property (nonatomic, readonly) NSArray *topStoriesCombinedArticleIDs;
@property (nonatomic, readonly) NSString *trendingArticleListID;
@property (nonatomic, readonly) NSString *coverArticlesArticleListID;
@property (nonatomic, readonly) NSArray *editorialArticleListIDs;
@property (nonatomic, readonly) NSArray *editorialSectionTagIDs;
@property (nonatomic, readonly) NSDate *fetchedDate;
@property (nonatomic, readonly) NSArray *topVideosArticleIDs;
@property (nonatomic, readonly) NSString *moreVideosArticleListID;
@property (nonatomic, readonly) NSString *spotlightArticleID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2 bridgedConfiguration:(id)arg3;

@end
