/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UICollectionViewFlowLayout.h>

@interface SiriUICollectionViewFlowLayout : UICollectionViewFlowLayout

{
    _Bool _animatesBoundsChanges;
}

- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;

@end
