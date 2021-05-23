/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSString, RLMObjectSchema, RLMRealm;

@interface RLMObjectBase : NSObject <Swift>

{
    struct BasicRow<realm::Table> _row;
    struct RLMObservationInfo *_observationInfo;
    struct RLMClassInfo *_info;
    RLMRealm *_realm;
    RLMObjectSchema *_objectSchema;
}

@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) RLMRealm *realm;
@property (nonatomic, readonly) id objectiveCMetadata;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)className;
+ (_Bool)shouldIncludeInDefaultSchema;
+ (id)sharedSchema;
+ (void)initializeLinkedObjectSchemas;
+ (Class)objectUtilClass:(_Bool)arg1;
+ (id)_realmObjectName;
+ (id)_realmColumnNames;
+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(id)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)mutableArrayValueForKey:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (id)objectSchema;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)descriptionWithMaxDepth:(unsigned long long)arg1;
- (unique_ptr_d0e912ad)makeThreadSafeReference;

@end
