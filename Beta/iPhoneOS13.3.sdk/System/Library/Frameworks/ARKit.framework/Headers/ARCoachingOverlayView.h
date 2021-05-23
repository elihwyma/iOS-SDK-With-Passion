/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <UIKit/UIView.h>

@class ARCoachingAnimationView, ARCoachingHeuristicCollection, ARCoachingMotionTracker, ARCoachingPillButton, ARCoachingState, ARSession, NSMutableArray, NSObject, NSString, UILabel;

@protocol ARCoachingOverlayViewDelegate, ARSessionProviding;

@interface ARCoachingOverlayView : UIView

{
    UIView *_background;
    UILabel *_coachingText;
    ARCoachingPillButton *_resetButton;
    ARCoachingState *_state;
    ARCoachingHeuristicCollection *_heuristics;
    ARCoachingMotionTracker *_motionTracker;
    long long _coachingRequirements;
    long long _requestedGoal;
    long long _coachingMessageType;
    long long _nextCoachingMessageType;
    long long _nextCoachingAnimationState;
    double _lastCoachingUpdateTime;
    ARCoachingAnimationView *_coachingAnimationView;
    NSMutableArray *_uiAnimationQueue;
    _Bool _uiAnimationQueueRunning;
    _Bool _isSessionRelocalizingMap;
    _Bool _activatesAutomatically;
    _Bool _wasEverActivated;
    _Bool _trackingStateNormalOverride;
    id <ARCoachingOverlayViewDelegate> _delegate;
    NSObject<ARSessionProviding> *_sessionProvider;
    ARSession *_session;
    long long _goal;
    long long _trackingStateReasonOverride;
}

@property (nonatomic, readonly) _Bool isUIAnimating;
@property (nonatomic, readonly) _Bool wasEverActivated;
@property (nonatomic, readonly) _Bool isRelocalizing;
@property (nonatomic) long long trackingStateReasonOverride;
@property (nonatomic) _Bool trackingStateNormalOverride;
@property (weak, nonatomic) id <ARCoachingOverlayViewDelegate> delegate;
@property (weak, nonatomic) NSObject<ARSessionProviding> *sessionProvider;
@property (retain, nonatomic) ARSession *session;
@property (nonatomic) long long goal;
@property (nonatomic) _Bool activatesAutomatically;
@property (nonatomic, readonly) _Bool isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardown;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)buttonPress:(id)arg1;
- (void)fadeOut;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)startup;
- (_Bool)checkActivationHeuristics;
- (void)fadeInWithButton:(_Bool)arg1;
- (_Bool)checkDeactivationHeuristics;
- (void)updateWithFrame:(id)arg1;
- (void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
- (void)setupView;
- (void)swapState:(id)arg1;
- (void)validateSessionGoal;
- (void)restartIfActive;
- (void)doStateAction:(long long)arg1;
- (void)finishAllUIAnimations;
- (void)generateHeuristicsForActive:(_Bool)arg1;
- (void)updateCoachingRequirements;
- (void)resolveCoachingMessage;
- (void)killUIAnimations;
- (double)calcFadeDurationIn:(_Bool)arg1 withButton:(_Bool)arg2;
- (void)setCoachingMessage:(long long)arg1 animationState:(long long)arg2;
- (void)crossFadeCoachingMessage:(long long)arg1;
- (void)updateUIAnimations;

@end
