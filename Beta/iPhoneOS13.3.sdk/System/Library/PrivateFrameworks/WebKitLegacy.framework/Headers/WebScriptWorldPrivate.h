/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebScriptWorldPrivate : NSObject

{
    struct RefPtr<WebCore::DOMWrapperWorld, WTF::DumbPtrTraits<WebCore::DOMWrapperWorld>> world;
}

- (id).cxx_construct;

@end
