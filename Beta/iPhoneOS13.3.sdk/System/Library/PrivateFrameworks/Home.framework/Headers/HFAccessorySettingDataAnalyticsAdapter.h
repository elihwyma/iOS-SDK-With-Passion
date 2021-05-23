/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessorySettingAdapter.h>

@class NSString;

@interface HFAccessorySettingDataAnalyticsAdapter : HFAccessorySettingAdapter

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (void)configureSection:(id)arg1 forEntity:(id)arg2;
- (id)customizeSections:(id)arg1 forEntity:(id)arg2;

@end
