/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIVisualEffectView;

@interface RTTUIAbbreviationCell : UICollectionViewCell

{
    UIVisualEffectView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
    UILabel *_abbreviation;
    UILabel *_hint;
}

@property (retain, nonatomic) UILabel *abbreviation;
@property (retain, nonatomic) UILabel *hint;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)layoutSubviews;
- (void)setAbbreviationData:(id)arg1;
- (id)abbreviationText;

@end
