/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HFAccessorySettingsEntity, NSString;

@protocol HFHomeKitSettingsVendor;

@protocol HFHomeKitSettingItemProtocol <Swift>

@property (nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (nonatomic, readonly) HFAccessorySettingsEntity *entity;
@property (nonatomic, readonly) NSString *settingKeyPath;

@end
