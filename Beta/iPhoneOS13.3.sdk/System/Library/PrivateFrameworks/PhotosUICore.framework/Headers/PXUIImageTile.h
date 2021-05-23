/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXImageRequester, PXImageUIView, PXImageViewSpec, UIView;

@interface PXUIImageTile : NSObject <Swift>

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool imageView;
        _Bool imageRequester;
        _Bool image;
    } _needsUpdateFlags;
    PXImageUIView *_imageView;
    unsigned long long _animationFlags;
    PXImageRequester *_imageRequester;
    PXImageViewSpec *__spec;
    double __displayScale;
    long long __animationCount;
    struct CGSize __contentSize;
    struct CGRect __contentsRect;
}

@property (retain, nonatomic, setter=_setSpec:) PXImageViewSpec *_spec;
@property (nonatomic, setter=_setContentSize:) struct CGSize _contentSize;
@property (nonatomic, setter=_setDisplayScale:) double _displayScale;
@property (nonatomic, setter=_setContentsRect:) struct CGRect _contentsRect;
@property (nonatomic, setter=_setAnimationCount:) long long _animationCount;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (_Bool)_needsUpdate;
- (void)_invalidateImage;
- (void)_setNeedsUpdate;
- (void)_updateImageIfNeeded;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_invalidateImageView;
- (void)_updateImageViewIfNeeded;
- (void)_invalidateImageRequester;
- (void)_updateImageRequesterIfNeeded;

@end
