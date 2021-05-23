/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBDataString, _INPBIntentMetadata, _INPBString;

@interface _INPBSendMessageIntent : PBCodable <Swift>

{
    struct {
        unsigned int effect:1;
        unsigned int messageType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _effect;
    int _messageType;
    NSArray *_attachments;
    _INPBString *_content;
    NSString *_conversationIdentifier;
    _INPBString *_groupName;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_recipients;
    _INPBContact *_sender;
    NSString *_serviceName;
    _INPBDataString *_speakableGroupName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic, readonly) unsigned long long attachmentsCount;
@property (retain, nonatomic) _INPBString *content;
@property (nonatomic, readonly) _Bool hasContent;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (nonatomic, readonly) _Bool hasConversationIdentifier;
@property (nonatomic) int effect;
@property (nonatomic) _Bool hasEffect;
@property (retain, nonatomic) _INPBString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int messageType;
@property (nonatomic) _Bool hasMessageType;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (retain, nonatomic) _INPBContact *sender;
@property (nonatomic, readonly) _Bool hasSender;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic, readonly) _Bool hasServiceName;
@property (retain, nonatomic) _INPBDataString *speakableGroupName;
@property (nonatomic, readonly) _Bool hasSpeakableGroupName;

+ (_Bool)supportsSecureCoding;
+ (Class)recipientType;
+ (Class)attachmentsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;
- (void)clearRecipients;
- (id)effectAsString:(int)arg1;
- (int)StringAsEffect:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (void)clearAttachments;
- (void)addAttachments:(id)arg1;
- (id)attachmentsAtIndex:(unsigned long long)arg1;

@end
