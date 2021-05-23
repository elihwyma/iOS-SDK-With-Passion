/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSArray.h>

@interface NSArray (BaseBoard)

- (void)bs_each:(CDUnknownBlockType)arg1;
- (id)bs_filter:(CDUnknownBlockType)arg1;
- (id)bs_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)bs_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)bs_map:(CDUnknownBlockType)arg1;
- (id)bs_compactMap:(CDUnknownBlockType)arg1;
- (id)bs_reduce:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)bs_firstObjectOfClass:(Class)arg1;
- (id)bs_flatten;
- (id)bs_differenceWithArray:(id)arg1;
- (void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)bs_first:(unsigned long long)arg1;
- (id)bs_firstObjectOfClassNamed:(id)arg1;
- (id)bs_objectsOfClass:(Class)arg1;
- (id)bs_reverse;
- (id)bs_mapNoNulls:(CDUnknownBlockType)arg1;
- (id)bs_flattenedDifferenceWithArray:(id)arg1;

@end
