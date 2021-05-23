/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILoadingView : UIView

{
    VUILabel *_loadingLabel;
    UIActivityIndicatorView *_indicatorView;
}

@property (retain, nonatomic) VUILabel *loadingLabel;
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;

- (void)layoutSubviews;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect)arg1 loadingString:(id)arg2;

@end
