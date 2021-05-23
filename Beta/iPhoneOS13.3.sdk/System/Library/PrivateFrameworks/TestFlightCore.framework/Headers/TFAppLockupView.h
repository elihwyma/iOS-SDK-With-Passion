/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UIView.h>

@class NSString, TFAppLockupViewSpecification, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TFAppLockupView : UIView

{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_primarySubtitleLabel;
    UILabel *_secondarySubtitleLabel;
    TFAppLockupViewSpecification *_specification;
}

@property (retain, nonatomic) TFAppLockupViewSpecification *specification;
@property (nonatomic, readonly) UIImageView *iconView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *primarySubtitleLabel;
@property (nonatomic, readonly) UILabel *secondarySubtitleLabel;
@property (nonatomic, readonly) struct CGSize displayedIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setImage:(struct UIImage *)arg1 animated:(_Bool)arg2;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_styleSubviews;
- (void)_layoutLabelsInLayoutBounds:(struct CGRect)arg1;

@end
