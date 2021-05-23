/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableArray;

@interface SBPBAppLayoutList : PBCodable <Swift>

{
    NSMutableArray *_applayouts;
}

@property (retain, nonatomic) NSMutableArray *applayouts;

+ (Class)applayoutsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addApplayouts:(id)arg1;
- (unsigned long long)applayoutsCount;
- (void)clearApplayouts;
- (id)applayoutsAtIndex:(unsigned long long)arg1;

@end
