/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/CFXEffectPickerView.h>

@class JTCollectionView, JTCollectionViewFlowLayout, NSString, UIView;

@interface CFXOverlayEffectPickerView : CFXEffectPickerView

{
    UIView *_contentView;
    JTCollectionView *_collectionView;
    JTCollectionViewFlowLayout *_collectionViewLayout;
}

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) JTCollectionView *collectionView;
@property (retain, nonatomic) JTCollectionViewFlowLayout *collectionViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)subviewsDidLoad;
- (id)effectPickerNibName;
- (id)effectPickerCellNibName;
- (id)effectPickerCellReuseIdentifier;
- (void)updateThumbnailColumnSizeForCollectionSize;
- (void)didResizeCollectionViewToSize:(struct CGSize)arg1;

@end
