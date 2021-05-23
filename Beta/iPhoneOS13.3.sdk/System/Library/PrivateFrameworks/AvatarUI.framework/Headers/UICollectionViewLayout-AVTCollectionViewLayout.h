/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewLayout.h>

@interface UICollectionViewLayout (AVTCollectionViewLayout)

- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;
- (struct CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize)arg2 proposedOrigin:(struct CGPoint)arg3;
- (struct CGSize)contentSizeForVisibleBounds:(struct CGRect)arg1 numberOfItems:(long long)arg2;
- (struct CGRect)initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGRect)finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;

@end
