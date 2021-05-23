/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISDialogOperation.h>

@class UIAlertController, UIWindow;

@interface ISUIKitDialogOperation : ISDialogOperation

{
    UIAlertController *_alert;
    UIWindow *_window;
}

- (void)run;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (void)_showAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanupAlert;

@end
