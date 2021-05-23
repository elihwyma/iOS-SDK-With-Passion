/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <SpriteKit/SKScene.h>

@class CLKDevice, NSArray, NSMutableArray, NTKFaceEditView, NTKVariantNode, SKNode, SKSpriteNode, SKTexture, UIColor;

@interface NTKAnalogScene : SKScene

{
    SKNode *_root;
    SKNode *_faceChild;
    SKNode *_backgroundChild;
    UIColor *_faceColor;
    SKTexture *_faceCircleTexture;
    SKSpriteNode *_faceCircleSprite;
    _Bool _showContentForUnadornedSnapshot;
    _Bool _shouldHideVariantsBelowCurrent;
    CLKDevice *_device;
    SKNode *_background;
    SKNode *_circle;
    NSMutableArray *_variantNodes;
    NTKVariantNode *_currentVariantNode;
    unsigned long long _currentDensity;
    long long _dataMode;
    NTKFaceEditView *_editView;
    UIColor *_tickColor;
    UIColor *_alternativeTickColor;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) SKNode *face;
@property (nonatomic, readonly) SKNode *background;
@property (nonatomic, readonly) SKNode *circle;
@property (retain) UIColor *faceColor;
@property (nonatomic, readonly) NSMutableArray *variantNodes;
@property (retain, nonatomic) NTKVariantNode *currentVariantNode;
@property (nonatomic, readonly) unsigned long long currentDensity;
@property (nonatomic) _Bool showContentForUnadornedSnapshot;
@property (nonatomic, readonly) long long dataMode;
@property (retain, nonatomic) NTKFaceEditView *editView;
@property (readonly) NSArray *activeVariantNodes;
@property (retain, nonatomic) UIColor *tickColor;
@property (retain, nonatomic) UIColor *alternativeTickColor;
@property (nonatomic) _Bool shouldRasterizeBackground;
@property (nonatomic) _Bool shouldHideVariantsBelowCurrent;

+ (id)sceneWithSize:(struct CGSize)arg1 forDevice:(id)arg2;

- (void)didMoveToView:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setDensity:(unsigned long long)arg1;
- (id)displayTime;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (id)initWithSize:(struct CGSize)arg1 forDevice:(id)arg2;
- (id)addVariantNodeWithElements:(id)arg1;
- (id)scrubbingObscuredCollectionNodes;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (id)auxiliaryScrubbingObscuredNodes;
- (unsigned long long)scrubbingObscured12ElementBottomIndex;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4;
- (void)_applyDataMode:(long long)arg1;
- (void)addNodeToFace:(id)arg1;
- (void)addNodeToBackground:(id)arg1;
- (_Bool)_canRasterize;
- (id)addVariantNodeWithElements:(id)arg1 parent:(id)arg2 hidden:(_Bool)arg3;
- (void)_updateTickColors;
- (void)invalidateRasterization;
- (void)enumerateTickCollectionNodes:(CDUnknownBlockType)arg1;
- (id)faceCircleSprite;
- (void)_restoreToFullScreen;
- (void)forEachActiveVariant:(CDUnknownBlockType)arg1;
- (void)_setObscuredContentHiddenForScrubbing:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)applyLabelPositions:(const struct NTKLabelPosition *)arg1 toNodes:(id)arg2;
- (void)applyLabelPositions:(const struct NTKLabelPosition *)arg1 withCenter:(struct CGPoint)arg2 toNodes:(id)arg3;
- (void)preRender;
- (id)handColor;

@end
