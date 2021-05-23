/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <UIKitCore/UIView.h>

@class UIButton, UILabel;

@protocol DOCViewServiceErrorViewDelegate;

@interface DOCViewServiceErrorView : UIView

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_tryAgainButton;
    id <DOCViewServiceErrorViewDelegate> _delegate;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *tryAgainButton;
@property (weak) id <DOCViewServiceErrorViewDelegate> delegate;

- (id)init;
- (void)didTapTryAgain;

@end
