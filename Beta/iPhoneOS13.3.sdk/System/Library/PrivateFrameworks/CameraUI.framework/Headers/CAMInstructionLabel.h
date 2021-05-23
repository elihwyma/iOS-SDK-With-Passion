/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@protocol CAMInstructionLabelDelegate;

@interface CAMInstructionLabel : UIView

{
    _Bool _useModeDialFontSize;
    NSString *_text;
    id <CAMInstructionLabelDelegate> _delegate;
    long long _style;
    UILabel *__label;
}

@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, readonly) struct UIEdgeInsets _textInsets;
@property (nonatomic, readonly) double _backgroundAlpha;
@property (copy, nonatomic) NSString *text;
@property (weak, nonatomic) id <CAMInstructionLabelDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) _Bool useModeDialFontSize;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateLabel;
- (id)_textAttributes;
- (void)_updateLayer;
- (void)updateToContentSize:(id)arg1;

@end
