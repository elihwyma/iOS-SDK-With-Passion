/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILocalNotification.h>

#import <UIKitCore/Swift-Protocol.h>

@class CLRegion, NSCalendar, NSData, NSDate, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification <Swift>

{
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned long long repeatInterval;
    NSCalendar *repeatCalendar;
    CLRegion *region;
    _Bool regionTriggersOnce;
    NSString *alertBody;
    _Bool hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *alertTitle;
    NSString *soundName;
    long long applicationIconBadgeNumber;
    NSData *userInfoData;
    NSString *category;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)userInfo;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fireDate;
- (void)setFireDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (id)category;
- (void)setCategory:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)region;
- (unsigned long long)repeatInterval;
- (void)setRegion:(id)arg1;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setHasAction:(_Bool)arg1;
- (void)setAlertAction:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (void)_setUserInfoData:(id)arg1;
- (void)setRegionTriggersOnce:(_Bool)arg1;
- (id)repeatCalendar;
- (id)alertBody;
- (_Bool)hasAction;
- (id)alertAction;
- (id)alertLaunchImage;
- (id)alertTitle;
- (id)soundName;
- (long long)applicationIconBadgeNumber;
- (_Bool)regionTriggersOnce;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (_Bool)isTriggeredByDate;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (long long)compareFireDates:(id)arg1;
- (void)validate;
- (_Bool)isTriggeredByRegion;

@end
