/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSDate, UIButton, UILabel, UITextView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIKeyboardGlobeKeyIntroductionView : UIView

{
    CDUnknownBlockType _completionBlock;
    _UIBackdropView *_backdropView;
    UILabel *_titleLabel;
    UITextView *_descriptionLabel;
    UIButton *_continueButton;
    NSDate *_startDate;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *descriptionLabel;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) NSDate *startDate;

- (void)layoutSubviews;
- (void)continueButtonTapped;
- (id)initWithFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)backdropStyleForRenderConfig:(id)arg1;

@end
