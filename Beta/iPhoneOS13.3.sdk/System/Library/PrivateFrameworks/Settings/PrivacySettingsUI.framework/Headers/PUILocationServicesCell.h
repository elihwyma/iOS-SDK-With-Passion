/*
 Image: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
 */

#import <Preferences/PSSwitchTableCell.h>

@class PUILocationUsageMixin;

__attribute__((visibility("hidden")))
@interface PUILocationServicesCell : PSSwitchTableCell

{
    PUILocationUsageMixin *_location;
}

@property (nonatomic, readonly) PUILocationUsageMixin *location;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
