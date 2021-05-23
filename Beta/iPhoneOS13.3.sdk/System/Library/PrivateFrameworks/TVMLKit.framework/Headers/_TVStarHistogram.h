/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _TVStarHistogram : UIView

{
    UIImage *_starImage;
    NSArray *_starBars;
    UIColor *_barEmptyColor;
    UIColor *_barFillColor;
    double _lineSpacing;
}

@property (copy, nonatomic) NSArray *starBars;
@property (retain, nonatomic) UIImage *starImage;
@property (retain, nonatomic) UIColor *barEmptyColor;
@property (retain, nonatomic) UIColor *barFillColor;
@property (nonatomic) double lineSpacing;

+ (id)_histogramViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)histogramViewWithElement:(id)arg1 existingView:(id)arg2;

- (_Bool)canBecomeFocused;
- (void)drawRect:(struct CGRect)arg1;

@end
