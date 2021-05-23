/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMExpandableMenuButton.h>

@class NSArray, NSString, UIImageView;

@interface CAMHDRButton : CAMExpandableMenuButton

{
    _Bool _allowsAutomaticHDR;
    _Bool _allowsHDROn;
    UIImageView *__glyphView;
    NSArray *__allowedModes;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes;
@property (nonatomic) long long HDRMode;
@property (nonatomic) _Bool allowsAutomaticHDR;
@property (nonatomic) _Bool allowsHDROn;
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
- (void)setAllowsAutomaticHDR:(_Bool)arg1 needsReloadData:(_Bool)arg2;
- (long long)modeForIndex:(long long)arg1;
- (unsigned long long)indexForMode:(long long)arg1;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (double)padHeaderViewContentInsetLeft;
- (id)_currentGlyphImageForAccessibilityHUD:(_Bool)arg1;
- (void)_updateAllowedModes;
- (void)_commonCAMHDRButtonInitialization;
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 needsReloadData:(_Bool)arg2;
- (_Bool)shouldAllowExpansion;

@end
