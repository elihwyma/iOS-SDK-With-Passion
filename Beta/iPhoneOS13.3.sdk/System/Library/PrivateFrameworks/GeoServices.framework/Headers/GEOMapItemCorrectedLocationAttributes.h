/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAddress, GEOLatLng, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_correctedAddressSecondaryStreetLine;
    GEOAddress *_correctedAddress;
    GEOLatLng *_correctedCoordinate;
    NSString *_customLabel;
    double _lastUpdateDate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _hasSubmittedRAP;
    struct {
        unsigned int has_lastUpdateDate:1;
        unsigned int has_hasSubmittedRAP:1;
        unsigned int read_unknownFields:1;
        unsigned int read_correctedAddressSecondaryStreetLine:1;
        unsigned int read_correctedAddress:1;
        unsigned int read_correctedCoordinate:1;
        unsigned int read_customLabel:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_correctedAddressSecondaryStreetLine:1;
        unsigned int wrote_correctedAddress:1;
        unsigned int wrote_correctedCoordinate:1;
        unsigned int wrote_customLabel:1;
        unsigned int wrote_lastUpdateDate:1;
        unsigned int wrote_hasSubmittedRAP:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCorrectedCoordinate;
@property (retain, nonatomic) GEOLatLng *correctedCoordinate;
@property (nonatomic, readonly) _Bool hasCorrectedAddress;
@property (retain, nonatomic) GEOAddress *correctedAddress;
@property (nonatomic, readonly) _Bool hasCorrectedAddressSecondaryStreetLine;
@property (retain, nonatomic) NSString *correctedAddressSecondaryStreetLine;
@property (nonatomic, readonly) _Bool hasCustomLabel;
@property (retain, nonatomic) NSString *customLabel;
@property (nonatomic) _Bool hasLastUpdateDate;
@property (nonatomic) double lastUpdateDate;
@property (nonatomic) _Bool hasHasSubmittedRAP;
@property (nonatomic) _Bool hasSubmittedRAP;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readCorrectedCoordinate;
- (void)_readCorrectedAddress;
- (void)_readCorrectedAddressSecondaryStreetLine;
- (void)_readCustomLabel;

@end
