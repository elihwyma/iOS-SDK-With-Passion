/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString, NTKColoringLabel, NTKCurvedColoringLabel, UIImageView, UIView;

@protocol CLKMonochromeFilterProvider, NTKComplicationImageView, NTKUtilityFlatComplicationViewDelegate;

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <Swift>

{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
    NTKCurvedColoringLabel *_curvedLabel;
    UIImageView *_curvedHighlightView;
    NTKColoringLabel *_activeLabel;
    id <CLKMonochromeFilterProvider> _filterProvider;
    id <NTKUtilityFlatComplicationViewDelegate> _delegate;
    double _textWidthInRadians;
}

@property (nonatomic) double textWidthInRadians;
@property (weak, nonatomic) id <NTKUtilityFlatComplicationViewDelegate> delegate;
@property (nonatomic) double circleRadius;
@property (nonatomic) double maxAngularWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)circleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 interior:(_Bool *)arg4 forPlacement:(unsigned long long)arg5 forDevice:(id)arg6;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setForegroundColor:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (unsigned long long)imagePlacement;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)setCanUseCurvedText:(_Bool)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (void)setShouldUseBackgroundPlatter:(_Bool)arg1;
- (void)setUseBlockyHighlightCorners:(_Bool)arg1;
- (void)_updateForTemplateChange;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (double)_widthThatFits;
- (id)_backgroundPlatterImage;
- (void)_updateContentForMaxSizeChange;
- (void)_updateHighlightViewCornerRadius;
- (void)_updateLabelMaxWidth;
- (_Bool)_shouldLayoutWithImageView;
- (void)updateTextWidthIfNeeded;

@end
