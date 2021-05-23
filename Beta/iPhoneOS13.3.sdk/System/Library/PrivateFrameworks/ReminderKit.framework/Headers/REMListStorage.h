/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, REMColor, REMObjectID, REMResolutionTokenMap;

@interface REMListStorage : NSObject <Swift>

{
    _Bool _hasDeserializedReminderIDsMergeableOrdering;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    _Bool _isGroup;
    _Bool _showingLargeAttachments;
    _Bool _remindersICSDisplayOrderChanged;
    _Bool _daIsEventOnlyContainer;
    _Bool _daIsReadOnly;
    _Bool _daIsImmutable;
    _Bool _daIsNotificationsCollection;
    _Bool _isPlaceholder;
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daSyncToken;
    NSString *daPushKey;
    REMObjectID *_accountID;
    REMObjectID *_objectID;
    NSString *_name;
    REMColor *_color;
    NSString *_badgeEmblem;
    REMObjectID *_parentAccountID;
    REMObjectID *_parentListID;
    NSData *_reminderIDsMergeableOrderingData;
    REMResolutionTokenMap *_resolutionTokenMap;
    NSSet *_reminderIDsToUndelete;
    NSString *_sharedOwnerName;
    NSString *_sharedOwnerAddress;
    long long _sharingStatus;
    NSArray *_sharees;
    REMObjectID *_sharedOwnerID;
    NSDate *_lastUserAccessDate;
    NSArray *_calDAVNotifications;
    NSString *_daExternalIdentificationTag;
    NSDictionary *_daBulkRequests;
    long long _daDisplayOrder;
}

@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) _Bool isGroup;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (nonatomic) _Bool showingLargeAttachments;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (nonatomic, readonly) NSString *displayName;
@property (retain, nonatomic) NSData *reminderIDsMergeableOrderingData;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSSet *reminderIDsToUndelete;
@property (nonatomic) _Bool remindersICSDisplayOrderChanged;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (copy, nonatomic) NSString *sharedOwnerAddress;
@property (nonatomic) long long sharingStatus;
@property (retain, nonatomic) NSArray *sharees;
@property (retain, nonatomic) REMObjectID *sharedOwnerID;
@property (copy, nonatomic) NSDate *lastUserAccessDate;
@property (retain, nonatomic) NSArray *calDAVNotifications;
@property (retain, nonatomic) NSString *daExternalIdentificationTag;
@property (retain, nonatomic) NSDictionary *daBulkRequests;
@property (nonatomic) long long daDisplayOrder;
@property (nonatomic) _Bool daIsEventOnlyContainer;
@property (nonatomic) _Bool daIsReadOnly;
@property (nonatomic) _Bool daIsImmutable;
@property (nonatomic) _Bool daIsNotificationsCollection;
@property (nonatomic) _Bool isPlaceholder;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id *)arg2;
+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)storeGeneration;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(_Bool)arg4 reminderIDsMergeableOrdering:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(_Bool)arg4 reminderIDsMergeableOrderingData:(id)arg5;
- (id)reminderIDsMergeableOrdering;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3;
- (id)ekColor;

@end
