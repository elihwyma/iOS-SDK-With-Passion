/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate;

@interface MSDecodeOptions : NSObject

{
    _Bool _verifySignatures;
    _Bool _verifySigners;
    NSArray *_signerPolicies;
    NSDate *_verifyTime;
    struct __SecIdentity *_identity;
    NSData *_key;
    NSData *_LAContext;
}

@property _Bool verifySignatures;
@property _Bool verifySigners;
@property (retain) NSArray *signerPolicies;
@property (retain) NSDate *verifyTime;
@property struct __SecIdentity *identity;
@property (retain) NSData *key;
@property (retain) NSData *LAContext;

- (id)init;
- (void)dealloc;
- (id)initWithDecryptionIdentity:(struct __SecIdentity *)arg1;
- (id)initWithDecryptionKey:(id)arg1;

@end
