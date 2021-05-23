/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBOrientationTransformWrapperView, SBWallpaperEffectView;

@interface SBSwitcherWallpaperPageContentView : UIView

{
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
    _Bool _active;
    _Bool _visible;
    double _cornerRadius;
    long long _orientation;
    long long _desiredWallpaperOrientation;
    long long _wallpaperStyle;
    SBWallpaperEffectView *_wallpaperEffectView;
}

@property (nonatomic) long long desiredWallpaperOrientation;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic, readonly) SBWallpaperEffectView *wallpaperEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) _Bool contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;

- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateCornerRadius;
- (struct CGRect)_wallpaperFrame;
- (_Bool)_deviceSupportsEdgeAntiAliasing;
- (id)_viewForWallpaperWrapper;
- (void)_updateWallpaperOrientation;

@end
