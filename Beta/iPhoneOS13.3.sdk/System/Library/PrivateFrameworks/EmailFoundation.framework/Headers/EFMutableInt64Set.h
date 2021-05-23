/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFMutableInt64Set : NSObject

{
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    long long *_storage;
}

+ (id)indexSetWithIndexesInRange:(struct _EFUInt64Range)arg1;
+ (id)indexSet;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (long long)lastIndex;
- (void)addIndex:(long long)arg1;
- (long long)firstIndex;
- (_Bool)containsIndex:(long long)arg1;
- (long long)indexGreaterThanIndex:(long long)arg1;
- (void)addIndexes:(id)arg1;
- (unsigned long long)getIndexes:(long long *)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _EFUInt64Range *)arg3;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllIndexes;
- (void)removeIndex:(long long)arg1;
- (void)removeIndexes:(id)arg1;
- (void)intersectIndexes:(id)arg1;
- (id)commaSeparatedString;
- (long long)_insertionPositionOfIndex:(long long)arg1;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1;
- (long long)_positionOfIndex:(long long)arg1;
- (void)_garbageCollectStorageIfNecessary;

@end
