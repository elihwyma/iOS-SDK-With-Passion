/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIColor, WFAction;

@interface WFMaskedShadowView : UIView

{
    _Bool _attributesChanged;
    _Bool _actionRunning;
    long long _mode;
    double _cornerRadius;
    UIColor *_shadowColor;
    UIColor *_runningShadowColor;
    UIColor *_borderColor;
    double _borderWidth;
    CAShapeLayer *_borderLayer;
    WFAction *_action;
}

@property (nonatomic) long long mode;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *runningShadowColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (weak, nonatomic) CAShapeLayer *borderLayer;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)attributesDidChange;
- (void)actionRunningStateDidChange:(id)arg1;
- (void)applyAttributes;
- (void)updateShadowColorAnimated:(_Bool)arg1;

@end
