/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject

{
    NSArray *_orderedObjects;
    REDependencyGraph *_dependencyGraph;
    _Bool _needsUpdate;
    unsigned long long _batchCount;
    NSArray *_comparators;
}

@property (nonatomic, readonly) NSArray *comparators;
@property (nonatomic, readonly) unsigned long long count;

- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)updateObject:(id)arg1;
- (void)_createDependenciesForObject:(id)arg1;
- (void)_performOrMarkUpdate;
- (void)_updateContentOrder;
- (id)initWithComparators:(id)arg1;
- (void)sortAllObjects;

@end
