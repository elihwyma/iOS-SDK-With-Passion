/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIButton.h>

@class NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionStopButton : UIButton

{
    _Bool _recording;
    UIView *_redSquare;
    NSLayoutConstraint *_redSquareWidthConstraint;
}

@property (weak, nonatomic) UIView *redSquare;
@property (weak, nonatomic) NSLayoutConstraint *redSquareWidthConstraint;
@property (nonatomic) _Bool recording;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)currentLineWidth;
- (double)currentInnerCircleRadius;
- (double)currentStopButtonSize;
- (void)setRecording:(_Bool)arg1 animated:(_Bool)arg2;

@end
