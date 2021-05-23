/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class PSGTVOutManager;

__attribute__((visibility("hidden")))
@interface PSGTVOutController : PSListController

{
    PSGTVOutManager *_tvOutManager;
}

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)handleTVOutChange;
- (void)writeValue:(struct __CFString *)arg1 forKey:(struct __CFString *)arg2;
- (id)isWidescreen:(id)arg1;
- (void)setWidescreen:(id)arg1 specifier:(id)arg2;
- (id)tvSignal:(id)arg1;
- (void)setTVSignal:(id)arg1 specifier:(id)arg2;

@end
