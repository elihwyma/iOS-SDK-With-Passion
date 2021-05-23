/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableCloudKitDateComponents, NSData;

@interface ASCodableCloudKitCompetition : PBCodable

{
    CDStruct_5df41632 _opponentScores;
    CDStruct_95bda58d _preferredVictoryBadgeStyles;
    CDStruct_5df41632 _scores;
    long long _currentCacheIndex;
    long long _maximumNumberOfPointsPerDay;
    ASCodableCloudKitDateComponents *_durationDateComponents;
    ASCodableCloudKitDateComponents *_startDateComponents;
    NSData *_uuid;
    struct {
        unsigned int currentCacheIndex:1;
        unsigned int maximumNumberOfPointsPerDay:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) _Bool hasCurrentCacheIndex;
@property (nonatomic) long long currentCacheIndex;
@property (nonatomic, readonly) unsigned long long scoresCount;
@property (nonatomic, readonly) long long *scores;
@property (nonatomic, readonly) unsigned long long opponentScoresCount;
@property (nonatomic, readonly) long long *opponentScores;
@property (nonatomic, readonly) _Bool hasStartDateComponents;
@property (retain, nonatomic) ASCodableCloudKitDateComponents *startDateComponents;
@property (nonatomic, readonly) _Bool hasDurationDateComponents;
@property (retain, nonatomic) ASCodableCloudKitDateComponents *durationDateComponents;
@property (nonatomic, readonly) unsigned long long preferredVictoryBadgeStylesCount;
@property (nonatomic, readonly) int *preferredVictoryBadgeStyles;
@property (nonatomic) _Bool hasMaximumNumberOfPointsPerDay;
@property (nonatomic) long long maximumNumberOfPointsPerDay;

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
- (void)addOpponentScores:(long long)arg1;
- (void)addPreferredVictoryBadgeStyles:(int)arg1;
- (long long)opponentScoresAtIndex:(unsigned long long)arg1;
- (int)preferredVictoryBadgeStylesAtIndex:(unsigned long long)arg1;
- (void)clearOpponentScores;
- (void)clearPreferredVictoryBadgeStyles;
- (void)setScores:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setOpponentScores:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setPreferredVictoryBadgeStyles:(int *)arg1 count:(unsigned long long)arg2;

@end
