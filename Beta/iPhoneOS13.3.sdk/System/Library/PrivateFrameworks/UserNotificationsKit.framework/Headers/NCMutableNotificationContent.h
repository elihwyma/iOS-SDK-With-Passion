/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <UserNotificationsKit/NCNotificationContent.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage;

@interface NCMutableNotificationContent : NCNotificationContent

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSString *categorySummaryFormat;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSArray *icons;
@property (retain, nonatomic) UIImage *carPlayIcon;
@property (retain, nonatomic) NSArray *carPlayIcons;
@property (retain, nonatomic) UIImage *attachmentImage;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
