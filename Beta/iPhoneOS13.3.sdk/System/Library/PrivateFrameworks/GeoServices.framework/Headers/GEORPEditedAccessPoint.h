/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPCorrectedString, GEORoadAccessPoint, PBDataReader, PBUnknownFields;

@interface GEORPEditedAccessPoint : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORoadAccessPoint *_corrected;
    GEORPCorrectedString *_name;
    GEORoadAccessPoint *_original;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_corrected:1;
        unsigned int read_name:1;
        unsigned int read_original:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_corrected:1;
        unsigned int wrote_name:1;
        unsigned int wrote_original:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOriginal;
@property (retain, nonatomic) GEORoadAccessPoint *original;
@property (nonatomic, readonly) _Bool hasCorrected;
@property (retain, nonatomic) GEORoadAccessPoint *corrected;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) GEORPCorrectedString *name;
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
- (void)_readOriginal;
- (void)_readCorrected;
- (void)_readName;

@end
