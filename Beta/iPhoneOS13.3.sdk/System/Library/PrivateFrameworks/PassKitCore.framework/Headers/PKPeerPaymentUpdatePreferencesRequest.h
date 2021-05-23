/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest

{
    PKPeerPaymentPreferences *_peerPaymentPreferences;
}

@property (retain, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPeerPaymentPreferences:(id)arg1;

@end
