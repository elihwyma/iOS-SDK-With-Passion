/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _NSItemProviderSandboxedResource : NSObject <Swift>

{
    _Bool _accessingSecurityScopedResource;
    NSURL *_resourceURL;
    NSData *_sandboxExtensionToken;
}

@property (copy, nonatomic) NSData *sandboxExtensionToken;
@property (copy, nonatomic) NSURL *resourceURL;
@property (nonatomic, getter=isAccessingSecurityScopedResource) _Bool accessingSecurityScopedResource;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 error:(id *)arg3;
- (id)resolveURLAndReturnError:(id *)arg1;

@end
