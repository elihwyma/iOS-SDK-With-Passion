/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIApplication.h>

@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication

{
    CAMPerformanceTestHarness *_currentTestHarness;
}

@property (retain, nonatomic) CAMPerformanceTestHarness *currentTestHarness;

- (id)_extendLaunchTest;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)_registerPreviewStartBlock:(CDUnknownBlockType)arg1;
- (_Bool)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (_Bool)runTakePictureFrontPortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (_Bool)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (_Bool)runTakePicturePortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (_Bool)runPresentTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runSwitchToPortraitFrontWithTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runSwitchModesTestWithName:(id)arg1 options:(id)arg2;
- (void)_configureExtendedLaunchTestIfNeeded;
- (void)willCloseViewfinderForReason:(long long)arg1;
- (void)didCloseViewfinderForReason:(long long)arg1;
- (void)willOpenViewfinderForReason:(long long)arg1;
- (void)didOpenViewfinderForReason:(long long)arg1;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;

@end
