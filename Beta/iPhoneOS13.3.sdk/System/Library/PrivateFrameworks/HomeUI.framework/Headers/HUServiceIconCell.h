/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HUIconView;

@protocol HFIconDescriptor;

@interface HUServiceIconCell : UICollectionViewCell

{
    _Bool _hasConfiguredConstraints;
    id <HFIconDescriptor> _iconDescriptor;
    HUIconView *_iconView;
}

@property (nonatomic, readonly) HUIconView *iconView;
@property (nonatomic) _Bool hasConfiguredConstraints;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;

+ (_Bool)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)_updateBackgroundColor;
- (void)setSelected:(_Bool)arg1;

@end
