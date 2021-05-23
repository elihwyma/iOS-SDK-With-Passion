/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout

+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint)arg1 collectionView:(id)arg2 layout:(id)arg3;

- (double)pagingLength;
- (double)pagingOrigin;
- (long long)selectedPageIndex;
- (double)pageOffsetForIndex:(long long)arg1;
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;

@end
