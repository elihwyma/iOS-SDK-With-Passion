/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFStaticItem.h>

@class HMCameraProfile;

@interface HUCameraManageCloudPlanItem : HFStaticItem

{
    HMCameraProfile *_cameraProfile;
}

@property (copy, nonatomic, readonly) HMCameraProfile *cameraProfile;

- (id)initWithCameraProfile:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
