/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIControl.h>

@class CAShapeLayer;

@interface WFLibraryCancelButton : UIControl

{
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_glyphLayer;
}

@property (nonatomic, readonly) CAShapeLayer *outlineLayer;
@property (nonatomic, readonly) CAShapeLayer *glyphLayer;

- (void)reset;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)finishWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
