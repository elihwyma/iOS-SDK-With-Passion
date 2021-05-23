/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBRecordBase;

@interface NTPBForYouConfigRecord : PBCodable

{
    NTPBRecordBase *_base;
    NSMutableArray *_breakingNewsArticleIDs;
    NSString *_configuration;
    NSString *_coverArticlesArticleListID;
    NSMutableArray *_editorialArticleListIDs;
    NSMutableArray *_editorialSectionTagIDs;
    NSString *_moreVideosArticleListID;
    NSMutableArray *_specialEventArticleIDs;
    NSString *_spotlightArticleID;
    NSString *_todayFeedConfiguration;
    NSMutableArray *_todayFeedTopStoriesArticleIDs;
    NSMutableArray *_topStoriesCombinedArticleIDs;
    NSMutableArray *_topVideosArticleIDs;
    NSString *_trendingArticleListID;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic, readonly) _Bool hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (nonatomic, readonly) _Bool hasTrendingArticleListID;
@property (retain, nonatomic) NSString *trendingArticleListID;
@property (nonatomic, readonly) _Bool hasCoverArticlesArticleListID;
@property (retain, nonatomic) NSString *coverArticlesArticleListID;
@property (retain, nonatomic) NSMutableArray *editorialArticleListIDs;
@property (retain, nonatomic) NSMutableArray *editorialSectionTagIDs;
@property (retain, nonatomic) NSMutableArray *breakingNewsArticleIDs;
@property (retain, nonatomic) NSMutableArray *topStoriesCombinedArticleIDs;
@property (retain, nonatomic) NSMutableArray *specialEventArticleIDs;
@property (retain, nonatomic) NSMutableArray *topVideosArticleIDs;
@property (nonatomic, readonly) _Bool hasMoreVideosArticleListID;
@property (retain, nonatomic) NSString *moreVideosArticleListID;
@property (nonatomic, readonly) _Bool hasSpotlightArticleID;
@property (retain, nonatomic) NSString *spotlightArticleID;
@property (retain, nonatomic) NSMutableArray *todayFeedTopStoriesArticleIDs;
@property (nonatomic, readonly) _Bool hasTodayFeedConfiguration;
@property (retain, nonatomic) NSString *todayFeedConfiguration;

+ (Class)editorialArticleListIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)breakingNewsArticleIDsType;
+ (Class)topStoriesCombinedArticleIDsType;
+ (Class)specialEventArticleIDsType;
+ (Class)topVideosArticleIDsType;
+ (Class)todayFeedTopStoriesArticleIDsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addEditorialArticleListIDs:(id)arg1;
- (void)addEditorialSectionTagIDs:(id)arg1;
- (void)addBreakingNewsArticleIDs:(id)arg1;
- (void)addTopStoriesCombinedArticleIDs:(id)arg1;
- (void)addSpecialEventArticleIDs:(id)arg1;
- (void)addTopVideosArticleIDs:(id)arg1;
- (void)addTodayFeedTopStoriesArticleIDs:(id)arg1;
- (void)clearEditorialArticleListIDs;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)arg1;
- (void)clearEditorialSectionTagIDs;
- (unsigned long long)editorialSectionTagIDsCount;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1;
- (void)clearBreakingNewsArticleIDs;
- (unsigned long long)breakingNewsArticleIDsCount;
- (id)breakingNewsArticleIDsAtIndex:(unsigned long long)arg1;
- (void)clearTopStoriesCombinedArticleIDs;
- (unsigned long long)topStoriesCombinedArticleIDsCount;
- (id)topStoriesCombinedArticleIDsAtIndex:(unsigned long long)arg1;
- (void)clearSpecialEventArticleIDs;
- (unsigned long long)specialEventArticleIDsCount;
- (id)specialEventArticleIDsAtIndex:(unsigned long long)arg1;
- (void)clearTopVideosArticleIDs;
- (unsigned long long)topVideosArticleIDsCount;
- (id)topVideosArticleIDsAtIndex:(unsigned long long)arg1;
- (void)clearTodayFeedTopStoriesArticleIDs;
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)arg1;

@end
