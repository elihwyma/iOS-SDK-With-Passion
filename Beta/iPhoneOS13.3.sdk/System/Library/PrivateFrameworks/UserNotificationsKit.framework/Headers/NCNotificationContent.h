/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage;

@interface NCNotificationContent : NSObject

{
    NSString *_header;
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_categorySummaryFormat;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
    NSArray *_icons;
    NSArray *_carPlayIcons;
    UIImage *_attachmentImage;
    NSDate *_date;
    _Bool _dateAllDay;
    NSTimeZone *_timeZone;
    NSString *_topic;
}

@property (copy, nonatomic, readonly) NSString *header;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *message;
@property (copy, nonatomic, readonly) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic, readonly) NSString *categorySummaryFormat;
@property (copy, nonatomic, readonly) NSString *summaryArgument;
@property (nonatomic, readonly) unsigned long long summaryArgumentCount;
@property (copy, nonatomic, readonly) NSString *topic;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSArray *icons;
@property (nonatomic, readonly) UIImage *carPlayIcon;
@property (nonatomic, readonly) NSArray *carPlayIcons;
@property (nonatomic, readonly) UIImage *attachmentImage;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, getter=isDateAllDay) _Bool dateAllDay;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationContent:(id)arg1;

@end
