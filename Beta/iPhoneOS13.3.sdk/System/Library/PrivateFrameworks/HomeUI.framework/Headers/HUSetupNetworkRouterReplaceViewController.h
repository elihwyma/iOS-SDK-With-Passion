/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMSetupAccessoryDescription, NSString;

@protocol HFSetupPairingPopupDelegate;

@interface HUSetupNetworkRouterReplaceViewController : HUImageOBWelcomeController <Swift>

{
    id <HFSetupPairingPopupDelegate> _popupDelegate;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long popupType;
@property (weak, nonatomic, readonly) id <HFSetupPairingPopupDelegate> popupDelegate;
@property (nonatomic, readonly) HMSetupAccessoryDescription *setupAccessoryDescription;

- (void)viewDidLoad;
- (void)_replacePressed:(id)arg1;
- (void)_cancelPressed:(id)arg1;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;

@end
