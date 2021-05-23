/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor;

@interface NTKRingsAndDotsView : UIView <Swift>

{
    _Bool _hidesOverlapShadow;
    UIColor *_overrideColor;
    NSArray *_ringColors;
    NSMutableArray *_ringsFillFractions;
    UIColor *_foregroundColor;
    UIColor *_secondaryForegroundColor;
    double _diameter;
    double _ringWidth;
    double _ringGapWidth;
    double _appearanceAnimationProgress;
    NSArray *_ringViews;
    NSArray *_overlapArcArray;
}

@property (nonatomic) double diameter;
@property (nonatomic) double ringWidth;
@property (nonatomic) double ringGapWidth;
@property (nonatomic) double appearanceAnimationProgress;
@property (retain, nonatomic) NSArray *ringViews;
@property (retain, nonatomic) NSArray *overlapArcArray;
@property (retain, nonatomic) NSArray *ringColors;
@property (retain, nonatomic) NSMutableArray *ringsFillFractions;
@property (nonatomic) _Bool hidesOverlapShadow;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *secondaryForegroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;

+ (id)emptyFillFractions;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)setFilterProvider:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 diameter:(double)arg2 ringWidth:(double)arg3 ringGapWidth:(double)arg4 overlapStrokeWidth:(double)arg5;
- (void)_setDiameter:(double)arg1;
- (double)radiusForRingAtIndex:(long long)arg1;

@end
