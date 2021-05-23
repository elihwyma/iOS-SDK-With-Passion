/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSEnumerator.h>

@interface LSEnumerator : NSEnumerator

{
    struct atomic_flag _hasFiredErrorHandler;
    CDUnknownBlockType _errorHandler;
}

@property (copy, nonatomic) CDUnknownBlockType errorHandler;

+ (id)new;
+ (id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1;
+ (id)enumeratorForApplicationProxiesOnVolume:(id)arg1 options:(unsigned long long)arg2;
+ (id)enumeratorForPlugInKitProxiesWithOptions:(unsigned long long)arg1;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
+ (id)enumeratorForAllExtensionPoints;
+ (id)_log;

- (id)init;
- (id)nextObject;
- (id)_init;
- (void)_fireErrorHandlerWithError:(id)arg1;

@end
