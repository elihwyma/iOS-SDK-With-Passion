/*
 Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface CSLUIPBSize : PBCodable

{
    float _height;
    float _width;
}

@property (nonatomic) float width;
@property (nonatomic) float height;

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
