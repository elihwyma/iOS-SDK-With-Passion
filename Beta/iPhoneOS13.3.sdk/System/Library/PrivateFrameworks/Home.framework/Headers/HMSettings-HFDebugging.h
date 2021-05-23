/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMSettings.h>

#import <Home/Swift-Protocol.h>

@class NATreeNode, NSString;

@interface HMSettings (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NATreeNode *hf_codex;

+ (id)hf_LoadSettingsWhitelist:(unsigned long long)arg1;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_accessorySettingAtKeyPath:(id)arg1;
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;

@end
