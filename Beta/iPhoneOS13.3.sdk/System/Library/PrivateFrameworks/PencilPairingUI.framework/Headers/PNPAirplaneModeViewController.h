/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIViewController.h>

@class NSString, PNPAirplaneModeView, PNPDeviceState, PNPPlatterTransitioningDelegate;

@protocol PNPAirplaneModeBluetoothDelegate, PNPPlatterViewControllerPlatterDelegate, PNPViewControllerAppearanceDelegate;

@interface PNPAirplaneModeViewController : UIViewController

{
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
    PNPAirplaneModeView *_airplaneModeView;
    id <PNPPlatterViewControllerPlatterDelegate> platterDelegate;
    id <PNPViewControllerAppearanceDelegate> appearanceDelegate;
    id <PNPAirplaneModeBluetoothDelegate> _delegate;
}

@property (weak, nonatomic) id <PNPAirplaneModeBluetoothDelegate> delegate;
@property (nonatomic, readonly) unsigned long long preferredEdge;
@property (weak, nonatomic) id <PNPPlatterViewControllerPlatterDelegate> platterDelegate;
@property (nonatomic, readonly) double preferredCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (weak, nonatomic) id <PNPViewControllerAppearanceDelegate> appearanceDelegate;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_platterContainerView;
- (void)didTapOnBluetoothButton;
- (void)dismissPill;

@end
