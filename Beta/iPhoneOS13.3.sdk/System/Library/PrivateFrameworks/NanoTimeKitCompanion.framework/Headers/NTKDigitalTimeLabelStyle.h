/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKitUI/CLKUITimeLabelStyle.h>

@class NTKLayoutRule;

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle

{
    NTKLayoutRule *_layoutRule;
}

@property (retain, nonatomic) NTKLayoutRule *layoutRule;

+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 withBaselineY:(double)arg4 withFont:(id)arg5 forDevice:(id)arg6;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 withBaselineY:(double)arg2 withFont:(id)arg3 forDevice:(id)arg4;
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 forDevice:(id)arg4;
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 withBaselineY:(double)arg4 forDevice:(id)arg5;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 withFont:(id)arg2 forDevice:(id)arg3;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 weight:(double)arg2 forDevice:(id)arg3;
+ (id)defaultStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 font:(id)arg4 forDevice:(id)arg5;
+ (id)defaultRoundedStyleForBounds:(struct CGRect)arg1 withRightSideMargin:(double)arg2 applyAdvanceFudge:(_Bool)arg3 forDevice:(id)arg4;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect)arg1 forDevice:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
