/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUIOccurrenceCellContentView.h>

@interface EKUIOccurrenceWidgetCellContentView : EKUIOccurrenceCellContentView

+ (id)normalBackgroundColor;
+ (id)_primaryTextColor;
+ (id)_secondaryTextColor;
+ (id)needsReplyStripeColor;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)tentativeBackgroundColor;
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

- (id)initWithFrame:(struct CGRect)arg1;

@end
