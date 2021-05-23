/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXRegionOfInterest, UIPercentDrivenInteractiveTransition, UIViewController;

@interface PXUIViewControllerTransition : NSObject

{
    UIViewController *_internalMasterViewController;
    UIViewController *_internalDetailViewController;
    CDUnknownBlockType _transitionAnimationStartHandler;
    CDUnknownBlockType _transitionAnimationCompletionHandler;
    _Bool _supportsEdgeSwipeBackGesture;
    _Bool _interactive;
    _Bool _transitioningToDetail;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _state;
    id __pauseToken;
    PXRegionOfInterest *_masterRegionOfInterest;
}

@property (nonatomic) long long state;
@property (nonatomic, readonly) long long transitionIdentifier;
@property (retain, nonatomic, setter=_setPauseToken:) id _pauseToken;
@property (nonatomic, readonly) _Bool supportsEdgeSwipeBackGesture;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (retain, nonatomic) PXRegionOfInterest *masterRegionOfInterest;
@property (nonatomic, getter=isTransitioningToDetail) _Bool transitioningToDetail;
@property (nonatomic, readonly) UIPercentDrivenInteractiveTransition *interactionController;
@property (weak, nonatomic, readonly) UIViewController *masterViewController;
@property (weak, nonatomic, readonly) UIViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (void)installTransitionAnimationStartHandler:(CDUnknownBlockType)arg1;
- (void)installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willStartTransition;
- (void)willEndTransition;
- (void)didEndTransition;

@end
