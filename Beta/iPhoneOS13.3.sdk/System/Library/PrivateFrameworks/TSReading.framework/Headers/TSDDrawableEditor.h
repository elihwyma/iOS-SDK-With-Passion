/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSSet, NSString, TSDDrawableInfo, TSDInteractiveCanvasController, TSDMultiPaneController, TSKSelection;

@interface TSDDrawableEditor : NSObject <Swift>

{
    TSDInteractiveCanvasController *mICC;
    NSSet *mInfos;
    TSDMultiPaneController *mGraphicInspector;
}

@property (retain, nonatomic, readonly) TSDDrawableInfo *info;
@property (nonatomic, readonly) TSDDrawableInfo *firstInfo;
@property (retain, nonatomic) NSSet *infos;
@property (nonatomic, readonly) NSSet *layouts;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) TSKSelection *selection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingFill;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingStroke;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShadow;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingReflection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingOpacity;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingTextInset;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingEndpoints;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingResize;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShrinkTextToFit;

+ (id)keyPathsForValuesAffectingInfo;
+ (id)keyPathsForValuesAffectingFirstInfo;
+ (_Bool)shouldSuppressMultiselection;
+ (id)keyPathsForValuesAffectingLayouts;

- (void)dealloc;
- (id)stroke;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (void)setStroke:(id)arg1;
- (int)canPerformAction:(SEL)arg1;
- (id)documentRoot;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canAddOrShowComment;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)infosOfClass:(Class)arg1;
- (id)topLevelInspectorAutosaveName;
- (double)strokeWidthForNormalizedWidth:(double)arg1;
- (double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1;
- (id)selectedLayoutsSupportingRotation;
- (id)selectedLayoutsSupportingFlipping;
- (id)selectedLayoutsSupportingInspectorPositioning;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (void)applyStylePresetWithIndex:(id)arg1;
- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;
- (void)beginChangingStrokeWidth:(id)arg1;
- (void)didChangeStrokeWidth:(id)arg1;
- (void)endChangingStrokeWidth:(id)arg1;
- (id)strokeSwatches;
- (id)strokeColorPickerTitle;
- (void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2;
- (id)stylePresetKindForInspector;
- (void)presetSelected:(id)arg1 sender:(id)arg2;
- (id)viewControllerForMoreStyleOptions;
- (id)imageForPreset:(id)arg1 size:(struct CGSize)arg2;

@end
