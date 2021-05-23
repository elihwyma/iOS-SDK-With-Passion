/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UINavigationController.h>

@interface UINavigationController (CKAdditions)

- (void)__ck_enqueueCompletionBlock:(CDUnknownBlockType)arg1;
- (void)__ck_pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)__ck_popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)__ck_popToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)__ck_popToRootViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)__ck_callDelegateBlocks;

@end
