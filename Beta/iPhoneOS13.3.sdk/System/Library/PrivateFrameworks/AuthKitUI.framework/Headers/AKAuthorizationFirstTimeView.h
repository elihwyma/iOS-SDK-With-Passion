/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel, UIStackView;

@interface AKAuthorizationFirstTimeView : UIView

{
    UIImage *_image;
    UIImage *_title;
    UIImage *_message;
    UIImageView *_imageView;
    UIStackView *_stackView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (copy, nonatomic, readonly) UIImage *image;
@property (copy, nonatomic, readonly) UIImage *title;
@property (copy, nonatomic, readonly) UIImage *message;

- (id)_iconColor;
- (id)_imageViewWithImage:(id)arg1;
- (id)_verticalStackView;
- (id)_labelWithString:(id)arg1 title:(_Bool)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3;

@end
