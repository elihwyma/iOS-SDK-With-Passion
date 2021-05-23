/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUICellContentView.h>

@interface EKUICellContentViewWithPrimaryAndSecondaryFonts : EKUICellContentView

+ (void)clearFontCaches;
+ (id)secondaryTextLabelFont;
+ (id)primaryTextLabelFontForWidth:(double)arg1;
+ (_Bool)allowLargestFontSizesForWidth:(double)arg1;
+ (id)scalablePrimaryTextLabelFont;
+ (id)constrainedPrimaryTextLabelFont;
+ (id)timeLabelsFont;

- (struct UIEdgeInsets)layoutMargins;
- (id)primaryTextLabelFont;

@end
