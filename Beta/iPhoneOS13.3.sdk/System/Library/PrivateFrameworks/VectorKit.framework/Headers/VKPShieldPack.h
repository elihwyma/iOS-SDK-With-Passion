/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldPack : PBCodable

{
    NSMutableArray *_atlas;
    NSMutableArray *_shields;
}

@property (retain, nonatomic) NSMutableArray *atlas;
@property (retain, nonatomic) NSMutableArray *shields;

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
- (void)addAtlas:(id)arg1;
- (unsigned long long)atlasCount;
- (void)clearAtlas;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (void)addShields:(id)arg1;
- (unsigned long long)shieldsCount;
- (void)clearShields;
- (id)shieldsAtIndex:(unsigned long long)arg1;

@end
