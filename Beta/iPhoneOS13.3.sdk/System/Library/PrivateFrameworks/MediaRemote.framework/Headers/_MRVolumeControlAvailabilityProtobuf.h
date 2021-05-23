/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable

{
    int _volumeCapabilities;
    _Bool _volumeControlAvailable;
    struct {
        unsigned int volumeCapabilities:1;
        unsigned int volumeControlAvailable:1;
    } _has;
}

@property (nonatomic) _Bool hasVolumeControlAvailable;
@property (nonatomic) _Bool volumeControlAvailable;
@property (nonatomic) _Bool hasVolumeCapabilities;
@property (nonatomic) int volumeCapabilities;

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
