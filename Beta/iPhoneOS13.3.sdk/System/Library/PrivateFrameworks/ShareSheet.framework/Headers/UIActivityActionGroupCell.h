/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UIView, UIVisualEffectView, _UIActivityActionCellTitleLabel, _UIHostActivityProxy;

@interface UIActivityActionGroupCell : UICollectionViewCell

{
    NSLayoutConstraint *_titleLabelHeightAnchor;
    unsigned long long _sequence;
    _UIActivityActionCellTitleLabel *_titleLabel;
    UIImageView *_activityImageView;
    UIView *_activitySlotView;
    UIView *_titleSlotView;
    UIView *_platterView;
    _UIHostActivityProxy *_activityProxy;
    UIVisualEffectView *_effectView;
    UIView *_fillView;
}

@property (retain, nonatomic) _UIActivityActionCellTitleLabel *titleLabel;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIView *activitySlotView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *fillView;
@property (nonatomic) unsigned long long sequence;
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end
