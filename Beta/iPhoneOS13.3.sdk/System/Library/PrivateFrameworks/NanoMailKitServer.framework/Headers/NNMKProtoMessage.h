/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessage : PBCodable

{
    NSString *_accountId;
    NSMutableArray *_bccs;
    NSMutableArray *_ccs;
    NSString *_conversationId;
    NSData *_dateReceived;
    NSData *_dateSent;
    NSString *_from;
    unsigned int _isSpecialMailboxSpecific;
    NSString *_mailboxId;
    NSString *_messageId;
    NSString *_messageIdHeader;
    NSString *_notificationMessageId;
    NSString *_publisherBulletinId;
    NSString *_remoteId;
    unsigned int _status;
    unsigned int _statusVersion;
    NSString *_subject;
    NSMutableArray *_tos;
    _Bool _isThreadSpecific;
    struct {
        unsigned int isSpecialMailboxSpecific:1;
        unsigned int status:1;
        unsigned int statusVersion:1;
        unsigned int isThreadSpecific:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic, readonly) _Bool hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic, readonly) _Bool hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic, readonly) _Bool hasSubject;
@property (retain, nonatomic) NSString *subject;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic, readonly) _Bool hasFrom;
@property (retain, nonatomic) NSString *from;
@property (retain, nonatomic) NSMutableArray *tos;
@property (retain, nonatomic) NSMutableArray *ccs;
@property (nonatomic, readonly) _Bool hasDateSent;
@property (retain, nonatomic) NSData *dateSent;
@property (nonatomic, readonly) _Bool hasDateReceived;
@property (retain, nonatomic) NSData *dateReceived;
@property (nonatomic, readonly) _Bool hasMessageIdHeader;
@property (retain, nonatomic) NSString *messageIdHeader;
@property (retain, nonatomic) NSMutableArray *bccs;
@property (nonatomic, readonly) _Bool hasRemoteId;
@property (retain, nonatomic) NSString *remoteId;
@property (nonatomic, readonly) _Bool hasNotificationMessageId;
@property (retain, nonatomic) NSString *notificationMessageId;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) _Bool hasIsThreadSpecific;
@property (nonatomic) _Bool isThreadSpecific;
@property (nonatomic) _Bool hasIsSpecialMailboxSpecific;
@property (nonatomic) unsigned int isSpecialMailboxSpecific;
@property (nonatomic, readonly) _Bool hasPublisherBulletinId;
@property (retain, nonatomic) NSString *publisherBulletinId;
@property (nonatomic) _Bool hasStatusVersion;
@property (nonatomic) unsigned int statusVersion;

+ (Class)toType;
+ (Class)ccType;
+ (id)protoMessageFromMessage:(id)arg1 organizedByThread:(_Bool)arg2 sanitizeMessageId:(_Bool)arg3 supportsStandaloneMode:(_Bool)arg4;
+ (Class)bccType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addTo:(id)arg1;
- (void)addCc:(id)arg1;
- (unsigned long long)tosCount;
- (void)clearTos;
- (id)toAtIndex:(unsigned long long)arg1;
- (unsigned long long)ccsCount;
- (void)clearCcs;
- (id)ccAtIndex:(unsigned long long)arg1;
- (void)addBcc:(id)arg1;
- (unsigned long long)bccsCount;
- (void)clearBccs;
- (id)bccAtIndex:(unsigned long long)arg1;

@end
