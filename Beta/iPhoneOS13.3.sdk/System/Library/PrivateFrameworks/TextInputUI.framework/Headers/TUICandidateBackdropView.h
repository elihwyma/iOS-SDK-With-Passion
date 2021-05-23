/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UIView.h>

@class UIKBBackdropView;

@protocol TUICandidateViewStyle;

@interface TUICandidateBackdropView : UIView

{
    id <TUICandidateViewStyle> _style;
    UIKBBackdropView *_backdropView;
}

@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) id <TUICandidateViewStyle> style;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)backdropViewStyle;

@end
