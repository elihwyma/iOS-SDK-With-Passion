/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NNMKProtoImageAttachmentSync : PBCodable

{
    NSString *_contentId;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSData *_imageData;
    NSString *_messageId;
    CDStruct_a125a100 _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic, readonly) _Bool hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic, readonly) _Bool hasImageData;
@property (retain, nonatomic) NSData *imageData;

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
