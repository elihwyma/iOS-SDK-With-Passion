/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

#import <EventKit/Swift-Protocol.h>

@class EKEventStore, EKObjectID, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface EKPersistentObject : NSObject <Swift>

{
    struct _opaque_pthread_mutex_t _lock;
    EKEventStore *_eventStore;
    EKObjectID *_objectID;
    NSMutableSet *_dirtyProperties;
    unsigned int _flags;
    NSMutableDictionary *_loadedProperties;
    NSMutableDictionary *_committedProperties;
}

@property (retain, nonatomic) NSMutableDictionary *committedProperties;
@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canBeConvertedToFullObject;
@property (nonatomic, readonly) _Bool isPartialObject;
@property (nonatomic, readonly) NSDictionary *preFrozenRelationshipObjects;
@property (nonatomic, readonly) _Bool isFrozen;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *semanticIdentifier;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)dump;
- (void)reset;
- (id)objectID;
- (void)rollback;
- (id)changeSet;
- (_Bool)refresh;
- (_Bool)isDirty;
- (void)_setObjectID:(id)arg1;
- (id)dirtyProperties;
- (_Bool)isPropertyDirty:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (void)changed;
- (_Bool)isNew;
- (id)committedValueForKey:(id)arg1;
- (Class)frozenClass;
- (id)meltedObjectInStore:(id)arg1;
- (id)primitiveRelationValueForKey:(id)arg1;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveStringValueForKey:(id)arg1;
- (id)primitiveURLValueForKey:(id)arg1;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (int)primitiveIntValueForKey:(id)arg1;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (id)primitiveDateValueForKey:(id)arg1;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (_Bool)primitiveBoolValueForKey:(id)arg1;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDataValueForKey:(id)arg1;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)_isNew;
- (struct EKPersistentObject *)frozenObject;
- (_Bool)existsInStore;
- (_Bool)_isPendingInsert;
- (id)existingMeltedObject;
- (_Bool)isPropertyUnavailable:(id)arg1;
- (_Bool)isCompletelyEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (id)primitiveNumberValueForKey:(id)arg1;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (void)unloadPropertyForKey:(id)arg1;
- (void)_setEventStore:(id)arg1;
- (id)initWithAlternateUniverseObject:(struct EKPersistentObject *)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (_Bool)pushDirtyProperties:(id *)arg1;
- (_Bool)setAttributes:(id)arg1 relations:(id)arg2 objectID:(id)arg3 eventStore:(id)arg4 error:(id *)arg5;
- (_Bool)_isPendingUpdate;
- (_Bool)_isPendingDelete;
- (id)_loadedPropertyKeys;
- (void)_releaseLoadedProperties;
- (void)_setDefaultPropertiesLoaded:(_Bool)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3;
- (void)_createLoadedPropertiesIfNeeded;
- (_Bool)_loadRelationForKey:(id)arg1 value:(id *)arg2;
- (void)_loadDefaultPropertiesIfNeeded;
- (_Bool)_loadChildIdentifiersForKey:(id)arg1 values:(id *)arg2;
- (void)_addDirtyProperty:(id)arg1;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(CDUnknownBlockType)arg3;
- (id)_loadStringValueForKey:(id)arg1;
- (void)_takeValues:(id)arg1 forKeys:(id)arg2;
- (_Bool)isPropertyLoaded:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(_Bool)arg3;
- (void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;
- (_Bool)_areDefaultPropertiesLoaded;
- (void)saved;
- (void)_setPendingInsert:(_Bool)arg1;
- (void)_setPendingUpdate:(_Bool)arg1;
- (void)_setPendingDelete:(_Bool)arg1;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)takeValues:(id)arg1 forKeys:(id)arg2;
- (void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;

@end
