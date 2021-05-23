/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIControl.h>

@class TPRevealingRingView, UILabel;

@interface SBUIRingViewLabelButton : UIControl

{
    TPRevealingRingView *_ringView;
    UILabel *_label;
}

@property (nonatomic, readonly) TPRevealingRingView *backgroundRing;
@property (nonatomic, readonly) UILabel *label;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
