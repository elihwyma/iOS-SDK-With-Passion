/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSummaryItem.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKShippingMethod : PKPaymentSummaryItem <Swift>

{
    NSString *_identifier;
    NSString *_detail;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *detail;

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)shippingMethodWithProtobuf:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)formattedString;
- (id)protobuf;
- (_Bool)isEqualToShippingMethod:(id)arg1;

@end
