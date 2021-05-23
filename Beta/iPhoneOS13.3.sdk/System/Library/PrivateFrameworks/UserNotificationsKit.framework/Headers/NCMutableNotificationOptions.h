/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <UserNotificationsKit/NCNotificationOptions.h>

@class NSSet, NSString;

@interface NCMutableNotificationOptions : NCNotificationOptions

@property (copy, nonatomic) NSSet *alertSuppressionContexts;
@property (copy, nonatomic) NSString *alternateActionLabel;
@property (nonatomic) _Bool dismissAutomatically;
@property (nonatomic) _Bool dismissAutomaticallyForCarPlay;
@property (nonatomic) _Bool overridesQuietMode;
@property (nonatomic) _Bool overridesDowntime;
@property (nonatomic) _Bool alertsWhenLocked;
@property (nonatomic) _Bool addToLockScreenWhenUnlocked;
@property (nonatomic) unsigned long long lockScreenPersistence;
@property (nonatomic) unsigned long long lockScreenPriority;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic) _Bool suppressesAlertsWhenAppIsActive;
@property (nonatomic) _Bool silencedByMenuButtonPress;
@property (nonatomic) _Bool overridesPocketMode;
@property (nonatomic) _Bool canPlaySound;
@property (nonatomic) _Bool canTurnOnDisplay;
@property (nonatomic) _Bool requestsFullScreenPresentation;
@property (nonatomic) _Bool suppressesTitleWhenLocked;
@property (nonatomic) _Bool suppressesSubtitleWhenLocked;
@property (nonatomic) _Bool suppressesBodyWhenLocked;
@property (nonatomic) unsigned long long contentPreviewSetting;
@property (nonatomic) _Bool hideClearActionInList;
@property (nonatomic, getter=isNumberOfLinesInfinite) _Bool numberOfLinesInfinite;
@property (nonatomic) _Bool preemptsPresentedNotification;
@property (nonatomic) _Bool preemptsSTAR;
@property (nonatomic) _Bool revealsAdditionalContentOnPresentation;
@property (nonatomic) _Bool coalescesWhenLocked;
@property (nonatomic) _Bool preventsAutomaticLock;
@property (nonatomic) _Bool revealsAdditionalContentIfNoDefaultAction;
@property (nonatomic) _Bool lauchUsingSiriForCarPlayDefaultAction;
@property (nonatomic) _Bool allowActionsForCarPlay;
@property (nonatomic) _Bool playMediaWhenRaised;
@property (nonatomic) _Bool hideCloseActionForCarPlay;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
