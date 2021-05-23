/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol SFAirDropViewServiceHostProtocol;

__attribute__((visibility("hidden")))
@interface _SFAirDropRemoteViewController : _UIRemoteViewController

{
    id <SFAirDropViewServiceHostProtocol> _airDropHost;
}

@property (weak, nonatomic) id <SFAirDropViewServiceHostProtocol> airDropHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)airDropViewServiceDidSuccessfullyStartTransfer;
- (void)airDropViewServiceDidSuccessfullyCompleteTransfer;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)airDropViewServiceDidRequestDismissal;
- (id)airDropExtensionService;

@end
