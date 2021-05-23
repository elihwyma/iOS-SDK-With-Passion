/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationSound.h>

@class NSNumber, NSString, NSURL;

@interface UNMutableNotificationSound : UNNotificationSound

@property (copy, nonatomic) NSString *alertTopic;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSNumber *audioVolume;
@property (nonatomic, getter=isCritical) _Bool critical;
@property (nonatomic) double maximumDuration;
@property (nonatomic) _Bool shouldIgnoreRingerSwitch;
@property (nonatomic) _Bool shouldRepeat;
@property (copy, nonatomic) NSString *toneFileName;
@property (copy, nonatomic) NSURL *toneFileURL;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (nonatomic) unsigned long long toneMediaLibraryItemIdentifier;
@property (copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSURL *vibrationPatternFileURL;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
