/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSXPCConnection.h>

@class FPXPCSanitizer;

@interface NSXPCConnection (Sanitization)

@property (nonatomic, readonly) FPXPCSanitizer *fp_sanitizer;

- (id)fp_bundleIdentifier;
- (_Bool)fp_hasSandboxAccessToFile:(id)arg1;
- (_Bool)fp_hasSandboxAccessToFile:(id)arg1 logLevel:(unsigned long long)arg2;
- (_Bool)fp_hasSandboxAccessToFile:(id)arg1 accessType:(const char *)arg2 logLevel:(unsigned long long)arg3;
- (_Bool)fp_hasOneOfEntitlements:(id)arg1 logLevel:(unsigned long long)arg2;
- (id)fp_valueForEntitlement:(id)arg1;
- (_Bool)fp_isNonSandboxedConnection;
- (_Bool)fp_hasOneOfEntitlements:(id)arg1;

@end
