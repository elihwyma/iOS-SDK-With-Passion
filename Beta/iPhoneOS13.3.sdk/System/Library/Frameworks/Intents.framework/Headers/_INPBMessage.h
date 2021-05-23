/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBCurrencyAmountValue, _INPBDataString, _INPBDateTime, _INPBInteger, _INPBMessageLinkMetadata;

@interface _INPBMessage : PBCodable <Swift>

{
    CDStruct_95bda58d _attributes;
    struct {
        unsigned int effect:1;
        unsigned int type:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _effect;
    int _type;
    NSString *_content;
    NSString *_conversationIdentifier;
    _INPBDateTime *_dateLastMessageRead;
    _INPBDateTime *_dateSent;
    NSString *_fileExtension;
    NSString *_groupName;
    NSString *_identifier;
    _INPBMessageLinkMetadata *_linkMetadata;
    NSString *_locationName;
    _INPBInteger *_numberOfAttachments;
    _INPBCurrencyAmountValue *_paymentAmount;
    NSArray *_recipients;
    _INPBMessage *_referencedMessage;
    _INPBContact *_sender;
    NSString *_serviceName;
    _INPBDataString *_speakableGroupName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int *attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (copy, nonatomic) NSString *content;
@property (nonatomic, readonly) _Bool hasContent;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (nonatomic, readonly) _Bool hasConversationIdentifier;
@property (retain, nonatomic) _INPBDateTime *dateLastMessageRead;
@property (nonatomic, readonly) _Bool hasDateLastMessageRead;
@property (retain, nonatomic) _INPBDateTime *dateSent;
@property (nonatomic, readonly) _Bool hasDateSent;
@property (nonatomic) int effect;
@property (nonatomic) _Bool hasEffect;
@property (copy, nonatomic) NSString *fileExtension;
@property (nonatomic, readonly) _Bool hasFileExtension;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata;
@property (nonatomic, readonly) _Bool hasLinkMetadata;
@property (copy, nonatomic) NSString *locationName;
@property (nonatomic, readonly) _Bool hasLocationName;
@property (retain, nonatomic) _INPBInteger *numberOfAttachments;
@property (nonatomic, readonly) _Bool hasNumberOfAttachments;
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property (nonatomic, readonly) _Bool hasPaymentAmount;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (retain, nonatomic) _INPBMessage *referencedMessage;
@property (nonatomic, readonly) _Bool hasReferencedMessage;
@property (retain, nonatomic) _INPBContact *sender;
@property (nonatomic, readonly) _Bool hasSender;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic, readonly) _Bool hasServiceName;
@property (retain, nonatomic) _INPBDataString *speakableGroupName;
@property (nonatomic, readonly) _Bool hasSpeakableGroupName;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

+ (_Bool)supportsSecureCoding;
+ (Class)recipientType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)clearAttributes;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (id)attributesAsString:(int)arg1;
- (int)StringAsAttributes:(id)arg1;
- (void)addAttribute:(int)arg1;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)clearRecipients;
- (id)effectAsString:(int)arg1;
- (int)StringAsEffect:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;

@end
