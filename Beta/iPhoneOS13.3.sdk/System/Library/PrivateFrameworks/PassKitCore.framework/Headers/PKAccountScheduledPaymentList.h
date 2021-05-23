/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray;

@interface PKAccountScheduledPaymentList : NSObject <Swift>

{
    NSMutableArray *_scheduledPayments;
}

@property (nonatomic, readonly) NSArray *scheduledPayments;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addScheduledPayment:(id)arg1;
- (id)jsonArrayRepresentationWithCertificatesResponse:(id)arg1;
- (id)scheduledPaymentOfFundingSourceType:(long long)arg1;
- (id)initWithScheduledPayment:(id)arg1;

@end
