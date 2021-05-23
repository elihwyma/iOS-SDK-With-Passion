/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class SPProtoAudioFilePlayerAssetUpdateMetaData, SPProtoObjectMessage;

@interface SPProtoAudioFilePlayerAsset : PBCodable

{
    SPProtoObjectMessage *_destroy;
    SPProtoAudioFilePlayerAssetUpdateMetaData *_upsertWithMetaData;
}

@property (nonatomic, readonly) _Bool hasUpsertWithMetaData;
@property (retain, nonatomic) SPProtoAudioFilePlayerAssetUpdateMetaData *upsertWithMetaData;
@property (nonatomic, readonly) _Bool hasDestroy;
@property (retain, nonatomic) SPProtoObjectMessage *destroy;

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
