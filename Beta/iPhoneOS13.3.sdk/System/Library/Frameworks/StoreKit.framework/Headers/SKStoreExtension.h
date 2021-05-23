/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface SKStoreExtension : UIViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)clientInterface;
+ (id)serviceInterface;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;
- (void)setupWithParameters:(id)arg1;
- (void)setTabIdentifier:(id)arg1;
- (void)setRequestedIdentifier:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;

@end
