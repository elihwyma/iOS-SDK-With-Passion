/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/AKToken.h>

@class NSData, NSMutableDictionary, NSString;

@interface AKMasterToken : AKToken

{
    NSMutableDictionary *_properties;
}

@property (nonatomic, readonly) NSData *sessionKey;
@property (nonatomic, readonly) NSData *encryptedSessionKey;
@property (nonatomic, readonly) NSData *externalizedVersion;
@property (nonatomic, readonly) NSString *externalizedVersionString;

+ (id)tokenWithExternalizedVersion:(id)arg1 lifetime:(id)arg2;
+ (id)tokenWithExternalizedVersionString:(id)arg1;

- (id)init;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (void)_setSessionKey:(id)arg1;
- (void)_setEncryptedSessionKey:(id)arg1;
- (_Bool)updateWithHTTPURLResponse:(id)arg1;

@end
