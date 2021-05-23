/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, REMAccount, REMColor, REMListAppearanceContext, REMListCalDAVNotificationContext, REMListShareeContext, REMListStorage, REMListSublistContext, REMObjectID, REMResolutionTokenMap, REMStore;

@interface REMList : NSObject <Swift>

{
    REMStore *_store;
    REMListStorage *_storage;
    REMAccount *_account;
    REMList *_parentList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *externalIdentifierForMarkedForDeletionObject;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) REMObjectID *parentAccountID;
@property (nonatomic, readonly) NSSet *reminderIDsToUndelete;
@property (nonatomic, readonly) _Bool remindersICSDisplayOrderChanged;
@property (nonatomic, readonly) NSArray *calDAVNotifications;
@property (nonatomic, readonly) NSArray *sharees;
@property (nonatomic, readonly) REMObjectID *sharedOwnerID;
@property (copy, nonatomic) REMListStorage *storage;
@property (nonatomic, readonly) NSOrderedSet *reminderIDsOrdering;
@property (nonatomic, readonly) NSData *reminderIDsMergeableOrderingData;
@property (nonatomic, readonly) _Bool isGroup;
@property (retain, nonatomic) REMList *parentList;
@property (nonatomic, readonly) NSString *badgeEmblem;
@property (nonatomic, readonly) _Bool showingLargeAttachments;
@property (nonatomic, readonly) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, readonly) REMObjectID *parentListID;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *sharedOwnerName;
@property (nonatomic, readonly) NSString *sharedOwnerAddress;
@property (nonatomic, readonly) long long sharingStatus;
@property (nonatomic, readonly) _Bool canBeShared;
@property (nonatomic, readonly) _Bool canBeIncludedInGroup;
@property (nonatomic, readonly) _Bool isShared;
@property (nonatomic, readonly) _Bool isOwnedByMe;
@property (nonatomic, readonly) _Bool isSharedToMe;
@property (copy, nonatomic, readonly) NSDate *lastUserAccessDate;
@property (nonatomic, readonly) NSString *daExternalIdentificationTag;
@property (nonatomic, readonly) NSDictionary *daBulkRequests;
@property (nonatomic, readonly) long long daDisplayOrder;
@property (nonatomic, readonly) _Bool daIsEventOnlyContainer;
@property (nonatomic, readonly) _Bool daIsReadOnly;
@property (nonatomic, readonly) _Bool daIsImmutable;
@property (nonatomic, readonly) _Bool daIsNotificationsCollection;
@property (nonatomic, readonly) REMListCalDAVNotificationContext *calDAVNotificationContext;
@property (nonatomic, readonly) REMListShareeContext *shareeContext;
@property (nonatomic) _Bool isPlaceholder;
@property (nonatomic, readonly) REMStore *store;
@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMAccount *account;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMColor *color;
@property (nonatomic, readonly) REMListAppearanceContext *appearanceContext;
@property (nonatomic, readonly) REMListSublistContext *sublistContext;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) NSString *externalModificationTag;
@property (nonatomic, readonly) NSString *daSyncToken;
@property (nonatomic, readonly) NSString *daPushKey;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)siriFoundInAppsListID;
+ (id)objectIDWithUUID:(id)arg1;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromTombstoneBlock;
+ (_Bool)rem_DA_supportsFetching;
+ (_Bool)rem_DA_supportsLazyDelete;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDsBlock;
+ (id)localAccountDefaultListID;
+ (_Bool)isSharedWithShareeCount:(unsigned long long)arg1 sharingStatus:(long long)arg2;
+ (id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)fetchRemindersWithError:(id *)arg1;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3;
- (id)ekColor;
- (id)formattedSharedOwnerName;
- (id)fetchRemindersAndSubtasksWithError:(id *)arg1;
- (id)sharingStatusText;
- (void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1;

@end
