/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRVolumeControlAvailabilityProtobuf;

@interface _MRGetVolumeControlCapabilitiesResultMessageProtobuf : PBCodable

{
    _MRVolumeControlAvailabilityProtobuf *_capabilities;
}

@property (nonatomic, readonly) _Bool hasCapabilities;
@property (retain, nonatomic) _MRVolumeControlAvailabilityProtobuf *capabilities;

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
