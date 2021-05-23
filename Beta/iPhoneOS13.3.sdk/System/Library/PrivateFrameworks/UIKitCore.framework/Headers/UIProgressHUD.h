/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel, UIWindow;

@interface UIProgressHUD : UIView

{
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_progressMessage;
    UIImageView *_doneView;
    UIWindow *_parentWindow;
    struct {
        unsigned int isShowing:1;
        unsigned int isShowingText:1;
        unsigned int fixedFrame:1;
        unsigned int reserved:30;
    } _progressHUDFlags;
}

- (void)dealloc;
- (void)setText:(id)arg1;
- (void)setFontSize:(int)arg1;
- (void)done;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)showInView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithWindow:(id)arg1;
- (void)hide;
- (void)setShowsText:(_Bool)arg1;
- (void)show:(_Bool)arg1;

@end
