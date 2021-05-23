/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSDictionary, NSMapTable, NSMutableArray, NSString, NSUUID, UIView, UIViewPropertyAnimator;

@protocol _UIBasicAnimationFactory;

__attribute__((visibility("hidden")))
@interface UIViewAnimationState : NSObject

{
    UIViewAnimationState *_nextState;
    NSString *_animationID;
    void *_context;
    id _delegate;
    double _duration;
    double _delay;
    double _frameInterval;
    double _start;
    long long _curve;
    float _repeatCount;
    long long _transition;
    UIView *_transitionView;
    NSDictionary *_transitionOptions;
    int _filter;
    UIView *_filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    unsigned int _willStartSent:1;
    unsigned int _useCurrentLayerState:1;
    unsigned int _cacheTransition:1;
    unsigned int _autoreverses:1;
    unsigned int _layoutSubviews:1;
    unsigned int _hasOuterAnimator:1;
    unsigned int _hasOuterTrackingAnimator:1;
    unsigned int _disallowCaptureWithinPropertyAnimator:1;
    unsigned int _completionCallbacksDisabledOnPop:1;
    NSMutableArray *_trackedAnimations;
    NSUUID *_uuid;
    id <_UIBasicAnimationFactory> _animationFactory;
    CAMediaTimingFunction *_customCurve;
    _Bool _animationFactoryMakesPerAnimationCustomCurves;
    _Bool _disallowAdditiveAnimations;
    CDUnknownBlockType _alongsideAnimations;
    NSMutableArray *_addedCompletions;
    _Bool _animationDidStopSent;
    _Bool _animationDidStopForced;
    _Bool _allowUserInteractionToCutOffEndOfAnimation;
    _Bool _allowsHitTesting;
    _Bool _belongsToTrackingAnimator;
    _Bool _disallowInheritance;
    long long _finishedPosition;
    UIViewAnimationState *_retainedSelf;
    NSMutableArray *_viewsPendingConstraintBasedAnimation;
    NSMapTable *_viewToDeferredAnimationsMap;
    UIViewPropertyAnimator *_propertyAnimator;
}

@property (nonatomic, readonly) _Bool _allowsUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)popAnimationState;
+ (void)_addSystemPostAnimationAction:(CDUnknownBlockType)arg1;
+ (void)_addViewForConstraintBasedAnimation:(id)arg1;
+ (void)pushViewAnimationState:(id)arg1 context:(void *)arg2;
+ (void)_addConstraintPendingAnimation:(id)arg1 container:(id)arg2;
+ (id)originalAnimationForKeyPath:(id)arg1 inLayer:(id)arg2;

- (id)init;
- (id)_outerPropertyAnimator:(_Bool)arg1;
- (void)_transferAnimationToTrackingAnimator:(id)arg1;
- (void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4;
- (void)_trackAnimation:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 inLayer:(id)arg5;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (int)_didEndCount;
- (double)_elapsedTimeForCanonicallyTrackedAnimation;
- (void)_untrackAnimationsWithIdentifier:(id)arg1 keyPath:(id)arg2 inLayer:(id)arg3 removeFromLayer:(_Bool)arg4;
- (double)_unpacedFractionCompleteForAnimation:(id)arg1 inLayer:(id)arg2 duration:(double)arg3;
- (void)_transformIntoAdditiveAnimationAndNoteOriginal:(id)arg1 inLayer:(id)arg2 animationKey:(id)arg3;
- (void)sendDelegateDidStopManually:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)_addCompletion:(CDUnknownBlockType)arg1;
- (double)_canonicalTrackedUnpacedFractionComplete;
- (void)_performWithCompletionCallbacksDisabledOnPop:(CDUnknownBlockType)arg1;
- (void)_setCustomCurve:(id)arg1;
- (void)pushWithViewAnimationID:(id)arg1 context:(void *)arg2;
- (_Bool)_addCompletionWithPosition:(CDUnknownBlockType)arg1;
- (void)_runAlongsideAnimations;
- (void)_setAlongsideAnimations:(CDUnknownBlockType)arg1;
- (void)animationDidStart:(id)arg1;
- (void)pop;
- (void)_acceptEarlyAnimationCutoff:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;
- (void)_incrementDidEndCount;
- (void)_animationDidStopWithNilAnimationFinished:(_Bool)arg1;
- (_Bool)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2 forView:(id)arg3;
- (_Bool)_isTrackingEnabled;
- (void)_addAnimationStateForTracking:(id)arg1;
- (void)_prepareForViewAnimationAfterPush;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2 forView:(id)arg3;
- (id)_defaultAnimationForKey:(id)arg1;
- (void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)setAnimationAttributes:(id)arg1 skipDelegateAssignment:(_Bool)arg2 customCurve:(id)arg3;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (id)_trackedAnimations;
- (id)_canonicalTrackedLayerAnimationInLayer:(id *)arg1;
- (void)setupCustomTimingCurve;
- (id)_createDeferredAnimationForKey:(id)arg1;
- (void)_finalizeDeferredAnimations;
- (void)setAnimationAttributes:(id)arg1 skipDelegateAssignment:(_Bool)arg2;
- (void)setAnimationAttributes:(id)arg1;
- (void)_runConstraintBasedLayoutAnimations;
- (void)_removeAnimationStateFromTrackingMap:(_Bool)arg1 disableTrackingIfNeeded:(_Bool)arg2;
- (void)_decrementDidEndCount;
- (void)_setFinishedPosition:(long long)arg1;
- (_Bool)_allowsUserInteractionToCutOffEndOfAnimation;
- (_Bool)_allowsHitTesting;
- (void)_trackObject:(id)arg1 withAnimationPropertyName:(id)arg2 inLayer:(id)arg3;
- (_Bool)_isKeyframeAnimation;
- (id)_deferredAnimationForView:(id)arg1 key:(id)arg2;
- (_Bool)_hasDeferredAnimationForView:(id)arg1 key:(id)arg2;
- (id)_updateAnimationFrameWithAnimationProperties:(id)arg1;
- (void)_removeLastCompletion;
- (void)_removeAnimationStateFromTrackingMap:(_Bool)arg1;

@end
