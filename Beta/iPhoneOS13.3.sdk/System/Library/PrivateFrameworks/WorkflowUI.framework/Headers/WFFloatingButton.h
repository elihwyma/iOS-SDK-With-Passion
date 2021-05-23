/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class WFFloatingLayer, WFGradient;

@interface WFFloatingButton : UIButton

@property (nonatomic, readonly) WFFloatingLayer *layer;
@property (copy, nonatomic) WFGradient *gradient;

+ (Class)layerClass;

- (id)initWithConfiguration:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)applyConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 frame:(struct CGRect)arg2;

@end
