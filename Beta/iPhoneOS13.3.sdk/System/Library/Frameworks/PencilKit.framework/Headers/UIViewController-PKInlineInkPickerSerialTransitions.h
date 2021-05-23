/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (PKInlineInkPickerSerialTransitions)

+ (void)_pk_blockSerialTransitionsOnQueue:(id)arg1 semaphore:(id)arg2;
+ (void)_pk_unblockSerialTransitionsUsingSemaphore:(id)arg1;

- (_Bool)_pk_canPresentViewController:(id)arg1;
- (_Bool)_pk_canDismissViewController;
- (void)_pk_seriallyPresentViewController:(id)arg1 queue:(id)arg2 animated:(_Bool)arg3 willPresent:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_pk_seriallyDismissViewControllerOnQueue:(id)arg1 animated:(_Bool)arg2 willDismiss:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end
