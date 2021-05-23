/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKDevice, NSString, NTKContainerView, NTKFaceColorScheme, UIColor, UIView;

@protocol CLKMonochromeFilterProvider;

@interface NTKModuleView : UIControl <Swift>

{
    NTKContainerView *_contentView;
    UIView *_highlightView;
    id <CLKMonochromeFilterProvider> filterProvider;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_secondaryForegroundColor;
    UIColor *_highlightBackgroundColor;
    double _contentHeight;
    double _contentHeightOffset;
    double _highlightAlpha;
    NTKFaceColorScheme *_colorScheme;
    double _highlightCornerRadius;
    UIColor *_overrideColor;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double highlightCornerRadius;
@property (retain, nonatomic) UIColor *overrideColor;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *secondaryForegroundColor;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentHeightOffset;
@property (nonatomic) double highlightAlpha;
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (double)_defaultCornerRadiusForDevice:(id)arg1;
+ (double)cornerRadiusForComplicationFamily:(long long)arg1 forDevice:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateColors;
- (void)layoutContainerView:(id)arg1;
- (void)_layoutContentView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)applyColorScheme:(id)arg1;
- (void)naturalHorizontalLayoutForViewsAndSpacing:(id)arg1 columnAlignmentSpacing:(_Bool)arg2;
- (id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2 space:(double)arg3 view:(id)arg4;
- (id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2;
- (void)_applyMonochromeTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3;
- (void)_enumerateAllForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldCancelTouchesInScrollview;

@end
