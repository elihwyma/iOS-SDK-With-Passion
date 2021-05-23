/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIAirDropGroupActivityCell.h>

@class NSArray, SFMagicHeadWheelView, UIView;

@interface _UIMagicHeadCollectionViewCell : UIAirDropGroupActivityCell

{
    UIView *_magicHeadView;
    SFMagicHeadWheelView *_magicHeadWheelView;
    NSArray *_regularMHConstraints;
    NSArray *_largeTextMHConstraints;
}

@property (retain, nonatomic) NSArray *regularMHConstraints;
@property (retain, nonatomic) NSArray *largeTextMHConstraints;
@property (retain, nonatomic) UIView *magicHeadView;
@property (retain, nonatomic) SFMagicHeadWheelView *magicHeadWheelView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDarkening;
- (void)setupConstraintsYukonMH;
- (void)_updateMHForCurrentSizeCategory;

@end
