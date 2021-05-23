/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject

{
    _Bool _isBackButton;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (id)title;
- (void)setTitle:(id)arg1;
- (long long)tag;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)imageInsets;
- (_Bool)isBackButton;
- (int)buttonType;
- (void)setTag:(long long)arg1;
- (id)styleString;
- (_Bool)isLoading;
- (void)setLoading:(_Bool)arg1;
- (_Bool)isShowingConfirmation;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)hideConfirmationAnimated:(_Bool)arg1;
- (void)disconnectButtonAction;
- (void)connectButtonAction;
- (void)setStyleFromString:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 animated:(_Bool)arg2;
- (id)systemItemString;

@end
