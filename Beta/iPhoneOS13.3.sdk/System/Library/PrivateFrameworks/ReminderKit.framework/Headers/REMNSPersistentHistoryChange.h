/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMChangeObject.h>

@class NSArray, NSPersistentHistoryChange, REMChangeTransaction, _REMNSPersistentHistoryChangeStorage;

@interface REMNSPersistentHistoryChange : REMChangeObject

{
    _Bool _isCoalesced;
    REMChangeTransaction *_internal_ChangeTransaction;
    NSArray *_coalescedChanges;
    _REMNSPersistentHistoryChangeStorage *_storage;
    NSPersistentHistoryChange *_persistentHistoryChange;
}

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (weak, readonly) NSPersistentHistoryChange *persistentHistoryChange;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) _Bool isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (_Bool)supportsSecureCoding;
+ (id)shortStringForChangeType:(long long)arg1;
+ (id)stringForChangeType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)changeType;
- (id)initWithStorage:(id)arg1;
- (id)changedObjectID;
- (id)tombstone;
- (id)transaction;
- (long long)changeID;
- (id)updatedProperties;
- (id)initWithPersistentHistoryChange:(id)arg1;
- (id)changedManagedObjectID;
- (void)resolveWithObjectID:(id)arg1;
- (id)copyForCoalescing;

@end
