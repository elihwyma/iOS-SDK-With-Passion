/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIScrollView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryAlertView : UIView

{
    UIScrollView *_scrollView;
    UIView *_containerView;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
}

@property (nonatomic, readonly) VUILabel *titleLabel;
@property (nonatomic, readonly) VUILabel *subtitleLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
