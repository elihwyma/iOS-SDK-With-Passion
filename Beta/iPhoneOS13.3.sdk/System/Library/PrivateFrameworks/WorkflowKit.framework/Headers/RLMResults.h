/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSString, RLMRealm;

@interface RLMResults : NSObject <Swift>

{
    struct Results _results;
    RLMRealm *_realm;
    struct RLMClassInfo *_info;
    _Bool _optional;
}

@property (nonatomic, readonly, getter=isAttached) _Bool attached;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) int type;
@property (nonatomic, getter=isOptional) _Bool optional;
@property (copy, nonatomic, readonly) NSString *objectClassName;
@property (nonatomic, readonly) RLMRealm *realm;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id objectiveCMetadata;
@property (nonatomic, readonly) struct RLMClassInfo *objectInfo;

+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(id)arg3;
+ (id)resultsWithObjectInfo:(struct RLMClassInfo *)arg1 results:(struct Results *)arg2;
+ (id)emptyDetachedResults;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)firstObject;
- (id)lastObject;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id).cxx_construct;
- (struct TableView)tableView;
- (id)initPrivate;
- (id)initWithResults:(struct Results)arg1;
- (id)objectsWhere:(id)arg1 args:(char *)arg2;
- (id)objectsWithPredicate:(id)arg1;
- (id)objectsWhere:(id)arg1;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (unique_ptr_d0e912ad)makeThreadSafeReference;
- (void)deleteObjectsFromRealm;
- (id)initWithObjectInfo:(struct RLMClassInfo *)arg1 results:(struct Results *)arg2;
- (unsigned long long)indexOfObjectWhere:(id)arg1 args:(char *)arg2;
- (unsigned long long)indexOfObjectWithPredicate:(id)arg1;
- (id)aggregate:(id)arg1 method:(id)arg2 methodName:(_Bool)arg3 returnNilForEmpty: /* Error: Ran out of types for this method. */;
- (id)_aggregateForKeyPath:(id)arg1 method:(id)arg2 methodName:(_Bool)arg3 returnNilForEmpty: /* Error: Ran out of types for this method. */;
- (id)averageOfProperty:(id)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (id)fastEnumerator;
- (unsigned long long)indexOfObjectWhere:(id)arg1;
- (id)sortedResultsUsingKeyPath:(id)arg1 ascending:(_Bool)arg2;
- (id)minOfProperty:(id)arg1;
- (id)maxOfProperty:(id)arg1;
- (id)sumOfProperty:(id)arg1;
- (id)subresultsWithResults:(struct Results)arg1;
- (id)distinctResultsUsingKeyPaths:(id)arg1;

@end
