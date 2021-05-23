/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentPreferencesResponse : PKPeerPaymentWebServiceResponse

{
    PKPeerPaymentPreferences *_peerPaymentPreferences;
}

@property (nonatomic, readonly) PKPeerPaymentPreferences *peerPaymentPreferences;

- (id)initWithData:(id)arg1;

@end
