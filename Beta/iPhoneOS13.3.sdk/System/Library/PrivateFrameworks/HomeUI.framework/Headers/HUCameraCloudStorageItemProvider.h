/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFStaticItemProvider.h>

@class HMCameraProfile;

@interface HUCameraCloudStorageItemProvider : HFStaticItemProvider

{
    HMCameraProfile *_cameraProfile;
}

@property (copy, nonatomic, readonly) HMCameraProfile *cameraProfile;

- (id)init;
- (id)initWithCameraProfile:(id)arg1;

@end
