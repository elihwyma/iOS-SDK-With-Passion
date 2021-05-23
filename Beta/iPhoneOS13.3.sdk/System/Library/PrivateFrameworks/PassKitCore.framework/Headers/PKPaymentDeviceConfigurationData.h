/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <Swift>

{
    _Bool _devSigned;
    NSNumber *_primaryJSBLSequenceCounter;
    NSString *_secureElementIdentifier;
}

@property (copy, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (nonatomic) _Bool devSigned;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
