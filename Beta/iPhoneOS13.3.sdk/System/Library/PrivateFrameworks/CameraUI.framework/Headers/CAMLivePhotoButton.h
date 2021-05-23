/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMExpandableMenuButton.h>

@class CAMLivePhotoAnimationCache, NSString, UIImageView;

@interface CAMLivePhotoButton : CAMExpandableMenuButton

{
    _Bool _allowsAutomaticMode;
    UIImageView *__imageView;
    CAMLivePhotoAnimationCache *__animationCache;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (retain, nonatomic) CAMLivePhotoAnimationCache *_animationCache;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic) _Bool allowsAutomaticMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)enablingAnimationDuration;

- (void)reloadData;
- (id)headerView;
- (void)setSelectedIndex:(long long)arg1;
- (id)_availableModes;
- (void)_updateBaseImage;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)numberOfMenuItems;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (void)finishExpansionAnimated:(_Bool)arg1;
- (id)imageForAccessibilityHUD;
- (void)interruptEnablingAnimation;
- (void)preloadEnablingAnimation;
- (void)setAllowsAutomaticMode:(_Bool)arg1 needsReloadData:(_Bool)arg2;
- (void)performEnablingAnimation;
- (id)_currentBaseImage;
- (long long)modeForIndex:(long long)arg1;
- (long long)indexForMode:(long long)arg1;
- (void)_loadAnimationCacheIfNeeded;
- (void)_updateAnimationImages;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;

@end
