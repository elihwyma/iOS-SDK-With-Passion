/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSArray.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@interface NSArray (EmailFoundationAdditions) <Swift>

@property (nonatomic, readonly) NSArray *ef_notEmpty;
@property (nonatomic, readonly) NSArray *ef_tail;
@property (nonatomic, readonly) NSArray *ef_flatten;
@property (nonatomic, readonly) NSArray *ef_permutations;
@property (nonatomic, readonly) NSArray *ef_reverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (id)ef_filter:(CDUnknownBlockType)arg1;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)ef_map:(CDUnknownBlockType)arg1;
- (id)ef_compactMap:(CDUnknownBlockType)arg1;
- (id)ef_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_flatMap:(CDUnknownBlockType)arg1;
- (id)ef_groupBy:(CDUnknownBlockType)arg1;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (id)ef_partition:(CDUnknownBlockType)arg1;
- (id)ef_mapSelector:(SEL)arg1;
- (_Bool)ef_any:(CDUnknownBlockType)arg1;
- (id)ef_objectsPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (unsigned long long)ef_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)ef_objectSameAs:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)ef_reduce:(CDUnknownBlockType)arg1;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 overlapBy:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)ef_prefix:(unsigned long long)arg1;
- (id)ef_arrayByAddingAbsentObjectsFromArray:(id)arg1;
- (id)ef_indicesOfStringsWithPrefix:(id)arg1;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 objectArrayBlock:(CDUnknownBlockType)arg2;
- (_Bool)ef_all:(CDUnknownBlockType)arg1;
- (id)ef_lastObjectPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)ef_countObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_uniquifyWithComparator:(CDUnknownBlockType)arg1;
- (id)ef_compactMapSelector:(SEL)arg1;
- (id)ef_subarraysOfSize:(unsigned long long)arg1;

@end
