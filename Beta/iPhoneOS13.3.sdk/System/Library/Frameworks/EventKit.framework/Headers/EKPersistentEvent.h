/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEvent

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)eventWithRandomUUID;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)endDate;
- (long long)status;
- (void)setEndDate:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (id)travelTime;
- (void)setTravelTime:(id)arg1;
- (id)organizer;
- (long long)availability;
- (void)setAvailability:(long long)arg1;
- (int)entityType;
- (id)proposedStartDate;
- (id)suggestionInfo;
- (void)setProposedStartDate:(id)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (id)responseComment;
- (void)setResponseComment:(id)arg1;
- (long long)privacyLevel;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTravelAdvisoryBehavior:(long long)arg1;
- (id)originalStartDate;
- (id)birthdayContactIdentifier;
- (_Bool)canForward;
- (unsigned long long)invitationStatus;
- (void)setJunkStatus:(unsigned long long)arg1;
- (unsigned long long)junkStatus;
- (id)conferenceURL;
- (void)setConferenceURL:(id)arg1;
- (id)birthdayContactName;
- (void)setOriginalStartDate:(id)arg1;
- (long long)travelAdvisoryBehavior;
- (long long)locationPredictionState;
- (void)setLocationPredictionState:(long long)arg1;
- (id)birthdayID;
- (void)setBirthdayID:(id)arg1;
- (void)setCanForward:(_Bool)arg1;
- (_Bool)disallowProposeNewTime;
- (void)setDisallowProposeNewTime:(_Bool)arg1;
- (_Bool)pushDirtyProperties:(id *)arg1;
- (id)suggestedEventInfo;
- (void)setSuggestedEventInfo:(id)arg1;
- (_Bool)needsOccurrenceCacheUpdate;
- (void)setNeedsOccurrenceCacheUpdate:(_Bool)arg1;
- (unsigned int)invitationChangedProperties;
- (void)setInvitationChangedProperties:(unsigned int)arg1;
- (int)externalTrackingStatus;
- (void)setExternalTrackingStatus:(int)arg1;
- (void)setBirthdayContactIdentifier:(id)arg1;
- (void)setBirthdayContactName:(id)arg1;
- (id)recurrenceSet;
- (void)setRecurrenceSet:(id)arg1;
- (_Bool)firedTTL;
- (void)setFiredTTL:(_Bool)arg1;

@end
