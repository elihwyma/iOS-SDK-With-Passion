/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MRVolumeControlAvailabilityProtobuf;

@interface _MRVolumeControlCapabilitiesDidChangeMessageProtobuf : PBCodable

{
    _MRVolumeControlAvailabilityProtobuf *_capabilities;
    NSString *_endpointUID;
    NSString *_outputDeviceUID;
}

@property (nonatomic, readonly) _Bool hasCapabilities;
@property (retain, nonatomic) _MRVolumeControlAvailabilityProtobuf *capabilities;
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
