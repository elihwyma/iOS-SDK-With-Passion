/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBWallpaperEffectView, _UIDirectionalRotationView;

@interface SBTransientOverlayWallpaperEffectView : UIView

{
    SBWallpaperEffectView *_wallpaperEffectView;
    _UIDirectionalRotationView *_wallpaperRotationView;
    long long _containerOrientation;
}

@property (nonatomic) long long containerOrientation;
@property (nonatomic) long long wallpaperStyle;

- (void)layoutSubviews;
- (void)setTransitionState:(CDStruct_059c2b36)arg1;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperVariant:(long long)arg2;
- (_Bool)prepareToAnimateToTransitionState:(inout CDStruct_059c2b36 *)arg1;
- (void)_updateWallpaperGeometry;
- (struct CATransform3D)_currentWallpaperTransform;

@end
