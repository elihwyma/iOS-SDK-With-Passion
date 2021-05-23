/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKPaymentSetupProductPaymentOption : NSObject <Swift>

{
    unsigned long long _priority;
    long long _cardType;
    long long _supportedProtocols;
}

@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly) long long supportedProtocols;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentOptionDictionary:(id)arg1;

@end
