/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXVisualPositionsChangeDetails.h>

@interface PXAnchorInsertingOrRemovingVisualPositionsChangeDetails : PXVisualPositionsChangeDetails

{
    _Bool _anchorInserted;
    long long _anchorRelativePosition;
}

- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6;
- (CDStruct_b8f58034)bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1;
- (CDStruct_b8f58034)bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1;
- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorInserted:(_Bool)arg7 relativePosition:(long long)arg8;

@end
