/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionView.h>

@interface UICollectionView (GKExtensions)

- (void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2;
- (void)_gkRegisterCellClass:(Class)arg1;
- (id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2;
- (id)_gkFocusingLayout;
- (id)_gkVisibleCellForIndexPath:(id)arg1;
- (void)_gkRegisterNib:(id)arg1 forCellClass:(Class)arg2;
- (void)_gkPerformWithoutViewReuse:(CDUnknownBlockType)arg1;
- (id)_gkReuseIdentifierForClass:(Class)arg1;
- (id)_gkHorizontalLayout;

@end
