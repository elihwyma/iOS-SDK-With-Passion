/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDChildAction, GEOPDChildPlace, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildItem : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildAction *_childAction;
    GEOPDChildPlace *_childPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _childItemType;
    struct {
        unsigned int has_childItemType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childAction:1;
        unsigned int read_childPlace:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_childAction:1;
        unsigned int wrote_childPlace:1;
        unsigned int wrote_childItemType:1;
    } _flags;
}

@property (nonatomic) _Bool hasChildItemType;
@property (nonatomic) int childItemType;
@property (nonatomic, readonly) _Bool hasChildPlace;
@property (retain, nonatomic) GEOPDChildPlace *childPlace;
@property (nonatomic, readonly) _Bool hasChildAction;
@property (retain, nonatomic) GEOPDChildAction *childAction;
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
- (void)_readChildPlace;
- (void)_readChildAction;
- (id)childItemTypeAsString:(int)arg1;
- (int)StringAsChildItemType:(id)arg1;

@end
