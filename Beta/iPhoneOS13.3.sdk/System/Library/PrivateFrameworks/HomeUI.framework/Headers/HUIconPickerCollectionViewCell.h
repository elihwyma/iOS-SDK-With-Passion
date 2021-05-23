/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HUIconButton;

@protocol HFIconDescriptor;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell

{
    HUIconButton *_iconButton;
}

@property (retain, nonatomic) HUIconButton *iconButton;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;

@end
