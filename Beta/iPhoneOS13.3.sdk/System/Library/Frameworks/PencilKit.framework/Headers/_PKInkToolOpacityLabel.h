/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface _PKInkToolOpacityLabel : UIView

{
    unsigned long long _sizeState;
    double _inkOpacity;
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) double inkOpacity;

+ (id)_fontForSizeState:(unsigned long long)arg1;
+ (double)_labelAlphaForInkOpacity:(double)arg1;
+ (_Bool)_shouldHideLabel:(double)arg1;
+ (id)_formattedStringForInkOpacity:(double)arg1;
+ (double)_maxLabelHeightForSizeState:(unsigned long long)arg1;
+ (double)_toolOffsetForSizeState:(unsigned long long)arg1;
+ (double)_labelOffsetFromBottomEdgeForSizeState:(unsigned long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)_frameForRotatedLabel;
- (id)_inkOpacityLabelString;
- (void)setInkOpacity:(double)arg1 animated:(_Bool)arg2;

@end
