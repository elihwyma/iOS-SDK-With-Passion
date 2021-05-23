/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, UIScrollView, WFDrawerDismissalPanMediator;

@protocol WFDrawerDismissalHelperDelegate;

@interface WFDrawerDismissalHelper : NSObject

{
    _Bool _didDismiss;
    id <WFDrawerDismissalHelperDelegate> _delegate;
    UIScrollView *_scrollView;
    NSHashTable *_activeGestureRecognizers;
    WFDrawerDismissalPanMediator *_panMediator;
    double _dismissalRectTopEdge;
    double _currentInsideness;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) NSHashTable *activeGestureRecognizers;
@property (retain, nonatomic) WFDrawerDismissalPanMediator *panMediator;
@property (nonatomic) _Bool didDismiss;
@property (nonatomic) double dismissalRectTopEdge;
@property (nonatomic) double currentInsideness;
@property (weak, nonatomic) id <WFDrawerDismissalHelperDelegate> delegate;

- (void)dealloc;
- (id)initWithScrollView:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)panGestureRecognizerDidBegin:(id)arg1;
- (void)panGestureRecognizerDidEnd:(id)arg1;
- (void)panGestureDidChange:(id)arg1;
- (double)insidenessForGestureRecognizer:(id)arg1;
- (void)dismissCardWithVelocity:(double)arg1;
- (void)dismissCardWithPanGestureRecognizer:(id)arg1;

@end
