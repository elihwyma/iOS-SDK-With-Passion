/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueLabel, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFilterElementInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterIds;
    GEOPDVenueLabel *_label;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_filterIds:1;
        unsigned int read_label:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_filterIds:1;
        unsigned int wrote_label:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *filterIds;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)filterIdType;

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
- (void)_readLabel;
- (void)_readFilterIds;
- (void)_addNoFlagsFilterId:(id)arg1;
- (unsigned long long)filterIdsCount;
- (void)clearFilterIds;
- (id)filterIdAtIndex:(unsigned long long)arg1;
- (void)addFilterId:(id)arg1;

@end
