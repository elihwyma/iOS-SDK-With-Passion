/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKAnalogScene, SKView, UIView;

@interface NTKSpriteKitAnalogFaceView : NTKAnalogFaceView

{
    SKView *_sceneHostView;
    NTKAnalogScene *_analogScene;
    UIView *_circleView;
    UIView *_handsView;
    double _maxZoomingIconDiameter;
}

@property (weak, nonatomic) UIView *circleView;
@property (weak, nonatomic) UIView *handsView;
@property (nonatomic) double maxZoomingIconDiameter;
@property (nonatomic) _Bool shouldRasterizeBackground;
@property (retain, nonatomic) NTKAnalogScene *analogScene;
@property (nonatomic, readonly) UIView *sceneView;

+ (void)_prewarmForDevice:(id)arg1;

- (struct CGSize)_sceneSize;
- (void)setEditView:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (_Bool)_needsForegroundContainerView;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_applyFrozen;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_cleanupAfterZoom;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)_prepareForSnapshotting;
- (_Bool)_wantsOpportunisticLiveFaceLoading;
- (void)_loadScene;
- (void)_setContentViewsOpaque:(_Bool)arg1;
- (void)_handleLocaleDidChange;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (_Bool)_shouldFreezeSceneForEditMode:(long long)arg1;
- (void)_setupSceneHostViewIfNecessary;
- (void)_loadLiveBackground;

@end
