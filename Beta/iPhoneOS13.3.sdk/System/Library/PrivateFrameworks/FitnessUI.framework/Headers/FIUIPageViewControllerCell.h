/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIViewController;

@interface FIUIPageViewControllerCell : UICollectionViewCell

{
    UIViewController *_viewController;
}

@property (retain, nonatomic) UIViewController *viewController;

@end
