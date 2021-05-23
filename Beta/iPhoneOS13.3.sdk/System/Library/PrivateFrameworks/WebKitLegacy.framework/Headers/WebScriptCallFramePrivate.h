/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebScriptObject;

__attribute__((visibility("hidden")))
@interface WebScriptCallFramePrivate : NSObject

{
    WebScriptObject *globalObject;
    struct String functionName;
    struct JSValue exceptionValue;
}

- (void)dealloc;
- (id).cxx_construct;

@end
