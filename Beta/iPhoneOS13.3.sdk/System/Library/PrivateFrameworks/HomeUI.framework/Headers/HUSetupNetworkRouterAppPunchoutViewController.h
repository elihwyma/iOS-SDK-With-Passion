/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class HFAppPunchoutRequest, HMSetupAccessoryDescription, HULinkedApplicationItem, NSString, OBTrayButton;

@protocol HFSetupPairingPopupDelegate;

@interface HUSetupNetworkRouterAppPunchoutViewController : OBWelcomeController

{
    id <HFSetupPairingPopupDelegate> _popupDelegate;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
    HFAppPunchoutRequest *_punchoutRequest;
    HULinkedApplicationItem *_linkedApplicationItem;
    OBTrayButton *_punchoutButton;
}

@property (retain, nonatomic) HULinkedApplicationItem *linkedApplicationItem;
@property (nonatomic, readonly) OBTrayButton *punchoutButton;
@property (retain, nonatomic) HFAppPunchoutRequest *punchoutRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long popupType;
@property (weak, nonatomic, readonly) id <HFSetupPairingPopupDelegate> popupDelegate;
@property (nonatomic, readonly) HMSetupAccessoryDescription *setupAccessoryDescription;

- (void)viewDidLoad;
- (void)_cancelPressed:(id)arg1;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;
- (void)_punchoutPressed:(id)arg1;
- (id)_lookUpSoftwareAndUpdateUI;

@end
