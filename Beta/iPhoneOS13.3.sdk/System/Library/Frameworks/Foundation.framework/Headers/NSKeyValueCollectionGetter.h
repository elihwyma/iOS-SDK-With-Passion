/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueNonmutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter

{
    NSKeyValueNonmutatingCollectionMethodSet *_methods;
}

- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 methods:(id)arg3 proxyClass:(Class)arg4;
- (id)methods;

@end
