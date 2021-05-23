/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView;

@interface WFAssociationStateView : UIView

{
    long long _state;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) long long state;

- (void)layoutSubviews;

@end
