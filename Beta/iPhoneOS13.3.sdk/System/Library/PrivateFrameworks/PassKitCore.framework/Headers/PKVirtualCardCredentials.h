/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKVirtualCardCredentials : NSObject <Swift>

{
    NSString *_primaryAccountNumber;
    NSString *_cardSecurityCode;
    long long _cardType;
}

@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *cardSecurityCode;
@property (nonatomic) long long cardType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
