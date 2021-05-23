/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable

{
    NSData *_data;
    float _w;
    float _x;
    float _y;
    float _z;
    struct {
        unsigned int w:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int z:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasData;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) _Bool hasX;
@property (nonatomic) float x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) float y;
@property (nonatomic) _Bool hasZ;
@property (nonatomic) float z;
@property (nonatomic) _Bool hasW;
@property (nonatomic) float w;

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
