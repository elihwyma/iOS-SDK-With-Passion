/*
 Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILayoutGuide;

@interface _TVContentRatingTextBadgeView : UIView

{
    NSAttributedString *_contentRatingAttributedText;
    UILayoutGuide *_contentGuide;
}

@property (retain, nonatomic) UILayoutGuide *contentGuide;
@property (copy, nonatomic) NSAttributedString *contentRatingAttributedText;
@property (copy, nonatomic) NSString *contentRatingText;

+ (struct UIEdgeInsets)_paddingEdgeInsets;
+ (id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2;
+ (id)_attributedRatingTextForText:(id)arg1 color:(id)arg2;
+ (struct CGSize)_badgeSizeForAttributedRatingText:(id)arg1;
+ (void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 color:(id)arg4;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)_intrinsicContentSize;
- (void)_updateContentRatingAttributedText:(id)arg1;
- (id)initWithBaselineOffsetFromBottom:(double)arg1;

@end
