/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMURangeArray.h>

@interface VMUNonOverlappingRangeArray : VMURangeArray

- (void)addOrExtendRange:(struct _VMURange)arg1;
- (void)mergeRange:(struct _VMURange)arg1;
- (void)mergeRange:(struct _VMURange)arg1 excludingRanges:(id)arg2;
- (void)_mergeAllBitsOfRange:(struct _VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(_Bool)arg3;
- (void)sortAndMergeRanges;
- (void)mergeRanges:(id)arg1;
- (void)mergeRanges:(id)arg1 excludingRanges:(id)arg2;
- (id)subtract:(id)arg1 mergeRanges:(_Bool)arg2;

@end
