/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIView.h>

@class MTVisualStylingProvider;

__attribute__((visibility("hidden")))
@interface MediaControlsSeparatorView : UIView

{
    MTVisualStylingProvider *_visualStylingProvider;
    UIView *_separatorView;
}

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
