/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficPath : PBCodable

{
    PBDataReader *_reader;
    CDStruct_5df41632 _continuingRoadIds;
    CDStruct_5df41632 _roadIds;
    NSMutableArray *_geometrys;
    NSData *_openlr;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _endOffset;
    float _startOffset;
    struct {
        unsigned int has_endOffset:1;
        unsigned int has_startOffset:1;
        unsigned int read_continuingRoadIds:1;
        unsigned int read_roadIds:1;
        unsigned int read_geometrys:1;
        unsigned int read_openlr:1;
        unsigned int wrote_continuingRoadIds:1;
        unsigned int wrote_roadIds:1;
        unsigned int wrote_geometrys:1;
        unsigned int wrote_openlr:1;
        unsigned int wrote_endOffset:1;
        unsigned int wrote_startOffset:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOpenlr;
@property (retain, nonatomic) NSData *openlr;
@property (nonatomic, readonly) unsigned long long roadIdsCount;
@property (nonatomic, readonly) long long *roadIds;
@property (nonatomic) _Bool hasStartOffset;
@property (nonatomic) float startOffset;
@property (nonatomic) _Bool hasEndOffset;
@property (nonatomic) float endOffset;
@property (nonatomic, readonly) unsigned long long continuingRoadIdsCount;
@property (nonatomic, readonly) long long *continuingRoadIds;
@property (retain, nonatomic) NSMutableArray *geometrys;

+ (_Bool)isValid:(id)arg1;
+ (Class)geometryType;

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
- (void)_readOpenlr;
- (void)_readRoadIds;
- (void)_addNoFlagsRoadId:(long long)arg1;
- (void)_readContinuingRoadIds;
- (void)_addNoFlagsContinuingRoadId:(long long)arg1;
- (void)_readGeometrys;
- (void)_addNoFlagsGeometry:(id)arg1;
- (void)clearRoadIds;
- (long long)roadIdAtIndex:(unsigned long long)arg1;
- (void)addRoadId:(long long)arg1;
- (void)clearContinuingRoadIds;
- (long long)continuingRoadIdAtIndex:(unsigned long long)arg1;
- (void)addContinuingRoadId:(long long)arg1;
- (unsigned long long)geometrysCount;
- (void)clearGeometrys;
- (id)geometryAtIndex:(unsigned long long)arg1;
- (void)addGeometry:(id)arg1;
- (void)setRoadIds:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setContinuingRoadIds:(long long *)arg1 count:(unsigned long long)arg2;

@end
