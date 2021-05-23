/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <MediaPlayer/MPButton.h>

@class MTVisualStylingProvider, UILabel;

__attribute__((visibility("hidden")))
@interface MRMediaControlsVideoPickerFooterView : MPButton

{
    MTVisualStylingProvider *_visualStylingProvider;
    UILabel *_customTitleLabel;
}

@property (retain, nonatomic) UILabel *customTitleLabel;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateStyle;
- (id)titleLabelText;

@end
