/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIView.h>

@class MTVisualStylingProvider, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MRMediaControlsVideoPickerHeaderView : UIView

{
    MTVisualStylingProvider *_visualStylingProvider;
    UIImageView *_airPlayIconImageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *airPlayIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateStyle;

@end
