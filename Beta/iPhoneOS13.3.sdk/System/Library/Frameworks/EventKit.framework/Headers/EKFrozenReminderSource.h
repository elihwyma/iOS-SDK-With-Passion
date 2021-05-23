/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKFrozenReminderObject.h>

@class NSString, REMAccount;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) REMAccount *remAccount;

+ (Class)meltedClass;

- (int)flags;
- (id)UUID;
- (id)title;
- (long long)sourceType;
- (id)externalID;
- (id)lastSyncEndDate;
- (unsigned long long)lastSyncError;
- (id)meltedObjectInStore:(id)arg1;
- (id)delegatedAccountOwnerStoreID;
- (id)lastSyncStartDate;
- (void)setLastSyncError:(unsigned long long)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setLastSyncEndDate:(id)arg1;

@end
