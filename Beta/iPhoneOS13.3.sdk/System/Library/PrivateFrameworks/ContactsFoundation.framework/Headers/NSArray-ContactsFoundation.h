/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSArray.h>

@interface NSArray (ContactsFoundation)

+ (id)_cn_arrayWithObject:(id)arg1 count:(unsigned long long)arg2;

- (id)_cn_slicesWithMaximumCount:(unsigned long long)arg1;
- (id)_cn_map:(CDUnknownBlockType)arg1;
- (void)_cn_each:(CDUnknownBlockType)arg1;
- (_Bool)_cn_any:(CDUnknownBlockType)arg1;
- (id)_cn_filter:(CDUnknownBlockType)arg1;
- (id)_cn_flatten;
- (id)_cn_reduce:(CDUnknownBlockType)arg1 initialValue:(id)arg2;
- (id)_cn_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)_cn_take:(unsigned long long)arg1;
- (id)_cn_flatMap:(CDUnknownBlockType)arg1;
- (id)_cn_partition:(CDUnknownBlockType)arg1;
- (id)_cn_arrayByRotatingRange:(struct _NSRange)arg1 by:(long long)arg2;
- (unsigned long long)_cn_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)_cn_indexBy:(CDUnknownBlockType)arg1;
- (id)_cn_indicesForObjects:(id)arg1;
- (_Bool)_cn_all:(CDUnknownBlockType)arg1;
- (id)_cn_groupBy:(CDUnknownBlockType)arg1;
- (id)_cn_join:(id)arg1;
- (id)_cn_zip:(id)arg1;
- (id)_cn_balancedSlicesWithMaximumCount:(unsigned long long)arg1;
- (void)_cn_each:(CDUnknownBlockType)arg1 until:(CDUnknownBlockType)arg2;
- (id)_cn_joinWithBlock:(CDUnknownBlockType)arg1;
- (id)_cn_tail;
- (void)_cn_zip:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_cn_each:(CDUnknownBlockType)arg1 untilCancelled:(id)arg2;
- (void)_cn_each_reverse:(CDUnknownBlockType)arg1;
- (id)_cn_concurrentMap:(CDUnknownBlockType)arg1;
- (id)_cn_compactMap:(CDUnknownBlockType)arg1;
- (_Bool)_cn_none:(CDUnknownBlockType)arg1;
- (_Bool)_cn_containsObject:(id)arg1;
- (id)_cn_distinctObjects;
- (id)_cn_reduce:(CDUnknownBlockType)arg1;
- (id)_cn_skip:(unsigned long long)arg1;
- (id)_cn_skipLast:(unsigned long long)arg1;
- (id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (id)_cn_takeLast:(unsigned long long)arg1;
- (id)_cn_reversed;
- (id)_cn_safeSortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (_Bool)_cn_isIdenticalToArray:(id)arg1;
- (_Bool)_cn_isNonEmpty;

@end
