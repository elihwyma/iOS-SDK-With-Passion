/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUApplier.h>

@class HUAnimationApplier, HUAnimationSettings, NSString, UIInteractionProgress;

@interface HUInteractionProgressApplier : HUApplier

{
    _Bool _boundProgressValues;
    _Bool _completesAtTargetState;
    _Bool _waitingOnAnimationToComplete;
    UIInteractionProgress *_interactionProgress;
    HUAnimationSettings *_significantProgressChangeAnimationSettings;
    HUAnimationSettings *_transitionAnimationSettings;
    double _animationFromProgress;
    double _animationToProgress;
    HUAnimationApplier *_inFlightAnimation;
    double _previousInteractionProgress;
}

@property (nonatomic) double animationFromProgress;
@property (nonatomic) double animationToProgress;
@property (retain, nonatomic) HUAnimationApplier *inFlightAnimation;
@property (nonatomic) double previousInteractionProgress;
@property (nonatomic) _Bool waitingOnAnimationToComplete;
@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;
@property (retain, nonatomic) HUAnimationSettings *significantProgressChangeAnimationSettings;
@property (retain, nonatomic) HUAnimationSettings *transitionAnimationSettings;
@property (nonatomic) _Bool boundProgressValues;
@property (nonatomic) _Bool completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)applierWithInteractionProgress:(id)arg1;
+ (id)applyInteractionProgress:(id)arg1 withApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (_Bool)cancel;
- (_Bool)start;
- (_Bool)isInteractive;
- (id)initWithInteractionProgress:(id)arg1;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (_Bool)complete:(_Bool)arg1;
- (double)_currentInteractionProgress;
- (void)_updateCurrentProgress;
- (void)_completeSuccessfullyIfAnimationsComplete;
- (_Bool)_interactionProgressChangedSignificantly;

@end
