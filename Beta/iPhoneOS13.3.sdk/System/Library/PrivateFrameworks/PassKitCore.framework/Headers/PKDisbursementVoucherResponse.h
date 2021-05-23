/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKDisbursementVoucherResponse : PKPeerPaymentWebServiceResponse

{
    NSString *_voucher;
    NSURL *_redemptionURL;
}

@property (copy, nonatomic, readonly) NSString *voucher;
@property (copy, nonatomic, readonly) NSURL *redemptionURL;

- (id)initWithData:(id)arg1;

@end
