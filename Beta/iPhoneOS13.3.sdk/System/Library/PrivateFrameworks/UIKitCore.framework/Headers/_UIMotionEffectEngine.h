/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSArray, NSMapTable, NSMutableSet, NSString, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEvent, _UIMotionEffectEventProvider;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject

{
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_suspendedViewsToEffectSets;
    _UIMotionEffectEventProvider *_eventProvider;
    _Bool _hasReceivedAtLeastOneEventSinceStarting;
    _UIMotionEffectEvent *_pendingEvent;
    struct os_unfair_lock_s _pendingEventLock;
    CADisplayLink *_displayLink;
    _Bool _generatingUpdates;
    NSMutableSet *_suspendReasons;
    _UIMotionEffectEvent *_lastEvent;
    _Bool _slowUpdatesEnabled;
    _Bool _pendingSlowDown;
    long long _eventProviderStatus;
    _Bool _allAnalyzersAreCentered;
    _Bool _hasAppliedAtLeastOneUpdateSinceStarting;
    _Bool _isPendingReset;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
    long long _targetInterfaceOrientation;
}

@property (nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation;
@property (nonatomic, readonly) NSArray *suspensionReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_eventProviderClass;
+ (Class)_analyzerClass;
+ (_Bool)_motionEffectsEnabled;
+ (_Bool)_motionEffectsSupported;

- (id)init;
- (void)dealloc;
- (void)updateWithEvent:(id)arg1;
- (void)updateEventProviderStatus:(long long)arg1;
- (void)_startOrStopGeneratingUpdates;
- (void)beginSuspendingForReason:(id)arg1;
- (void)resetMotionAnalysis;
- (void)endSuspendingForReason:(id)arg1;
- (void)_stopGeneratingUpdates;
- (void)_unapplyAllEffects;
- (void)_updateDisplayLinkInterval;
- (_Bool)_isSuspended;
- (void)_toggleSlowUpdates;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (void)_handleLatestDeviceMotion;
- (_Bool)_shouldGenerateUpdates;
- (void)_startGeneratingUpdates;
- (_Bool)_hasMotionEffectsForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (_Bool)_motionEffectsAreSuspendedForView:(id)arg1;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (_Bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;

@end
