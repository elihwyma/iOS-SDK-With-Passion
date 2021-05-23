/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIView, UIViewController;

@protocol UIAccessibilityHUDGestureDelegate;

@interface UIAccessibilityHUDGestureManager : NSObject

{
    UIView *_view;
    id <UIAccessibilityHUDGestureDelegate> _delegate;
    UIViewController *_viewControllerDisplayingHUD;
    UILongPressGestureRecognizer *_recognizer;
    NSMutableArray *_subscribedConcurrentGestureRecognizers;
    _Bool _delegateDirectlyShowsHUD;
    _Bool _isInvalidated;
}

@property (nonatomic, readonly) UIGestureRecognizer *_recognizer;
@property (weak, nonatomic, readonly) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (void)_gestureRecognizerChanged:(id)arg1;
- (void)_didToggleLargeContentViewer:(id)arg1;
- (void)_clearButtonItemGestureSubscriptions;
- (id)_subscribedConcurrentGestureRecognizers;
- (void)_concurrentGestureRecognizerFired:(id)arg1;
- (id)_bestViewControllerForView;
- (void)_dismissAccessibilityHUD;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

@end
