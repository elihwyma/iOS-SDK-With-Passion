/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIActivityIndicatorView, UIButton, UILabel;

@protocol WFRemoteFileStatusViewDelegate;

__attribute__((visibility("hidden")))
@interface WFRemoteFileStatusView : UIView

{
    id <WFRemoteFileStatusViewDelegate> _delegate;
    UIView *_containerView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_statusLabel;
    UIButton *_recoveryButton;
    NSArray *_emptyConstraints;
    NSArray *_loadingContraints;
    NSArray *_errorConstraints;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIActivityIndicatorView *indicatorView;
@property (nonatomic, readonly) UILabel *statusLabel;
@property (nonatomic, readonly) UIButton *recoveryButton;
@property (nonatomic, readonly) NSArray *emptyConstraints;
@property (nonatomic, readonly) NSArray *loadingContraints;
@property (nonatomic, readonly) NSArray *errorConstraints;
@property (weak, nonatomic) id <WFRemoteFileStatusViewDelegate> delegate;

- (void)setError:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEmpty;
- (void)recoveryButtonTapped;
- (void)setLoading;

@end
