/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSMutableIndexSet.h>

@interface NSMutableIndexSet (CATShifting)

- (void)cat_moveIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)cat_shiftAndRemoveIndex:(unsigned long long)arg1;
- (void)cat_shiftAndAddIndexesInRange:(struct _NSRange)arg1;
- (void)cat_shiftAndRemoveIndexesInRange:(struct _NSRange)arg1;
- (void)cat_shiftAndAddIndex:(unsigned long long)arg1;

@end
