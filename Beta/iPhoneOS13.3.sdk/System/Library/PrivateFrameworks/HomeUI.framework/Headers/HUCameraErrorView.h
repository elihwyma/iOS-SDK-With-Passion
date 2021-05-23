/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIStackView.h>

@class NSString, UIImageView, UILabel;

@interface HUCameraErrorView : UIStackView

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIStackView *_labelStackView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, readonly) UIStackView *labelStackView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;

- (id)init;

@end
