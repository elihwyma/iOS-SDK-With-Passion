/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSData;

@interface IDSEndpointTransparencyState : NSObject <Swift>

{
    NSData *_pushToken;
    long long _verificationState;
}

@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly) long long verificationState;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToEndpointTransparencyState:(id)arg1;
- (id)initWithPushToken:(id)arg1 verificationState:(long long)arg2;

@end
