/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXCMMAssetStatusBadgeView : UIView <Swift>

{
    struct {
        _Bool imageView;
    } _needsUpdateFlags;
    long long _status;
    UIView *_glyphView;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) UIView *glyphView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

+ (struct CGSize)preferredSize;

- (void)prepareForReuse;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_invalidateImageView;
- (void)_updateImageViewIfNeeded;

@end
