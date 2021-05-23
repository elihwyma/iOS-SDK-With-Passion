/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface QLServiceViewController : UIViewController

{
    _Bool _isAccessoryView;
    UIViewController *_mainViewController;
    NSUUID *_uuid;
}

@property (readonly) NSUUID *uuid;
@property (weak, readonly) UIViewController *mainViewController;

+ (id)_getServiceWithUUID:(id)arg1;
+ (id)_serviceViewControllers;

- (id)init;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)_registerServiceViewController;

@end
