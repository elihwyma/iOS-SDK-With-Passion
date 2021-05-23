/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@interface NSRunStorage : NSObject

{
    unsigned long long _count;
    unsigned long long _elementSize;
    unsigned long long _numBlocks;
    unsigned long long _maxBlocks;
    unsigned long long _indexDeltaStartBlock;
    long long _indexDelta;
    struct _NSRunBlock *_runs;
    unsigned long long _cachedBlock;
    struct _NSRange _cachedBlockRange;
    unsigned long long _gapBlockIndex;
}

+ (void)initialize;
+ (void)_setConsistencyCheckingEnabled:(_Bool)arg1 superCheckEnabled:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)insertElement:(void *)arg1 range:(struct _NSRange)arg2 coalesceRuns:(_Bool)arg3;
- (void)replaceElementsInRange:(struct _NSRange)arg1 withElement:(void *)arg2 coalesceRuns:(_Bool)arg3;
- (void)removeElementsInRange:(struct _NSRange)arg1 coalesceRuns:(_Bool)arg2;
- (id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)_allocData:(unsigned long long)arg1;
- (void)_deallocData;
- (id)initWithRunStorage:(id)arg1;
- (void)_reallocData:(unsigned long long)arg1;
- (unsigned long long)elementSize;
- (void *)elementAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)_moveGapToBlockIndex:(unsigned long long)arg1;
- (void)_consistencyError:(long long)arg1 startAtZeroError:(_Bool)arg2 cacheError:(_Bool)arg3 inconsistentBlockError:(_Bool)arg4;
- (void)_ensureCapacity:(unsigned long long)arg1;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange)arg1;
- (void)_consistencyCheck:(long long)arg1;

@end
