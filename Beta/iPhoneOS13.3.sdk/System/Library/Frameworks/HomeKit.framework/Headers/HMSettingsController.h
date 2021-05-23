/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMSettingGroup, HMSettings, HMSettingsMessageHandler, NSDictionary, NSMapTable, NSString, NSUUID, _HMContext;

@protocol HMSettingsDelegate;

@interface HMSettingsController : NSObject

{
    HMSettings *_settings;
    id <HMSettingsDelegate> _delegate;
    HMSettingGroup *_rootGroup;
    HMSettingsMessageHandler *_messageHandler;
    NSDictionary *_encodedSettings;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
    _HMContext *_context;
    NSUUID *_parentIdentifier;
    NSString *_codingKey;
}

@property (retain) HMSettingsMessageHandler *messageHandler;
@property (retain) HMSettingGroup *rootGroup;
@property (retain) NSDictionary *encodedSettings;
@property (retain) NSMapTable *groupsMap;
@property (retain) NSMapTable *settingsMap;
@property (retain) _HMContext *context;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) NSString *codingKey;
@property (readonly) HMSettings *settings;
@property (weak) id <HMSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)mergeWith:(id)arg1;
- (id)initWithParentIdentifier:(id)arg1 codingKey:(id)arg2 messageHandler:(id)arg3 settingsCreator:(id)arg4;
- (void)_updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)settingsDidChangeWithRootGroup:(id)arg1 addedGroups:(id)arg2 addedSettings:(id)arg3 changedSettings:(id)arg4;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateValueForSetting:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithParentIdentifier:(id)arg1 codingKey:(id)arg2;
- (id)settingForIdentifier:(id)arg1;
- (id)settingGroupForIdentifier:(id)arg1;
- (void)notifyDelegateOfUpdate;
- (void)decodeWithCoder:(id)arg1;
- (void)configureWithContext:(id)arg1;

@end
