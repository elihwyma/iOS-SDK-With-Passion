/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CAMediaTimingFunction, CLKDevice, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NTKVictoryLogoButton, UIImage;

@protocol NTKVictoryAnalogBackgroundColorPalette, NTKVictoryAnalogBackgroundViewDelegate;

@interface NTKVictoryAnalogBackgroundView : UIView

{
    CLKDevice *_device;
    UIImage *_dotImage;
    UIView *_contentView;
    NSMutableArray *_ringLayers;
    _Bool _ringLayerIsDigit[12];
    NSArray *_largeHourMarkerLabels;
    NSArray *_mediumNumberLayers;
    NSMutableDictionary *_smallHourMarkerLabelsByIndex;
    NSArray *_temporaryNumberLayers;
    NSArray *_activeDigitIndices;
    _Bool _canonicalDigitStatesByStyle[3][12];
    NSDictionary *_transitionDigitTargetStates;
    NSArray *_transitionDigitIndices;
    NSArray *_transitionStaticDigitIndices;
    unsigned long long _transitionFromStyle;
    unsigned long long _transitionToStyle;
    CAMediaTimingFunction *_transitionTimingFunction;
    NTKVictoryLogoButton *_logoButton;
    NTKVictoryLogoButton *_smallLogoButton;
    struct CGPoint _logoPositionRing;
    struct CGPoint _logoPositionNoDigits;
    struct CGPoint _logoPositionBig;
    struct CGPoint _logoPositionCircularDial;
    double _dialShapeFraction;
    id <NTKVictoryAnalogBackgroundColorPalette> _palette;
    unsigned long long _style;
    unsigned long long _dialShape;
    id <NTKVictoryAnalogBackgroundViewDelegate> _delegate;
}

@property (retain, nonatomic) id <NTKVictoryAnalogBackgroundColorPalette> palette;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long dialShape;
@property (weak, nonatomic) id <NTKVictoryAnalogBackgroundViewDelegate> delegate;

+ (id)_disabledLayerActions;

- (void)layoutSubviews;
- (id)_dotImage;
- (id)_logoImage;
- (void)willBeginEditing;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)setInTimeTravel:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 fromPalette:(id)arg4 toPalette:(id)arg5;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4;
- (void)_logoTapped:(id)arg1;
- (id)_circularDialLogoImage;
- (struct CGPoint)centerPointForSmallHourMarkerAtIndex:(unsigned long long)arg1;
- (void)layoutNumbers;
- (struct CGPoint)_ringDigitOffsetAtIndex:(unsigned long long)arg1;
- (void)addLogoButtonIfNeeded;
- (void)_createRingLayersIfNeeded;
- (void)_createLargeHourMarkerLabelsAndAttachToViewIfNeeded;
- (void)_clearTransitionStateForStyle:(unsigned long long)arg1;
- (_Bool)isCircularDial;
- (void)addSmallLogoButtonIfNeeded;
- (void)_createMediumNumberLayersIfNeededAndAttachToViewIfNeeded;
- (struct CGPoint)logoPositionForStyle:(unsigned long long)arg1;
- (double)_transitionProgressForDigitAtIndex:(unsigned long long)arg1 overallProgress:(double)arg2 delayPerDigit:(double)arg3 digitTransitionLength:(double)arg4;
- (id)_activeRingLayers;
- (void)_setRingLayerAtIndex:(unsigned long long)arg1 isDigit:(_Bool)arg2;
- (double)_elementScaleForTransitionProgress:(double)arg1 initialScale:(double)arg2 middleScale:(double)arg3 finalScale:(double)arg4;
- (struct CATransform3D)_intermediateTransformForBigNumberAtIndex:(unsigned long long)arg1 fraction:(double)arg2;
- (struct CGAffineTransform)_affineTransformFromTransform3D:(struct CATransform3D)arg1;
- (id)_bigNumberInitialTransforms;
- (void)_applyPalette:(id)arg1 forStyle:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4 animateElements:(_Bool)arg5;
- (id)_activeRingObjects;
- (struct CGColor *)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3;
- (id)_createAndAddLayersWithCount:(unsigned long long)arg1;
- (id)_createSmallHourMarkerLabelForIndex:(id)arg1;
- (id)_createHourMarkerLabelsWithFontSize:(double)arg1;
- (unsigned long long)_digitForIndex:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromDialShape:(unsigned long long)arg2 toDialShape:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromOlympusStyle:(unsigned long long)arg2 toOlympusStyle:(unsigned long long)arg3;

@end
