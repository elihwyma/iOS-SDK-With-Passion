/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Preferences/PSRootController.h>

#import <SetupAssistantUI/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface BFFNavigationController : PSRootController <Swift>

{
    NSMutableArray *_observers;
    NSMutableDictionary *_appearanceHandlers;
    long long _pendingShowOperation;
    UIColor *_backgroundColor;
    _Bool _animating;
    _Bool _pushWithoutDeferringTransitionsWhileInBackground;
    _Bool _inBackground;
}

@property (nonatomic, readonly, getter=isAnimating) _Bool animating;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) _Bool pushWithoutDeferringTransitionsWhileInBackground;
@property (nonatomic, getter=isInBackground) _Bool inBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_canShowTextServices;
- (void)pushViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDelegateObserver:(id)arg1;
- (void)addDelegateObserver:(id)arg1;
- (void)_reapObservers;
- (_Bool)_usesTransitionController;
- (void)popToViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
