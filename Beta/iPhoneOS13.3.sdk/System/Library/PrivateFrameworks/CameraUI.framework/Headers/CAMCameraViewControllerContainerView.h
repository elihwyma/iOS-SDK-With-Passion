/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@interface CAMCameraViewControllerContainerView : UIView

{
    UIView *_viewfinderView;
    UIView *_customOverlayView;
    UIView *_additionalContentView;
}

@property (retain, nonatomic) UIView *viewfinderView;
@property (retain, nonatomic) UIView *customOverlayView;
@property (retain, nonatomic) UIView *additionalContentView;

+ (Class)layerClass;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)_commonCAMCameraViewControllerContainerViewInitialization;
- (void)verifyViewOrdering;

@end
