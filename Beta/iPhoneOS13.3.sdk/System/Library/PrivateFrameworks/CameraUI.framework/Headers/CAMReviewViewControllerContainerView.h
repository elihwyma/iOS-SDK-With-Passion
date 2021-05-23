/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@interface CAMReviewViewControllerContainerView : UIView

{
    UIView *_reviewView;
}

@property (retain, nonatomic) UIView *reviewView;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_commonCAMReviewViewControllerContainerViewInitialization;

@end
