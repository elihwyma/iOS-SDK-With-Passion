/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface _MRVolumeDidChangeMessageProtobuf : PBCodable

{
    NSString *_endpointUID;
    NSString *_outputDeviceUID;
    float _volume;
    CDStruct_731552e5 _has;
}

@property (nonatomic) _Bool hasVolume;
@property (nonatomic) float volume;
@property (nonatomic, readonly) _Bool hasEndpointUID;
@property (retain, nonatomic) NSString *endpointUID;
@property (nonatomic, readonly) _Bool hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

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
