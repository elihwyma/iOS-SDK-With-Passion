/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UILabel.h>

@interface _TVLabel : UILabel

{
    long long _previousNumberOfLines;
    struct CGSize _cachedSizeThatFits;
    struct CGSize _previousTargetSize;
    struct UIEdgeInsets _padding;
    struct CGRect _cachedTextRectForBounds;
    struct CGRect _previousBounds;
}

@property (nonatomic) struct CGRect cachedTextRectForBounds;
@property (nonatomic) struct CGRect previousBounds;
@property (nonatomic) long long previousNumberOfLines;
@property (nonatomic) struct CGSize cachedSizeThatFits;
@property (nonatomic) struct CGSize previousTargetSize;
@property (nonatomic) struct UIEdgeInsets padding;

- (void)setLineBreakMode:(long long)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setAttributedText:(id)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_clearCachedValues;

@end
