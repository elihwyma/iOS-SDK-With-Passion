/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIButton.h>

__attribute__((visibility("hidden")))
@interface VUIAccountSettingsButton : VUIButton

- (void)_accountStoreDidChange:(id)arg1;
- (void)_setup;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupAccountImageView;
- (void)_updateAccountImage;
- (void)_updateAccountButtonVisibility:(_Bool)arg1;
- (id)initWithButtonLayout:(id)arg1 interfaceStyle:(long long)arg2;

@end
