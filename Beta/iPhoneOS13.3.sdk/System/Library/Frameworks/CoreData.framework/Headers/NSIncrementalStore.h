/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStore.h>

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore

{
    NSDictionary *_storeMetadata;
    unsigned long long _lastIdentifier;
    void *_reserveda;
    void *_reservedb;
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (id)identifierForNewStoreAtURL:(id)arg1;

- (void)dealloc;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (_Bool)load:(id *)arg1;
- (_Bool)loadMetadata:(id *)arg1;
- (void)_setMetadata:(id)arg1 includeVersioning:(_Bool)arg2;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)_rawMetadata__;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2;
- (id)referenceObjectForObjectID:(id)arg1;
- (void)_preflightCrossCheck;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (_Bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)newObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;

@end
