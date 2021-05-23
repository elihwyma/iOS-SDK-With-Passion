/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackAddressFields : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressBasic;
    NSString *_addressBuilding;
    NSString *_addressFloor;
    NSString *_addressUnit;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressBasic:1;
        unsigned int read_addressBuilding:1;
        unsigned int read_addressFloor:1;
        unsigned int read_addressUnit:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressBasic:1;
        unsigned int wrote_addressBuilding:1;
        unsigned int wrote_addressFloor:1;
        unsigned int wrote_addressUnit:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAddressBasic;
@property (retain, nonatomic) NSString *addressBasic;
@property (nonatomic, readonly) _Bool hasAddressUnit;
@property (retain, nonatomic) NSString *addressUnit;
@property (nonatomic, readonly) _Bool hasAddressFloor;
@property (retain, nonatomic) NSString *addressFloor;
@property (nonatomic, readonly) _Bool hasAddressBuilding;
@property (retain, nonatomic) NSString *addressBuilding;
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
- (void)_readAddressBasic;
- (void)_readAddressUnit;
- (void)_readAddressFloor;
- (void)_readAddressBuilding;

@end
