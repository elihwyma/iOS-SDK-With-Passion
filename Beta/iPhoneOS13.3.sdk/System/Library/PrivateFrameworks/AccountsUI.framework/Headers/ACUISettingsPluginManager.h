/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PSViewController;

@protocol ACUISettingsPluginParentProtocol;

@interface ACUISettingsPluginManager : NSObject

{
    PSViewController<ACUISettingsPluginParentProtocol> *_parentViewController;
    NSMutableDictionary *_pluginCache;
}

- (id)initWithParentViewController:(id)arg1;
- (id)_settingsPluginFromBundleWithName:(id)arg1;
- (id)_loadSettingsPluginFromBundleWithName:(id)arg1;
- (void)parentViewControllerWillDisappear;
- (id)mailSettingsPlugin;
- (id)calendarSettingsPlugin;
- (id)contactsSettingsPlugin;

@end
