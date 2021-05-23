/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAddressCorrectionResult : PBCodable

{
    PBDataReader *_reader;
    NSString *_addressID;
    NSMutableArray *_significantLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_addressID:1;
        unsigned int read_significantLocations:1;
        unsigned int wrote_addressID:1;
        unsigned int wrote_significantLocations:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSMutableArray *significantLocations;

+ (_Bool)isValid:(id)arg1;
+ (Class)significantLocationType;

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
- (void)clearSensitiveFields;
- (void)_readSignificantLocations;
- (void)_addNoFlagsSignificantLocation:(id)arg1;
- (void)_readAddressID;
- (unsigned long long)significantLocationsCount;
- (void)clearSignificantLocations;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (void)addSignificantLocation:(id)arg1;

@end
