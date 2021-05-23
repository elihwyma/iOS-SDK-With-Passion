/*
 Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface JSVMWrapperCache : NSObject

+ (void)addWrapper:(id)arg1 forJSContextGroupRef:(struct OpaqueJSContextGroup *)arg2;
+ (id)wrapperForJSContextGroupRef:(struct OpaqueJSContextGroup *)arg1;

@end
