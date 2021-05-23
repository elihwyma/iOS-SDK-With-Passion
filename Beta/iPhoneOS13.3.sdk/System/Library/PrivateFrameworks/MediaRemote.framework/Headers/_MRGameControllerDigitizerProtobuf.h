/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRGameControllerDigitizerProtobuf : PBCodable

{
    unsigned long long _timestamp;
    double _x;
    double _y;
    _Bool _touchDown;
    struct {
        unsigned int timestamp:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int touchDown:1;
    } _has;
}

@property (nonatomic) _Bool hasX;
@property (nonatomic) double x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) double y;
@property (nonatomic) _Bool hasTouchDown;
@property (nonatomic) _Bool touchDown;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

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
