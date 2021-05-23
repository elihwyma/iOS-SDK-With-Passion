/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class SPProtoAudioFilePlayerStatus, SPProtoAudioFilePlayerUpdateContainedIdentifier, SPProtoAudioFileQueuePlayerSetItems, SPProtoAudioFileQueuePlayerSetRate, SPProtoObjectMessage;

@interface SPProtoAudioFileQueuePlayer : PBCodable

{
    SPProtoObjectMessage *_advanceToNextItem;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_appendItem;
    SPProtoObjectMessage *_destroy;
    SPProtoObjectMessage *_removeAllItems;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_removeItem;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_replaceCurrentItem;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_setCurrentItem;
    SPProtoAudioFileQueuePlayerSetRate *_setRate;
    SPProtoAudioFilePlayerStatus *_setStatus;
    SPProtoAudioFileQueuePlayerSetItems *_upsertWithItems;
}

@property (nonatomic, readonly) _Bool hasUpsertWithItems;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayerSetItems *upsertWithItems;
@property (nonatomic, readonly) _Bool hasDestroy;
@property (retain, nonatomic) SPProtoObjectMessage *destroy;
@property (nonatomic, readonly) _Bool hasSetRate;
@property (retain, nonatomic) SPProtoAudioFileQueuePlayerSetRate *setRate;
@property (nonatomic, readonly) _Bool hasReplaceCurrentItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *replaceCurrentItem;
@property (nonatomic, readonly) _Bool hasSetStatus;
@property (retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus;
@property (nonatomic, readonly) _Bool hasAdvanceToNextItem;
@property (retain, nonatomic) SPProtoObjectMessage *advanceToNextItem;
@property (nonatomic, readonly) _Bool hasAppendItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *appendItem;
@property (nonatomic, readonly) _Bool hasRemoveItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *removeItem;
@property (nonatomic, readonly) _Bool hasRemoveAllItems;
@property (retain, nonatomic) SPProtoObjectMessage *removeAllItems;
@property (nonatomic, readonly) _Bool hasSetCurrentItem;
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *setCurrentItem;

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
