/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable

{
    CDStruct_95bda58d _styles;
}

@property (nonatomic, readonly) unsigned long long stylesCount;
@property (nonatomic, readonly) int *styles;

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
- (void)clearStyles;
- (int)stylesAtIndex:(unsigned long long)arg1;
- (void)addStyles:(int)arg1;
- (void)setStyles:(int *)arg1 count:(unsigned long long)arg2;

@end
