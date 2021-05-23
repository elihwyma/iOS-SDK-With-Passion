/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class SPProtoAudioFilePlayerAsset, SPProtoAudioFilePlayerItem, SPProtoAudioFileQueuePlayer;

@interface SPProtoAudioFilePlayerMessage : PBCodable

{
    SPProtoAudioFilePlayerAsset *_asset;
    SPProtoAudioFilePlayerItem *_playerItem;
    SPProtoAudioFileQueuePlayer *_queuePlayer;
}

@property (nonatomic, readonly) _Bool hasAsset;
@property (retain, nonatomic) SPProtoAudioFilePlayerAsset *asset;
@property (nonatomic, readonly) _Bool hasPlayerItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerItem *playerItem;
@property (nonatomic, readonly) _Bool hasQueuePlayer;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayer *queuePlayer;

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
