/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMExpandableMenuButton.h>

@class NSString, UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton

{
    _Bool _allowsAutomaticFlash;
    _Bool _unavailable;
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic, readonly) UIImageView *_warningIndicatorView;
@property (nonatomic) long long flashMode;
@property (nonatomic) _Bool allowsAutomaticFlash;
@property (nonatomic, getter=isUnavailable) _Bool unavailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (id)headerView;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)numberOfMenuItems;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (id)imageForAccessibilityHUD;
- (void)setAllowsAutomaticFlash:(_Bool)arg1 needsReloadData:(_Bool)arg2;
- (long long)modeForIndex:(long long)arg1;
- (long long)indexForMode:(long long)arg1;
- (_Bool)wantsSelectedItemToBeVisible;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (double)padHeaderViewContentInsetLeft;
- (id)_currentGlyphImageForAccessibilityHUD:(_Bool)arg1;
- (void)_commonCAMFlashButtonInitialization;
- (double)collapsedSelectedLabelHorizontalMargin;
- (_Bool)shouldIgnoreMenuInteraction;

@end
