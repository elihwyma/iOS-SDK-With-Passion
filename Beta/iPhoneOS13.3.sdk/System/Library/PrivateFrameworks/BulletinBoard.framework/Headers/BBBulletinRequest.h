/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/BBBulletin.h>

@class BBAccessoryIcon, BBAction, BBAttachmentMetadata, BBContent, BBImage, BBSectionIcon, BBSound, NSArray, NSDate, NSDictionary, NSSet, NSString, NSTimeZone;

@interface BBBulletinRequest : BBBulletin

{
    unsigned long long _expirationEvents;
}

@property (copy, nonatomic) NSString *bulletinID;
@property (retain, nonatomic) NSDate *lastInterruptDate;
@property (retain, nonatomic) NSDate *publicationDate;
@property (copy, nonatomic) NSString *universalSectionID;
@property (copy, nonatomic) NSString *parentSectionID;
@property (nonatomic) long long contentPreviewSetting;
@property (retain, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSString *unlockActionLabelOverride;
@property (nonatomic) unsigned long long realertCount_deprecated;
@property (copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated;
@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSSet *subsectionIDs;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *publisherBulletinID;
@property (copy, nonatomic) NSString *dismissalID;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *threadID;
@property (copy, nonatomic) NSArray *peopleIDs;
@property (nonatomic) long long sectionSubtype;
@property (copy, nonatomic) NSArray *intentIDs;
@property (nonatomic) unsigned long long counter;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) BBContent *modalAlertContent;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (retain, nonatomic) BBSectionIcon *icon;
@property (nonatomic) _Bool hasCriticalIcon;
@property (nonatomic) _Bool hasEventDate;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *recencyDate;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic) _Bool dateIsAllDay;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) BBAccessoryIcon *accessoryIconMask;
@property (retain, nonatomic) BBImage *accessoryImage;
@property (nonatomic) _Bool clearable;
@property (retain, nonatomic) BBSound *sound;
@property (nonatomic) _Bool turnsOnDisplay;
@property (copy, nonatomic) BBAttachmentMetadata *primaryAttachment;
@property (copy, nonatomic) NSArray *additionalAttachments;
@property (nonatomic) _Bool wantsFullscreenPresentation;
@property (nonatomic) _Bool ignoresQuietMode;
@property (nonatomic) _Bool ignoresDowntime;
@property (nonatomic) _Bool preemptsPresentedAlert;
@property (nonatomic) _Bool preemptsSTAR;
@property (copy, nonatomic) NSSet *alertSuppressionContexts;
@property (copy, nonatomic) BBAction *defaultAction;
@property (copy, nonatomic) BBAction *alternateAction;
@property (copy, nonatomic) BBAction *acknowledgeAction;
@property (copy, nonatomic) BBAction *dismissAction;
@property (copy, nonatomic) BBAction *snoozeAction;
@property (copy, nonatomic) BBAction *raiseAction;
@property (copy, nonatomic) BBAction *silenceAction;
@property (copy, nonatomic) NSArray *supplementaryActions;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long expirationEvents;
@property (copy, nonatomic) BBAction *expireAction;
@property (nonatomic) _Bool usesExternalSync;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic) _Bool preventAutomaticRemovalFromLockScreen;
@property (nonatomic) long long lockScreenPriority;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) BBContent *starkBannerContent;
@property (nonatomic) _Bool expiresOnPublisherDeath;
@property (copy, nonatomic) NSString *section;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic) _Bool showsUnreadIndicator;
@property (nonatomic) _Bool tentative;
@property (nonatomic) long long primaryAttachmentType;

- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)publish;
- (void)addButton:(id)arg1;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)setUnlockActionLabel:(id)arg1;
- (void)publish:(_Bool)arg1;
- (void)setSupplementaryActions:(id)arg1 forLayout:(long long)arg2;
- (void)_updateSupplementaryAction:(id)arg1;
- (void)addAttachmentOfType:(long long)arg1;
- (void)withdraw;
- (void)addAlertSuppressionAppID:(id)arg1;
- (void)generateBulletinID;
- (_Bool)hasContentModificationsRelativeTo:(id)arg1;
- (_Bool)hasAdditionalAttachmentsModificationsRelativeTo:(id)arg1;
- (void)generateNewBulletinID;

@end
