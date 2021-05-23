/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIButton : SUScriptButtonNativeObject

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (id)title;
- (void)setTitle:(id)arg1;
- (long long)tag;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)imageInsets;
- (void)setTag:(long long)arg1;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (void)disconnectButtonAction;
- (void)connectButtonAction;

@end
