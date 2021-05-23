/*
 Image: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CLSNotificationBannerView : UIView

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    double _preferredWidthPad;
    double _duration;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (nonatomic, readonly) double preferredWidthPad;
@property (nonatomic) double duration;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (id)bundle;
+ (_Bool)_preventsAppearanceProxyCustomization;
+ (id)bannerTitleAttributes;
+ (id)bannerMessageAttributes;

- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (void)hideBanner;
- (void)callCompletionHandler;
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;

@end
