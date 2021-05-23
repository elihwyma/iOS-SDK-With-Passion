/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKColoringLabel.h>

@class UIColor;

@interface NTKVictoryLabel : NTKColoringLabel

{
    _Bool _requiresDrawingRectAdjustments;
    double _additionalPaddingInsets;
    UIColor *_outlineColor;
    double _outlineAlpha;
    NTKVictoryLabel *_outlineLabel;
    struct CGVector _drawingRectOffset;
}

@property (retain, nonatomic) NTKVictoryLabel *outlineLabel;
@property (nonatomic) _Bool requiresDrawingRectAdjustments;
@property (nonatomic) double additionalPaddingInsets;
@property (nonatomic) struct CGVector drawingRectOffset;
@property (retain, nonatomic) UIColor *outlineColor;
@property (nonatomic) double outlineAlpha;

+ (id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(_Bool)arg3;
+ (id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2;
+ (id)loadFonts:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(_Bool)arg3;
+ (id)fontDescriptorWithVictoryStyle:(unsigned long long)arg1;

- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setAttributedText:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_layoutOutlineLabelIfNeeded;
- (id)outlinedLabelAttributedStringFromAttributedString:(id)arg1;
- (void)_applyDrawingOffsetForTextIfNeeded:(id)arg1;

@end
