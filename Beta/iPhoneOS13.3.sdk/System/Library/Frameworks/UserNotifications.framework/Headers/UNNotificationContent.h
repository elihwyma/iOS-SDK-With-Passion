/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, UNNotificationIcon, UNNotificationSound;

@interface UNNotificationContent : NSObject

{
    NSArray *_attachments;
    NSNumber *_badge;
    NSString *_body;
    NSString *_categoryIdentifier;
    NSDate *_date;
    NSString *_defaultActionTitle;
    NSURL *_defaultActionURL;
    NSDate *_expirationDate;
    NSString *_header;
    NSString *_launchImageName;
    NSArray *_peopleIdentifiers;
    _Bool _shouldHideDate;
    _Bool _shouldHideTime;
    _Bool _shouldIgnoreDoNotDisturb;
    _Bool _shouldIgnoreDowntime;
    _Bool _shouldSuppressScreenLightUp;
    _Bool _shouldPreventNotificationDismissalAfterDefaultAction;
    _Bool _shouldAuthenticateDefaultAction;
    _Bool _shouldBackgroundDefaultAction;
    _Bool _shouldSuppressDefaultAction;
    _Bool _shouldSuppressSyncDismissalWhenRemoved;
    _Bool _shouldUseRequestIdentifierForDismissalSync;
    _Bool _shouldPreemptPresentedNotification;
    _Bool _shouldPreemptSTAR;
    UNNotificationSound *_sound;
    NSString *_accessoryImageName;
    NSString *_subtitle;
    NSString *_threadIdentifier;
    NSString *_title;
    NSSet *_topicIdentifiers;
    unsigned long long _realertCount;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
    NSString *_targetContentIdentifier;
    NSDictionary *_userInfo;
    UNNotificationIcon *_icon;
}

@property (copy, nonatomic, readonly) NSString *header;
@property (nonatomic, readonly) _Bool shouldIgnoreDoNotDisturb;
@property (nonatomic, readonly) _Bool shouldIgnoreDowntime;
@property (nonatomic, readonly) _Bool shouldSuppressScreenLightUp;
@property (nonatomic, readonly) _Bool shouldHideDate;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) _Bool shouldAuthenticateDefaultAction;
@property (nonatomic, readonly) _Bool shouldBackgroundDefaultAction;
@property (nonatomic, readonly) _Bool shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic, readonly) _Bool shouldSuppressDefaultAction;
@property (copy, nonatomic, readonly) NSURL *defaultActionURL;
@property (copy, nonatomic, readonly) UNNotificationIcon *icon;
@property (copy, nonatomic, readonly) NSSet *topicIdentifiers;
@property (nonatomic, readonly) unsigned long long realertCount;
@property (nonatomic, readonly) _Bool shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic, readonly) _Bool shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic, readonly) NSString *accessoryImageName;
@property (copy, nonatomic, readonly) NSArray *peopleIdentifiers;
@property (nonatomic, readonly) _Bool shouldPreemptPresentedNotification;
@property (nonatomic, readonly) _Bool shouldPreemptSTAR;
@property (nonatomic, readonly) _Bool shouldHideTime;
@property (nonatomic, readonly) _Bool hasDefaultAction;
@property (copy, nonatomic, readonly) NSString *defaultActionTitle;
@property (copy, nonatomic, readonly) NSArray *attachments;
@property (copy, nonatomic, readonly) NSNumber *badge;
@property (copy, nonatomic, readonly) NSString *body;
@property (copy, nonatomic, readonly) NSString *categoryIdentifier;
@property (copy, nonatomic, readonly) NSString *launchImageName;
@property (copy, nonatomic, readonly) UNNotificationSound *sound;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *threadIdentifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;
@property (copy, nonatomic, readonly) NSString *summaryArgument;
@property (nonatomic, readonly) unsigned long long summaryArgumentCount;
@property (copy, nonatomic, readonly) NSString *targetContentIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionForDebug:(_Bool)arg1;
- (id)_safeStringForString:(id)arg1 debug:(_Bool)arg2;
- (id)_initWithAccessoryImageName:(id)arg1 attachments:(id)arg2 badge:(id)arg3 body:(id)arg4 categoryIdentifier:(id)arg5 date:(id)arg6 icon:(id)arg7 defaultActionTitle:(id)arg8 defaultActionURL:(id)arg9 expirationDate:(id)arg10 header:(id)arg11 launchImageName:(id)arg12 peopleIdentifiers:(id)arg13 shouldHideDate:(_Bool)arg14 shouldHideTime:(_Bool)arg15 shouldIgnoreDoNotDisturb:(_Bool)arg16 shouldIgnoreDowntime:(_Bool)arg17 shouldSuppressScreenLightUp:(_Bool)arg18 shouldAuthenticateDefaultAction:(_Bool)arg19 shouldBackgroundDefaultAction:(_Bool)arg20 shouldPreventNotificationDismissalAfterDefaultAction:(_Bool)arg21 shouldSuppressDefaultAction:(_Bool)arg22 shouldSuppressSyncDismissalWhenRemoved:(_Bool)arg23 shouldUseRequestIdentifierForDismissalSync:(_Bool)arg24 shouldPreemptPresentedNotification:(_Bool)arg25 shouldPreemptSTAR:(_Bool)arg26 sound:(id)arg27 subtitle:(id)arg28 threadIdentifier:(id)arg29 title:(id)arg30 topicIdentifiers:(id)arg31 realertCount:(unsigned long long)arg32 summaryArgument:(id)arg33 summaryArgumentCount:(unsigned long long)arg34 targetContentIdentifier:(id)arg35 userInfo:(id)arg36;

@end
