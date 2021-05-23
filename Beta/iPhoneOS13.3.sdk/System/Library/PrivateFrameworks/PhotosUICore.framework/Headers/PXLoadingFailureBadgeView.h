/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIImageView.h>

@interface PXLoadingFailureBadgeView : UIImageView

{
    struct {
        _Bool image;
        _Bool sizeClass;
    } _needsUpdateFlags;
    long long __sizeClass;
}

@property (nonatomic, setter=_setSizeClass:) long long _sizeClass;

+ (struct CGSize)_imageSizeForSizeClass:(long long)arg1;
+ (id)_imageForSizeClass:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (_Bool)_needsUpdate;
- (void)_invalidateImage;
- (void)_setNeedsUpdate;
- (void)_updateImageIfNeeded;
- (void)_updateIfNeeded;
- (void)_invalidateSizeClass;
- (void)_updateSizeClassIfNeeded;

@end
