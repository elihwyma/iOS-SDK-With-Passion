/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPIconPack : PBCodable

{
    NSMutableArray *_atlas;
    NSMutableArray *_icons;
    unsigned int _identifier;
}

@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *atlas;
@property (retain, nonatomic) NSMutableArray *icons;

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
- (unsigned long long)iconsCount;
- (void)clearIcons;
- (void)addIcons:(id)arg1;
- (id)iconsAtIndex:(unsigned long long)arg1;
- (void)addAtlas:(id)arg1;
- (unsigned long long)atlasCount;
- (void)clearAtlas;
- (id)atlasAtIndex:(unsigned long long)arg1;

@end
