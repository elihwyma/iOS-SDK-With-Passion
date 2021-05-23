/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSString, NTKCFaceContainerView, UIFontMetrics, UIImage, UIImageView, UILabel, UIView;

@interface _NTKCGalleryCollectionCell : UICollectionViewCell

{
    UILabel *_nameLabel;
    UIImageView *_nameImageView;
    NSLayoutConstraint *_nameBaselineConstraint;
    NSLayoutConstraint *_leadingImageConstraint;
    NSLayoutConstraint *_trailingImageConstraint;
    NSLayoutConstraint *_centerConstraint;
    NTKCFaceContainerView *_faceContainerView;
    NSString *_calloutName;
    UIImage *_calloutImage;
    UIFontMetrics *_fontMetrics;
}

@property (retain, nonatomic) UIView *faceView;
@property (retain, nonatomic) NTKCFaceContainerView *faceContainerView;
@property (copy, nonatomic) NSString *calloutName;
@property (retain, nonatomic) UIImage *calloutImage;
@property (nonatomic) _Bool active;
@property (retain, nonatomic) UIFontMetrics *fontMetrics;

+ (id)reuseIdentifier;
+ (struct CGSize)itemSizeWithCalloutName:(_Bool)arg1 andCalloutImage:(_Bool)arg2;
+ (id)nonLuxoReuseIdentifier;
+ (id)luxoReuseIdentifier;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1;
- (void)_highlight;
- (void)_fontSizeDidChange;
- (void)setFontAdjustingAttributes;

@end
