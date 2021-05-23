/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray;

@interface PKPaymentRequestUpdate : NSObject <Swift>

{
    long long _status;
    NSArray *_paymentSummaryItems;
    NSArray *_contentItems;
}

@property (copy, nonatomic) NSArray *contentItems;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *paymentSummaryItems;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;

@end
