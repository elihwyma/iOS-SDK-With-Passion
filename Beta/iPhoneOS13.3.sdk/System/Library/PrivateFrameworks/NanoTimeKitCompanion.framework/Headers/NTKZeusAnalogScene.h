/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NSArray, NSCalendar, NSDate, NTKZeusColorPalette, SKNode, SKSpriteNode;

@interface NTKZeusAnalogScene : NTKAnalogScene

{
    NSDate *_overrideDate;
    SKNode *_fontContainerNodes[2];
    NSArray *_fontHourNodes[2];
    SKNode *_logoContainerNode;
    SKSpriteNode *_logo1Node;
    SKSpriteNode *_logo2Node;
    SKNode *_multicolorContainerNode;
    SKSpriteNode *_multicolorBackground;
    SKSpriteNode *_multicolorSplit[5];
    double _previousCorrectionTime;
    double _currentTime;
    double _startSplitRotation;
    double _endSplitRotation;
    double _rotationDuration;
    NTKZeusColorPalette *_palette;
    unsigned long long _currentDensity;
    unsigned long long _style;
    _Bool _isEditing;
    _Bool _isStatusIconVisible;
    double _bleedZRotation;
    _Bool _scrubbing;
    NSCalendar *_calendar;
}

@property (nonatomic, getter=isScrubbing) _Bool scrubbing;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) double backgroundAlpha;

- (void)dealloc;
- (void)update:(double)arg1;
- (void)applyStyle:(unsigned long long)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (id)initWithSize:(struct CGSize)arg1 forDevice:(id)arg2;
- (void)applyDensity:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)_significantTimeChanged;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_update12ForStatusIconVisibility;
- (void)_update12ForStatusIconVisibilityAnimated:(_Bool)arg1;
- (id)_hoursNodeForStyle:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (void)_applyHourLabelCollectionNode:(id)arg1;
- (struct CGPoint)_logoContainerPositionForStyle:(unsigned long long)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromHourLabelCollectionNode:(id)arg2 toHourLabelCollectionNode:(id)arg3;
- (id)_nodeForBleed:(unsigned long long)arg1;
- (double)_digitAlphaForEditMode:(long long)arg1;
- (id)auxiliaryScrubbingObscuredNodes;
- (void)setAdjustsForStatusBarIcon:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)centerOf4NumeralForStyle:(unsigned long long)arg1;
- (void)setOverrideDate:(id)arg1 hourRadians:(double)arg2 minuteRadians:(double)arg3 secondRadians:(double)arg4;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(_Bool)arg2;
- (unsigned long long)currentDensity;
- (double)_lowerComplicationAlphaForEditing:(_Bool)arg1;
- (double)_splitAngle;

@end
