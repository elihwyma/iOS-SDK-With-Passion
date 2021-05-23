/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface NCNotificationOptions : NSObject

{
    NSSet *_alertSuppressionContexts;
    NSString *_alternateActionLabel;
    _Bool _dismissAutomatically;
    _Bool _dismissAutomaticallyForCarPlay;
    _Bool _overridesQuietMode;
    _Bool _overridesDowntime;
    _Bool _alertsWhenLocked;
    _Bool _addToLockScreenWhenLocked;
    unsigned long long _lockScreenPersistence;
    unsigned long long _lockScreenPriority;
    unsigned long long _realertCount;
    _Bool _suppressesAlertsWhenAppIsActive;
    _Bool _silencedByMenuButtonPress;
    _Bool _overridesPocketMode;
    _Bool _canPlaySound;
    _Bool _canTurnOnDisplay;
    _Bool _requestsFullScreenPresentation;
    _Bool _hideClearActionInList;
    _Bool _numberOfLinesInfinite;
    _Bool _preemptsPresentedNotification;
    _Bool _preemptsSTAR;
    _Bool _revealsAdditionalContentOnPresentation;
    _Bool _suppressesTitleWhenLocked;
    _Bool _suppressesSubtitleWhenLocked;
    _Bool _suppressesBodyWhenLocked;
    unsigned long long _contentPreviewSetting;
    _Bool _coalescesWhenLocked;
    _Bool _preventsAutomaticLock;
    _Bool _revealsAdditionalContentIfNoDefaultAction;
    _Bool _lauchUsingSiriForCarPlayDefaultAction;
    _Bool _allowActionsForCarPlay;
    _Bool _playMediaWhenRaised;
    _Bool _hideCloseActionForCarPlay;
}

@property (copy, nonatomic, readonly) NSSet *alertSuppressionContexts;
@property (copy, nonatomic, readonly) NSString *alternateActionLabel;
@property (nonatomic, readonly) _Bool dismissAutomatically;
@property (nonatomic, readonly) _Bool dismissAutomaticallyForCarPlay;
@property (nonatomic, readonly) _Bool overridesQuietMode;
@property (nonatomic, readonly) _Bool overridesDowntime;
@property (nonatomic, readonly) _Bool alertsWhenLocked;
@property (nonatomic, readonly) _Bool addToLockScreenWhenUnlocked;
@property (nonatomic, readonly) unsigned long long lockScreenPersistence;
@property (nonatomic, readonly) unsigned long long lockScreenPriority;
@property (nonatomic, readonly) unsigned long long realertCount;
@property (nonatomic, readonly) _Bool suppressesAlertsWhenAppIsActive;
@property (nonatomic, readonly) _Bool canPlaySound;
@property (nonatomic, readonly) _Bool canTurnOnDisplay;
@property (nonatomic, readonly) _Bool requestsFullScreenPresentation;
@property (nonatomic, readonly) _Bool preemptsPresentedNotification;
@property (nonatomic, readonly) _Bool preemptsSTAR;
@property (nonatomic, readonly) _Bool revealsAdditionalContentOnPresentation;
@property (nonatomic, readonly) _Bool suppressesTitleWhenLocked;
@property (nonatomic, readonly) _Bool suppressesSubtitleWhenLocked;
@property (nonatomic, readonly) _Bool suppressesBodyWhenLocked;
@property (nonatomic, readonly) _Bool playMediaWhenRaised;
@property (nonatomic, readonly) unsigned long long contentPreviewSetting;
@property (nonatomic, readonly) _Bool silencedByMenuButtonPress;
@property (nonatomic, readonly) _Bool overridesPocketMode;
@property (nonatomic, readonly) _Bool hideClearActionInList;
@property (nonatomic, readonly, getter=isNumberOfLinesInfinite) _Bool numberOfLinesInfinite;
@property (nonatomic, readonly) _Bool coalescesWhenLocked;
@property (nonatomic, readonly) _Bool preventsAutomaticLock;
@property (nonatomic, readonly) _Bool revealsAdditionalContentIfNoDefaultAction;
@property (nonatomic, readonly) _Bool lauchUsingSiriForCarPlayDefaultAction;
@property (nonatomic, readonly) _Bool allowActionsForCarPlay;
@property (nonatomic, readonly) _Bool hideCloseActionForCarPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationOptions:(id)arg1;

@end
