/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUIOccurrenceTableViewCell.h>

@interface EKUIOccurrenceWidgetTableViewCell : EKUIOccurrenceTableViewCell

+ (id)normalBackgroundColor;
+ (id)_primaryTextColor;
+ (id)_secondaryTextColor;
+ (id)needsReplyStripeColor;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)cancelledDeclinedColorBarColor;
+ (_Bool)vibrant;
+ (id)normalPrimaryTextColor;
+ (id)prefixPrimaryTextColor;
+ (id)invitationPrimaryTextColor;
+ (id)strikethroughPrimaryTextColor;
+ (id)normalSecondaryTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)normalTopTimeTextColor;
+ (id)normalBottomTimeTextColor;
+ (id)strikethroughTimeTextColor;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
