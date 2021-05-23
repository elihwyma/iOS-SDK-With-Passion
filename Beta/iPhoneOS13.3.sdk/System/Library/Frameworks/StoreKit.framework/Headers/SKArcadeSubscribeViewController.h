/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSExtension, NSNumber, NSString, SKStoreRemoteViewController;

@protocol NSCopying, SKArcadeSubscribeViewControllerDelegate;

@interface SKArcadeSubscribeViewController : UIViewController

{
    id <SKArcadeSubscribeViewControllerDelegate> _delegate;
    SKStoreRemoteViewController *_remoteViewController;
    NSString *_bundleID;
    NSNumber *_itemID;
    NSExtension *_extension;
    id <NSCopying> _extensionRequestIdentifier;
}

@property (retain, nonatomic) SKStoreRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id <NSCopying> extensionRequestIdentifier;
@property (weak, nonatomic) id <SKArcadeSubscribeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)finish;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)_loadOcelotUpsellExtension;
- (void)_setupRemoteChildViewController;
- (void)storeRemoteViewControllerNeedsTabSelection:(id)arg1;
- (void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2;
- (void)storeRemoteViewControllerDidDismiss;
- (void)storeRemoteViewControllerTerminatedWithError:(id)arg1;
- (id)initWithItemID:(id)arg1 bundleID:(id)arg2;
- (void)finishExtension;

@end
