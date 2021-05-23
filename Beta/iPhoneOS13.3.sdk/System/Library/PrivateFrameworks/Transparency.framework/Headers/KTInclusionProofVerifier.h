/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class KTApplicationPublicKeyStore, NSString;

@interface KTInclusionProofVerifier : NSObject

{
    KTApplicationPublicKeyStore *_keyStore;
    NSString *_application;
}

@property (readonly) KTApplicationPublicKeyStore *keyStore;
@property (retain) NSString *application;

- (id)initWithKeyStore:(id)arg1 application:(id)arg2;
- (_Bool)verifyInclusionProofWithMapEntry:(id)arg1 perAppLogEntry:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id *)arg4;

@end
