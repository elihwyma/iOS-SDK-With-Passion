/*
 Image: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface AMPOnboardingFeatureView : UIView

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic, readonly) double baselineOffsetFromBottom;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFeature:(id)arg1;

@end
