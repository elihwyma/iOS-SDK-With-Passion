/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTransitTransferInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _transferMuid;
    unsigned int _transferTime;
    struct {
        unsigned int has_transferMuid:1;
        unsigned int has_transferTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransferMuid;
@property (nonatomic) unsigned long long transferMuid;
@property (nonatomic) _Bool hasTransferTime;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
