/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIStoreDialogController : NSObject

{
    NSMutableArray *_alerts;
    NSMutableArray *_dialogs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)presentDialog:(id)arg1;
- (void)_performActionForDialog:(id)arg1 buttonIndex:(long long)arg2;
- (void)presentDialog:(id)arg1 fromViewController:(id)arg2;

@end
