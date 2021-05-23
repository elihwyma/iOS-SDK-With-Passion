/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIViewController.h>

@class NSString, PNPDeviceState, PNPPlatterTransitioningDelegate, UIView;

@protocol PNPDeviceStateConfigurable, PNPPlatterViewControllerPlatterDelegate, PNPViewControllerAppearanceDelegate;

@interface PNPLockScreenViewController : UIViewController

{
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
    id <PNPPlatterViewControllerPlatterDelegate> platterDelegate;
    id <PNPViewControllerAppearanceDelegate> appearanceDelegate;
    UIView<PNPDeviceStateConfigurable> *_pillView;
}

@property (retain, nonatomic) UIView<PNPDeviceStateConfigurable> *pillView;
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
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_platterContainerView;
- (void)dismissPill;

@end
