/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKPaymentSetupFeature : NSObject <Swift>

{
    long long _type;
    long long _state;
    long long _supportedOptions;
}

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) long long supportedOptions;

+ (_Bool)supportsSecureCoding;
+ (id)paymentSetupFeatureWithProtobuf:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end
