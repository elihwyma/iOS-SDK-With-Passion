/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HFCameraPlaybackEngine, HUCameraView, NSString;

@interface HUCameraPlayerLiveContentViewController : UIViewController

{
    HFCameraPlaybackEngine *_playbackEngine;
    double _cornerRadius;
    HUCameraView *_cameraView;
}

@property (retain, nonatomic) HUCameraView *cameraView;
@property (nonatomic, readonly) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;
- (void)_updateCameraCornerRadius;

@end
