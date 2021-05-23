/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UILabel.h>

@interface UILabel (TVMLKitAdditions)

- (struct CGSize)tv_textSizeForSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (double)tv_heightToFirstBaseline;
- (double)tv_scaledValueForValue:(double)arg1;
- (struct CGSize)tv_textSizeForWidth:(double)arg1;

@end
