/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject

{
    struct __SecCertificate *_encryptionCertificate;
}

@property (readonly) struct __SecCertificate *encryptionCertificate;

- (void)dealloc;
- (id)initWithIdentity:(struct __SecIdentity *)arg1;
- (id)initWithCertificate:(struct __SecCertificate *)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end
