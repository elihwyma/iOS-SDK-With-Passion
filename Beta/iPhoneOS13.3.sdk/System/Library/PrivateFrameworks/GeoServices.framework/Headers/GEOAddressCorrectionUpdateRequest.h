/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOAddressCorrectionUpdateRequest : PBRequest

{
    PBDataReader *_reader;
    NSString *_addressID;
    NSMutableArray *_addressResults;
    NSMutableArray *_significantLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _correctionStatus;
    struct {
        unsigned int has_correctionStatus:1;
        unsigned int read_addressID:1;
        unsigned int read_addressResults:1;
        unsigned int read_significantLocations:1;
        unsigned int wrote_addressID:1;
        unsigned int wrote_addressResults:1;
        unsigned int wrote_significantLocations:1;
        unsigned int wrote_correctionStatus:1;
    } _flags;
}

@property (nonatomic) _Bool hasCorrectionStatus;
@property (nonatomic) int correctionStatus;
@property (retain, nonatomic) NSMutableArray *significantLocations;
@property (nonatomic, readonly) _Bool hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSMutableArray *addressResults;

+ (_Bool)isValid:(id)arg1;
+ (Class)significantLocationType;
+ (Class)addressResultType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)_readSignificantLocations;
- (void)_addNoFlagsSignificantLocation:(id)arg1;
- (void)_readAddressID;
- (void)_readAddressResults;
- (void)_addNoFlagsAddressResult:(id)arg1;
- (unsigned long long)significantLocationsCount;
- (void)clearSignificantLocations;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (void)addSignificantLocation:(id)arg1;
- (unsigned long long)addressResultsCount;
- (void)clearAddressResults;
- (id)addressResultAtIndex:(unsigned long long)arg1;
- (void)addAddressResult:(id)arg1;
- (id)correctionStatusAsString:(int)arg1;
- (int)StringAsCorrectionStatus:(id)arg1;

@end
