/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Preferences/PSSpecifier.h>

@interface PSSpecifier (ACUIGroupSpecifier)

+ (id)_bundle;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2 linkButtons:(id)arg3;
+ (id)groupSpecifierWithFooterLinkButton:(id)arg1;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButton:(id)arg2;
+ (id)groupSpecifierWithFooterText:(id)arg1 linkButtons:(id)arg2;
+ (id)groupSpecifierWithHeader:(id)arg1 footer:(id)arg2;
+ (id)acui_iconForDataclass:(id)arg1;
+ (id)acui_specifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
+ (id)acui_linkListCellSpecifierForDataclass:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5;
+ (id)acui_specifierForAppWithBundleID:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;

- (id)acui_dataclass;
- (id)acui_appBundleID;

@end
