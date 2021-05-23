/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, NTKBlackcombDialColorPalette;

@interface NTKBlackcombBackgroundView : UIView

{
    CLKDevice *_device;
    NTKBlackcombDialColorPalette *_palette;
    CALayer *_smallTickCoveringLayer;
    NSArray *_smallTicks;
    NSArray *_mediumTicks;
    NSArray *_largeTicks;
    _Bool _showingStatus;
    _Bool _usesLongSideTicks;
}

@property (nonatomic) _Bool usesLongSideTicks;

- (id)initForDevice:(id)arg1;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)_setupTicks;
- (void)_layoutTopLargeTick;
- (struct CGRect)_tickLayoutBounds;
- (double)_outerDialRadiusAtMediumTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3;
- (double)_innerDialRadiusAtLargeTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3;
- (void)_applyBackgroundColor:(id)arg1;
- (void)applyTransitionFractionToUsesLongSideTicks:(double)arg1;
- (void)configureTicksForStatus:(_Bool)arg1;
- (void)applyZoomFraction:(double)arg1;

@end
