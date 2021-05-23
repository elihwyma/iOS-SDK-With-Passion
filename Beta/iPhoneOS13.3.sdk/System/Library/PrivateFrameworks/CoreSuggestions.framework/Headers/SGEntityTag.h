/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGEntityTag : NSObject

{
    _Bool _indexed;
    _Bool _stored;
    _Bool _tracked;
    NSString *_label;
    NSString *_value;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) _Bool indexed;
@property (nonatomic, readonly) _Bool stored;
@property (nonatomic, readonly) _Bool tracked;

+ (void)initialize;
+ (id)defaultDuration;
+ (id)isSent;
+ (id)allDay;
+ (id)isPartiallyDownloaded;
+ (id)domain:(id)arg1;
+ (id)significantSender;
+ (id)remember:(id)arg1;
+ (void)rememberLabel:(id)arg1 stored:(_Bool)arg2 indexed:(_Bool)arg3 tracked:(_Bool)arg4;
+ (void)tombstoneLabel:(id)arg1;
+ (id)resolveName:(id)arg1;
+ (id)extractedEvent;
+ (id)extractedFlight;
+ (id)extractedBus;
+ (id)extractedTrain;
+ (id)extractedHotel;
+ (id)extractedCarRental;
+ (id)extractedTicket;
+ (id)extractedMovie;
+ (id)extractedFood;
+ (id)extractedSocial;
+ (id)categoryTagWithCategoryType:(int)arg1;
+ (id)geocodingModeAddressOnly;
+ (id)geocodingModePOIOnly;
+ (id)geocodingModeAddressThenPOI;
+ (id)geocodingModeAddressWithCanonicalSearch;
+ (id)fromExtractedDomain;
+ (id)extractedEventCancellation;
+ (id)inhuman;
+ (id)human;
+ (id)hardName;
+ (id)naturalLanguageEvent;
+ (id)fromCalendarAttachment;
+ (id)textCalendarAttachment:(id)arg1;
+ (id)timezoneIdentifier:(id)arg1;
+ (id)fromInteraction;
+ (id)interactionId:(id)arg1;
+ (id)interactionGroupId:(id)arg1;
+ (id)interactionBundleId:(id)arg1;
+ (id)interactionTeamId:(id)arg1;
+ (id)naturalLanguageEventTypeIdentifier:(id)arg1;
+ (id)naturalLanguageEventLanguageID:(id)arg1;
+ (id)naturalLanguageEventAttributes:(unsigned long long)arg1;
+ (id)confidenceScore:(float)arg1;
+ (id)participantCount:(unsigned char)arg1;
+ (id)usedBubblesCount:(unsigned char)arg1;
+ (id)calendarAppUsageLevel:(float)arg1;
+ (id)mailAppUsageLevel:(unsigned char)arg1;
+ (id)messagesAppUsageLevel:(unsigned char)arg1;
+ (id)schemaOrg:(id)arg1;
+ (id)reservationContainerReferenceWithData:(id)arg1;
+ (id)reservationContainerReference:(id)arg1;
+ (id)reservationItemReferencesWithData:(id)arg1;
+ (id)reservationItemReferences:(id)arg1;
+ (id)intentResponseUserActivityString:(id)arg1;
+ (id)eventMetadata:(id)arg1;
+ (id)fromTextMessage;
+ (id)fromSync;
+ (id)titleGeneratedFromTemplate;
+ (id)titleGeneratedFromSubject;
+ (id)templateException;
+ (id)fromForwardedMessage;
+ (id)fromReply;
+ (id)fullyDissected;
+ (id)tagForLabel:(id)arg1 value:(id)arg2;
+ (id)url:(id)arg1;
+ (id)mailingListId:(id)arg1;
+ (id)contactDetail:(id)arg1;
+ (id)interactionContactIdentifier:(id)arg1;
+ (id)identity:(id)arg1;
+ (id)extraKey:(id)arg1;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)messageWithMessageId:(id)arg1 fromSource:(id)arg2;
+ (id)messageWithMailMessageKey:(id)arg1;
+ (id)messageWithEmailKey:(id)arg1;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)extractedFromTemplateWithName:(id)arg1;
+ (id)eventHash:(id)arg1;
+ (id)reminderHash:(id)arg1;
+ (id)poiFilters:(id)arg1;
+ (id)allTags;
+ (id)testTag:(int)arg1;
+ (id)reminderMetadata:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)reservationContainerReference;
- (id)reservationItemReferences;
- (id)initWithLabel:(id)arg1 stored:(_Bool)arg2 indexed:(_Bool)arg3 tracked:(_Bool)arg4;
- (id)initWithLabel:(id)arg1 value:(id)arg2 stored:(_Bool)arg3 indexed:(_Bool)arg4 tracked:(_Bool)arg5;
- (_Bool)isEqualToEntityTag:(id)arg1;
- (_Bool)isInteractionId;
- (_Bool)isInteractionGroupId;
- (_Bool)isInteractionBundleId;
- (_Bool)isInteractionTeamId;
- (_Bool)isIntentResponseUserActivityString;
- (id)intentResponseUserActivityString;
- (_Bool)isUrl;
- (_Bool)isMailingListId;
- (_Bool)isContactDetail;
- (_Bool)isInteractionContactIdentifier;
- (_Bool)isExtraKey;
- (_Bool)isNaturalLanguageEventTypeIdentifier;
- (_Bool)isNaturalLanguageEventAttributes;
- (_Bool)isNaturalLanguageEventLanguageID;
- (_Bool)isConfidenceScore;
- (_Bool)isParticipantCount;
- (_Bool)isUsedBubblesCount;
- (_Bool)isCalendarAppUsageLevel;
- (_Bool)isMailAppUsageLevel;
- (_Bool)isMessagesAppUsageLevel;
- (_Bool)isSchemaOrg;
- (_Bool)isReservationContainerReference;
- (_Bool)isReservationItemReferences;
- (_Bool)isEventMetadata;
- (id)eventMetadata;
- (_Bool)isTemplateShortName;
- (_Bool)isTemplateName;
- (_Bool)isDomain;
- (_Bool)isEventHash;
- (_Bool)isReminderHash;
- (_Bool)isPOIFilters;
- (_Bool)isExtractedEventCategory;
- (_Bool)isReminderMetadata;
- (id)reminderMetadata;

@end
