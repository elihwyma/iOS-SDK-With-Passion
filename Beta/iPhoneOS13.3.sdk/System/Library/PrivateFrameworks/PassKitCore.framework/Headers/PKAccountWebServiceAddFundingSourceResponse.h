/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccountPaymentFundingSource;

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse

{
    PKAccountPaymentFundingSource *_fundingSource;
}

@property (copy, nonatomic, readonly) PKAccountPaymentFundingSource *fundingSource;

- (id)initWithData:(id)arg1;

@end
