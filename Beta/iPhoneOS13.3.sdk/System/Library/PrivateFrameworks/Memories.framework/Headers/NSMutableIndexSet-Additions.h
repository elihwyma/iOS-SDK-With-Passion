/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSMutableIndexSet.h>

@interface NSMutableIndexSet (Additions)

+ (id)indexSetWithIndexesInRCRange:(CDStruct_eba65aba)arg1;

- (void)closeGapsSmallerThan:(long long)arg1;
- (void)removeBlocksSmallerThan:(long long)arg1;
- (void)addIndexesInRCRange:(CDStruct_eba65aba)arg1;

@end
