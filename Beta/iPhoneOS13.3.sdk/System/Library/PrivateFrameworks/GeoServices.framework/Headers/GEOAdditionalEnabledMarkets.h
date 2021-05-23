/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSArray, NSDictionary, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOAdditionalEnabledMarkets : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_offlineMarkets;
    NSMutableArray *_transitMarkets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_offlineMarkets:1;
        unsigned int read_transitMarkets:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_offlineMarkets:1;
        unsigned int wrote_transitMarkets:1;
    } _flags;
}

@property (nonatomic, readonly) NSArray *queryItems;
@property (nonatomic, readonly) NSDictionary *queryParameters;
@property (retain, nonatomic) NSMutableArray *transitMarkets;
@property (retain, nonatomic) NSMutableArray *offlineMarkets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)additionalEnabledMarkets;
+ (Class)transitMarketType;
+ (Class)offlineMarketType;
+ (id)_additionalEnabledTransitMarkets;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)reload;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readTransitMarkets;
- (void)_addNoFlagsTransitMarket:(id)arg1;
- (void)_readOfflineMarkets;
- (void)_addNoFlagsOfflineMarket:(id)arg1;
- (unsigned long long)transitMarketsCount;
- (void)clearTransitMarkets;
- (id)transitMarketAtIndex:(unsigned long long)arg1;
- (void)addTransitMarket:(id)arg1;
- (unsigned long long)offlineMarketsCount;
- (void)clearOfflineMarkets;
- (id)offlineMarketAtIndex:(unsigned long long)arg1;
- (void)addOfflineMarket:(id)arg1;

@end
