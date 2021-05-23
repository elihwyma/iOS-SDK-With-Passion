/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXClipPlayerViewController, CFXControlsViewController, CFXEffectBrowserContentPresenterViewController, CFXEffectEditorView, CFXMediaItem, CFXPlayButtonView, JTClip, JTClipSequenceExporter, JTEffectsPreviewGenerator, NSLayoutConstraint, NSString, UIButton, UIView;

@protocol CFXPreviewViewControllerDelegate;

@interface CFXPreviewViewController : UIViewController

{
    _Bool _presentingFilterPicker;
    _Bool _capturedWithBackCamera;
    _Bool _userInterfaceHidden;
    _Bool _saveMediaItemToFunCamPhotosAlbumUponExport;
    _Bool _dockIsMagnified;
    id <CFXPreviewViewControllerDelegate> _delegate;
    CFXControlsViewController *_previewControls;
    UIView *_playerContainerView;
    UIView *_appStripAndPreviewControlsContainer;
    UIButton *_exportButton;
    NSLayoutConstraint *_previewControlsContainerHeightConstraint;
    NSLayoutConstraint *_previewControlsContainerWidthConstraint;
    NSLayoutConstraint *_previewControlsContainerTrailingConstraint;
    NSLayoutConstraint *_previewControlsContainerLeadingConstraint;
    NSLayoutConstraint *_previewControlsContainerTopConstraint;
    unsigned long long _appliedDirectOverlayEditingGestures;
    UIView *_bottomControlsDrawer;
    double _dockMagnifiedHeightDelta;
    CFXEffectBrowserContentPresenterViewController *_effectBrowserContentPresenterViewController;
    UIView *_previewControlsContainerView;
    CFXPlayButtonView *_playButton;
    CFXMediaItem *_mediaItem;
    CFXClipPlayerViewController *_previewPlayer;
    JTClipSequenceExporter *_exporter;
    JTEffectsPreviewGenerator *_stillImagePreviewGenerator;
    CFXEffectEditorView *_effectEditor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) UIView *playerContainerView;
@property (weak, nonatomic) UIView *appStripAndPreviewControlsContainer;
@property (weak, nonatomic) UIButton *exportButton;
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerTopConstraint;
@property (nonatomic, getter=userInterfaceIsHidden) _Bool userInterfaceHidden;
@property (nonatomic) _Bool saveMediaItemToFunCamPhotosAlbumUponExport;
@property (nonatomic) unsigned long long appliedDirectOverlayEditingGestures;
@property (retain, nonatomic) UIView *bottomControlsDrawer;
@property (nonatomic) _Bool dockIsMagnified;
@property (nonatomic) double dockMagnifiedHeightDelta;
@property (retain, nonatomic) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController;
@property (weak, nonatomic) UIView *previewControlsContainerView;
@property (weak, nonatomic) CFXPlayButtonView *playButton;
@property (retain, nonatomic) CFXMediaItem *mediaItem;
@property (nonatomic, readonly) JTClip *previewClip;
@property (retain, nonatomic) CFXClipPlayerViewController *previewPlayer;
@property (retain, nonatomic) JTClipSequenceExporter *exporter;
@property (retain, nonatomic) JTEffectsPreviewGenerator *stillImagePreviewGenerator;
@property (retain, nonatomic) CFXEffectEditorView *effectEditor;
@property (nonatomic, readonly) CDStruct_c3b9c2ee normalizedMinimumHitTestArea;
@property (weak, nonatomic) id <CFXPreviewViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (nonatomic, getter=isPresentingFilterPicker) _Bool presentingFilterPicker;
@property (nonatomic) _Bool capturedWithBackCamera;
@property (weak, nonatomic) CFXControlsViewController *previewControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setLiveCaptureSnapshotView:(id)arg1;
+ (id)liveCaptureSnapshotView;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)playbackDidStart:(id)arg1;
- (void)exportMediaItemToFileURL:(id)arg1;
- (void)configureUIForOrientation;
- (void)addOverlayEffect:(id)arg1 atScreenLocation:(struct CGPoint)arg2 atScreenSize:(struct CGSize)arg3 rotationAngle:(double)arg4;
- (void)addEffect:(id)arg1;
- (void)updateUIForDockMagnify:(_Bool)arg1 dockHeightDelta:(double)arg2;
- (void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
- (_Bool)shouldExportOnly;
- (void)CFX_setFrameAndRenderSizes;
- (void)setPlayButtonHiddenIfPossible:(_Bool)arg1;
- (void)CFX_setEffectAnimationsEnabledIfPossible:(_Bool)arg1;
- (void)configureBottomControlsForOrientation;
- (_Bool)shouldUseFaceTracking;
- (void)CFX_addEffect:(id)arg1;
- (void)removeEffectEditor;
- (_Bool)presentFullScreenTextEditorForEffect:(id)arg1 insertingEffect:(_Bool)arg2;
- (_Bool)CFX_saveImageToURL:(id)arg1 image:(id)arg2 compressionQuality:(double)arg3 asHEIF:(_Bool)arg4 metadata:(struct CGImageMetadata *)arg5;
- (void)CFX_notifyDelegateExportMediaItemFinishedWithError:(id)arg1;
- (void)CFX_setIsExporting:(_Bool)arg1;
- (void)CFX_setEffectAnimationsEnabledIfPossible:(_Bool)arg1 updatePlayer:(_Bool)arg2;
- (void)exportStillImageWithEffects;
- (void)CFX_hidePreviewUI;
- (void)CFX_showPreviewUI;
- (void)displayEffectEditorForEffect:(id)arg1 forMode:(unsigned long long)arg2;
- (void)CFX_togglePreviewUI;
- (_Bool)isEditingEffect;
- (struct CGRect)playerContentFrame;
- (void)CFX_layoutPlayerContainerView;
- (_Bool)shouldKeepPlayButtonHidden;
- (void)updateEffectEditorLayout;
- (void)updateFullScreenTextEditorLayout;
- (void)CFX_addURLToCameraRoll:(id)arg1 isStill:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)CFX_addAssetWithIdentifier:(id)arg1 intoAlbum:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)CFX_addAssetAtURL:(id)arg1 resourceType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)CFX_createAlbumWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)CFX_fetchAssetWithLocalIdentifier:(id)arg1;
- (void)playbackAreaTapped:(id)arg1 normalizedClipPoint:(struct CGPoint)arg2 atTime:(int)arg3;
- (void)playbackAreaPanned:(id)arg1 gesture:(id)arg2 normalizedClipPoint:(struct CGPoint)arg3 translationDelta:(struct CGPoint)arg4 atTime:(int)arg5 timeScale:(int)arg6;
- (void)playbackAreaPinched:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(struct CGPoint)arg4 scaleDelta:(double)arg5 atTime:(int)arg6 timeScale:(int)arg7;
- (void)playbackAreaRotated:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(struct CGPoint)arg4 rotateDelta:(double)arg5 atTime:(int)arg6;
- (void)playbackAreaDoubleTapped:(id)arg1;
- (double)animationDurationForCompositionTransition:(id)arg1 shouldScale:(_Bool *)arg2;
- (void)didFinishExport:(long long)arg1;
- (void)exportProgressedTo:(float)arg1;
- (void)playButtonViewDidTapPlay:(id)arg1;
- (void)playButtonViewDidTapPause:(id)arg1;
- (void)view:(id)arg1 willMoveToWindow:(id)arg2;
- (void)exportButtonTapped:(id)arg1;
- (void)filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)bottomControlsSnapshot;
- (void)hideBottomControls;
- (void)showBottomControls;
- (struct CGRect)bottomControlsBounds;
- (struct CGPoint)bottomControlsCenter;
- (void)fullScreenTextEditViewController:(id)arg1 didBeginEditingEffect:(id)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 didFinishEditingEffect:(id)arg2 withUpdatedText:(id)arg3;
- (void)fullScreenTextEditViewController:(id)arg1 didFinishEditingByRemovingEffect:(id)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 willBeginAnimationBeforeEditingEffect:(id)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 didBeginAnimationBeforeEditingEffect:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fullScreenTextEditViewController:(id)arg1 willBeginAnimationAfterEditingEffect:(id)arg2 updatedText:(id)arg3;
- (void)fullScreenTextEditViewController:(id)arg1 didFinishAnimationAfterEditingEffect:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)effectEditorView:(id)arg1 effectAtPoint:(struct CGPoint)arg2;
- (_Bool)effectEditorView:(id)arg1 isEffectAtPoint:(struct CGPoint)arg2 effect:(id)arg3;
- (struct CGRect)effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3 includeTracking:(_Bool)arg4 adjustForMinimumHitTestArea:(_Bool)arg5;
- (id)effectEditorView:(id)arg1 viewInfoForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (struct CGPoint)effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3;
- (void)effectEditorViewDidBeginEditing:(id)arg1;
- (struct CGPoint)effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(struct CGPoint)arg3 relativeToBounds:(struct CGRect)arg4;
- (void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(struct CGAffineTransform)arg3 relativeToBounds:(struct CGRect)arg4;
- (_Bool)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(struct CGRect)arg3 displayScale:(double)arg4;
- (id)effectEditorView:(id)arg1 textForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3;
- (void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(_Bool)arg3;
- (void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2;
- (void)effectEditorViewDidEndEditing:(id)arg1;
- (void)effectEditorView:(id)arg1 didEndEditingByTappingOutSideEffectAtScreenPoint:(struct CGPoint)arg2;
- (void)effectEditorView:(id)arg1 didMoveEffect:(id)arg2 withTouchPoint:(struct CGPoint)arg3 withTransform:(struct CGAffineTransform *)arg4;
- (_Bool)effectEditorView:(id)arg1 presentCustomTextEditingUI:(id)arg2;
- (unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2;
- (_Bool)effectEditorViewShouldShowFaceReticle:(id)arg1;
- (CDStruct_1b6d18a9)CFX_previewPlayerCurrentTime;
- (void)dispatchWhenPlayerReadyForDisplayEffectUpdate:(CDUnknownBlockType)arg1;

@end
