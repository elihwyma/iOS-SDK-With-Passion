/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ASCodableDatabaseCompetitionScore : PBCodable

{
    CDStruct_5df41632 _scores;
}

@property (nonatomic, readonly) unsigned long long scoresCount;
@property (nonatomic, readonly) long long *scores;

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
- (void)addScores:(long long)arg1;
- (void)clearScores;
- (long long)scoresAtIndex:(unsigned long long)arg1;
- (void)setScores:(long long *)arg1 count:(unsigned long long)arg2;

@end
