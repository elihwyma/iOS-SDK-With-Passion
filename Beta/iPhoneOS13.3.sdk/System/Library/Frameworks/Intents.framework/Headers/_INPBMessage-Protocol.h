/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBCurrencyAmountValue, _INPBDataString, _INPBDateTime, _INPBInteger, _INPBMessage, _INPBMessageLinkMetadata;

@protocol _INPBMessage <Swift>

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

+ (unsigned short)recipientType;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;
- (unsigned short)addRecipient: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAttributes;
- (unsigned short)setAttributes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)attributesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)addAttribute: /* Error: Ran out of types for this method. */;
- (unsigned short)attributeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRecipients;
- (unsigned short)effectAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)recipientAtIndex: /* Error: Ran out of types for this method. */;

@end
