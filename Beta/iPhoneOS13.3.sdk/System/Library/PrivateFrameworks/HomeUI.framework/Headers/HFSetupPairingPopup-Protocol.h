/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HMSetupAccessoryDescription;

@protocol HFSetupPairingPopupDelegate;

@protocol HFSetupPairingPopup <Swift>

@property (nonatomic, readonly) unsigned long long popupType;
@property (weak, nonatomic, readonly) id <HFSetupPairingPopupDelegate> popupDelegate;
@property (nonatomic, readonly) HMSetupAccessoryDescription *setupAccessoryDescription;

- (unsigned short)initWithPopupDelegate:setupAccessoryDescription: /* Error: Ran out of types for this method. */;

@end
