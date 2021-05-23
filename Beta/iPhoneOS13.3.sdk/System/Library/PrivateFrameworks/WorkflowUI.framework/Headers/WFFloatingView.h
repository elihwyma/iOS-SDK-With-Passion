/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class WFFloatingLayer, WFGradient;

@interface WFFloatingView : UIView

@property (nonatomic, readonly) WFFloatingLayer *layer;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) _Bool pressed;

+ (Class)layerClass;

- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 frame:(struct CGRect)arg2;

@end
