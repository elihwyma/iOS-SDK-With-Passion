/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSQueryGenerationToken.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSQueryGenerationToken : NSQueryGenerationToken

{
    NSString *_storeIdentifier;
    id _store;
    id _generationIdentifier;
    _Bool _isCompound;
    _Bool _isSingleton;
    _Bool _freeValueOnDealloc;
    _Bool _isUnmoored;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)identifierIsForNonGenerationalStore:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_token;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)_generationalComponentForStore:(id)arg1;
- (id)initWithValue:(id)arg1 store:(id)arg2;
- (id)_retainedPersistentStore;
- (id)_storeIdentifier;
- (id)_initWithValue:(id)arg1 singleton:(_Bool)arg2;
- (id)_storesForRequestRoutingFrom:(id)arg1 error:(id *)arg2;
- (id)initWithValue:(id)arg1 store:(id)arg2 freeValueOnDealloc:(_Bool)arg3;
- (id)_expectedStores;
- (void)_makeConcrete:(_Bool)arg1;
- (_Bool)_moor:(id)arg1 error:(id *)arg2;
- (id)initWithCompoundValue:(id)arg1;
- (id)initForNonGenerationalStore:(id)arg1;
- (_Bool)isUnmoored;
- (void)_setIsUnmoored:(_Bool)arg1;
- (void)_setFreeValue:(_Bool)arg1;
- (void)_setPersistentStoreReference:(id)arg1;

@end
