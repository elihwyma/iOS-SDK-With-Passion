/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, QLItemPresenterViewController;

@protocol QLItemViewControllerPresentingDelegate

@property (nonatomic, readonly) NSString *hostApplicationBundleIdentifier;
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;

- (unsigned short)previewItemViewController:didFailWithError: /* Error: Ran out of types for this method. */;

@end
