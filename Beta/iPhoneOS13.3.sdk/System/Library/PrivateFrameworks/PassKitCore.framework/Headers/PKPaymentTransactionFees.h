/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <Swift>

{
    NSSet *_fees;
}

@property (retain, nonatomic) NSSet *fees;

+ (_Bool)supportsSecureCoding;
+ (id)_feesSetFromJsonString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonString;
- (id)jsonArrayRepresentation;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (id)initWithJsonString:(id)arg1;
- (id)initWithFeeItems:(id)arg1;
- (_Bool)isEqualToFees:(id)arg1;

@end
