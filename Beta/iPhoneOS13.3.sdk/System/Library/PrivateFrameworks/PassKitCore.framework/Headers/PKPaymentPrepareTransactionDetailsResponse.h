/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentPrepareTransactionDetailsResponse

{
    NSDecimalNumber *_amount;
    NSString *_secureElementIdentifier;
    NSData *_instructions;
    NSData *_signature;
}

@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, readonly) NSData *instructions;
@property (nonatomic, readonly) NSData *signature;

- (id)initWithData:(id)arg1;

@end
