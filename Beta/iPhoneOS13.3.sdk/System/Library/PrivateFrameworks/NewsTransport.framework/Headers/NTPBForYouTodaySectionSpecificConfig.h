/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBForYouTodaySectionSpecificConfig : PBCodable

{
    unsigned long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    unsigned long long _subscriptionsFetchCount;
    int _fetchingBin;
    struct {
        unsigned int cutoffTime:1;
        unsigned int headlinesPerFeedFetchCount:1;
        unsigned int subscriptionsFetchCount:1;
        unsigned int fetchingBin:1;
    } _has;
}

@property (nonatomic) _Bool hasCutoffTime;
@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) _Bool hasSubscriptionsFetchCount;
@property (nonatomic) unsigned long long subscriptionsFetchCount;
@property (nonatomic) _Bool hasHeadlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) _Bool hasFetchingBin;
@property (nonatomic) int fetchingBin;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
