/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface AVExternalPlaybackIndicatorView : UIView

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_containerView;
    UIStackView *_textLabelsContainer;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTitleString:(id)arg1 subtitleString:(id)arg2;

@end
