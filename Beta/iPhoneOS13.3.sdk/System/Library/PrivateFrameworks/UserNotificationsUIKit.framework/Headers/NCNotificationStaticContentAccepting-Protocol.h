/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NSArray, NSString, UIImage, UIView;

@protocol NCNotificationStaticContentAccepting <Swift>

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NSArray *interfaceActions;
@property (copy, nonatomic) NSString *summaryText;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
@property (nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines;

@end
