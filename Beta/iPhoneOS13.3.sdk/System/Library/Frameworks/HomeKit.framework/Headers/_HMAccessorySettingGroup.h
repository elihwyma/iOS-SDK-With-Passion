/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessorySettings, HMFUnfairLock, NSArray, NSMutableSet, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue, _HMAccesorySettingGroupDelegate;

__attribute__((visibility("hidden")))
@interface _HMAccessorySettingGroup : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    id <_HMAccesorySettingGroupDelegate> _delegate;
    NSUUID *_identifier;
    NSString *_name;
    _HMContext *_context;
    HMAccessorySettings *_accessorySettings;
}

@property (retain, nonatomic) HMAccessorySettings *accessorySettings;
@property (retain, nonatomic) _HMContext *context;
@property (weak) id <_HMAccesorySettingGroupDelegate> delegate;
@property (copy, readonly) NSUUID *identifier;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSArray *settings;
@property (copy, readonly) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)logCategory;
+ (id)supportedSettingsClasses;
+ (id)supportedGroupsClasses;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)shortDescription;
- (id)clientQueue;
- (id)logIdentifier;
- (_Bool)mergeObject:(id)arg1;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)messageDestination;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
- (void)notifyDelegateOfAddedSetting:(id)arg1;
- (void)notifyDelegateOfRemovedSetting:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)notifyDelegateOfAddedGroup:(id)arg1;
- (void)notifyDelegateOfRemovedGroup:(id)arg1;
- (void)removeGroup:(id)arg1;
- (_Bool)mergeSettings:(id)arg1;
- (_Bool)mergeGroups:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
- (void)addSetting:(id)arg1 toGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeSetting:(id)arg1 fromGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)groupWithIdentifier:(id)arg1;
- (void)addGroup:(id)arg1 toGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeGroup:(id)arg1 fromGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
