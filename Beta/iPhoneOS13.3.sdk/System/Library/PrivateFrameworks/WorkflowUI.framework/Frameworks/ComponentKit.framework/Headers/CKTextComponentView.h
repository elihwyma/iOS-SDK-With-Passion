/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <UIKit/UIControl.h>

@class CKTextComponentLayer, CKTextComponentViewControlTracker, CKTextKitRenderer;

@interface CKTextComponentView : UIControl

{
    CKTextComponentViewControlTracker *_controlTracker;
}

@property (nonatomic, readonly) CKTextComponentLayer *textLayer;
@property (nonatomic, readonly) CKTextComponentViewControlTracker *controlTracker;
@property (retain, nonatomic) CKTextKitRenderer *renderer;

+ (Class)layerClass;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)accessibilityAttributedLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end
