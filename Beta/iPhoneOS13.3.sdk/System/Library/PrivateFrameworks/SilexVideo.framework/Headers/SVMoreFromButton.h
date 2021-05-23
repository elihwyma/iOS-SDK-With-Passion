/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <UIKit/UIControl.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface SVMoreFromButton : UIControl

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelBottomConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *titleLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)updateFonts;
- (void)preferredContentSizeCategoryDidChange;
- (void)determineNumberOfLines;
- (void)updateImageViewHeight;

@end
