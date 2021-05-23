/*
 Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NFMProtoDidPlaySoundResponse : PBCodable

{
    _Bool _didPlay;
}

@property (nonatomic) _Bool didPlay;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
