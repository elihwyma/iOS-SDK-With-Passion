/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextItemDisplayConfig : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _maxItemsPerRow;
    unsigned int _maxRowCount;
    struct {
        unsigned int has_maxItemsPerRow:1;
        unsigned int has_maxRowCount:1;
    } _flags;
}

@property (nonatomic) _Bool hasMaxItemsPerRow;
@property (nonatomic) unsigned int maxItemsPerRow;
@property (nonatomic) _Bool hasMaxRowCount;
@property (nonatomic) unsigned int maxRowCount;
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
