/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@interface MFSparseMutable64IndexSet : NSObject

{
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    unsigned long long *_storage;
}

+ (id)indexSet;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)addIndex:(unsigned long long)arg1;
- (unsigned long long)firstIndex;
- (_Bool)containsIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (void)addIndexes:(id)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (unsigned long long)_insertionPositionOfIndex:(unsigned long long)arg1;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1;
- (unsigned long long)_positionOfIndex:(unsigned long long)arg1;
- (void)_garbageCollectStorageIfNecessary;
- (void)enumerateIndexesWithBlock:(CDUnknownBlockType)arg1;

@end
