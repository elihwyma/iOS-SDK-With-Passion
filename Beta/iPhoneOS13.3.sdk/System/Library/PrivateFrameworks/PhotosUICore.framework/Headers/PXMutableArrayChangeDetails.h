/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXArrayChangeDetails.h>

@interface PXMutableArrayChangeDetails : PXArrayChangeDetails

{
    _Bool _isNonIncremental;
}

+ (id)changeDetailsWithNoIncrementalChanges;
+ (_Bool)_mutableCopyInputs;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasIncrementalChanges;
- (void)addChangeDetails:(id)arg1;
- (void)_becomeNonIncremental;
- (void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)arg1;
- (void)_addAdditionalRemovedIndex:(unsigned long long)arg1 afterChangesIndex:(unsigned long long)arg2;
- (void)_addAdditionalRemovedIndexSet:(id)arg1 afterChangesIndex:(id)arg2;
- (void)_addRemovedIndex:(unsigned long long)arg1;
- (void)_addRemovedIndexes:(id)arg1;
- (void)_addInsertedRange:(struct _NSRange)arg1;
- (void)_addInsertedIndexes:(id)arg1;
- (void)_updateMovesWithChangesDetails:(id)arg1;
- (void)_updateChangedIndexesWithChangeDetails:(id)arg1;

@end
