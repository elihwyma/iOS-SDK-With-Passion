/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXCameraControlsViewController, CFXCaptureViewController, CFXCounterRotationView, CFXEffectBrowserViewController, CFXRemoteCommandServer, JTPixelRotationSession, JTThreadSafeDictionary, NSObject, NSString, UIView;

@protocol CFXCameraViewControllerDelegate, OS_dispatch_queue;

@interface CFXCameraViewController : UIViewController

{
    long long _logDebug_cameraPosition;
    _Bool _showsViewfinder;
    _Bool _usesInternalCaptureSession;
    _Bool _cameraControlsShown;
    long long _aspectRatioCrop;
    long long _captureMode;
    id <CFXCameraViewControllerDelegate> _delegate;
    CFXCaptureViewController *_captureViewController;
    CFXEffectBrowserViewController *_effectBrowserViewController;
    CFXCameraControlsViewController *_cameraControlsViewController;
    long long _initialFlashMode;
    NSString *_effectBrowserPresentedAppIdentifier;
    CFXRemoteCommandServer *_remoteCommandServer;
    CFXCounterRotationView *_bottomControlsSnapshotContainer;
    UIView *_effectsPickerSnapshotContainerView;
    NSObject<OS_dispatch_queue> *_externalCaptureSessionInputDeserializationQueue;
    NSObject<OS_dispatch_queue> *_externalCaptureSessionInputProcessingQueue;
    NSObject<OS_dispatch_queue> *_externalCaptureSessionOutputProcessingQueue;
    JTPixelRotationSession *_externalCaptureSessionRotationSession;
    long long _externalCaptureSessionCameraPosition;
    JTThreadSafeDictionary *_externalCaptureSessionInputFrameTimestamps;
    struct CGRect _externalPresentationRect;
    struct CGRect _externalContentRect;
}

@property (retain, nonatomic) CFXCaptureViewController *captureViewController;
@property (retain, nonatomic) CFXEffectBrowserViewController *effectBrowserViewController;
@property (retain, nonatomic) CFXCameraControlsViewController *cameraControlsViewController;
@property (nonatomic) long long initialFlashMode;
@property (nonatomic) _Bool cameraControlsShown;
@property (retain, nonatomic) NSString *effectBrowserPresentedAppIdentifier;
@property (retain, nonatomic) CFXRemoteCommandServer *remoteCommandServer;
@property (retain, nonatomic) CFXCounterRotationView *bottomControlsSnapshotContainer;
@property (retain, nonatomic) UIView *effectsPickerSnapshotContainerView;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionInputDeserializationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionInputProcessingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionOutputProcessingQueue;
@property (retain, nonatomic) JTPixelRotationSession *externalCaptureSessionRotationSession;
@property (nonatomic) long long externalCaptureSessionCameraPosition;
@property (retain, nonatomic) JTThreadSafeDictionary *externalCaptureSessionInputFrameTimestamps;
@property (nonatomic) struct CGRect externalPresentationRect;
@property (nonatomic) struct CGRect externalContentRect;
@property (nonatomic, readonly) long long aspectRatioCrop;
@property (nonatomic, readonly) long long captureMode;
@property (weak, nonatomic) id <CFXCameraViewControllerDelegate> delegate;
@property (nonatomic, readonly) long long devicePosition;
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (nonatomic, readonly, getter=isEffectsPickerHidden) _Bool effectsPickerHidden;
@property (nonatomic, readonly) long long effectsState;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) long long mode;
@property (nonatomic) _Bool showsViewfinder;
@property (nonatomic) double userInterfaceAlpha;
@property (nonatomic) _Bool usesInternalCaptureSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)preheatWithWindow:(id)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3 aspectRatioCrop:(long long)arg4;
+ (void)preheatWithWindow:(id)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3;

- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithMode:(long long)arg1;
- (void)startCaptureSession;
- (void)stopCaptureSession;
- (_Bool)shouldRotateCellsForDeviceOrientation;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 aspectRatioCrop:(long long)arg4;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2;
- (void)noteInputFrameWithTimestamp:(double)arg1;
- (id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 orientation:(long long)arg3 presentationRect:(struct CGRect)arg4 contentsRect:(struct CGRect)arg5;
- (void)renderFrameWithImageDataArchive:(id)arg1 imagePixelBuffer:(struct __CVBuffer *)arg2 depthPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 presentationRect:(struct CGRect)arg5 contentsRect:(struct CGRect)arg6;
- (void)renderFrameWithImageData:(id)arg1 orientation:(long long)arg2 presentationRect:(struct CGRect)arg3 contentsRect:(struct CGRect)arg4;
- (void)effectBrowserViewController:(id)arg1 didSelectAppWithIdentifier:(id)arg2;
- (CDStruct_1b6d18a9)noteOutputFrameWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)updateUIForVideoRecording:(_Bool)arg1;
- (void)captureViewController:(id)arg1 didCaptureMediaItem:(id)arg2;
- (void)captureViewController:(id)arg1 didChangeEffectComposition:(id)arg2;
- (void)captureViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)captureViewControllerDoneButtonWasTapped:(id)arg1;
- (void)captureViewControllerEffectsButtonWasTapped:(id)arg1;
- (void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg1;
- (void)captureViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4;
- (void)captureViewControllerStartCaptureSession:(id)arg1;
- (void)captureViewControllerStopCaptureSession:(id)arg1;
- (void)captureViewControllerCameraFlipButtonWasTapped:(id)arg1;
- (id)cameraControlsViewControllerForCaptureViewController:(id)arg1;
- (void)captureViewControllerDidStartVideoRecording:(id)arg1;
- (void)captureViewControllerDidStopVideoRecording:(id)arg1;
- (void)remoteCommandServer:(id)arg1 didReceiveAddShapeCommandWithIdentifier:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithURL:(id)arg2 offset:(struct CGPoint)arg3 scale:(double)arg4 rotation:(double)arg5;
- (void)remoteCommandServer:(id)arg1 didReceiveAddTextCommandWithIdentifier:(id)arg2 string:(id)arg3;
- (void)remoteCommandServer:(id)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveSetAnimojiCommandWithIdentifier:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveSetFilterCommandWithIdentifier:(id)arg2;
- (double)effectBrowserViewController:(id)arg1 screenTopBarHeightForWindowBounds:(struct CGRect)arg2 orientation:(long long)arg3;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (_Bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
- (void)effectBrowserViewController:(id)arg1 didDropOverlayEffect:(id)arg2 atScreenLocation:(struct CGPoint)arg3 atScreenSize:(struct CGSize)arg4 rotationAngle:(double)arg5;
- (void)effectBrowserViewController:(id)arg1 didRemoveAllEffectsOfType:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg1;
- (id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1;
- (id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1;
- (_Bool)allowLandscapeForEffectBrowserViewController:(id)arg1;
- (void)effectBrowserViewController:(id)arg1 didSelectApp:(id)arg2;
- (void)effectBrowserViewControllerDidStartCaptureSession:(id)arg1;
- (void)effectBrowserViewControllerDidStopCaptureSession:(id)arg1;
- (void)setEffectsPickerHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTransitionState:(long long)arg1 animated:(_Bool)arg2;
- (void)removeAllEffects;
- (id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2;

@end
