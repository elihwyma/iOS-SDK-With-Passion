/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NSMutableArray, NSMutableDictionary, NTKChronoLowerSubDial, NTKChronoPalette, NTKChronoUpperSubDial, NTKVariantNode, SKEffectNode, SKLabelNode, SKNode;

@interface NTKChronoScene : NTKAnalogScene

{
    SKNode *_currentMode;
    NTKVariantNode *_timeVariantNode;
    NSMutableDictionary *_chronoVariantNodes;
    SKNode *_subdials;
    SKLabelNode *_timeScaleLabel;
    NSMutableArray *_informationTransitions;
    _Bool _rasterizeForEditing;
    NTKChronoUpperSubDial *_upperSubdial;
    NTKChronoLowerSubDial *_lowerSubdial;
    NTKChronoPalette *_palette;
    unsigned long long _timeScale;
    SKEffectNode *_chronoMode;
    SKEffectNode *_timeMode;
}

@property (nonatomic) _Bool rasterizeForEditing;
@property (retain, nonatomic) NTKChronoUpperSubDial *upperSubdial;
@property (retain, nonatomic) NTKChronoLowerSubDial *lowerSubdial;
@property (nonatomic, readonly) NTKChronoPalette *palette;
@property (nonatomic, readonly) unsigned long long timeScale;
@property (nonatomic, readonly) SKEffectNode *chronoMode;
@property (nonatomic, readonly) SKEffectNode *timeMode;

- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (double)_backgroundAlphaForEditMode:(long long)arg1;
- (id)initWithSize:(struct CGSize)arg1 forDevice:(id)arg2;
- (id)scrubbingObscuredCollectionNodes;
- (void)applyPalette:(id)arg1 fully:(_Bool)arg2;
- (void)applyTimeScale:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (void)fadeInLowerSubdialAnimated:(_Bool)arg1;
- (void)showTimeModeAnimated:(_Bool)arg1;
- (void)fadeOutLowerSubdialAnimated:(_Bool)arg1;
- (void)showChronoModeAnimated:(_Bool)arg1;
- (id)auxiliaryScrubbingObscuredNodes;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4;
- (id)activeVariantNodes;
- (id)_createDensityVariantWitElements:(id)arg1 parent:(id)arg2 hidden:(_Bool)arg3;
- (id)_chronoVariantForTimeScale:(unsigned long long)arg1;
- (void)updateUpperDial;
- (void)setRegularDeviceLowerDialLabelPositions;
- (id)_nameFromTimeScale:(unsigned long long)arg1;
- (double)timeScaleLabelPositionFromTimeScale:(unsigned long long)arg1;
- (void)updateTimeScaleLabelWithTimeScale:(unsigned long long)arg1;
- (_Bool)_getTicks:(id *)arg1 labels:(id *)arg2 otherNodes:(id *)arg3 fromParentNode:(id)arg4;
- (void)hideMode:(id)arg1 animate:(_Bool)arg2;
- (void)showMode:(id)arg1 animate:(_Bool)arg2;
- (void)fadeTimeScaleLabelWithMode:(id)arg1;
- (void)setCurrentMode:(id)arg1 animate:(_Bool)arg2;
- (void)ensureTimeScaleTransitionHasCompleted;
- (void)updateTimeScaleLabel;
- (void)transitionTimeScaleLabelWithFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3;
- (void)transitionWith:(double)arg1 fromMode60:(id)arg2 toMode30:(id)arg3;
- (void)transitionWith:(double)arg1 fromMode30:(id)arg2 toMode6:(id)arg3;
- (void)transitionWith:(double)arg1 fromMode6:(id)arg2 toMode3:(id)arg3;
- (void)_applyPalette:(id)arg1 toVariantNode:(id)arg2;
- (id)_localizedStringForTimeScaleSeconds:(unsigned long long)arg1;
- (_Bool)isTimeMode;
- (double)_subdialAlphaForEditMode:(long long)arg1;
- (_Bool)_showTimeForEditMode:(long long)arg1;
- (id)_addChronoVariantWithElements:(id)arg1 forTimeScale:(unsigned long long)arg2;
- (id)timeScaleName;
- (double)timeScaleLabelPosition;

@end
