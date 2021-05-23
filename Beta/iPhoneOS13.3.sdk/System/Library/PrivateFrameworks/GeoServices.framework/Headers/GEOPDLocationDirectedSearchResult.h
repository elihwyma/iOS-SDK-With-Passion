/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_displayMapRegion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_disambiguationLabels:1;
        unsigned int wrote_displayMapRegion:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (retain, nonatomic) NSMutableArray *disambiguationLabels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)disambiguationLabelType;

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
- (void)_readDisplayMapRegion;
- (void)_readDisambiguationLabels;
- (void)_addNoFlagsDisambiguationLabel:(id)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (void)addDisambiguationLabel:(id)arg1;

@end
