/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIView.h>

@class UILabel, UIStackView, VSFontCenter;

@protocol VSTableHeaderFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface VSTableHeaderFooterView : UIView

{
    long long _kind;
    id <VSTableHeaderFooterViewDelegate> _delegate;
    UIView *_button;
    UILabel *_textLabel;
    UIStackView *_stackView;
    VSFontCenter *_fontCenter;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (nonatomic) long long kind;
@property (weak, nonatomic) id <VSTableHeaderFooterViewDelegate> delegate;
@property (retain, nonatomic) UIView *button;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)_didInvalidateIntrinsicContentSize;

@end
