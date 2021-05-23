/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardMotionSupport.h>

@class UIInputViewSetNotificationInfo, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollToDismissSupport : UIKeyboardMotionSupport

{
    UIScrollView *_scrollViewForTransition;
    _Bool _scrollViewShowsHorizontalScrollIndicator;
    _Bool _scrollViewTransitionFinishing;
    _Bool _disableInterfaceAutorotation;
    struct CGPoint _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
}

- (void)dealloc;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1 forController:(id)arg2;
- (void)finishScrollViewTransition;
- (id)cancelNotificationsForMode:(unsigned long long)arg1;
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)finishScrollViewTransitionForController:(id)arg1;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;
- (void)updateScrollViewContentInsetBottom:(double)arg1;
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;

@end
