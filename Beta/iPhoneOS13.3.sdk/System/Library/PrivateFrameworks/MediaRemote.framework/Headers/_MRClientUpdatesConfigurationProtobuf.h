/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable

{
    _Bool _artworkUpdates;
    _Bool _keyboardUpdates;
    _Bool _nowPlayingUpdates;
    _Bool _outputDeviceUpdates;
    _Bool _volumeUpdates;
    struct {
        unsigned int artworkUpdates:1;
        unsigned int keyboardUpdates:1;
        unsigned int nowPlayingUpdates:1;
        unsigned int outputDeviceUpdates:1;
        unsigned int volumeUpdates:1;
    } _has;
}

@property (nonatomic) _Bool hasNowPlayingUpdates;
@property (nonatomic) _Bool nowPlayingUpdates;
@property (nonatomic) _Bool hasArtworkUpdates;
@property (nonatomic) _Bool artworkUpdates;
@property (nonatomic) _Bool hasVolumeUpdates;
@property (nonatomic) _Bool volumeUpdates;
@property (nonatomic) _Bool hasKeyboardUpdates;
@property (nonatomic) _Bool keyboardUpdates;
@property (nonatomic) _Bool hasOutputDeviceUpdates;
@property (nonatomic) _Bool outputDeviceUpdates;

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
