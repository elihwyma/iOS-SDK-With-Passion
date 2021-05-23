/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, UIAirDropNode, UILabel, UIView, UIVisualEffectView, _UIAirDropProgressView;

@interface UIAirDropGroupActivityCell : UICollectionViewCell

{
    _Bool _stateBeingRestored;
    _Bool _disabled;
    UILabel *_nameLabel;
    UIView *_titleSlotView;
    UIView *_subtitleSlotView;
    UIView *_displayNameSlotView;
    UIView *_imageSlotView;
    UIView *_transportSlotView;
    UIAirDropNode *_node;
    double _progress;
    UIVisualEffectView *_vibrantTitleView;
    UIVisualEffectView *_vibrantSubtitleView;
    UILabel *_secondLabel;
    NSArray *_secondLabelVisibleConstraintsArray;
    UILabel *_labelForPositioning;
    _UIAirDropProgressView *_circleProgressView;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

@property (retain, nonatomic) UIVisualEffectView *vibrantTitleView;
@property (retain, nonatomic) UIVisualEffectView *vibrantSubtitleView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *subtitleSlotView;
@property (retain, nonatomic) UIView *displayNameSlotView;
@property (retain, nonatomic) UIView *imageSlotView;
@property (retain, nonatomic) UIView *transportSlotView;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray;
@property (retain, nonatomic) UILabel *labelForPositioning;
@property (retain, nonatomic) _UIAirDropProgressView *circleProgressView;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIAirDropNode *node;
@property (nonatomic) double progress;
@property (nonatomic) _Bool stateBeingRestored;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setupConstraintsYukon;
- (void)_updateForCurrentSizeCategory;
- (void)updateDarkening;

@end
