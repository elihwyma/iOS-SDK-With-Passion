/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFStaticItem.h>

@class NSSet;

@interface HUCameraRecordingOptionsItem : HFStaticItem

{
    NSSet *_cameraProfiles;
}

@property (nonatomic, readonly) NSSet *cameraProfiles;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCameraProfiles:(id)arg1;

@end
