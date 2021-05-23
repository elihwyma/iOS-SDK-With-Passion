/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIResponder, UIWindow;

@interface UINavigationTransitionView : UIView <Swift>

{
    UIView *_fromView;
    UIView *_toView;
    long long _transition;
    UIResponder *_firstResponderToRestore;
    UIWindow *_originalWindow;
    double _fromViewAlpha;
    unsigned int _isTransitioning:1;
    unsigned int _popoverWillCleanUpNavigationTransition:1;
    unsigned int _usesRoundedCorners:1;
    id _delegate;
}

@property (weak, nonatomic) id delegate;
@property (readonly) UIView *fromView;
@property (nonatomic) _Bool usesRoundedCorners;
@property (readonly) _Bool isTransitioning;
@property (nonatomic) _Bool popoverWillCleanUpNavigationTransition;

+ (double)defaultDurationForTransition:(long long)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)transition:(long long)arg1 toView:(id)arg2;
- (_Bool)_isTransitioningFromView:(id)arg1;
- (_Bool)transition:(long long)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)_navigationTransitionDidStop;
- (void)_cleanupTransition;
- (void)_notifyDelegateTransitionDidStopWithContext:(id)arg1;
- (void)_cleanupTransitionFromPopover;

@end
