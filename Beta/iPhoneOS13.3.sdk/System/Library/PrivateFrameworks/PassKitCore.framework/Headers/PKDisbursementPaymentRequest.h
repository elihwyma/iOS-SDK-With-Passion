/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentRequest.h>

@class PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest

{
    PKDisbursementRequest *_disbursementRequest;
    unsigned long long _disbursementSource;
    unsigned long long _disbursementTarget;
}

@property (nonatomic, readonly) PKDisbursementRequest *disbursementRequest;
@property (nonatomic, readonly) unsigned long long disbursementSource;
@property (nonatomic, readonly) unsigned long long disbursementTarget;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisbursementPaymentRequest:(id)arg1;

@end
