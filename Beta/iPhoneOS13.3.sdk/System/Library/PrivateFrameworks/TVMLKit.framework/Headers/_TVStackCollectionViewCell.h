/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVStackCollectionViewCell : UICollectionViewCell

{
    UIView *_cellContentView;
    UIViewController *_viewController;
}

@property (weak, nonatomic) UIViewController *viewController;

- (void)prepareForReuse;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;

@end
