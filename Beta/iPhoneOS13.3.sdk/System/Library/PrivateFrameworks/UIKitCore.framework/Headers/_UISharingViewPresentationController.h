/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPopoverPresentationController.h>

__attribute__((visibility("hidden")))
@interface _UISharingViewPresentationController : UIPopoverPresentationController

{
    _Bool _suppressDismissalHandlerUnlessDimmingViewTapped;
    CDUnknownBlockType _dismissalHandler;
}

@property (copy, nonatomic) CDUnknownBlockType dismissalHandler;
@property (nonatomic) _Bool suppressDismissalHandlerUnlessDimmingViewTapped;

- (void)dismissalTransitionDidEnd:(_Bool)arg1;

@end
