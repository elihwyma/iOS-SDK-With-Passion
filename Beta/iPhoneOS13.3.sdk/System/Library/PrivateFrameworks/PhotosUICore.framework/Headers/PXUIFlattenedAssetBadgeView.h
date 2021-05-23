/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIAssetBadgeView.h>

@class UIImage;

@interface PXUIFlattenedAssetBadgeView : PXUIAssetBadgeView

{
    UIImage *_backgroundImage;
}

- (_Bool)isOpaque;
- (void)setFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (void)setNeedsLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setBackgroundImage:(id)arg1;

@end
