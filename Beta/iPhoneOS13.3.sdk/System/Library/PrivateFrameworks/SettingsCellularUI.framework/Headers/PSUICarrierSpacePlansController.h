/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class CTCarrierSpaceClient, NSObject, NSString, RemoteUIController;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpacePlansController : PSListController

{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    RemoteUIController *_remoteUIController;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

@property (retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)simStatusChanged;
- (void)carrierSpaceChanged;
- (id)stringFromGroupCategory:(long long)arg1;
- (id)detailForPlanOption:(id)arg1;
- (void)moreDetailsButtonTapped:(id)arg1;
- (void)dismissPlanDetail;

@end
