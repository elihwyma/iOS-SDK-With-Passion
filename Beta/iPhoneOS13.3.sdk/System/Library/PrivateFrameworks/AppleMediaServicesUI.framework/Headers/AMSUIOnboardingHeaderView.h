/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

#import <UIKit/UIScrollView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUIOnboardingHeaderView : UIScrollView

{
    _Bool _isPresentedInFormSheet;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    double _containerHeight;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) double containerHeight;
@property (nonatomic) _Bool isPresentedInFormSheet;

- (void)updateContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)adjustedContentInsetDidChange;

@end
