/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIButton.h>

@class UIColor;

@interface _PKInkColorButton : UIButton

{
    _Bool _isCompact;
    _Bool _isUsedOnDarkBackground;
    UIColor *_color;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool isCompact;
@property (nonatomic) _Bool isUsedOnDarkBackground;

+ (struct CGRect)swatchRectForBounds:(struct CGRect)arg1 isCompact:(_Bool)arg2;
+ (double)swatchInsetForIsCompact:(_Bool)arg1;
+ (double)transparentSelectionRingInset:(_Bool)arg1;
+ (double)innerColorCircleInset:(_Bool)arg1;
+ (id)pathForFillShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2 isCompact:(_Bool)arg3;
+ (id)buttonWithColor:(id)arg1 isCompact:(_Bool)arg2;
+ (id)embossOverlayImageForColor:(id)arg1 selected:(_Bool)arg2 isCompact:(_Bool)arg3;
+ (id)pathForSelectedColorShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2 embossed:(_Bool)arg3 isCompact:(_Bool)arg4;
+ (id)pathForStrokeShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2 color:(id)arg3 isUsedOnDarkBackground:(_Bool)arg4 isCompact:(_Bool)arg5;
+ (id)strokeColorForStrokeShapeLayerWithColor:(id)arg1 isUsedOnDarkBackground:(_Bool)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;
- (struct CGRect)_swatchRect;
- (double)_swatchInset;

@end
