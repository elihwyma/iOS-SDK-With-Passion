/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXBarAnimationOptions, UIViewController;

@protocol PXBarAppearanceImplementationDelegate;

@interface PXBarAppearance : PXObservable <Swift>

{
    struct {
        _Bool respondsToWillUpdateBarAppearanceOnViewWillAppear;
        _Bool respondsToIsStatusBarVisible;
    } _implementationDelegateFlags;
    long long _transitionsCounter;
    _Bool _prefersStatusBarVisible;
    _Bool _prefersNavigationBarVisible;
    _Bool _prefersToolbarVisible;
    _Bool _prefersTabBarVisible;
    _Bool __hasViewAppeared;
    _Bool _enabled;
    id <PXBarAppearanceImplementationDelegate> __implementationDelegate;
    PXBarAnimationOptions *__animationOptions;
    long long __preferredStatusBarUpdateAnimation;
    UIViewController *_viewController;
    id <PXBarAppearanceImplementationDelegate> _implementationDelegate;
}

@property (weak, nonatomic, setter=_setImplementationDelegate:) id <PXBarAppearanceImplementationDelegate> _implementationDelegate;
@property (nonatomic, setter=_setHasViewAppeared:) _Bool _hasViewAppeared;
@property (copy, nonatomic, setter=_setAnimationOptions:) PXBarAnimationOptions *_animationOptions;
@property (nonatomic, setter=_setPreferredStatusBarUpdateAnimation:) long long _preferredStatusBarUpdateAnimation;
@property (weak, nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (weak, nonatomic) id <PXBarAppearanceImplementationDelegate> implementationDelegate;
@property (nonatomic, readonly) _Bool prefersStatusBarVisible;
@property (nonatomic, readonly) _Bool prefersNavigationBarVisible;
@property (nonatomic, readonly) _Bool prefersToolbarVisible;
@property (nonatomic, readonly) _Bool prefersTabBarVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_update;
- (id)initWithViewController:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)setPrefersStatusBarVisible:(_Bool)arg1;
- (void)setPrefersNavigationBarVisible:(_Bool)arg1;
- (void)setPrefersToolbarVisible:(_Bool)arg1;
- (void)setPrefersTabBarVisible:(_Bool)arg1;
- (void)performChangesWithAnimationOptions:(id)arg1 changes:(CDUnknownBlockType)arg2;
- (void)viewControllerViewWillAppear:(_Bool)arg1;
- (void)viewControllerViewDidDisappear:(_Bool)arg1;
- (_Bool)adjustedPrefersStatusBarHidden:(_Bool)arg1;
- (long long)adjustedPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)_updateImplementationDelegate;
- (void)_updateOnViewWillAppear:(_Bool)arg1;
- (void)_updateWithAnimationOptions:(id)arg1 isStatusBarHidden:(_Bool)arg2;
- (void)_updateStatusBarVisibilityWithAnimationOptions:(id)arg1;
- (void)_setNavigationBarVisible:(_Bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setToolbarVisible:(_Bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setTabBarVisible:(_Bool)arg1 withAnimationOptions:(id)arg2;
- (void)_performBarsTransition:(CDUnknownBlockType)arg1;

@end
