/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXCounterRotationView, CFXEffectBrowserViewController, CFXMediaItem, CFXPreviewViewController, CFXReviewControlsViewController, NSData, NSObject, NSString, UIView;

@protocol CFXReviewViewControllerDelegate, OS_dispatch_group;

@interface CFXReviewViewController : UIViewController

{
    _Bool _mediaCapturedInFunCam_metadata;
    id <CFXReviewViewControllerDelegate> _delegate;
    CFXEffectBrowserViewController *_effectBrowserViewController;
    CFXPreviewViewController *_internalPreviewViewController;
    CFXReviewControlsViewController *_reviewControlsViewController;
    CFXMediaItem *_mediaItem;
    NSObject<OS_dispatch_group> *_metadataReaderGroup;
    long long _mediaCaptureDevicePosition_metadata;
    long long _mediaCaptureInterfaceOrientation_metadata;
    long long _cameraModeUsedForCapture;
    CFXCounterRotationView *_bottomControlsSnapshotContainer;
}

@property (retain, nonatomic) CFXEffectBrowserViewController *effectBrowserViewController;
@property (retain, nonatomic) CFXPreviewViewController *internalPreviewViewController;
@property (retain, nonatomic) CFXReviewControlsViewController *reviewControlsViewController;
@property (retain, nonatomic) CFXMediaItem *mediaItem;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *metadataReaderGroup;
@property (nonatomic, readonly) _Bool mediaCapturedInFunCam;
@property (nonatomic) _Bool mediaCapturedInFunCam_metadata;
@property (nonatomic, readonly) long long mediaCaptureDevicePosition;
@property (nonatomic) long long mediaCaptureDevicePosition_metadata;
@property (nonatomic, readonly) long long mediaCaptureInterfaceOrientation;
@property (nonatomic) long long mediaCaptureInterfaceOrientation_metadata;
@property (nonatomic) long long cameraModeUsedForCapture;
@property (retain, nonatomic) CFXCounterRotationView *bottomControlsSnapshotContainer;
@property (copy, nonatomic, readonly) NSData *adjustmentsData;
@property (weak, nonatomic) id <CFXReviewViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (nonatomic, readonly) _Bool mediaItemRequiresExport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithMediaItem:(id)arg1;
- (void)exportMediaItemToFileURL:(id)arg1;
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
- (void)effectBrowserViewController:(id)arg1 didDismissPickerForEffectType:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didPresentPickerForEffectType:(id)arg2;
- (id)mediaItemForEffectBrowserViewController:(id)arg1;
- (long long)orientationUsedForCapture;
- (void)previewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
- (id)selectedAppIdentifierForPreviewViewController:(id)arg1;
- (void)previewViewControllerDidStartEditingText:(id)arg1;
- (void)previewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
- (void)previewViewControllerDidHideUserInterface:(id)arg1;
- (void)previewViewControllerDidShowUserInterface:(id)arg1;
- (void)previewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
- (void)previewViewControllerDidStopEditingText:(id)arg1;
- (void)CFX_resetAndLoadPreviewViewController;
- (void)CFX_updateAnalyticsForSentMediaItem:(id)arg1;

@end
