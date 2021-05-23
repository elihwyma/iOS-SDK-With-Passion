/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPGenericShieldStylePack : PBCodable

{
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

@property (retain, nonatomic) NSMutableArray *textureAtlas;
@property (retain, nonatomic) NSMutableArray *genericShields;

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
- (void)addTextureAtlas:(id)arg1;
- (void)addGenericShield:(id)arg1;
- (unsigned long long)textureAtlasCount;
- (void)clearTextureAtlas;
- (id)textureAtlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)genericShieldsCount;
- (void)clearGenericShields;
- (id)genericShieldAtIndex:(unsigned long long)arg1;

@end
