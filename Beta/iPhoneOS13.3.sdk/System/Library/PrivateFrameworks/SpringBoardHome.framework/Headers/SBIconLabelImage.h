/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIImage.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage

{
    SBIconLabelImageParameters *_parameters;
    struct UIEdgeInsets _alignmentRectInsets;
    double _baselineOffsetFromBottom;
    UIImage *_legibilityImage;
}

@property (retain, nonatomic) UIImage *legibilityImage;
@property (copy, nonatomic, readonly) SBIconLabelImageParameters *parameters;

+ (void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (_Bool)attributedText:(id)arg1 fitsInRect:(struct CGRect)arg2 textRect:(out struct CGRect *)arg3;
+ (id)legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2 pool:(id)arg3;
+ (id)imageWithParameters:(id)arg1 pool:(id)arg2 legibilityPool:(id)arg3;
+ (double)legibilityStrengthForLegibilityStyle:(long long)arg1;
+ (id)imageWithParameters:(id)arg1;
+ (struct CGSize)_maxLegibilityImageSizeForLabelSize:(struct CGSize)arg1;
+ (_Bool)needsLegibilityImageForParameters:(id)arg1;

- (id)description;
- (_Bool)hasBaseline;
- (double)baselineOffsetFromBottom;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 alignmentRectInsets:(struct UIEdgeInsets)arg5 baselineOffsetFromBottom:(double)arg6;

@end
