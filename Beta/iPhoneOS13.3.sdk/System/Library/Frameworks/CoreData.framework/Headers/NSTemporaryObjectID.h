/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID

{
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (id)alloc;
+ (id)retain;
+ (void)release;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
+ (long long)version;
+ (id)_retain_1;
+ (void)_release_1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (void)_storeDeallocated;
+ (id)initWithEntity:(id)arg1;
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (Class)classForStore:(id)arg1;

- (unsigned long long)retainCount;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (void)finalize;
- (id)entity;
- (id)URIRepresentation;
- (id)persistentStore;
- (id)_storeIdentifier;
- (_Bool)isTemporaryID;
- (id)_referenceData;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (void)_setPersistentStore:(id)arg1;
- (id)_retainedURIString;
- (_Bool)_isPersistentStoreAlive;
- (id)initWithEntity:(id)arg1;
- (int)_temporaryIDCounter;

@end
