/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader;

@interface GEOWiFiQualityServiceResponse : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_locationResults;
    NSMutableArray *_networkResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusCode;
    struct {
        unsigned int has_statusCode:1;
        unsigned int read_locationResults:1;
        unsigned int read_networkResults:1;
        unsigned int wrote_locationResults:1;
        unsigned int wrote_networkResults:1;
        unsigned int wrote_statusCode:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *locationResults;
@property (retain, nonatomic) NSMutableArray *networkResults;

+ (_Bool)isValid:(id)arg1;
+ (Class)locationResultsType;
+ (Class)networkResultsType;

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
- (void)readAll:(_Bool)arg1;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (void)_readLocationResults;
- (void)_addNoFlagsLocationResults:(id)arg1;
- (void)_readNetworkResults;
- (void)_addNoFlagsNetworkResults:(id)arg1;
- (unsigned long long)locationResultsCount;
- (void)clearLocationResults;
- (id)locationResultsAtIndex:(unsigned long long)arg1;
- (void)addLocationResults:(id)arg1;
- (unsigned long long)networkResultsCount;
- (void)clearNetworkResults;
- (id)networkResultsAtIndex:(unsigned long long)arg1;
- (void)addNetworkResults:(id)arg1;

@end
