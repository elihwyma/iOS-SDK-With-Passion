/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBHeadlineAdElement : PBCodable

{
    long long _channelContentProviderID;
    NSMutableArray *_articleIAdCategories;
    NSMutableArray *_articleIAdKeywords;
    NSMutableArray *_articleIAdSectionIDs;
    NSString *_articleID;
    NSString *_articleRating;
    NSMutableArray *_channelIAdCategories;
    NSMutableArray *_channelIAdKeywords;
    NSString *_channelID;
    NSString *_channelRating;
    _Bool _draftArticle;
    _Bool _paidArticle;
    _Bool _sponsoredArticle;
    struct {
        unsigned int channelContentProviderID:1;
        unsigned int draftArticle:1;
        unsigned int paidArticle:1;
        unsigned int sponsoredArticle:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic, readonly) _Bool hasArticleRating;
@property (retain, nonatomic) NSString *articleRating;
@property (retain, nonatomic) NSMutableArray *articleIAdCategories;
@property (nonatomic) _Bool hasPaidArticle;
@property (nonatomic) _Bool paidArticle;
@property (nonatomic) _Bool hasSponsoredArticle;
@property (nonatomic) _Bool sponsoredArticle;
@property (nonatomic) _Bool hasDraftArticle;
@property (nonatomic) _Bool draftArticle;
@property (retain, nonatomic) NSMutableArray *articleIAdSectionIDs;
@property (retain, nonatomic) NSMutableArray *channelIAdKeywords;
@property (nonatomic, readonly) _Bool hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic, readonly) _Bool hasChannelRating;
@property (retain, nonatomic) NSString *channelRating;
@property (retain, nonatomic) NSMutableArray *channelIAdCategories;
@property (nonatomic) _Bool hasChannelContentProviderID;
@property (nonatomic) long long channelContentProviderID;
@property (retain, nonatomic) NSMutableArray *articleIAdKeywords;

+ (Class)articleIAdCategoriesType;
+ (Class)articleIAdSectionIDsType;
+ (Class)channelIAdKeywordsType;
+ (Class)channelIAdCategoriesType;
+ (Class)articleIAdKeywordsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addArticleIAdCategories:(id)arg1;
- (void)addArticleIAdSectionIDs:(id)arg1;
- (void)addChannelIAdKeywords:(id)arg1;
- (void)addChannelIAdCategories:(id)arg1;
- (void)addArticleIAdKeywords:(id)arg1;
- (void)clearArticleIAdCategories;
- (unsigned long long)articleIAdCategoriesCount;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)arg1;
- (void)clearArticleIAdSectionIDs;
- (unsigned long long)articleIAdSectionIDsCount;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)arg1;
- (void)clearChannelIAdKeywords;
- (unsigned long long)channelIAdKeywordsCount;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)arg1;
- (void)clearChannelIAdCategories;
- (unsigned long long)channelIAdCategoriesCount;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)arg1;
- (void)clearArticleIAdKeywords;
- (unsigned long long)articleIAdKeywordsCount;
- (id)articleIAdKeywordsAtIndex:(unsigned long long)arg1;

@end
