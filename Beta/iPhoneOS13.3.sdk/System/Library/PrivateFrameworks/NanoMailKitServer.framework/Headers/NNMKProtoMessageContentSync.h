/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NNMKProtoMessage, NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageContentSync : PBCodable

{
    NSMutableArray *_attachments;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSData *_htmlContentData;
    NSString *_messageId;
    NNMKProtoMessage *_notificationMessage;
    NSData *_preview;
    NSData *_text;
    _Bool _mainAlternativeValid;
    _Bool _partiallyLoaded;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mainAlternativeValid:1;
        unsigned int partiallyLoaded:1;
    } _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) _Bool hasMainAlternativeValid;
@property (nonatomic) _Bool mainAlternativeValid;
@property (nonatomic, readonly) _Bool hasText;
@property (retain, nonatomic) NSData *text;
@property (nonatomic, readonly) _Bool hasPreview;
@property (retain, nonatomic) NSData *preview;
@property (nonatomic) _Bool hasPartiallyLoaded;
@property (nonatomic) _Bool partiallyLoaded;
@property (retain, nonatomic) NSMutableArray *attachments;
@property (nonatomic, readonly) _Bool hasNotificationMessage;
@property (retain, nonatomic) NNMKProtoMessage *notificationMessage;
@property (nonatomic, readonly) _Bool hasHtmlContentData;
@property (retain, nonatomic) NSData *htmlContentData;

+ (Class)attachmentType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearAttachments;
- (unsigned long long)attachmentsCount;
- (void)addAttachment:(id)arg1;
- (id)attachmentAtIndex:(unsigned long long)arg1;

@end
