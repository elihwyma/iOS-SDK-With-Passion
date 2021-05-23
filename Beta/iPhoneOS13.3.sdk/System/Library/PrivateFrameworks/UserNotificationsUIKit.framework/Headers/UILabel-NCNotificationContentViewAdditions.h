/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UILabel.h>

@class NSString, UIColor, UIFont;

@interface UILabel (NCNotificationContentViewAdditions)

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, setter=nc_setNumberOfLines:) unsigned long long nc_numberOfLines;

@end
