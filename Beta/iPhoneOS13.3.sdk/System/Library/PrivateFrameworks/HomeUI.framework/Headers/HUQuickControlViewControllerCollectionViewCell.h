/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUViewControllerCollectionViewCell.h>

@class HUQuickControlCollectionViewCellContainerViewController, HUQuickControlCollectionViewLayoutAttributes;

@interface HUQuickControlViewControllerCollectionViewCell : HUViewControllerCollectionViewCell

{
    HUQuickControlCollectionViewLayoutAttributes *_activeLayoutAttributes;
}

@property (retain, nonatomic) HUQuickControlCollectionViewLayoutAttributes *activeLayoutAttributes;
@property (retain, nonatomic) HUQuickControlCollectionViewCellContainerViewController *viewController;

+ (unsigned long long)quickControlSizeForItemSize:(unsigned long long)arg1;

- (void)applyLayoutAttributes:(id)arg1;
- (void)_updateContentViewControllerForActiveLayoutAttributes;

@end
