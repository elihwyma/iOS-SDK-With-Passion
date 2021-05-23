/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@interface _INPBSearchForMessagesIntent : PBCodable <Swift>

{
    CDStruct_95bda58d _attributes;
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBStringList *_content;
    _INPBStringList *_conversationIdentifier;
    _INPBDateTimeRange *_dateTimeRange;
    _INPBStringList *_groupName;
    _INPBStringList *_identifier;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_notificationIdentifier;
    _INPBContactList *_recipient;
    _INPBStringList *_searchTerm;
    _INPBContactList *_sender;
    _INPBDataStringList *_speakableGroupName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearAttributes;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (id)attributesAsString:(int)arg1;
- (int)StringAsAttributes:(id)arg1;
- (void)addAttribute:(int)arg1;
- (int)attributeAtIndex:(unsigned long long)arg1;

@end
