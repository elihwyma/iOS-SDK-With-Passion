/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueGetter.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueProxyGetter : NSKeyValueGetter

{
    Class _proxyClass;
}

- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 proxyClass:(Class)arg3;
- (Class)proxyClass;

@end
