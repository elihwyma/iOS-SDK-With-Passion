/*
 Image: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
 */

#import <Preferences/PSTableCell.h>

@class NSURL, PUILocationUsageMixin;

__attribute__((visibility("hidden")))
@interface PUILocationServicesAuthLevelCell : PSTableCell

{
    NSURL *_bundleURL;
    _Bool _isWebApp;
    PUILocationUsageMixin *_location;
    unsigned long long _authLevel;
}

@property (nonatomic, readonly) PUILocationUsageMixin *location;
@property (nonatomic, readonly) unsigned long long authLevel;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canReload;
- (id)getLazyIcon;
- (id)getLazyIconID;

@end
