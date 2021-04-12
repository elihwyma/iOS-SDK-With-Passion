//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
    BOOL _showingStatus;
    BOOL _usesLongSideTicks;
}

@property(nonatomic) BOOL usesLongSideTicks; // @synthesize usesLongSideTicks=_usesLongSideTicks;
// - (void).cxx_destruct;
- (double)_innerDialRadiusAtLargeTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3;
- (double)_outerDialRadiusAtMediumTick:(long long)arg1 verticalLength:(double)arg2 horizontalLength:(double)arg3;
- (void)applyZoomFraction:(double)arg1;
- (void)configureTicksForStatus:(BOOL)arg1;
- (void)applyTransitionFractionToUsesLongSideTicks:(double)arg1;
- (void)_layoutTopLargeTick;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyPalette:(id)arg1;
- (void)_applyBackgroundColor:(id)arg1;
- (void)_setupTicks;
- (CGRect)_tickLayoutBounds;
- (id)initForDevice:(id)arg1;

@end

