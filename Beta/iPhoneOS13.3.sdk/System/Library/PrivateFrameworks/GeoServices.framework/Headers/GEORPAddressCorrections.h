/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPAccessPointCorrections, GEORPCorrectedCoordinate, GEORPFeedbackAddressFields, GEORPMapLocation, PBDataReader, PBUnknownFields;

@interface GEORPAddressCorrections : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPFeedbackAddressFields *_addressFields;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    GEORPFeedbackAddressFields *_originalAddressFields;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoint:1;
        unsigned int read_addressFields:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapLocation:1;
        unsigned int read_originalAddressFields:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessPoint:1;
        unsigned int wrote_addressFields:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapLocation:1;
        unsigned int wrote_originalAddressFields:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAddressFields;
@property (retain, nonatomic) GEORPFeedbackAddressFields *addressFields;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property (nonatomic, readonly) _Bool hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (nonatomic, readonly) _Bool hasAccessPoint;
@property (retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property (nonatomic, readonly) _Bool hasOriginalAddressFields;
@property (retain, nonatomic) GEORPFeedbackAddressFields *originalAddressFields;
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
- (void)_readCoordinate;
- (void)_readMapLocation;
- (void)_readAccessPoint;
- (void)_readAddressFields;
- (void)_readOriginalAddressFields;

@end
