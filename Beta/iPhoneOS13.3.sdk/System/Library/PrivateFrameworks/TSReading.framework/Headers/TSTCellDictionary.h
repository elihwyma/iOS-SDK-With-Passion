/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject

{
    TSUIntegerKeyDictionary *mDict;
    struct _opaque_pthread_rwlock_t mDictRWLock;
}

- (id)init;
- (void)dealloc;
- (id)allCells;
- (void)setCell:(id)arg1 atCellID:(CDStruct_0441cfb5)arg2;
- (id)cellAtCellID:(CDStruct_0441cfb5)arg1;
- (void)removeAllCells;
- (void)applyBlockToAllCells:(CDUnknownBlockType)arg1;

@end
