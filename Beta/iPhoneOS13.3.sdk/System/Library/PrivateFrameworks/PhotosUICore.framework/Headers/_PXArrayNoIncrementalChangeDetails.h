/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXArrayChangeDetails.h>

@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails

- (_Bool)hasIncrementalChanges;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;

@end
