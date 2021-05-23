/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBHomeGestureParticipant, SBReachabilityGestureRecognizer, SBReachabilityWindow, SBScreenEdgePanGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UITransform;

@interface SBReachabilityManager : NSObject <Swift>

{
    NSHashTable *_observers;
    _Bool _reachabilityModeActive;
    unsigned long long _reachabilityExtensionGenerationCount;
    _Bool _reachabilityModeEnabled;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityWindow *_reachabilityWindow;
    UITransform *_reachabilityTransform;
    UITransform *_inverseReachabilityTransform;
    UITapGestureRecognizer *_dismissTapGestureRecognizer;
    SBHomeGestureParticipant *_homeGestureParticipant;
    NSHashTable *_ignoredWindows;
    long long _animationsInFlight;
    SBReachabilityGestureRecognizer *_reachabilityGestureRecognizer;
    double _effectiveReachabilityYOffset;
    SBScreenEdgePanGestureRecognizer *_dismissEdgeGestureRecognizer;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
}

@property (nonatomic, readonly) _Bool reachabilityModeActive;
@property (nonatomic) _Bool reachabilityEnabled;
@property (nonatomic, readonly) SBReachabilityGestureRecognizer *reachabilityGestureRecognizer;
@property (nonatomic, readonly) SBScreenEdgePanGestureRecognizer *dismissEdgeGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (nonatomic, readonly) double reachabilityYOffset;
@property (nonatomic, readonly) double effectiveReachabilityYOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)reachabilitySupported;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)toggleReachability;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)deactivateReachability;
- (void)_notifyObserversReachabilityModeActive:(_Bool)arg1;
- (void)_setKeepAliveTimer;
- (void)_setupGestureRecognizers;
- (void)_handleSignificantTimeChanged;
- (void)_screenDidDim;
- (_Bool)canActivateReachability;
- (void)_toggleReachabilityMode;
- (void)_updateReachabilityModeActive:(_Bool)arg1;
- (void)_modifyDefaultPresentationContextHostTransformForWindow:(id)arg1 fromTransform:(id)arg2 toTransform:(id)arg3;
- (void)_updateReachabilityModeActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupReachabilityWindowIfNecessary;
- (void)_tearDownReachabilityWindow;
- (void)_updateReachabilityWindowForYOffset:(double)arg1 mode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pingKeepAliveWithDuration:(double)arg1 interactedBeforePing:(_Bool)arg2 initialKeepAliveTime:(double)arg3;
- (void)_activateReachability:(id)arg1;
- (void)_panToDeactivateReachability:(id)arg1;
- (void)_tapToDeactivateReachability:(id)arg1;
- (id)_sceneForWindow:(id)arg1;
- (void)_transitionWithTransformer:(id)arg1 fromTransform:(id)arg2 toTransform:(id)arg3;
- (void)_notifyObserversWillBeginReachabilityAnimation;
- (id)ignoredWindows;
- (void)_notifyObserversReachabilityYOffsetDidChange;
- (void)_notifyObserversDidEndReachabilityAnimation;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)setReachabilityTemporarilyDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)ignoreWindowForReachability:(id)arg1;

@end
