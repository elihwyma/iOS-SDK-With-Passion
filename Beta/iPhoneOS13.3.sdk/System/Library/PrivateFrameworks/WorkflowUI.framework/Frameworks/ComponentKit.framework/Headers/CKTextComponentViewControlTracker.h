/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSTextCheckingResult;

@interface CKTextComponentViewControlTracker : NSObject

{
    NSTextCheckingResult *_trackingTextCheckingResult;
}

- (void)endTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3;
- (void)cancelTrackingForTextComponentView:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3;
- (_Bool)beginTrackingForTextComponentView:(id)arg1 withTouch:(id)arg2 withEvent:(id)arg3;
- (void)_sendActionsToControl:(id)arg1 forControlEvents:(unsigned long long)arg2 withEvent:(id)arg3;

@end
