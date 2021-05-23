/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSURL;

@protocol HAPRelayPairingClientDelegate;

@interface HAPRelayPairingClient : HMFObject

{
    id <HAPRelayPairingClientDelegate> _delegate;
    NSURL *_accessoryBagURL;
}

@property (weak) id <HAPRelayPairingClientDelegate> delegate;
@property (nonatomic, readonly) NSURL *accessoryBagURL;

- (void)open;
- (void)close;
- (void)requestControllerIdentifier;
- (void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2;

@end
