/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObjectID.h>

__attribute__((visibility("hidden")))
@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (id)alloc;
+ (id)retain;
+ (void)release;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
+ (long long)version;
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;
+ (id)_storeInfo1;
+ (void)_setStoreInfo1:(id)arg1;
+ (char *)generatedNameSuffix;
+ (id)_retain_1;
+ (void)_release_1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (void)_storeDeallocated;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)entityName;
- (id)entity;
- (id)URIRepresentation;
- (id)_storeInfo1;
- (id)persistentStore;
- (id)_storeIdentifier;
- (_Bool)isTemporaryID;
- (_Bool)_isPersistentStoreAlive;

@end
