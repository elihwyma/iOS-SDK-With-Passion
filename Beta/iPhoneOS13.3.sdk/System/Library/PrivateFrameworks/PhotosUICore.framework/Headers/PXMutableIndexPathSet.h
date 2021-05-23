/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXIndexPathSet.h>

@interface PXMutableIndexPathSet : PXIndexPathSet

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)removeIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)unionIndexPathSet:(id)arg1;
- (void)minusIndexPathSet:(id)arg1;
- (void)removeAllIndexPaths;
- (void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;

@end
