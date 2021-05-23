/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessorySettingAdapter.h>

@class NSString;

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)areAllAccessoriesLoggedIntoSameAccount:(id)arg1;
+ (_Bool)areAllAccessoriesLoggedOut:(id)arg1;

- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

@end
