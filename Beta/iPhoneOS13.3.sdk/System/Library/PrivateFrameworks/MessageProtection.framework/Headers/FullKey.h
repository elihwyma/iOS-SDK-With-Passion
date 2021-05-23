/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSString;

@protocol P256PrivateKeyProtocol;

__attribute__((visibility("hidden")))
@interface FullKey : NSObject

{
    int _keyStore;
    id <P256PrivateKeyProtocol> _key;
    NSString *_keychainTag;
}

@property (retain) NSString *keychainTag;
@property (readonly) id <P256PrivateKeyProtocol> key;
@property (readonly) int keyStore;

+ (id)generateNewKeyWithAccess:(id)arg1 forceNoSEP:(_Bool)arg2 error:(id *)arg3;
+ (id)generateNewKeyWithAccess:(id)arg1 error:(id *)arg2;

- (id)description;
- (id)keyIdentifier;
- (id)initWithKey:(id)arg1 error:(id *)arg2;
- (id)initWithKeychainTag:(id)arg1 error:(id *)arg2;
- (id)initWithCTKTokenOID:(id)arg1 error:(id *)arg2;
- (id)initWithProtobufferData:(id)arg1 error:(id *)arg2;
- (id)protobuffer;

@end
