/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString;

@interface PKNFCPayload : NSObject <Swift>

{
    _Bool _requiresAuthentication;
    NSString *_message;
    NSData *_encryptionPublicKeyData;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSData *encryptionPublicKeyData;
@property (nonatomic) _Bool requiresAuthentication;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPKNFCPayload:(id)arg1;
- (id)initWithNFCDictionary:(id)arg1;

@end
