/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface PLSandboxedURL : NSURL

{
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(_Bool)arg3;
- (void)_commonPLSandboxedURLInitialize;

@end
