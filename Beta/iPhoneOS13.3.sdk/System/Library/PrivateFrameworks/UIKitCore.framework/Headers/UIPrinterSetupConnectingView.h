/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupConnectingView : UIView

{
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    double _presentationTime;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double presentationTime;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)setMessage:(id)arg1 active:(_Bool)arg2;
- (void)presentView;

@end
