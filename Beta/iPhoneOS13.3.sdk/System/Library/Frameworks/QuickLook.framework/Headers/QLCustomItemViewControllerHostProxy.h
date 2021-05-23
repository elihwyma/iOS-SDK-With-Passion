/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

@protocol QLCustomItemViewControllerHost;

__attribute__((visibility("hidden")))
@interface QLCustomItemViewControllerHostProxy : NSObject

{
    id <QLCustomItemViewControllerHost> _delegate;
}

@property (weak, nonatomic) id <QLCustomItemViewControllerHost> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setFullScreen:(_Bool)arg1;
- (void)dismissQuickLook;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
- (void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
