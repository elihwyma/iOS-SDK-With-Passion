/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUModalTransition.h>

@class NSString, PUImportOneUpModalTransition, PUPhotoPinchGestureRecognizer, UIPanGestureRecognizer, UIViewController;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionController : PUModalTransition

{
    _Bool _hasInstalledDismissGestureRecognizers;
    PUPhotoPinchGestureRecognizer *_presentingPinchGestureRecognizer;
    PUPhotoPinchGestureRecognizer *_dismissPinchGestureRecognizer;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
    UIViewController *_presentingViewController;
    long long _operation;
    PUImportOneUpModalTransition *_transition;
}

@property (nonatomic, readonly) PUPhotoPinchGestureRecognizer *presentingPinchGestureRecognizer;
@property (retain, nonatomic) PUPhotoPinchGestureRecognizer *dismissPinchGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) long long operation;
@property (retain, nonatomic) PUImportOneUpModalTransition *transition;
@property (nonatomic) _Bool hasInstalledDismissGestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (_Bool)continuousGestureRecognizerIsActive:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 pinchGestureRecognizer:(id)arg2;
- (void)maybeInitiateInteractiveDismiss:(id)arg1;
- (void)installDismissGestureRecognizersOnView:(id)arg1;

@end
