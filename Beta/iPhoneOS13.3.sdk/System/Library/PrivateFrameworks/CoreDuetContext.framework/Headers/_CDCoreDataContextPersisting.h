/*
 Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, _DKCoreDataStorage;

@protocol OS_dispatch_queue;

@interface _CDCoreDataContextPersisting : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _DKCoreDataStorage *_storage;
    NSCountedSet *_keyPathRegistrationCount;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) _DKCoreDataStorage *storage;
@property (nonatomic, readonly) NSCountedSet *keyPathRegistrationCount;

+ (id)persistenceWithDirectory:(id)arg1;
+ (id)persistenceWithStorage:(id)arg1;

- (id)initWithStorage:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)saveRegistration:(id)arg1;
- (void)deleteRegistration:(id)arg1;
- (id)loadValues;
- (id)loadRegistrations;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)arg1;
- (id)getMOC;
- (id)uniquenessPredicateForKeyPath:(id)arg1;
- (_Bool)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insertOrUpdate:(CDUnknownBlockType)arg3;
- (_Bool)fromEntityWithName:(id)arg1 deleteObjectsMatching:(id)arg2;
- (id)uniqunessPredicateForRegistration:(id)arg1;
- (_Bool)fromEntityWithName:(id)arg1 fetchAllObjectsMatchingPredicate:(id)arg2 handlingMOs:(CDUnknownBlockType)arg3;

@end
