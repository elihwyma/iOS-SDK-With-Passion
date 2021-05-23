/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class FPSandboxingURLWrapper, NSURL;

@interface UISUISecurityScopedResource : NSObject

{
    _Bool _hasActiveAccessAssertion;
    NSURL *_url;
    long long _allowedAccess;
    FPSandboxingURLWrapper *_sandboxExtensionWrapper;
    long long _underlyingSandboxAssertionHandle;
}

@property (retain, nonatomic) FPSandboxingURLWrapper *sandboxExtensionWrapper;
@property (nonatomic) long long allowedAccess;
@property (nonatomic) _Bool hasActiveAccessAssertion;
@property (nonatomic) long long underlyingSandboxAssertionHandle;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) _Bool isContentManaged;

+ (_Bool)supportsSecureCoding;
+ (id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)readonlySandboxExtensionClassString;
+ (id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (_Bool)_isValidURLForIssuingSandboxExtension:(id)arg1;
+ (id)_sandboxExtensionClassForAllowedAccess:(long long)arg1;
+ (id)readwriteSandboxExtensionClassString;
+ (id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (id)uniquedSecurityScopedResources:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAbsoluteURL:(id)arg1 sandboxExtensionWrapper:(id)arg2 allowedAccess:(long long)arg3;
- (_Bool)_isEqualAccessToSecurityScopedResource:(id)arg1;
- (void)startAccessing;
- (void)stopAccessing;

@end
