/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, UIPanGestureRecognizer;

@protocol WFDrawerDragTracking;

@interface WFDrawerDismissalPanMediator : NSObject

{
    UIPanGestureRecognizer *_gestureRecognizer;
    id <WFDrawerDragTracking> _dragTracker;
    CADisplayLink *_displayLink;
    double _translation;
    double _previousVelocity;
    double _peakVelocity;
}

- (void)dealloc;
- (void)invalidate;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithPanGesture:(id)arg1 dragTracker:(id)arg2;

@end
