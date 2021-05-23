/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (VideosUI)

@property (nonatomic, readonly, getter=vui_ppt_isLoading) _Bool vui_ppt_loading;

+ (Class)_vui_TVLoadingViewControllerClass;

- (void)vui_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
