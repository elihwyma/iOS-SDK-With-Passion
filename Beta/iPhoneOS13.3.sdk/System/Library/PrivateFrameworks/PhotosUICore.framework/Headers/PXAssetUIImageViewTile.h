/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXFocusableUIImageView, PXImageRequester, UIColor, UIImage, UIView;

@interface PXAssetUIImageViewTile : NSObject <Swift>

{
    PXFocusableUIImageView *_imageView;
    UIView *_contentView;
    _Bool _hasPlaceholder;
    _Bool _shouldAllowFocus;
    PXImageRequester *_imageRequester;
    double _cornerRadius;
    UIColor *_placeholderColor;
    UIImage *_placeholderImage;
    struct CGSize __contentSize;
    struct CGRect __desiredContentsRect;
}

@property (nonatomic, setter=_setContentSize:) struct CGSize _contentSize;
@property (nonatomic, setter=_setDesiredContentsRect:) struct CGRect _desiredContentsRect;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) _Bool shouldAllowFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIImage *image;

- (id)init;
- (void)prepareForReuse;
- (void)_updateImageView;
- (void)_updateContentView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateImageRequester;
- (void)imageDidChange;

@end
