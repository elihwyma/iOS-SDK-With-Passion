/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSData, SecKeyProxy;

__attribute__((visibility("hidden")))
@interface SecKeyProxyTarget : NSObject

{
    id _key;
    NSData *_certificate;
    SecKeyProxy *_publicKeyProxy;
}

@property (nonatomic, readonly) struct __SecKey *key;

- (void)initializeWithReply:(CDUnknownBlockType)arg1;
- (void)getBlockSizeWithReply:(CDUnknownBlockType)arg1;
- (void)getAttributesWithReply:(CDUnknownBlockType)arg1;
- (void)getExternalRepresentationWithReply:(CDUnknownBlockType)arg1;
- (void)getDescriptionWithReply:(CDUnknownBlockType)arg1;
- (void)getAlgorithmIDWithReply:(CDUnknownBlockType)arg1;
- (void)getPublicKey:(CDUnknownBlockType)arg1;
- (void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithKey:(id)arg1 certificate:(id)arg2;

@end
