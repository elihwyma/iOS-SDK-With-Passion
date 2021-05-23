/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSLockScreenTestPluginSettings, NSMutableDictionary, NSString, SBLockScreenPlugin;

@protocol SBLockScreenPluginManagerDelegate;

@interface SBLockScreenPluginManager : NSObject <Swift>

{
    NSMutableDictionary *_plugins;
    SBLockScreenPlugin *_activePlugin;
    SBLockScreenPlugin *_displayedPlugin;
    id <SBLockScreenPluginManagerDelegate> _delegate;
    CSLockScreenTestPluginSettings *_testSettings;
    _Bool _enabled;
}

@property (nonatomic, readonly) SBLockScreenPlugin *activePlugin;
@property (nonatomic, readonly) SBLockScreenPlugin *displayedPlugin;
@property (weak, nonatomic) id <SBLockScreenPluginManagerDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)handleEvent:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;
- (void)deactivatePluginController:(id)arg1;
- (id)lockScreenActionContext;
- (_Bool)enableLockScreenPluginWithContext:(id)arg1;
- (_Bool)disableLockScreenPluginWithContext:(id)arg1;
- (void)activatePluginController:(id)arg1;
- (_Bool)pluginController:(id)arg1 sendAction:(id)arg2;
- (void)_handleUIRelock;
- (void)_refreshLockScreenPlugin;
- (_Bool)_loadLockScreenPluginWithContext:(id)arg1;
- (_Bool)_handlePluginDisabled:(id)arg1 withContext:(id)arg2;
- (_Bool)_sendEventToPlugin:(CDUnknownBlockType)arg1;
- (id)_highestPriorityPluginIgnoringViewDisplay:(_Bool)arg1;
- (void)_setActivePlugin:(id)arg1 displayedPlugin:(id)arg2;
- (id)_pluginForPluginController:(id)arg1;

@end
