/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/_NSScalarObjectID.h>

__attribute__((visibility("hidden")))
@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;
+ (id)_storeInfo1;
+ (void)_setStoreInfo1:(id)arg1;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (void)_storeDeallocated;

- (unsigned long long)retainCount;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithObject:(id)arg1;
- (id)entityName;
- (id)entity;
- (id)initWithPK64:(long long)arg1;
- (id)_storeInfo1;
- (long long)_referenceData64;
- (id)persistentStore;
- (id)_storeIdentifier;
- (_Bool)isTemporaryID;
- (id)_retainedURIString;
- (_Bool)_isPersistentStoreAlive;

@end
