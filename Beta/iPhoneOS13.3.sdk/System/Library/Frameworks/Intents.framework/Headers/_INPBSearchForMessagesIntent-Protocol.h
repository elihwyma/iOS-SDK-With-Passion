/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@protocol _INPBSearchForMessagesIntent <Swift>

@property (nonatomic, readonly) int *attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (retain, nonatomic) _INPBStringList *content;
@property (nonatomic, readonly) _Bool hasContent;
@property (retain, nonatomic) _INPBStringList *conversationIdentifier;
@property (nonatomic, readonly) _Bool hasConversationIdentifier;
@property (retain, nonatomic) _INPBDateTimeRange *dateTimeRange;
@property (nonatomic, readonly) _Bool hasDateTimeRange;
@property (retain, nonatomic) _INPBStringList *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (retain, nonatomic) _INPBStringList *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBStringList *notificationIdentifier;
@property (nonatomic, readonly) _Bool hasNotificationIdentifier;
@property (retain, nonatomic) _INPBContactList *recipient;
@property (nonatomic, readonly) _Bool hasRecipient;
@property (retain, nonatomic) _INPBStringList *searchTerm;
@property (nonatomic, readonly) _Bool hasSearchTerm;
@property (retain, nonatomic) _INPBContactList *sender;
@property (nonatomic, readonly) _Bool hasSender;
@property (retain, nonatomic) _INPBDataStringList *speakableGroupName;
@property (nonatomic, readonly) _Bool hasSpeakableGroupName;

- (unsigned short)clearAttributes;
- (unsigned short)setAttributes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)attributesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)addAttribute: /* Error: Ran out of types for this method. */;
- (unsigned short)attributeAtIndex: /* Error: Ran out of types for this method. */;

@end
