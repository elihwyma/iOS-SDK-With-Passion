/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData;

@interface PKPaymentDeviceRewrapData : NSObject <Swift>

{
    NSData *_platformData;
    NSData *_platformDataSignature;
}

@property (copy, nonatomic) NSData *platformData;
@property (copy, nonatomic) NSData *platformDataSignature;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
