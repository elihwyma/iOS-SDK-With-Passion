/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController

{
    id <SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SKCloudServiceSetupRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)didFinishLoadingWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)dismissCloudServiceSetupViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSafariViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
