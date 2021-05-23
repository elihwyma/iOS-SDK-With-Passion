/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage;

@protocol NCNotificationStaticContentProvidingDelegate;

@protocol NCNotificationStaticContentProviding <Swift>

@property (weak, nonatomic) id <NCNotificationStaticContentProvidingDelegate> delegate;
@property (nonatomic, readonly) NSArray *icons;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, getter=isDateAllDay) _Bool dateAllDay;
@property (copy, nonatomic, readonly) NSTimeZone *timeZone;
@property (copy, nonatomic, readonly) NSString *primaryText;
@property (copy, nonatomic, readonly) NSString *primarySubtitleText;
@property (copy, nonatomic, readonly) NSString *secondaryText;
@property (copy, nonatomic, readonly) NSString *summaryText;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (copy, nonatomic, readonly) CDUnknownBlockType cancelAction;
@property (copy, nonatomic, readonly) CDUnknownBlockType clearAction;
@property (copy, nonatomic, readonly) CDUnknownBlockType closeAction;
@property (copy, nonatomic, readonly) CDUnknownBlockType defaultAction;
@property (nonatomic, readonly) NSArray *interfaceActions;
@property (nonatomic, readonly, getter=isNumberOfLinesInfinite) _Bool numberOfLinesInfinite;
@property (nonatomic, readonly) _Bool showsTextInputOnAppearance;
@property (nonatomic, readonly) unsigned long long coalesceCount;
@property (copy, nonatomic) NSArray *overriddenActions;
@property (copy, nonatomic, readonly) NSArray *currentActions;

@end
