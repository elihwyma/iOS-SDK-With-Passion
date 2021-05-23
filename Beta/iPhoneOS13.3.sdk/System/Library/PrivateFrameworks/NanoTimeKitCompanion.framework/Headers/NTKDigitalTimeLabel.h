/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKitUI/CLKUITimeLabel.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString, NTKDigitalTimeLabelStyle, UIColor;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <Swift>

{
    UIColor *_shadowColor;
    _Bool _usesLegibility;
    _Bool _frozen;
    UIColor *_overrideColor;
}

@property (copy, nonatomic) NTKDigitalTimeLabelStyle *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (nonatomic, getter=isFrozen) _Bool frozen;

- (void)setShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_newUnderlyingLabel:(_Bool)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setFrameUsingCurrentStyle;
- (void)applyFaceFromColor:(unsigned long long)arg1 toColor:(unsigned long long)arg2 fraction:(float)arg3 device:(id)arg4;
- (id)_labelColorFromFaceColor:(unsigned long long)arg1 device:(id)arg2;
- (void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)applyFaceColor:(unsigned long long)arg1 device:(id)arg2;

@end
