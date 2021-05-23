/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@interface VMURangeArray : NSObject

{
    unsigned int _count;
    struct _VMURange *_ranges;
    unsigned int _max;
    _Bool _sorted;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)count;
- (struct _VMURange)rangeAtIndex:(unsigned int)arg1;
- (struct _VMURange)range;
- (void)setCapacity:(unsigned int)arg1;
- (void)sort;
- (void)addRange:(struct _VMURange)arg1;
- (_Bool)intersectsRange:(struct _VMURange)arg1;
- (struct _VMURange *)ranges;
- (unsigned long long)indexForLocation:(unsigned long long)arg1;
- (void)removeRangeAtIndex:(unsigned int)arg1;
- (void)removeAllRanges;
- (id)initWithRanges:(const struct _VMURange *)arg1 count:(unsigned int)arg2;
- (void)addRanges:(id)arg1;
- (struct _VMURange)rangeForLocation:(unsigned long long)arg1;
- (void)insertRange:(struct _VMURange)arg1 atIndex:(unsigned int)arg2;
- (_Bool)intersectsLocation:(unsigned long long)arg1;
- (struct _VMURange)subrangeNotExcludedBySelfForRange:(struct _VMURange)arg1;
- (struct _VMURange)largestRange;
- (unsigned long long)sumLengths;

@end
