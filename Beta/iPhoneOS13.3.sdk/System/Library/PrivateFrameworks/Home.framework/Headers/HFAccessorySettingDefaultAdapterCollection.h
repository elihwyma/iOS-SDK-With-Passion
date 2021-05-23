/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFAccessorySettingAdapter, HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject

{
    HFAccessorySettingManagedConfigurationAdapter *_managedConfigurationAdapter;
    HFAccessorySettingAdapter *_mobileTimerAdapter;
    HFAccessorySettingSiriLanguageAdapter *_siriLanguageAdapter;
}

@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter;
@property (retain, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter;
@property (retain, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter;
@property (nonatomic, readonly) NSSet *allAdapters;

@end
