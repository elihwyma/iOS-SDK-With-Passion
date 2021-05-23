/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDRigMetrics : PBCodable

{
    CDStruct_9f2792e4 _occlusionScores;
}

@property (nonatomic, readonly) unsigned long long occlusionScoresCount;
@property (nonatomic, readonly) unsigned int *occlusionScores;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (void)clearOcclusionScores;
- (unsigned int)occlusionScoreAtIndex:(unsigned long long)arg1;
- (void)addOcclusionScore:(unsigned int)arg1;
- (void)setOcclusionScores:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
