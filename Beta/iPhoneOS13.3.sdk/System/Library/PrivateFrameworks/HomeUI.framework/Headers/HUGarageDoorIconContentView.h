/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUGarageDoorStateTransition, HUShapeLayerView, HUVisualEffectContainerView, UIView, UIVisualEffectView;

@interface HUGarageDoorIconContentView : HUPrimaryStateIconContentView

{
    _Bool _open;
    _Bool _clipBottomPanelShapesToBounds;
    HUShapeLayerView *_buildingView;
    HUVisualEffectContainerView *_buildingContainerView;
    HUShapeLayerView *_carView;
    UIVisualEffectView *_carContainerView;
    UIView *_doorContainerView;
    UIView *_doorHingeView;
    UIView *_doorView;
    UIVisualEffectView *_topPanelHingeView;
    HUShapeLayerView *_topPanelView;
    UIVisualEffectView *_middlePanelHingeView;
    HUShapeLayerView *_middlePanelView;
    UIVisualEffectView *_bottomPanelHingeView;
    HUShapeLayerView *_bottomPanelViewWithoutHandle;
    HUShapeLayerView *_bottomPanelViewWithHandle;
    HUGarageDoorStateTransition *_activeTransition;
}

@property (retain, nonatomic) HUShapeLayerView *buildingView;
@property (retain, nonatomic) HUVisualEffectContainerView *buildingContainerView;
@property (retain, nonatomic) HUShapeLayerView *carView;
@property (retain, nonatomic) UIVisualEffectView *carContainerView;
@property (retain, nonatomic) UIView *doorContainerView;
@property (retain, nonatomic) UIView *doorHingeView;
@property (retain, nonatomic) UIView *doorView;
@property (retain, nonatomic) UIVisualEffectView *topPanelHingeView;
@property (retain, nonatomic) HUShapeLayerView *topPanelView;
@property (retain, nonatomic) UIVisualEffectView *middlePanelHingeView;
@property (retain, nonatomic) HUShapeLayerView *middlePanelView;
@property (retain, nonatomic) UIVisualEffectView *bottomPanelHingeView;
@property (retain, nonatomic) HUShapeLayerView *bottomPanelViewWithoutHandle;
@property (retain, nonatomic) HUShapeLayerView *bottomPanelViewWithHandle;
@property (nonatomic, getter=isOpen) _Bool open;
@property (nonatomic) _Bool clipBottomPanelShapesToBounds;
@property (retain, nonatomic) HUGarageDoorStateTransition *activeTransition;

+ (id)buildingPathForBounds:(struct CGRect)arg1;
+ (id)carPathForBounds:(struct CGRect)arg1;
+ (id)pathForPanelAtPosition:(unsigned long long)arg1 bounds:(struct CGRect)arg2 showHandle:(_Bool)arg3;
+ (double)_scaleFactorForBounds:(struct CGRect)arg1 referenceSize:(struct CGSize)arg2;
+ (double)_referenceHeightForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;
+ (double)_referenceOriginYForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;
+ (id)_pathForMiddleDoorPanelWithHandleForBounds:(struct CGRect)arg1;
+ (id)_pathForBottomDoorPanelWithHandleForBounds:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (id)panelHingeViews;
- (id)_createPanelViewForPosition:(unsigned long long)arg1 showHandle:(_Bool)arg2;
- (id)_panelViewsForPosition:(unsigned long long)arg1;
- (void)_enumeratePanelViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLayoutForOpenState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateCarLayoutForOpenState:(_Bool)arg1;
- (void)_updatePanelLayoutForOpenState:(_Bool)arg1;
- (struct CATransform3D)_doorHingeSublayerTransformForOpenState:(_Bool)arg1;
- (struct CGAffineTransform)_referenceScaleTransform;
- (struct CGRect)_frameForPanelHingeAtPosition:(unsigned long long)arg1 open:(_Bool)arg2;
- (struct CATransform3D)_panelHingeSublayerTransformWithOpenState:(_Bool)arg1;
- (struct CGRect)_frameForPanelAtPosition:(unsigned long long)arg1 open:(_Bool)arg2 relativeToHinge:(_Bool)arg3;
- (double)_referenceScaleFactor;

@end
