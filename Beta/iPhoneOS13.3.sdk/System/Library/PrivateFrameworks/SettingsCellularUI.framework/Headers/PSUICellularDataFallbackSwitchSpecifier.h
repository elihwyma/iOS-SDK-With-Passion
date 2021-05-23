/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class PSListController;

__attribute__((visibility("hidden")))
@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier

{
    PSListController *_hostController;
}

@property (weak, nonatomic) PSListController *hostController;

- (void)setFallbackEnabled:(id)arg1 specifier:(id)arg2;
- (id)isFallbackEnabled:(id)arg1;
- (id)initWithHostController:(id)arg1;

@end
