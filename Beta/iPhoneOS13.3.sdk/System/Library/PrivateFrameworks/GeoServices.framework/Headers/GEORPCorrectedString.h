/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPCorrectedString : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_correctedValue;
    NSString *_originalValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_correctedValue:1;
        unsigned int read_originalValue:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_correctedValue:1;
        unsigned int wrote_originalValue:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOriginalValue;
@property (retain, nonatomic) NSString *originalValue;
@property (nonatomic, readonly) _Bool hasCorrectedValue;
@property (retain, nonatomic) NSString *correctedValue;
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
- (void)_readOriginalValue;
- (void)_readCorrectedValue;

@end
