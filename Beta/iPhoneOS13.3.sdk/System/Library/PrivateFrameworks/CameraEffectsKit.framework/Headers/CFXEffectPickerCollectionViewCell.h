/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CFXEffect, JTImage, JTImageView, NSString;

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell

{
    CFXEffect *_effect;
    NSString *_effectIdentifier;
    JTImageView *_imageView;
}

@property (retain, nonatomic) JTImageView *imageView;
@property (retain, nonatomic) JTImage *image;
@property (retain, nonatomic) CFXEffect *effect;
@property (retain, nonatomic) NSString *effectIdentifier;

- (void)prepareForReuse;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)awakeFromNib;
- (void)configureCellAppearence;

@end
