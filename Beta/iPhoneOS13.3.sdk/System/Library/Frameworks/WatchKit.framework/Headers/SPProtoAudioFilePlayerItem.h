/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class SPProtoAudioFilePlayerItemSetCurrentTime, SPProtoAudioFilePlayerStatus, SPProtoAudioFilePlayerUpdateContainedIdentifier, SPProtoObjectMessage;

@interface SPProtoAudioFilePlayerItem : PBCodable

{
    SPProtoObjectMessage *_destroy;
    SPProtoObjectMessage *_getCurrentTime;
    SPProtoObjectMessage *_notifyDidPlayToEndTime;
    SPProtoObjectMessage *_notifyFailedToPlayToEndTime;
    SPProtoObjectMessage *_notifyTimeJumped;
    SPProtoAudioFilePlayerItemSetCurrentTime *_setItemCurrentTime;
    SPProtoAudioFilePlayerStatus *_setStatus;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_upsertWithAsset;
}

@property (nonatomic, readonly) _Bool hasUpsertWithAsset;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *upsertWithAsset;
@property (nonatomic, readonly) _Bool hasDestroy;
@property (retain, nonatomic) SPProtoObjectMessage *destroy;
@property (nonatomic, readonly) _Bool hasSetStatus;
@property (retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus;
@property (nonatomic, readonly) _Bool hasGetCurrentTime;
@property (retain, nonatomic) SPProtoObjectMessage *getCurrentTime;
@property (nonatomic, readonly) _Bool hasNotifyTimeJumped;
@property (retain, nonatomic) SPProtoObjectMessage *notifyTimeJumped;
@property (nonatomic, readonly) _Bool hasNotifyDidPlayToEndTime;
@property (retain, nonatomic) SPProtoObjectMessage *notifyDidPlayToEndTime;
@property (nonatomic, readonly) _Bool hasNotifyFailedToPlayToEndTime;
@property (retain, nonatomic) SPProtoObjectMessage *notifyFailedToPlayToEndTime;
@property (nonatomic, readonly) _Bool hasSetItemCurrentTime;
@property (retain, nonatomic) SPProtoAudioFilePlayerItemSetCurrentTime *setItemCurrentTime;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sockPuppetMessage;

@end
