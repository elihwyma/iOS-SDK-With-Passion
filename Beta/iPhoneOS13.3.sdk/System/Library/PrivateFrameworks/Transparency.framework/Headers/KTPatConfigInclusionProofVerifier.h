/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class KTApplicationPublicKeyStore, NSString;

@interface KTPatConfigInclusionProofVerifier : NSObject

{
    KTApplicationPublicKeyStore *_keyStore;
    NSString *_application;
}

@property (readonly) KTApplicationPublicKeyStore *keyStore;
@property (retain) NSString *application;

- (id)initWithKeyStore:(id)arg1 application:(id)arg2;
- (_Bool)verifyPatConfigInclusionProofWithPerAppLogEntry:(id)arg1 topLevelTreeEntry:(id)arg2 error:(id *)arg3;

@end
