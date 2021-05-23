/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HMHome, HMSettings, NSSet;

@protocol HFHomeKitSettingsVendor <Swift>

@property (nonatomic, readonly) HMHome *hf_home;
@property (nonatomic, readonly) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (nonatomic, readonly) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (nonatomic, readonly) _Bool hasValidSettings;
@property (readonly) HMSettings *settings;

@end
