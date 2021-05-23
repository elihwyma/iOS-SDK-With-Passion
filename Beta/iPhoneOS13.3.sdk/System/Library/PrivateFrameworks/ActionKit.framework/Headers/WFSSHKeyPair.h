/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface WFSSHKeyPair : NSObject

{
    NSNumber *_keySize;
    NSString *_comment;
    NSData *_privateKeyData;
    NSData *_publicKeyData;
    Class _format;
}

@property (nonatomic, readonly) NSData *privateKeyData;
@property (nonatomic, readonly) NSData *publicKeyData;
@property (retain, nonatomic) Class format;
@property (nonatomic, readonly) NSNumber *keySize;
@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) NSString *localizedType;
@property (nonatomic, readonly) NSString *localizedDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id *)arg3;
+ (id)keyFormats;
+ (id)sharedKeyPair;
+ (void)setSharedKeyPair:(id)arg1;
+ (id)knownHostFileURL;
+ (id)defaultKeyComment;
+ (_Bool)parsePublicKey:(id)arg1 type:(id *)arg2 data:(id *)arg3 comment:(id *)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publicKey;
- (id)initWithFormat:(Class)arg1 privateKeyData:(id)arg2 publicKeyData:(id)arg3 keySize:(id)arg4 comment:(id)arg5;
- (id)privateKeyPEM;
- (id)publicKeyFingerprintWithType:(unsigned long long)arg1;

@end
