/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIPreviewContainerViewController : UIViewController

{
    UIViewController *_childViewController;
}

@property (retain, nonatomic) UIViewController *childViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)previewCommitViewController;

@end
