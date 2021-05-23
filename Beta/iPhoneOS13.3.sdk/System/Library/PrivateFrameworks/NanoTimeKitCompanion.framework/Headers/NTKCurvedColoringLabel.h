/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKColoringLabel.h>

@class CLKUICurvedLabel, UIView;

@interface NTKCurvedColoringLabel : NTKColoringLabel

{
    CLKUICurvedLabel *_curvedLabel;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) _Bool interior;
@property (nonatomic) double centerAngle;
@property (nonatomic) double maxAngularWidth;
@property (nonatomic, readonly) struct CGRect textBoundingRect;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) double imagePadding;
@property (weak, nonatomic) UIView *imageView;

- (id)color;
- (double)alpha;
- (void)setBounds:(struct CGRect)arg1;
- (void)setColor:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)font;
- (void)sizeToFit;
- (long long)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (id)textColor;
- (double)_lastLineBaseline;
- (double)_firstLineBaseline;
- (void)setTracking:(double)arg1;
- (void)invalidateCachedSize;
- (_Bool)isTextTruncated;
- (void)setImageView:(id)arg1 placement:(unsigned long long)arg2 padding:(double)arg3;
- (void)getTextCenter:(struct CGPoint *)arg1 startAngle:(double *)arg2 endAngle:(double *)arg3;
- (void)setUsesTextProviderTintColoring:(_Bool)arg1;
- (void)setTextProviderFont:(id)arg1;
- (void)_setAnimationAlpha:(double)arg1;
- (void)_setUpSnapshot;
- (id)textProviderFont;

@end
