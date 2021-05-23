/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionView.h>

@interface UICollectionView (CKUtilities)

- (void)__ck_reloadDataKeepingSelection;
- (struct CGSize)__ck_contentSize;
- (struct CGPoint)__ck_scrollToBottomContentOffsetHidingIndexPath:(id)arg1;
- (id)__ck_indexPathForLastItem;
- (id)__ck_indexPathForReplyItem;
- (_Bool)__ck_isScrolledToBottomHidingIndexPath:(id)arg1;
- (void)__ck_scrollToTopOfCellAtIndexPath:(id)arg1 hidingCellAtIndexPath:(id)arg2 animated:(_Bool)arg3;

@end
