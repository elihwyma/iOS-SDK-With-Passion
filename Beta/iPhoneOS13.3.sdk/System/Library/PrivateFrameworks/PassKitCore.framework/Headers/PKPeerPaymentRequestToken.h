/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSUUID;

@interface PKPeerPaymentRequestToken : NSObject <Swift>

{
    NSString *_requestToken;
    NSUUID *_deviceScoreIdentifier;
}

@property (copy, nonatomic, readonly) NSString *requestToken;
@property (copy, nonatomic, readonly) NSUUID *deviceScoreIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)informalRequestToken;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2;
- (_Bool)isEqualToPeerPaymentRequestToken:(id)arg1;
- (_Bool)isInformalRequestToken;

@end
