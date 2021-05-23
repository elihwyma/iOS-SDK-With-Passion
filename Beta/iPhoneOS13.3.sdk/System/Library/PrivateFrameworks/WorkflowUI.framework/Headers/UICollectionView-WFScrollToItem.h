/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionView.h>

@interface UICollectionView (WFScrollToItem)

- (void)wf_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)wf_scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2 itemOffset:(double)arg3;

@end
