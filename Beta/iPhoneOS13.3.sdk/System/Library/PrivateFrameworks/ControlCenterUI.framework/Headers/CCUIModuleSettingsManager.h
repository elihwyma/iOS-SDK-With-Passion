/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class CCSModuleSettingsProvider, NSDictionary, NSHashTable, NSString;

@interface CCUIModuleSettingsManager : NSObject

{
    CCSModuleSettingsProvider *_settingsProvider;
    NSDictionary *_settingsByIdentifier;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)orderedEnabledModuleIdentifiers;
- (id)sortModuleIdentifiers:(id)arg1 forInterfaceOrientation:(long long)arg2;
- (id)moduleSettingsForModuleIdentifier:(id)arg1 prototypeSize:(struct CCUILayoutSize)arg2;
- (void)_loadSettings;
- (void)_runBlockOnListeners:(CDUnknownBlockType)arg1;
- (void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)arg1;

@end
