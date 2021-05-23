/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, UIGestureRecognizer, UIView, UIViewController;

@protocol WFDragCoordinator;

@interface WFDragController : NSObject

{
    _Bool _removedOnCompletion;
    id <WFDragCoordinator> _coordinator;
    UIViewController *_initialViewController;
    UIGestureRecognizer *_gestureRecognizer;
    NSDictionary *_eventDictionary;
    UIView *_view;
    NSHashTable *_currentViewControllers;
    struct CGPoint _centerOffset;
}

@property (weak, nonatomic) UIViewController *initialViewController;
@property (nonatomic) struct CGPoint centerOffset;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic) NSHashTable *currentViewControllers;
@property (weak, nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic, readonly) id <WFDragCoordinator> coordinator;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic) _Bool removedOnCompletion;
@property (copy, nonatomic) NSDictionary *eventDictionary;

- (void)reset;
- (void)loadView;
- (_Bool)isViewLoaded;
- (void)updateView;
- (id)initWithGestureRecognizer:(id)arg1;
- (_Bool)dragController:(id)arg1 shouldAcceptViewWithCompletion:(CDUnknownBlockType)arg2;
- (struct CGPoint)locationOfViewInView:(id)arg1;
- (void)gestureRecognizerAction;
- (void)updateCurrentViewControllers;
- (void)didEnterViewController:(id)arg1;
- (void)didExitViewController:(id)arg1;
- (void)didMoveInViewControllers:(id)arg1;

@end
