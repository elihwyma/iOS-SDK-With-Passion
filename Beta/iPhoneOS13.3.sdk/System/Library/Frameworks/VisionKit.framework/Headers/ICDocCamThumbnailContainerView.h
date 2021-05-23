/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@class UICollectionView;

@interface ICDocCamThumbnailContainerView : UIView

{
    UICollectionView *_collectionView;
}

@property (weak, nonatomic) UICollectionView *collectionView;

- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityElementsHidden;

@end
