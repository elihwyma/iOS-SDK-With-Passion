/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

#import <SpringBoardHome/Swift-Protocol.h>

@class NSString, SBHIconImageCache, SBIcon, SBIconProgressView, SBIconView, UIImage, UIImageView;

@interface SBIconImageView : UIView <Swift>

{
    UIImageView *_overlayView;
    SBIconProgressView *_progressView;
    _Bool _paused;
    _Bool _showsSquareCorners;
    _Bool _jittering;
    SBIcon *_icon;
    NSString *_location;
    SBIconView *_iconView;
    SBHIconImageCache *_iconImageCache;
    double _brightness;
    double _overlayAlpha;
}

@property (copy, nonatomic) NSString *location;
@property (nonatomic) double overlayAlpha;
@property (nonatomic, readonly) SBIcon *icon;
@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (nonatomic) double brightness;
@property (nonatomic, readonly) UIImage *displayedImage;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) _Bool showsSquareCorners;
@property (nonatomic, getter=isJittering) _Bool jittering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)snapshot;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)visibleBounds;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)contentsImage;
- (void)_clearProgressView;
- (void)progressViewCanBeRemoved:(id)arg1;
- (struct SBIconImageInfo)iconImageInfo;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3;
- (void)updateImageAnimated:(_Bool)arg1;
- (void)setProgressAlpha:(double)arg1;
- (void)iconViewLegibilitySettingsDidChange;
- (void)iconViewFolderIconImageCacheDidChange;
- (void)setProgressState:(long long)arg1 paused:(_Bool)arg2 percent:(double)arg3 animated:(_Bool)arg4;
- (void)iconImageDidUpdate:(id)arg1;
- (void)clearCachedImages;
- (id)squareContentsImage;
- (void)_updateOverlayImage;
- (void)_updateOverlayAlpha;
- (void)_updateProgressMask;
- (id)squareDarkeningOverlayImage;
- (id)darkeningOverlayImage;
- (id)_currentOverlayImage;
- (id)_iconBasicOverlayImage;
- (id)_iconSquareOverlayImage;
- (void)iconImageCache:(id)arg1 didUpdateImageForIcon:(id)arg2;
- (id)_generateSquareContentsImage;

@end
