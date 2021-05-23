/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@protocol HLPHelpLoadingViewDelegate;

@interface HLPHelpLoadingView : UIView

{
    UIImageView *_errorImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    _Bool _supportsDarkMode;
    id <HLPHelpLoadingViewDelegate> _delegate;
    UILabel *_errorTitleLabel;
    UILabel *_errorMessageLabel;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (weak, nonatomic) id <HLPHelpLoadingViewDelegate> delegate;
@property (nonatomic) _Bool supportsDarkMode;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorMessageLabel;

- (id)init;
- (void)updateBackgroundColor;
- (void)showActivityIndicator:(_Bool)arg1;
- (void)showHelpBookInfo;
- (void)showNoConnectionErrorMessage;
- (void)showDefaultErrorMessage;
- (void)removeErrorView;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;

@end
