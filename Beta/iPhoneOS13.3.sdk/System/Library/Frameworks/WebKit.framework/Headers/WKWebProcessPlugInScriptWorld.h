/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject

{
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;
}

@property (readonly) struct InjectedBundleScriptWorld *_scriptWorld;
@property (copy, nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)normalWorld;
+ (id)world;

- (void)dealloc;
- (void)clearWrappers;
- (void)makeAllShadowRootsOpen;
- (void)disableOverrideBuiltinsBehavior;

@end
