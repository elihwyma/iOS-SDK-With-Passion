/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSnapScorePoint : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_candidates;
    GEOLatLng *_point;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_candidates:1;
        unsigned int read_point:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_candidates:1;
        unsigned int wrote_point:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPoint;
@property (retain, nonatomic) GEOLatLng *point;
@property (retain, nonatomic) NSMutableArray *candidates;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)candidateType;

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
- (id)candidateAtIndex:(unsigned long long)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readPoint;
- (void)_readCandidates;
- (void)_addNoFlagsCandidate:(id)arg1;
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (void)addCandidate:(id)arg1;

@end
