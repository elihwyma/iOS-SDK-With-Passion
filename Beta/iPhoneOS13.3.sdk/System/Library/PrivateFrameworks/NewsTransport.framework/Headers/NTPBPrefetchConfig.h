/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBPrefetchConfig : PBCodable

{
    double _backgroundFetchMinimumInterval;
    long long _feedPrefetchFavoritesLimit;
    long long _prefetchedForYouExpiration;
    _Bool _backgroundFetchEnabled;
    _Bool _backgroundFetchEnabled2;
    _Bool _feedPrefetchForYou;
    struct {
        unsigned int backgroundFetchMinimumInterval:1;
        unsigned int feedPrefetchFavoritesLimit:1;
        unsigned int prefetchedForYouExpiration:1;
        unsigned int backgroundFetchEnabled:1;
        unsigned int backgroundFetchEnabled2:1;
        unsigned int feedPrefetchForYou:1;
    } _has;
}

@property (nonatomic) _Bool hasBackgroundFetchEnabled;
@property (nonatomic) _Bool backgroundFetchEnabled;
@property (nonatomic) _Bool hasBackgroundFetchMinimumInterval;
@property (nonatomic) double backgroundFetchMinimumInterval;
@property (nonatomic) _Bool hasFeedPrefetchForYou;
@property (nonatomic) _Bool feedPrefetchForYou;
@property (nonatomic) _Bool hasFeedPrefetchFavoritesLimit;
@property (nonatomic) long long feedPrefetchFavoritesLimit;
@property (nonatomic) _Bool hasBackgroundFetchEnabled2;
@property (nonatomic) _Bool backgroundFetchEnabled2;
@property (nonatomic) _Bool hasPrefetchedForYouExpiration;
@property (nonatomic) long long prefetchedForYouExpiration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
