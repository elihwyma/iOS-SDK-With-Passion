/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRAudioBufferProtobuf, _MRAudioTimeProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable

{
    double _gain;
    _MRAudioBufferProtobuf *_buffer;
    _MRAudioTimeProtobuf *_time;
    struct {
        unsigned int gain:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasBuffer;
@property (retain, nonatomic) _MRAudioBufferProtobuf *buffer;
@property (nonatomic, readonly) _Bool hasTime;
@property (retain, nonatomic) _MRAudioTimeProtobuf *time;
@property (nonatomic) _Bool hasGain;
@property (nonatomic) double gain;

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
