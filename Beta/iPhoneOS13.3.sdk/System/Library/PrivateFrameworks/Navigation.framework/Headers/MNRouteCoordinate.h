/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <ProtocolBuffer/PBCodable.h>

@interface MNRouteCoordinate : PBCodable

{
    unsigned int _index;
    float _offset;
    struct {
        unsigned int index:1;
        unsigned int offset:1;
    } _has;
}

@property (nonatomic) _Bool hasIndex;
@property (nonatomic) unsigned int index;
@property (nonatomic) _Bool hasOffset;
@property (nonatomic) float offset;

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
