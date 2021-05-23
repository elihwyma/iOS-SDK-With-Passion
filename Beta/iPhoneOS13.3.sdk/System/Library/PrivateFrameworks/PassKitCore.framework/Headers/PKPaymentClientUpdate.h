/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSString;

@interface PKPaymentClientUpdate : NSObject <Swift>

{
    NSArray *_paymentSummaryItems;
    NSArray *_shippingMethods;
    long long _status;
    NSString *_selectedAID;
}

@property (nonatomic, readonly) NSArray *paymentSummaryItems;
@property (nonatomic, readonly) NSArray *shippingMethods;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString *selectedAID;

+ (_Bool)supportsSecureCoding;
+ (id)paymentUpdateResponseWithProtobuf:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;
- (id)initWithPaymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 status:(long long)arg3 selectedAID:(id)arg4;

@end
