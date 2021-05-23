/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIFont.h>

@interface UIFont (ContactsUI)

+ (id)cnui_bodyFont;
+ (id)cnui_footnoteFont;
+ (_Bool)_shouldUseDefaultFont;
+ (void)ab_setIgnoreUserFontSize:(_Bool)arg1;
+ (id)ab_preferredFontForTextStyle:(id)arg1;
+ (id)ab_preferredRowFontForTextStyle:(id)arg1;
+ (id)ab_preferredContentSizeCategoryName;
+ (_Bool)ab_preferredContentSizeCategoryIsAccessibilityCategory;

- (id)ab_boldFont;
- (id)ab_italicFont;

@end
