/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBFeedEngagementMenuExposure : PBCodable

{
    NSString *_articleId;
    NSString *_feedId;
    int _feedMenuType;
    int _feedType;
    NSString *_referencedArticleId;
    struct {
        unsigned int feedMenuType:1;
        unsigned int feedType:1;
    } _has;
}

@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) _Bool hasFeedMenuType;
@property (nonatomic) int feedMenuType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;

@end
