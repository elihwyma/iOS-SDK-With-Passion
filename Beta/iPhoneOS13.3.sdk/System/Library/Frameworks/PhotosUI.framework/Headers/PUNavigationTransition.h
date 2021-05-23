/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerTransition.h>

@class UINavigationController;

@interface PUNavigationTransition : PUViewControllerTransition

{
    _Bool _wasStatusBarHiddenBeforeTransition;
    double _pushDuration;
    double _popDuration;
    UINavigationController *_navigationController;
    long long __operation;
}

@property (nonatomic, setter=_setOperation:) long long _operation;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic) _Bool wasStatusBarHiddenBeforeTransition;
@property (nonatomic, readonly) double pushDuration;
@property (nonatomic, readonly) double popDuration;

+ (id)animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4;
+ (_Bool)shouldCrossFadeBottomBarsForNavigationController:(id)arg1;

- (double)transitionDuration:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)initWithDuration:(double)arg1;
- (void)imageModulationIntensityDidChange;
- (id)initWithPushDuration:(double)arg1 popDuration:(double)arg2;
- (void)didCompleteTransitionAnimation;
- (void)transitionWillStartOperation:(long long)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)transitionDidStartOperation:(long long)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)transitionWillAnimateOperation:(long long)arg1 interactive:(_Bool)arg2;
- (void)completeInteractiveOperation:(long long)arg1 finished:(_Bool)arg2;

@end
