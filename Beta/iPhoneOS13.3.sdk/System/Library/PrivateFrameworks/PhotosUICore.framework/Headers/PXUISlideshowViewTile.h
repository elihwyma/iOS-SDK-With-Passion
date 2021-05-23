/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIImageTile.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXUIFloatingContentView, UIView, UIViewController;

@protocol PXUISlideshowViewTileDelegate;

@interface PXUISlideshowViewTile : PXUIImageTile <Swift>

{
    UIView *_containerView;
    PXUIFloatingContentView *_floatingView;
    _Bool _slideshowViewHidden;
    UIViewController *_slideshowViewController;
    id <PXUISlideshowViewTileDelegate> _delegate;
    UIView *__contentView;
    UIView *__slideshowSnapshotView;
}

@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (retain, nonatomic, setter=_setSlideshowSnapshotView:) UIView *_slideshowSnapshotView;
@property (retain, nonatomic) UIViewController *slideshowViewController;
@property (nonatomic, getter=isSlideshowViewHidden) _Bool slideshowViewHidden;
@property (weak, nonatomic) id <PXUISlideshowViewTileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (void)_updateSubviewOrdering;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id)arg2 withOptions:(id)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateContentViewFrame;
- (void)_updateContentViewVisibility;

@end
