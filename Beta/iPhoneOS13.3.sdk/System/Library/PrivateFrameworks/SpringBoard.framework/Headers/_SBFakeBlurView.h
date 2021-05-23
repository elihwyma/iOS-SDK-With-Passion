/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBFWallpaperView, SBWallpaperController, UIImageView;

@protocol _SBFakeBlurObserver;

@interface _SBFakeBlurView : UIView

{
    unsigned long long _transformOptions;
    long long _requestedStyle;
    long long _effectiveStyle;
    SBFWallpaperView *_wallpaperView;
    _Bool _fullscreen;
    UIImageView *_imageView;
    struct CGPoint _wallpaperOffset;
    id <_SBFakeBlurObserver> _observer;
    SBWallpaperController *_wallpaperController;
}

@property (nonatomic, readonly) long long variant;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (weak, nonatomic, readonly) SBWallpaperController *wallpaperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <_SBFakeBlurObserver> observer;
@property (nonatomic) double zoomScale;
@property (nonatomic) unsigned long long transformOptions;

+ (id)_imageForStyle:(inout long long *)arg1 withSource:(id)arg2 rootSettings:(id)arg3 overrideTraitCollection:(id)arg4;
+ (id)_imageForStyle:(inout long long *)arg1 withSource:(id)arg2 rootSettings:(id)arg3;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)requestStyle:(long long)arg1;
- (void)handleReachabilityYOffsetDidChange;
- (void)reconfigureWithSource:(id)arg1;
- (void)updateImageWithSource:(id)arg1;
- (id)initWithVariant:(long long)arg1 wallpaperController:(id)arg2 transformOptions:(unsigned long long)arg3;
- (void)rotateToInterfaceOrientation:(long long)arg1;
- (void)_updateImageWithSource:(id)arg1 overrideTraitCollection:(id)arg2 notifyObserver:(_Bool)arg3;
- (void)_setImage:(id)arg1 style:(long long)arg2 notify:(_Bool)arg3;
- (void)_createOrRemoveMatchMoveAnimationIfNeeded;
- (void)updateImageWithSource:(id)arg1 overrideTraitCollection:(id)arg2;
- (long long)effectiveStyle;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;

@end
