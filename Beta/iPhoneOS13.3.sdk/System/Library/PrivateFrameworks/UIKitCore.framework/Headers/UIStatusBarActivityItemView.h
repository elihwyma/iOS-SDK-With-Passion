/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIStatusBarActivityItemView : UIStatusBarItemView

{
    UIActivityIndicatorView *_activityIndicator;
    UIActivityIndicatorView *_accessibilityHUDIndicator;
    _Bool _slowActivity;
    _Bool _syncActivity;
}

- (void)setVisible:(_Bool)arg1;
- (id)accessibilityHUDRepresentation;
- (double)shadowPadding;
- (void)_stopAnimating;
- (void)_startAnimating;
- (long long)_activityIndicatorStyle;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)updateContentsAndWidth;

@end
