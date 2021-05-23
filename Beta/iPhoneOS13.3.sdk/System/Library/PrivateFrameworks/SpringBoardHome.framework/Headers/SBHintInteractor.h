/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, UIInteractionProgress;

@protocol SBViewControllerContextTransitioning;

@interface SBHintInteractor : NSObject

{
    id <SBViewControllerContextTransitioning> _transitionContext;
    CDStruct_3e878e9e _hintInterval;
    UIInteractionProgress *_interactionProgress;
}

@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;
@property (nonatomic, readonly) double maxHintProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (void)startInteractiveTransition:(id)arg1;
- (void)finishInteractiveTransition;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)cancelTransition;
- (_Bool)supportsRestarting;
- (void)_updateInteractionPercentComplete:(double)arg1;
- (void)updateTransition:(double)arg1;
- (id)initWithInteractionProgress:(id)arg1 maxHintProgress:(double)arg2;

@end
