/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBDataString, _INPBIntentMetadata, _INPBString;

@protocol _INPBSendMessageIntent <Swift>

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

+ (unsigned short)recipientType;
+ (unsigned short)attachmentsType;

- (unsigned short)addRecipient: /* Error: Ran out of types for this method. */;
- (unsigned short)messageTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsMessageType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRecipients;
- (unsigned short)effectAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)recipientAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAttachments;
- (unsigned short)addAttachments: /* Error: Ran out of types for this method. */;
- (unsigned short)attachmentsAtIndex: /* Error: Ran out of types for this method. */;

@end
