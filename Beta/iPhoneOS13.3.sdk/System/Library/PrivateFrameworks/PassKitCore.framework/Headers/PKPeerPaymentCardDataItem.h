/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentPass, PKPeerPaymentQuote;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem

{
    PKPaymentPass *_pass;
}

@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPeerPaymentQuote *quote;

+ (long long)dataType;

- (_Bool)isValidWithError:(id *)arg1;

@end
