/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorIDLink : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _reservationTypes;
    NSString *_externalItemId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_reservationTypes:1;
        unsigned int read_externalItemId:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_reservationTypes:1;
        unsigned int wrote_externalItemId:1;
        unsigned int wrote_vendorId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (nonatomic, readonly) _Bool hasExternalItemId;
@property (retain, nonatomic) NSString *externalItemId;
@property (nonatomic, readonly) unsigned long long reservationTypesCount;
@property (nonatomic, readonly) int *reservationTypes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (int)reservationTypeAtIndex:(unsigned long long)arg1;
- (void)_readVendorId;
- (void)_readExternalItemId;
- (void)_readReservationTypes;
- (void)_addNoFlagsReservationType:(int)arg1;
- (void)clearReservationTypes;
- (void)addReservationType:(int)arg1;
- (void)setReservationTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)reservationTypesAsString:(int)arg1;
- (int)StringAsReservationTypes:(id)arg1;

@end
