/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentHistoryTransaction.h>

@class NSArray, NSData, NSManagedObjectID, NSPersistentStoreCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction

{
    long long _rowIdentifier;
    double _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)token;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timestamp;
- (id)changes;
- (id)bundleID;
- (id)author;
- (id)_coordinator;
- (id)storeID;
- (long long)transactionNumber;
- (id)processID;
- (id)contextName;
- (id)initialQueryGenerationToken;
- (id)postQueryGenerationToken;
- (id)objectIDNotification;
- (id)_persistentStore;
- (id)_userInfoFromChanges;
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;
- (void)_setCoordinator:(id)arg1;
- (void)_setChanges:(id)arg1;
- (id)_backingObjectID;

@end
