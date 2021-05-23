/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

@class EKChangeSet, EKReminderStore, NSArray;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderObject : EKPersistentObject

{
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
    NSArray *_path;
}

@property (nonatomic, readonly) EKChangeSet *uncommittedChanges;
@property (copy, nonatomic) NSArray *path;

+ (Class)frozenClass;
+ (_Bool)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (Class)meltedClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (id)uniqueIdentifier;
- (id)changeSet;
- (_Bool)isFrozen;
- (_Bool)isNew;
- (int)entityType;
- (id)remObjectID;
- (_Bool)isPartialObject;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (id)REMObject;
- (id)updateParentToCommitSelf:(id)arg1;
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (EKPersistentObject_556b3b22 *)frozenObject;
- (_Bool)existsInStore;
- (id)existingMeltedObject;
- (_Bool)isPropertyUnavailable:(id)arg1;
- (_Bool)isCompletelyEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (id)semanticIdentifier;
- (id)valueForSingleValueKey:(id)arg1 backingValue:(CDUnknownBlockType)arg2;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2;
- (id)updatedFrozenObjectWithChanges:(id)arg1;

@end
