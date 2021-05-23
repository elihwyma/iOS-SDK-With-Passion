/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBColor, BBSectionIcon, NSNumber, NSSet, NSString;

@interface BBSectionSubtypeParameters : NSObject

{
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_subtypeSummaryFormat;
    NSString *_topic;
    NSString *_missedBannerDescriptionFormat;
    NSString *_fullUnlockActionLabel;
    NSString *_unlockActionLabel;
    NSString *_fullAlternateActionLabel;
    NSString *_alternateActionLabel;
    BBSectionIcon *_sectionIconOverride;
    BBColor *_tintColor;
    NSString *_bannerAccessoryRemoteViewControllerClassName;
    NSString *_bannerAccessoryRemoteServiceBundleIdentifier;
    NSString *_secondaryContentRemoteViewControllerClassName;
    NSString *_secondaryContentRemoteServiceBundleIdentifier;
    NSNumber *_boxedSuppressesAlertsWhenAppIsActive;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    NSNumber *_boxedCanBeSilencedByMenuButtonPress;
    NSNumber *_boxedPreventLock;
    NSNumber *_boxedIgnoresQuietMode;
    NSNumber *_boxedSuppressesTitle;
    NSNumber *_boxedShowsUnreadIndicatorForNoticesFeed;
    NSNumber *_boxedShowsContactPhoto;
    NSNumber *_boxedPlaysSoundForModify;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedIPodOutAlertType;
    NSNumber *_boxedAllowsAutomaticRemovalFromLockScreen;
    NSNumber *_boxedAllowsAddingToLockScreenWhenUnlocked;
    NSNumber *_boxedPrioritizeAtTopOfLockScreen;
    NSNumber *_boxedRevealsAdditionalContentOnPresentation;
    NSNumber *_boxedPrivacySettings;
    NSNumber *_boxedShouldDismissBulletinWhenClosed;
    NSNumber *_boxedAllowsPersistentBannersInCarPlay;
    NSNumber *_boxedAllowsSupplementaryActionsInCarPlay;
    NSNumber *_boxedPlaysMediaWhenRaised;
    NSNumber *_boxedSuppressDelayForForwardedBulletins;
    NSNumber *_boxedHideDismissActionInCarPlay;
}

@property (weak, nonatomic) BBSectionSubtypeParameters *fallbackParameters;
@property (retain, nonatomic) NSNumber *boxedSuppressesAlertsWhenAppIsActive;
@property (retain, nonatomic) NSNumber *boxedCoalescesWhenLocked;
@property (retain, nonatomic) NSNumber *boxedRealertCount;
@property (retain, nonatomic) NSNumber *boxedInertWhenLocked;
@property (retain, nonatomic) NSNumber *boxedPreservesUnlockActionCase;
@property (retain, nonatomic) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture;
@property (retain, nonatomic) NSNumber *boxedCanBeSilencedByMenuButtonPress;
@property (retain, nonatomic) NSNumber *boxedPreventLock;
@property (retain, nonatomic) NSNumber *boxedIgnoresQuietMode;
@property (retain, nonatomic) NSNumber *boxedSuppressesTitle;
@property (retain, nonatomic) NSNumber *boxedSubtypePriority;
@property (retain, nonatomic) NSNumber *boxedIPodOutAlertType;
@property (retain, nonatomic) NSNumber *boxedShowsUnreadIndicatorForNoticesFeed;
@property (retain, nonatomic) NSNumber *boxedShowsContactPhoto;
@property (retain, nonatomic) NSNumber *boxedPlaysSoundForModify;
@property (retain, nonatomic) NSNumber *boxedAllowsAutomaticRemovalFromLockScreen;
@property (retain, nonatomic) NSNumber *boxedAllowsAddingToLockScreenWhenUnlocked;
@property (retain, nonatomic) NSNumber *boxedPrioritizeAtTopOfLockScreen;
@property (retain, nonatomic) NSNumber *boxedRevealsAdditionalContentOnPresentation;
@property (retain, nonatomic) NSNumber *boxedPrivacySettings;
@property (retain, nonatomic) NSNumber *boxedShouldDismissBulletinWhenClosed;
@property (retain, nonatomic) NSNumber *boxedAllowsPersistentBannersInCarPlay;
@property (retain, nonatomic) NSNumber *boxedAllowsSupplementaryActionsInCarPlay;
@property (retain, nonatomic) NSNumber *boxedPlaysMediaWhenRaised;
@property (retain, nonatomic) NSNumber *boxedSuppressDelayForForwardedBulletins;
@property (retain, nonatomic) NSNumber *boxedHideDismissActionInCarPlay;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSString *subtypeSummaryFormat;
@property (copy, nonatomic) NSString *missedBannerDescriptionFormat;
@property (copy, nonatomic) NSString *fullUnlockActionLabel;
@property (copy, nonatomic) NSString *unlockActionLabel;
@property (copy, nonatomic) NSString *fullAlternateActionLabel;
@property (copy, nonatomic) NSString *alternateActionLabel;
@property (copy, nonatomic) BBSectionIcon *sectionIconOverride;
@property (nonatomic) _Bool suppressesAlertsWhenAppIsActive;
@property (nonatomic) _Bool coalescesWhenLocked;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic) _Bool inertWhenLocked;
@property (nonatomic) _Bool preservesUnlockActionCase;
@property (nonatomic) unsigned long long subtypePriority;
@property (nonatomic) long long iPodOutAlertType;
@property (retain, nonatomic) BBColor *tintColor;
@property (nonatomic) _Bool canBeSilencedByMenuButtonPress;
@property (nonatomic) _Bool preventLock;
@property (nonatomic) _Bool ignoresQuietMode;
@property (nonatomic) _Bool suppressesTitle;
@property (nonatomic) _Bool showsUnreadIndicatorForNoticesFeed;
@property (nonatomic) _Bool showsContactPhoto;
@property (nonatomic) _Bool playsSoundForModify;
@property (nonatomic) _Bool visuallyIndicatesWhenDateIsInFuture;
@property (retain, nonatomic) NSSet *alertSuppressionAppIDs;
@property (copy, nonatomic) NSString *bannerAccessoryRemoteViewControllerClassName;
@property (copy, nonatomic) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property (copy, nonatomic) NSString *secondaryContentRemoteViewControllerClassName;
@property (copy, nonatomic) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property (nonatomic) _Bool allowsAutomaticRemovalFromLockScreen;
@property (nonatomic) _Bool allowsAddingToLockScreenWhenUnlocked;
@property (nonatomic) _Bool prioritizeAtTopOfLockScreen;
@property (nonatomic) _Bool revealsAdditionalContentOnPresentation;
@property (nonatomic) unsigned long long privacySettings;
@property (nonatomic) _Bool shouldDismissBulletinWhenClosed;
@property (nonatomic) _Bool allowsPersistentBannersInCarPlay;
@property (nonatomic) _Bool allowsSupplementaryActionsInCarPlay;
@property (nonatomic) _Bool playsMediaWhenRaised;
@property (nonatomic) _Bool suppressDelayForForwardedBulletins;
@property (nonatomic) _Bool hideDismissActionInCarPlay;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) _Bool preemptsPresentedAlert;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFallbackParameters:(id)arg1;

@end
