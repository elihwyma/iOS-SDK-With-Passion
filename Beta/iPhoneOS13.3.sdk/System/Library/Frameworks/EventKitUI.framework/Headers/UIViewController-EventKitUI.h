/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface UIViewController (EventKitUI)

@property (nonatomic, readonly) _Bool isPresentedInsidePopover;
@property (nonatomic, readonly) UIWindow *EKUI_window;

+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(struct NSDictionary *)arg3 allowInlinePreview:(_Bool)arg4 previewInline:(_Bool)arg5 minimalMode:(_Bool)arg6;
+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(struct NSDictionary *)arg3;

@end
