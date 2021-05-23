/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@interface HURemoteContextHostingView : UIView

{
    UIView *_contentView;
    UIView *_destinationOutContainerView;
    UIView *_destinationOutView;
    UIView *_destinationOverView;
}

@property (nonatomic, readonly) UIView *destinationOutContainerView;
@property (nonatomic, readonly) UIView *destinationOutView;
@property (nonatomic, readonly) UIView *destinationOverView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long maskedCorners;

- (id)initWithContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;

@end
