/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol SKStoreRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKStoreRemoteViewController : _UIRemoteViewController

{
    id <SKStoreRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SKStoreRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setNeedsTabSelection;
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;

@end
