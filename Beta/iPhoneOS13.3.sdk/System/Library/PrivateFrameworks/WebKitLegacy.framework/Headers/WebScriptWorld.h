/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject

{
    WebScriptWorldPrivate *_private;
}

+ (id)standardWorld;
+ (id)world;
+ (id)findOrCreateWorld:(struct DOMWrapperWorld *)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext *)arg1;
+ (id)scriptWorldForJavaScriptContext:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithWorld:(Ref_526bc8c1 *)arg1;
- (void)unregisterWorld;

@end
