/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UILabel.h>

@class UIColor;

@interface FMDistanceBadge : UILabel

{
    UIColor *_badgeColor;
    struct UIEdgeInsets _insets;
}

@property (nonatomic) struct UIEdgeInsets insets;
@property (retain, nonatomic) UIColor *badgeColor;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_commonSetup;

@end
