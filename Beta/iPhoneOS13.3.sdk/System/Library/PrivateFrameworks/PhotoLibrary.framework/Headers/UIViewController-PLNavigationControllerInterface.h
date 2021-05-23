/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (PLNavigationControllerInterface)

@property (nonatomic, readonly) _Bool pl_isInPopover;

- (id)uiipc_imagePickerController;
- (id)uiipc_imagePickerOptions;
- (_Bool)uiipc_useTelephonyUI;
- (int)uiipc_filterForMediaTypes:(id)arg1;
- (long long)setStatusBarStyleForFullScreenViewAnimated:(_Bool)arg1 useTelephonyUI:(_Bool)arg2 canHideStatusBar:(_Bool)arg3 newStatusBarStyle:(long long *)arg4 navigationBarDidUpdate:(_Bool *)arg5;
- (void)revertStatusBarStyle:(long long)arg1 currentStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;
- (_Bool)pl_visitControllerHierarchyWithBlock:(CDUnknownBlockType)arg1;

@end
