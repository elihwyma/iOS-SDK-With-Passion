/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRVirtualTouchEventProtobuf : PBCodable

{
    double _x;
    double _y;
    int _finger;
    int _phase;
    struct {
        unsigned int x:1;
        unsigned int y:1;
        unsigned int finger:1;
        unsigned int phase:1;
    } _has;
}

@property (nonatomic) _Bool hasX;
@property (nonatomic) double x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) double y;
@property (nonatomic) _Bool hasPhase;
@property (nonatomic) int phase;
@property (nonatomic) _Bool hasFinger;
@property (nonatomic) int finger;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)phaseAsString:(int)arg1;
- (int)StringAsPhase:(id)arg1;

@end
