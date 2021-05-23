/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUITableViewCell.h>

@interface EKUITableViewCellWithPrimaryAndSecondaryFonts : EKUITableViewCell

+ (void)initialize;
+ (id)secondaryTextLabelFont;
+ (id)primaryTextLabelFontForWidth:(double)arg1;
+ (_Bool)allowLargestFontSizesForWidth:(double)arg1;
+ (id)scalablePrimaryTextLabelFont;
+ (id)constrainedPrimaryTextLabelFont;
+ (id)timeLabelsFont;
+ (void)_clearFontCaches;

- (struct UIEdgeInsets)layoutMargins;
- (id)primaryTextLabelFont;
- (id)secondaryTextLabelFont;
- (id)timeLabelsFont;

@end
