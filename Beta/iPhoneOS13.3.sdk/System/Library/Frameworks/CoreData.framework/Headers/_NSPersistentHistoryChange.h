/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentHistoryChange.h>

@class NSData, NSDictionary, NSManagedObjectID, NSPersistentHistoryTransaction, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryChange : NSPersistentHistoryChange

{
    long long _changeID;
    NSManagedObjectID *_changedObjectID;
    long long _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
    NSManagedObjectID *_backingObjectID;
}

+ (_Bool)supportsSecureCoding;
+ (id)_updatedPropertiesForEntity:(id)arg1 andData:(id)arg2;
+ (id)_propertyDataForEntity:(id)arg1 withSetOfPropertyNames:(id)arg2;
+ (id)_dataMaskForEntity:(id)arg1 andDeltaMask:(struct __CFBitVector *)arg2;
+ (id)_mergeOldMask:(id)arg1 andNewMask:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)changeType;
- (void)_setTransaction:(id)arg1;
- (id)changedObjectID;
- (id)tombstone;
- (id)transaction;
- (id)_backingObjectID;
- (id)initWithDictionary:(id)arg1 andChangeObjectID:(id)arg2;
- (long long)changeID;
- (id)updatedProperties;

@end
