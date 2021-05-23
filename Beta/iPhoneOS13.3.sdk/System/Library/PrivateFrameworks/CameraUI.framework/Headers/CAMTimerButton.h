/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMExpandableMenuButton.h>

@class NSString, UIImageView;

@protocol CAMTimerButtonDelegate;

@interface CAMTimerButton : CAMExpandableMenuButton

{
    _Bool _hideOffWhenCollapsed;
    id <CAMTimerButtonDelegate> _delegate;
    UIImageView *__glyphView;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (weak, nonatomic) id <CAMTimerButtonDelegate> delegate;
@property (nonatomic) long long duration;
@property (nonatomic) _Bool hideOffWhenCollapsed;
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
- (void)setHideOffWhenCollapsed:(_Bool)arg1 needsReloadData:(_Bool)arg2;
- (id)_currentGlyphImageForAccessibiliyHUD:(_Bool)arg1;
- (void)_commonCAMTimerButtonInitialization;
- (void)setDuration:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateCurrentGlyphImage;
- (double)padHeaderViewContentInsetLeft;
- (id)shownIndexesWhileCollapsed;

@end
