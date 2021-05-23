/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSSet, NSString, NSURL;

@interface EKPersistentCalendar : EKPersistentObject

@property (retain, nonatomic) EKPersistentSource *source;
@property (retain, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) int displayOrder;
@property (copy, nonatomic) NSString *colorString;
@property (nonatomic, getter=isColorDisplayOnly) _Bool colorDisplayOnly;
@property (copy, nonatomic) NSString *symbolicColorName;
@property (nonatomic) int flags;
@property (nonatomic) unsigned long long sharingStatus;
@property (nonatomic) unsigned long long invitationStatus;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (copy, nonatomic) NSURL *sharedOwnerAddress;
@property (nonatomic) unsigned long long sharingInvitationResponse;
@property (copy, nonatomic) NSSet *sharees;
@property (copy, nonatomic) NSString *publishedURL;
@property (nonatomic, getter=isPublished) _Bool published;
@property (copy, nonatomic) NSString *selfIdentityDisplayName;
@property (copy, nonatomic) NSString *selfIdentityEmail;
@property (copy, nonatomic) NSString *selfIdentityPhoneNumber;
@property (copy, nonatomic) NSURL *selfIdentityAddress;
@property (copy, nonatomic) NSString *selfIdentityFirstName;
@property (copy, nonatomic) NSString *selfIdentityLastName;
@property (copy, nonatomic) NSString *ownerIdentityDisplayName;
@property (copy, nonatomic) NSString *ownerIdentityEmail;
@property (copy, nonatomic) NSString *ownerIdentityPhoneNumber;
@property (copy, nonatomic) NSURL *ownerIdentityAddress;
@property (copy, nonatomic) NSString *ownerIdentityFirstName;
@property (copy, nonatomic) NSString *ownerIdentityLastName;
@property (copy, nonatomic) NSString *bulkRequests;
@property (copy, nonatomic) NSString *subcalAccountID;
@property (copy, nonatomic) NSString *pushKey;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)calendarWithRandomUUID;

- (id)description;
- (id)notifications;
- (void)setNotifications:(id)arg1;
- (id)externalRepresentation;
- (void)setExternalRepresentation:(id)arg1;
- (int)allowedEntities;
- (int)entityType;
- (id)notes;
- (void)setNotes:(id)arg1;
- (id)alarms;
- (void)setAlarms:(id)arg1;
- (void)setIsPublished:(_Bool)arg1;
- (id)externalIDTag;
- (void)setExternalIDTag:(id)arg1;
- (id)syncToken;
- (void)setSyncToken:(id)arg1;
- (void)setAllowedEntities:(int)arg1;
- (int)ownerIdentityId;
- (void)setOwnerIdentityId:(int)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;

@end
