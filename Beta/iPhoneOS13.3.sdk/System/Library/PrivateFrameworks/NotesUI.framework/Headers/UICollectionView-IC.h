/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UICollectionView.h>

@class NSIndexPath;

@interface UICollectionView (IC)

@property (nonatomic, readonly) NSIndexPath *ic_firstItemIndexPath;
@property (nonatomic, readonly) struct CGRect ic_firstSelectedItemFrame;

- (struct CGRect)ic_frameForItemAtIndexPath:(id)arg1;
- (void)ic_deselectAllItems;
- (id)ic_cellAtLocation:(struct CGPoint)arg1;
- (_Bool)ic_selectFirstItemIfNoneSelected;
- (void)ic_selectFirstUnselectedCellWithFrame:(struct CGRect)arg1;

@end
