/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable;

@interface REDependencyGraph : NSObject

{
    NSMapTable *_nodes;
}

@property (nonatomic, readonly) NSArray *allItems;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithPointerFunctions:(unsigned long long)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (_Bool)containsItem:(id)arg1;
- (void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)markItem:(id)arg1 dependentOnItem:(id)arg2;
- (_Bool)item:(id)arg1 isDependencyOfItem:(id)arg2;
- (void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)topologicalSortedItemsWithComparator:(CDUnknownBlockType)arg1;
- (void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4 comparator:(CDUnknownBlockType)arg5 warn:(_Bool)arg6;
- (id)topologicalSortedItems;

@end
