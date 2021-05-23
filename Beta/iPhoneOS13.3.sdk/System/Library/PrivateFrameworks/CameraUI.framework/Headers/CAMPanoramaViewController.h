/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIViewController.h>

@class CAMPanoramaView, CMMotionManager, CUCaptureController, NSString, UITapGestureRecognizer;

@interface CAMPanoramaViewController : UIViewController

{
    _Bool _painting;
    long long _layoutStyle;
    CUCaptureController *__captureController;
    CMMotionManager *__motionManager;
    long long __captureOrientation;
    UITapGestureRecognizer *__directionChangeGestureRecognizer;
}

@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (retain, nonatomic, setter=_setMotionManager:) CMMotionManager *_motionManager;
@property (nonatomic, getter=isPainting, setter=_setPainting:) _Bool painting;
@property (nonatomic, setter=_setCaptureOrientation:) long long _captureOrientation;
@property (nonatomic, readonly) UITapGestureRecognizer *_directionChangeGestureRecognizer;
@property (nonatomic, readonly) CAMPanoramaView *panoramaView;
@property (nonatomic) long long layoutStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)updateWithStatus:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)startProcessingPanorama;
- (void)finishedProcessingPanorama;
- (id)initWithCaptureController:(id)arg1 layoutStyle:(long long)arg2;
- (void)startPainting;
- (void)stopPainting;
- (void)didChangeToCaptureOrientation:(long long)arg1;
- (void)_handleDirectionChange:(id)arg1;
- (void)_createMotionManagerIfNecessary;
- (void)_updateWithAccelerometerData:(id)arg1 captureOrientation:(long long)arg2;
- (void)panoramaViewDidRequestSynchronizedDirectionChange:(id)arg1 toDirection:(long long)arg2;
- (void)panoramaConfigurationDidChangeWithDirection:(long long)arg1;

@end
