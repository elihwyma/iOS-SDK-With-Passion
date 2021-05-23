/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _MRNowPlayingInfoProtobuf : PBCodable

{
    double _duration;
    double _elapsedTime;
    long long _radioStationIdentifier;
    double _timestamp;
    unsigned long long _uniqueIdentifier;
    NSString *_album;
    NSString *_artist;
    NSData *_artworkDataDigest;
    float _playbackRate;
    NSString *_radioStationHash;
    NSString *_radioStationName;
    int _repeatMode;
    int _shuffleMode;
    NSString *_title;
    _Bool _isAdvertisement;
    _Bool _isAlwaysLive;
    _Bool _isExplicitTrack;
    _Bool _isMusicApp;
    struct {
        unsigned int duration:1;
        unsigned int elapsedTime:1;
        unsigned int radioStationIdentifier:1;
        unsigned int timestamp:1;
        unsigned int uniqueIdentifier:1;
        unsigned int playbackRate:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int isAdvertisement:1;
        unsigned int isAlwaysLive:1;
        unsigned int isExplicitTrack:1;
        unsigned int isMusicApp:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAlbum;
@property (retain, nonatomic) NSString *album;
@property (nonatomic, readonly) _Bool hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasElapsedTime;
@property (nonatomic) double elapsedTime;
@property (nonatomic) _Bool hasPlaybackRate;
@property (nonatomic) float playbackRate;
@property (nonatomic) _Bool hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) _Bool hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool hasUniqueIdentifier;
@property (nonatomic) unsigned long long uniqueIdentifier;
@property (nonatomic) _Bool hasIsExplicitTrack;
@property (nonatomic) _Bool isExplicitTrack;
@property (nonatomic) _Bool hasIsMusicApp;
@property (nonatomic) _Bool isMusicApp;
@property (nonatomic) _Bool hasRadioStationIdentifier;
@property (nonatomic) long long radioStationIdentifier;
@property (nonatomic, readonly) _Bool hasRadioStationHash;
@property (retain, nonatomic) NSString *radioStationHash;
@property (nonatomic, readonly) _Bool hasRadioStationName;
@property (retain, nonatomic) NSString *radioStationName;
@property (nonatomic, readonly) _Bool hasArtworkDataDigest;
@property (retain, nonatomic) NSData *artworkDataDigest;
@property (nonatomic) _Bool hasIsAlwaysLive;
@property (nonatomic) _Bool isAlwaysLive;
@property (nonatomic) _Bool hasIsAdvertisement;
@property (nonatomic) _Bool isAdvertisement;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
- (int)StringAsRepeatMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
- (int)StringAsShuffleMode:(id)arg1;

@end
