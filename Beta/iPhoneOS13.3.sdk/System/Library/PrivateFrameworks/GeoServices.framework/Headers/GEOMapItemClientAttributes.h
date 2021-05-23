/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapItemAddressBookAttributes, GEOMapItemCorrectedLocationAttributes, GEOMapItemRoutineAttributes, PBDataReader, PBUnknownFields;

@interface GEOMapItemClientAttributes : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes *_correctedLocationAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressBookAttributes:1;
        unsigned int read_correctedLocationAttributes:1;
        unsigned int read_routineAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressBookAttributes:1;
        unsigned int wrote_correctedLocationAttributes:1;
        unsigned int wrote_routineAttributes:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAddressBookAttributes;
@property (retain, nonatomic) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property (nonatomic, readonly) _Bool hasRoutineAttributes;
@property (retain, nonatomic) GEOMapItemRoutineAttributes *routineAttributes;
@property (nonatomic, readonly) _Bool hasCorrectedLocationAttributes;
@property (retain, nonatomic) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
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
- (void)_readAddressBookAttributes;
- (void)_readRoutineAttributes;
- (void)_readCorrectedLocationAttributes;

@end
