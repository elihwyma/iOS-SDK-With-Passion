/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCMMLayoutGenerator : PXLayoutGenerator

+ (id)layoutGeneratorForLayoutType:(long long)arg1 withReferenceSize:(struct CGSize)arg2 additionalTileCount:(unsigned long long)arg3 headerHeight:(double)arg4 itemSize:(struct CGSize)arg5 interItemSpacing:(struct CGSize)arg6 contentInsets:(struct UIEdgeInsets)arg7;
+ (id)_defaultGridLayoutGeneratorWithReferenceSize:(struct CGSize)arg1 additionalTileCount:(unsigned long long)arg2 headerHeight:(double)arg3 itemSize:(struct CGSize)arg4 interItemSpacing:(struct CGSize)arg5 contentInsets:(struct UIEdgeInsets)arg6;
+ (id)_gridLayoutGeneratorWithReferenceSize:(struct CGSize)arg1 columnCount:(unsigned long long)arg2 additionalTileCount:(unsigned long long)arg3 headerHeight:(double)arg4 interItemSpacing:(struct CGSize)arg5;
+ (id)_defaultEditorialLayoutGeneratorWithReferenceSize:(struct CGSize)arg1 headerHeight:(double)arg2 interItemSpacing:(struct CGSize)arg3;

@end
