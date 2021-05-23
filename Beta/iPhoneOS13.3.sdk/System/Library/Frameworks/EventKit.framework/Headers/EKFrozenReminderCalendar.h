/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKFrozenReminderObject.h>

@class REMListChangeItem;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderCalendar : EKFrozenReminderObject

{
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)_list;
- (id)calendarIdentifier;
- (int)flags;
- (id)source;
- (id)UUID;
- (id)title;
- (id)uniqueIdentifier;
- (id)_account;
- (id)externalID;
- (int)allowedEntities;
- (id)symbolicColorName;
- (int)displayOrder;
- (unsigned long long)sharingStatus;
- (_Bool)isPublished;
- (id)sharedOwnerName;
- (id)sharees;
- (id)remObjectID;
- (id)initNewListInStore:(id)arg1;
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (id)colorString;
- (_Bool)isColorDisplayOnly;
- (id)publishedURL;
- (id)hexColorStringFromREMColor:(id)arg1;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)arg1;
- (id)frozenReminderSource;
- (id)REMColorFromEKHexColorString:(id)arg1;
- (id)updateListWithSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;

@end
