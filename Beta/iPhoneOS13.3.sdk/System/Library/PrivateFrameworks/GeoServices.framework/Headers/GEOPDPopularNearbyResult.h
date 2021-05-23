/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbyResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPDLitePlaceResult *_litePlaceResults;
    unsigned long long _litePlaceResultsCount;
    unsigned long long _litePlaceResultsSpace;
    NSString *_sectionHeader;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_litePlaceResults:1;
        unsigned int read_sectionHeader:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_litePlaceResults:1;
        unsigned int wrote_sectionHeader:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSectionHeader;
@property (retain, nonatomic) NSString *sectionHeader;
@property (nonatomic, readonly) unsigned long long litePlaceResultsCount;
@property (nonatomic, readonly) struct GEOPDLitePlaceResult *litePlaceResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (struct GEOPDLitePlaceResult)litePlaceResultAtIndex:(unsigned long long)arg1;
- (void)clearLitePlaceResults;
- (void)_readSectionHeader;
- (void)_readLitePlaceResults;
- (void)_addNoFlagsLitePlaceResult:(struct GEOPDLitePlaceResult)arg1;
- (void)addLitePlaceResult:(struct GEOPDLitePlaceResult)arg1;
- (void)setLitePlaceResults:(struct GEOPDLitePlaceResult *)arg1 count:(unsigned long long)arg2;

@end
