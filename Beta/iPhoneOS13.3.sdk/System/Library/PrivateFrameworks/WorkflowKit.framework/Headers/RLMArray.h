/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSMutableArray, NSString, RLMObjectBase, RLMRealm;

@interface RLMArray : NSObject <Swift>

{
    NSString *_objectClassName;
    int _type;
    _Bool _optional;
    NSString *_key;
    RLMObjectBase *_parentObject;
    NSMutableArray *_backingArray;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly, getter=isOptional) _Bool optional;
@property (copy, nonatomic, readonly) NSString *objectClassName;
@property (nonatomic, readonly) RLMRealm *realm;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id objectiveCMetadata;

+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(id)arg3;

- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)firstObject;
- (id)lastObject;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addObjects:(id)arg1;
- (int)typeForProperty:(id)arg1;
- (id)initWithObjectClassName:(id)arg1;
- (id)initWithObjectType:(int)arg1 optional:(_Bool)arg2;
- (id)aggregateProperty:(id)arg1 operation:(id)arg2 method:(SEL)arg3;
- (id)objectsWhere:(id)arg1 args:(char *)arg2;
- (id)objectsWithPredicate:(id)arg1;
- (id)objectsWhere:(id)arg1;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (id)descriptionWithMaxDepth:(unsigned long long)arg1;
- (unique_ptr_d0e912ad)makeThreadSafeReference;
- (unsigned long long)indexOfObjectWhere:(id)arg1 args:(char *)arg2;
- (unsigned long long)indexOfObjectWithPredicate:(id)arg1;
- (id)averageOfProperty:(id)arg1;
- (id)sortedResultsUsingDescriptors:(id)arg1;
- (unsigned long long)indexOfObjectWhere:(id)arg1;
- (id)sortedResultsUsingKeyPath:(id)arg1 ascending:(_Bool)arg2;
- (id)minOfProperty:(id)arg1;
- (id)maxOfProperty:(id)arg1;
- (id)sumOfProperty:(id)arg1;

@end
