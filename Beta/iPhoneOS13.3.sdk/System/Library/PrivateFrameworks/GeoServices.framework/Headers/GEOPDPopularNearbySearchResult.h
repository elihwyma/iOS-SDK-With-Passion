/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbySearchResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    NSString *_sectionHeader;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isChainResultSet;
    struct {
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_sectionHeader:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayMapRegion:1;
        unsigned int wrote_sectionHeader:1;
        unsigned int wrote_isChainResultSet:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) _Bool hasSectionHeader;
@property (retain, nonatomic) NSString *sectionHeader;
@property (nonatomic) _Bool hasIsChainResultSet;
@property (nonatomic) _Bool isChainResultSet;
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
- (void)_readDisplayMapRegion;
- (void)_readSectionHeader;

@end
