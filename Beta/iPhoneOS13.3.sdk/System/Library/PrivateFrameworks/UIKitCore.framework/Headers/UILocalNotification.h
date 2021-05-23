/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class CLRegion, NSCalendar, NSDate, NSDictionary, NSString, NSTimeZone;

@interface UILocalNotification : NSObject <Swift>

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) unsigned long long repeatInterval;
@property (copy, nonatomic) NSCalendar *repeatCalendar;
@property (copy, nonatomic) CLRegion *region;
@property (nonatomic) _Bool regionTriggersOnce;
@property (copy, nonatomic) NSString *alertBody;
@property (nonatomic) _Bool hasAction;
@property (copy, nonatomic) NSString *alertAction;
@property (copy, nonatomic) NSString *alertLaunchImage;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *soundName;
@property (nonatomic) long long applicationIconBadgeNumber;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *category;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (_Bool)isTriggeredByDate;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (long long)compareFireDates:(id)arg1;
- (void)validate;
- (_Bool)isTriggeredByRegion;

@end
