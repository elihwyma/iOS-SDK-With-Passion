/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString, NSURL, NSXPCConnection, _LSOpenConfiguration;

__attribute__((visibility("hidden")))
@interface _LSAppLinkOpenState : NSObject

{
    NSURL *_URL;
    NSString *_bundleIdentifier;
    _LSOpenConfiguration *_openConfiguration;
    NSXPCConnection *_XPCConnection;
    NSDictionary *_browserState;
}

@property (copy) NSURL *URL;
@property (copy) NSString *bundleIdentifier;
@property (retain) _LSOpenConfiguration *openConfiguration;
@property (readonly) const CDStruct_4c969caf *auditToken;
@property (retain) NSXPCConnection *XPCConnection;
@property (copy) NSDictionary *browserState;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
