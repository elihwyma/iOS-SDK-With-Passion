/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@interface SUScriptDialogNativeObject : SUScriptNativeObject

- (void)show;
- (void)dismiss;
- (void)showSheet;
- (void)showSheetInViewController:(id)arg1;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (id)_makeAlertControllerForDialog:(id)arg1 style:(long long)arg2;
- (void)_showSheetInView:(id)arg1 fromViewController:(id)arg2;
- (void)_tearDownForDismissWithButtonIndex:(long long)arg1;

@end
