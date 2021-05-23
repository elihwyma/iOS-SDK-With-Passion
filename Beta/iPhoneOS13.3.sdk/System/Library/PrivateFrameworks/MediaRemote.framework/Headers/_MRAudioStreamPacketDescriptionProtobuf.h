/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable

{
    long long _startOffset;
    unsigned int _dataByteSize;
    unsigned int _variableFramesInPacket;
    struct {
        unsigned int startOffset:1;
        unsigned int dataByteSize:1;
        unsigned int variableFramesInPacket:1;
    } _has;
}

@property (nonatomic) _Bool hasStartOffset;
@property (nonatomic) long long startOffset;
@property (nonatomic) _Bool hasVariableFramesInPacket;
@property (nonatomic) unsigned int variableFramesInPacket;
@property (nonatomic) _Bool hasDataByteSize;
@property (nonatomic) unsigned int dataByteSize;

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
