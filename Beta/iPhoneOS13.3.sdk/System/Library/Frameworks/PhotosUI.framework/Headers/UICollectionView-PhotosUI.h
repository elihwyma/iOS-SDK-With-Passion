/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionView.h>

@class NSArray;

@interface UICollectionView (PhotosUI)

@property (nonatomic, readonly) NSArray *pu_indexPathsForPreparedItems;

- (void)pu_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)next:(long long)arg1 indexPathFromIndexPath:(id)arg2;
- (id)pu_preparedCellForItemAtIndexPath:(id)arg1;
- (void)pu_animateUpdateOfCollectionViewSubview:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pu_scrollToRect:(struct CGRect)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;

@end
