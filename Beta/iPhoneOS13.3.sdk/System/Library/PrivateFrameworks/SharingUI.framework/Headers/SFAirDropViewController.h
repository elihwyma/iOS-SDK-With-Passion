/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIViewController.h>

@class NSExtension, NSString, _SFAirDropRemoteViewController, _UIRemoteViewController;

@protocol SFAirDropViewControllerDelegate;

@interface SFAirDropViewController : UIViewController

{
    _SFAirDropRemoteViewController *_childViewController;
    id _extensionRequest;
    id <SFAirDropViewControllerDelegate> _delegate;
    NSExtension *_extension;
}

@property (retain, nonatomic) NSExtension *extension;
@property (weak, nonatomic) id <SFAirDropViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

- (void)dealloc;
- (void)viewDidLoad;
- (void)_setChildViewController:(id)arg1;
- (id)initWithNoContentView:(_Bool)arg1;
- (void)airDropViewServiceDidSuccessfullyStartTransfer;
- (void)airDropViewServiceDidSuccessfullyCompleteTransfer;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)airDropViewServiceDidRequestDismissal;
- (void)_setExtensionRequest:(id)arg1;

@end
