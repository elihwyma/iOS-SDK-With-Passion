/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject

{
    struct __SecIdentity *_cachedAppleIDIdentity;
    NSArray *_cachedCertificateChain;
    NSArray *_cachedSecurityIdentity;
}

- (id)init;
- (void)dealloc;
- (id)_certificateChain;
- (struct __SecIdentity *)_appleIDIdentity;
- (id)securityIdentity;
- (void)_appleIDsDidChange;
- (_Bool)shouldTrustCertificate:(id)arg1;

@end
