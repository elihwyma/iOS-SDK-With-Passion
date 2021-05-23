/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy

{
    NSArray *_overrides;
    CDUnknownBlockType _noSuitableModuleFoundHandler;
    unsigned long long _currentIndex;
    NSInvocation *_invocation;
}

+ (void)addOverride:(id)arg1;
+ (void)removeOverride:(id)arg1;
+ (id)newIteratorWithNotFoundHandler:(CDUnknownBlockType)arg1;
+ (id)allOverrides;
+ (id)overrideDirectoryURL;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finish;
- (id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(CDUnknownBlockType)arg2;
- (void)callNextOverrides;

@end
