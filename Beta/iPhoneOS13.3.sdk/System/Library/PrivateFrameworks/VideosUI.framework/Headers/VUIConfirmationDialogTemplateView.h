/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationDialogTemplateView : UIView

{
    UIVisualEffectView *_backdropView;
    UIView *_cardView;
}

@property (retain, nonatomic) UIView *cardView;
@property (nonatomic, readonly) UIVisualEffectView *backdropView;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_configureSubviews;

@end
