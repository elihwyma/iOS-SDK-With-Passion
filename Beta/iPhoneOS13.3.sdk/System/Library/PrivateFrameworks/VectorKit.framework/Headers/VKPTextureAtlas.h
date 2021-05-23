/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VKPTextureAtlas : PBCodable

{
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData *_texture;
}

@property (retain, nonatomic) NSData *texture;
@property (nonatomic) unsigned int quadWidth;
@property (nonatomic) unsigned int quadHeight;

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

@end
