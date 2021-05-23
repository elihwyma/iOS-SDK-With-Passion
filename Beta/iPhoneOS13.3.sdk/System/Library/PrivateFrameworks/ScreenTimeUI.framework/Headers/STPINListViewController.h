/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STListViewController.h>

@class NSObject, NSString;

@protocol STRootViewModelCoordinator;

@interface STPINListViewController : STListViewController

{
    NSObject<STRootViewModelCoordinator> *_coordinator;
    id _showingPinTarget;
}

@property (retain, nonatomic) id showingPinTarget;
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didAcceptRemovePIN;
- (void)didCancelEnteringPIN;
- (void)showPINSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRootViewModelCoordinator:(id)arg1;
- (_Bool)shouldShowPINSheetForSpecifier:(id)arg1;
- (_Bool)validatePIN:(id)arg1 forPINController:(id)arg2;

@end
