/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class NSString, UIScreenEdgePanGestureRecognizer, UIView, UIViewController;

@protocol SFInteractiveDismissControllerDelegate, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition

{
    id <UIViewControllerContextTransitioning> _transitionContext;
    unsigned long long _dismissMode;
    long long _interactionState;
    double _timestamps[3];
    double _velocities[3];
    double _accelerations[3];
    UIView *_dimmingView;
    UIScreenEdgePanGestureRecognizer *_edgeSwipeGestureRecognizer;
    UIViewController *_viewControllerToBeDismissed;
    UIView *_edgeSwipeView;
    id <SFInteractiveDismissControllerDelegate> _delegate;
    unsigned long long _sampleCount;
    double _totalDistance;
    double _skipTimeStamp;
    double _previousTimeStamp;
    double _previousDisplacement;
    double _previousVelocity;
    double _previousAcceleration;
    double _averageVelocity;
    double _averageAcceleration;
}

@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) double totalDistance;
@property (nonatomic) double skipTimeStamp;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) double previousDisplacement;
@property (nonatomic) double previousVelocity;
@property (nonatomic) double previousAcceleration;
@property (nonatomic) double averageVelocity;
@property (nonatomic) double averageAcceleration;
@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer;
@property (weak, nonatomic) UIViewController *viewControllerToBeDismissed;
@property (retain, nonatomic) UIView *edgeSwipeView;
@property (weak, nonatomic) id <SFInteractiveDismissControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (double)_translationCoefficient;
- (void)_updateStatistics:(id)arg1 firstSample:(_Bool)arg2 finalSample:(_Bool)arg3;
- (_Bool)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double *)arg3;
- (void)swiped:(id)arg1;
- (void)_animateDismissalCancelTransition;
- (void)_animateDismissalCompleteTransition;
- (double)_percentComplete:(id)arg1;
- (struct CGPoint)translationForStatistics;
- (struct CGPoint)velocityForStatistics;
- (void)_presentAnimateTransition:(id)arg1;
- (void)_dismissAnimateTransition:(id)arg1;

@end
