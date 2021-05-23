/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/CFXEffectPickerCollectionViewCell.h>

@class UILabel, UIView;

@interface CFXFilterPickerCollectionViewCell : CFXEffectPickerCollectionViewCell

{
    _Bool _compactMode;
    UILabel *_titleView;
    UIView *_selectionView;
}

@property (retain) UILabel *titleView;
@property (weak, nonatomic) UIView *selectionView;
@property (nonatomic, getter=isInCompactMode) _Bool compactMode;

+ (id)selectionColor;

- (void)prepareForReuse;
- (void)setEffect:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)CFX_updateLayerProperties;
- (void)CFX_updateTitle;
- (void)CFX_updateSelectionView;
- (void)configureCellAppearence;

@end
