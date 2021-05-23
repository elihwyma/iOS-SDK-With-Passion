/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSIndexSet : NSObject <Swift>

{
    struct {
        unsigned int _isEmpty:1;
        unsigned int _hasSingleRange:1;
        unsigned int _cacheValid:1;
        unsigned int _reservedArrayBinderController:29;
    } _indexSetFlags;
    union {
        struct {
            struct _NSRange _range;
        } _singleRange;
        struct {
            void *_data;
            void *_reserved;
        } _multipleRanges;
    } _internal;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long firstIndex;
@property (readonly) unsigned long long lastIndex;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)indexSetWithIndexesInRange:(struct _NSRange)arg1;
+ (id)_alloc;
+ (id)indexSet;
+ (id)indexSetWithIndex:(unsigned long long)arg1;
+ (id)indexSetWithIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)__getContainmentVector:(out _Bool *)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)containsIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (unsigned long long)rangeCount;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfIndexesInRange:(struct _NSRange)arg1;
- (void)__forwardEnumerateRanges:(CDUnknownBlockType)arg1;
- (id)_init;
- (id)replacementObjectForPortCoder:(id)arg1;
- (unsigned long long)_indexAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (_Bool)isEqualToIndexSet:(id)arg1;
- (unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexClosestToIndex:(unsigned long long)arg1 equalAllowed:(_Bool)arg2 following:(_Bool)arg3;
- (unsigned long long)getIndexes:(unsigned long long *)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _NSRange *)arg3;
- (unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)arg1;
- (_Bool)containsIndexesInRange:(struct _NSRange)arg1;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIndexesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)indexesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexLessThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)arg1;
- (_Bool)containsIndexes:(id)arg1;
- (_Bool)intersectsIndexesInRange:(struct _NSRange)arg1;
- (id)_numberEnumerator;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIndexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)indexPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)indexInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)enumerateRangesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
