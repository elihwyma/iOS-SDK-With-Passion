/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UICollectionViewLayout, UIPercentDrivenInteractiveTransition;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <Swift>

{
    _Bool _crossFadeNavigationBar;
    _Bool _crossFadeBottomBars;
    _Bool _interactionAborted;
    UICollectionViewLayout *_toLayout;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _operation;
}

@property (retain, nonatomic) UICollectionViewLayout *toLayout;
@property (nonatomic) _Bool crossFadeNavigationBar;
@property (nonatomic) _Bool crossFadeBottomBars;
@property (nonatomic) UIPercentDrivenInteractiveTransition *interactionController;
@property (nonatomic) _Bool interactionAborted;
@property (nonatomic) long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (_Bool)_shouldCrossFadeNavigationBar;
- (_Bool)_shouldCrossFadeBottomBars;

@end
