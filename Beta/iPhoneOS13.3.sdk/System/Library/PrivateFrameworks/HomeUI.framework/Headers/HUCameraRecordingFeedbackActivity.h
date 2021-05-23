/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIActivity.h>

@class HMCameraClip, HMCameraProfile;

@interface HUCameraRecordingFeedbackActivity : UIActivity

{
    HMCameraClip *_cameraClip;
    HMCameraProfile *_cameraProfile;
    CDUnknownBlockType _submissionHandler;
}

@property (retain, nonatomic) HMCameraClip *cameraClip;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (copy, nonatomic) CDUnknownBlockType submissionHandler;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
