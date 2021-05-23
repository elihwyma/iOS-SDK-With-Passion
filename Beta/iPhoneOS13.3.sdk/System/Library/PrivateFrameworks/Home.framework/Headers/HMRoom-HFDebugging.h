/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMRoom.h>

#import <Home/Swift-Protocol.h>

@class HMCameraProfile, HMHome, NSArray, NSDate, NSSet, NSString, NSUUID, UIImage;

@interface HMRoom (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIImage *hf_wallpaperImage;
@property (weak, nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSArray *hf_allCameraProfiles;
@property (nonatomic, readonly) NSArray *hf_allServices;
@property (nonatomic, readonly) NSArray *hf_allZones;
@property (weak, nonatomic, readonly) HMCameraProfile *hf_unitaryCameraProfile;
@property (nonatomic, readonly) NSArray *hf_unpairedHomePods;
@property (nonatomic, readonly) NSSet *hf_allVisibleServices;
@property (nonatomic, readonly) NSArray *hf_visibleAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDate *hf_dateAdded;
@property (copy, nonatomic, readonly) NSString *hf_displayName;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateWallpaperImage:(id)arg1;

@end
