/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKConnection;

@interface WKWebProcessPlugInController : NSObject

{
    struct ObjectStorage<WebKit::InjectedBundle> _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn>> _principalClassInstance;
}

@property (readonly) struct OpaqueWKBundle *_bundleRef;
@property (readonly) WKConnection *connection;
@property (readonly) id parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id).cxx_construct;
- (void)_setPrincipalClassInstance:(id)arg1;
- (void)extendClassesForParameterCoder:(id)arg1;

@end
